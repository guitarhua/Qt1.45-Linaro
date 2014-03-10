/****************************************************************************
** $Id: qasyncimageio.h,v 1.18.2.2 1999/02/12 17:26:17 warwick Exp $
**
**		      ***   INTERNAL HEADER FILE   ***
**
**		This file is NOT a part of the Qt interface!
**
** Definition of asynchronous image/movie loading classes
**
** Created : 970617
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

#ifndef QASYNCIMAGEIO_H
#define QASYNCIMAGEIO_H

#ifndef QT_H
#include "qimage.h"
#endif // QT_H



class Q_EXPORT QImageConsumer {
public:
    virtual void changed(const QRect&)=0;
    virtual void end()=0;
    virtual void frameDone()=0;
    virtual void setLooping(int)=0;
    virtual void setFramePeriod(int)=0;
    virtual void setSize(int, int)=0;
};

class Q_EXPORT QImageFormat {
public:
    virtual ~QImageFormat();
    virtual int decode(QImage& img, QImageConsumer* consumer,
	    const uchar* buffer, int length)=0;
};

class Q_EXPORT QImageFormatType {
public:
    virtual ~QImageFormatType();
    virtual QImageFormat* decoderFor(const uchar* buffer, int length)=0;
    virtual const char* formatName() const=0;
protected:
    QImageFormatType();
};

struct QImageDecoderPrivate;

class Q_EXPORT QImageDecoder {
public:
    QImageDecoder(QImageConsumer* c);
    ~QImageDecoder();

    const QImage& image() { return img; }
    int decode(const uchar* buffer, int length);

    static const char* formatName(const uchar* buffer, int length);

    static QStrList inputFormats();
    static void registerDecoderFactory(QImageFormatType*);
    static void unregisterDecoderFactory(QImageFormatType*);

private:
    QImageFormat* actual_decoder;
    QImageConsumer* consumer;
    QImage img;
    QImageDecoderPrivate *d;
};


#endif // QASYNCIMAGEIO_H
