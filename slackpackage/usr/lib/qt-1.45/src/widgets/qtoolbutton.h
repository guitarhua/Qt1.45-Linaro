/****************************************************************************
** $Id: qtoolbutton.h,v 2.6.2.1 1998/08/19 16:02:44 agulbra Exp $
**
** Definition of a buttom customized for tool bar use
**
** Created : 979899
**
** Copyright (C) 1992-1999 Troll Tech AS.  All rights reserved.
**
** This file is part of Qt Free Edition, version 1.45.
**
** See the file LICENSE included in the distribution for the usage
** and distribution terms, or http://www.troll.no/free-license.html.
**
** IMPORTANT NOTE: You may NOT copy this file or any part of it into
** your own programs or libraries.
**
** Please see http://www.troll.no/pricing.html for information about 
** Qt Professional Edition, which is this same library but with a
** license which allows creation of commercial/proprietary software.
**
*****************************************************************************/

#ifndef QTOOLBUTTON_H
#define QTOOLBUTTON_H

#ifndef QT_H
#include "qbutton.h"
#include "qstring.h"
#include "qpixmap.h"
#include "qiconset.h"
#endif // QT_H


class QToolButtonPrivate;

class QToolBar;


class Q_EXPORT QToolButton: public QButton
{
    Q_OBJECT
public:
    QToolButton( QWidget * parent = 0, const char * name = 0 );
    QToolButton( const QPixmap & pm, const char * textLabel,
		 const char * grouptext,
		 QObject * receiver, const char * slot,
		 QToolBar * parent, const char * name = 0 );
    QToolButton( QIconSet s, const char * textLabel,
		 const char * grouptext,
		 QObject * receiver, const char * slot,
		 QToolBar * parent, const char * name = 0 );
    ~QToolButton();

    QSize sizeHint() const;

    void setIconSet( const QIconSet & );
    QIconSet iconSet() const;

    bool usesBigPixmap() const { return ubp; }
    bool usesTextLabel() const { return utl; }
    const char * textLabel() const { return tl; }

public slots:
    virtual void setUsesBigPixmap( bool enable );
    virtual void setUsesTextLabel( bool enable );
    virtual void setTextLabel( const char *, bool = TRUE );

    void setToggleButton( bool enable );

    void setOn( bool enable );
    void toggle();

protected:
    void drawButton( QPainter * );
    void drawButtonLabel( QPainter * );

    void enterEvent( QEvent * );
    void leaveEvent( QEvent * );

    bool uses3D() const;

private:
    void init();

    QPixmap bp;
    int bpID;
    QPixmap sp;
    int spID;

    QString tl;

    QToolButtonPrivate * d;
    QIconSet * s;

    uint utl: 1;
    uint ubp: 1;
};


#endif
