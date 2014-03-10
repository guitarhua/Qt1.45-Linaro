/****************************************************************************
** $Id: patterns.cpp,v 2.2 1998/05/21 19:24:54 agulbra Exp $
**
** Copyright (C) 1992-1998 Troll Tech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

/****************************************************************************
 *
 * Patterns for life. Adapted from xlock; original copyright notice below.
 *
 * Copyright (c) 1988-91 by Patrick J. Naughton.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appear in all copies and that
 * both that copyright notice and this permission notice appear in
 * supporting documentation.
 *
 * This file is provided AS IS with no warranties of any kind.	The author
 * shall have no liability with respect to the infringement of copyrights,
 * trade secrets or any patents by this file or any part thereof.  In no
 * event will the author be liable for any lost revenue or profits or
 * other special, indirect and consequential damages.
 *****************************************************************************/

//#include <qglobal.h>


#define NUMPTS	63
/* Patterns have < NUMPTS pts (and should have a size of <= 32x32,
   the Gun is an exception) */
static int  patterns[][2 * NUMPTS + 1] = {
    {				/* GLIDER GUN */
	6, -4,
	5, -3, 6, -3,
	-6, -2, -5, -2, 8, -2, 9, -2, 16, -2,
	-7, -1, 8, -1, 9, -1, 10, -1, 16, -1, 17, -1,
	-18, 0, -17, 0, -8, 0, 8, 0, 9, 1,
	-17, 1, -8, 1, 5, 1, 6, 1,
	-8, 2, 6, 2,
	-7, 3,
	-6, 4, -5, 4,
	127
    },
    {				/* FIGURE EIGHT */
	-3, -3, -2, -3, -1, -3,
	-3, -2, -2, -2, -1, -2,
	-3, -1, -2, -1, -1, -1,
	0, 0, 1, 0, 2, 0,
	0, 1, 1, 1, 2, 1,
	0, 2, 1, 2, 2, 2,
	127
    },
    {				/* PULSAR */
	-2, -1, -1, -1, 0, -1, 1, -1, 2, -1,
	-2, 0, 2, 0,
	127
    },
    {				/* BARBER POLE P2 */
	-6, -6, -5, -6,
	-6, -5, -4, -5,
	-4, -3, -2, -3,
	-2, -1, 0, -1,
	0, 1, 2, 1,
	2, 3, 4, 3,
	5, 4,
	4, 5, 5, 5,
	127
    },
    {				/* ACHIM P5 */
	-6, -6, -5, -6,
	-6, -5,
	-4, -4,
	-4, -3, -2, -3,
	-2, -1, 0, -1,
	0, 1, 2, 1,
	2, 3, 3, 3,
	5, 4,
	4, 5, 5, 5,
	127
    },
    {				/* HERTZ P4 */
	-2, -5, -1, -5,
	-2, -4, -1, -4,
	-7, -2, -6, -2, -2, -2, -1, -2, 0, -2, 1, -2, 5, -2, 6, -2,
	-7, -1, -5, -1, -3, -1, 2, -1, 4, -1, 6, -1,
	-5, 0, -3, 0, -2, 0, 2, 0, 4, 0,
	-7, 1, -5, 1, -3, 1, 2, 1, 4, 1, 6, 1,
	-7, 2, -6, 2, -2, 2, -1, 2, 0, 2, 1, 2, 5, 2, 6, 2,
	-2, 4, -1, 4,
	-2, 5, -1, 5,
	127
    },
    {				/* TUMBLER */
	-2, -3, -1, -3, 1, -3, 2, -3,
	-2, -2, -1, -2, 1, -2, 2, -2,
	-1, -1, 1, -1,
	-3, 0, -1, 0, 1, 0, 3, 0,
	-3, 1, -1, 1, 1, 1, 3, 1,
	-3, 2, -2, 2, 2, 2, 3, 2,
	127
    },
    {				/* PULSE1 P4*/
	0, -3, 1, -3,
	-2, -2, 0, -2,
	-3, -1, 3, -1,
	-2, 0, 2, 0, 3, 0,
	0, 2, 2, 2,
	1, 3,
	127
    },
    {				/* SHINING FLOWER P5 */
	-1, -4, 0, -4,
	-2, -3, 1, -3,
	-3, -2, 2, -2,
	-4, -1, 3, -1,
	-4, 0, 3, 0,
	-3, 1, 2, 1,
	-2, 2, 1, 2,
	-1, 3, 0, 3,
	127
    },
    {				/* PULSE2 P6 */
	0, -4, 1, -4,
	-4, -3, -3, -3, -1, -3,
	-4, -2, -3, -2, 0, -2, 3, -2,
	1, -1, 3, -1,
	2, 0,
	1, 2, 2, 2,
	1, 3, 2, 3,
	127
    },
    {				/* PINWHEEL, CLOCK P4 */
	-2, -6, -1, -6,
	-2, -5, -1, -5,
	-2, -3, -1, -3, 0, -3, 1, -3,
	-3, -2, -1, -2, 2, -2, 4, -2, 5, -2,
	-3, -1, 1, -1, 2, -1, 4, -1, 5, -1,
	-6, 0, -5, 0, -3, 0, 0, 0, 2, 0,
	-6, 1, -5, 1, -3, 1, 2, 1,
	-2, 2, -1, 2, 0, 2, 1, 2,
	0, 4, 1, 4,
	0, 5, 1, 5,
	127
    },
    {				/* PENTADECATHOLON */
	-5, 0, -4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0,
	127
    },
    {				/* PISTON */
	1, -3, 2, -3,
	0, -2,
	-10, -1, -1, -1,
	-11, 0, -10, 0, -1, 0,	9, 0, 10, 0,
	-1, 1, 9, 1,
	0, 2,
	1, 3, 2, 3,
	127
    },
    {				/* PISTON2 */
       -3, -5,
       -14, -4, -13, -4, -4, -4, -3, -4, 13, -4, 14, -4,
       -14, -3, -13, -3, -5, -3, -4, -3, 13, -3, 14, -3,
       -4, -2, -3, -2, 0, -2, 1, -2,
       -4,  2, -3, 2, 0, 2, 1, 2,
       -14, 3, -13, 3, -5, 3, -4, 3, 13, 3, 14, 3,
       -14, 4, -13, 4, -4, 4, -3, 4, 13, 4, 14, 4,
       -3, 5,
	127
    },
    {				/* SWITCH ENGINE */
	-12, -3, -10, -3,
	-13, -2,
	-12, -1, -9, -1,
	-10, 0, -9,  0, -8,  0,
	13, 2, 14,  2,
	13, 3,
	127
    },
    {				/* GEARS (gear, flywheel, blinker) */
	-1, -4,
	-1, -3, 1, -3,
	-3, -2,
	2, -1, 3, -1,
	-4, 0, -3, 0,
	2, 1,
	-2, 2, 0, 2,
	0, 3,

	5, 3,
	3, 4, 4, 4,
	5, 5, 6, 5,
	4, 6,

	8, 0,
	8, 1,
	8, 2,
	127
    },
    {				/* TURBINE8 */
	-4, -4, -3, -4, -2, -4, -1, -4, 0, -4, 1, -4, 3, -4, 4, -4,
	-4, -3, -3, -3, -2, -3, -1, -3, 0, -3, 1, -3, 3, -3, 4, -3,
	3, -2, 4, -2,
	-4, -1, -3, -1, 3, -1, 4, -1,
	-4, 0, -3, 0, 3, 0, 4, 0,
	-4, 1, -3, 1, 3, 1, 4, 1,
	-4, 2, -3, 2,
	-4, 3, -3, 3, -1, 3, 0, 3, 1, 3, 2, 3, 3, 3, 4, 3,
	-4, 4, -3, 4, -1, 4, 0, 4, 1, 4, 2, 4, 3, 4, 4, 4,
	127
    },
    {				 /* P16 */
	-3, -6, 1, -6, 2, -6,
	-3, -5, 0, -5, 3, -5,
	3, -4,
	-5, -3, -4, -3, 1, -3, 2, -3, 5, -3, 6, -3,
	-6, -2, -3, -2,
	-6, -1, -3, -1,
	-5, 0, 5, 0,
	3, 1, 6, 1,
	3, 2, 6, 2,
	-6, 3, -5, 3, -2, 3, -1, 3, 4, 3, 5, 3,
	-3, 4,
	-3, 5, 0, 5, 3, 5,
	-2, 6, -1, 6, 3, 6,
	127
    },
    {				/* PUFFER */
	1, -9,
	2, -8,
	-2, -7, 2, -7,
	-1, -6, 0, -6, 1, -6, 2, -6,
	-2, -2,
	-1, -1, 0, -1,
	0, 0,
	0, 1,
	-1, 2,
	1, 5,
	2, 6,
	-2, 7, 2, 7,
	-1, 8, 0, 8, 1, 8, 2, 8,
	127
    },
    {				/* ESCORT */
	3, -8,
	4, -7,
	-2, -6, 4, -6,
	-1, -5, 0, -5, 1, -5, 2, -5, 3, -5, 4, -5,
	-5, -1, -4, -1, -3, -1, -2, -1, -1, -1, 0, -1,
	1, -1, 2, -1, 3, -1, 4, -1, 5, -1, 6, -1,
	-6, 0, 6, 0,
	6, 1,
	5, 2,
	3, 4,
	4, 5,
	-2, 6, 4, 6,
	-1, 7, 0, 7, 1, 7, 2, 7, 3, 7, 4, 7,
	127
    },
    {				/* DART SPEED 1/3 */
	3, -7,
	2, -6, 4, -6,
	1, -5, 2, -5,
	4, -4,
	0, -3, 4, -3,
	-3, -2, 0, -2,
	-4, -1, -2, -1, 1, -1, 2, -1, 3, -1, 4, -1,
	-5, 0, -2, 0,
	-4, 1, -2, 1, 1, 1, 2, 1, 3, 1, 4, 1,
	-3, 2, 0, 2,
	0, 3, 4, 3,
	4, 4,
	1, 5, 2, 5,
	2, 6, 4, 6,
	3, 7,
	127
    },
    {				/* PERIOD 4 SPEED 1/2 */
	-3, -5,
	-4, -4, -3, -4, -2, -4, -1, -4, 0, -4,
	-5, -3, -4, -3, 0, -3, 1, -3, 3, -3,
	-4, -2, 4, -2,
	-3, -1, -2, -1, 1, -1, 3, -1,
	-3, 1, -2, 1, 1, 1, 3, 1,
	-4, 2, 4, 2,
	-5, 3, -4, 3, 0, 3, 1, 3, 3, 3,
	-4, 4, -3, 4, -2, 4, -1, 4, 0, 4,
	-3, 5,
	127
    },
    {				/* ANOTHER PERIOD 4 SPEED 1/2 */
	-4, -7, -3, -7, -1, -7, 0, -7, 1, -7, 2, -7, 3, -7, 4, -7,
	-5, -6, -4, -6, -3, -6, -2, -6, 5, -6,
	-6, -5, -5, -5,
	-5, -4, 5, -4,
	-4, -3, -3, -3, -2, -3, 0, -3,
	-2, -2,
	-2, -1,
	-1, 0,
	-2, 1,
	-2, 2,
	-4, 3, -3, 3, -2, 3, 0, 3,
	-5, 4, 5, 4,
	-6, 5, -5, 5,
	-5, 6, -4, 6, -3, 6, -2, 6, 5, 6,
	-4, 7, -3, 7, -1, 7, 0, 7, 1, 7, 2, 7, 3, 7, 4, 7,
	127
    },
    {				/* SMALLEST KNOWN PERIOD 3 SPACESHIP SPEED 1/3 */
	0, -8,
	-1, -7, 1, -7,
	-1, -6, 1, -6,
	-1, -5,
	-2, -3, -1, -3,
	-1, -2, 1, -2,
	-2, -1, 0, -1,
	-2, 0, -1, 0, 0, 0,
	-1, 2, 1, 2,
	-1, 3, 0, 3,
	0, 4,
	0, 5, 2, 5,
	0, 6, 2, 6,
	1, 7,
	127
    },
    {				/* TURTLE SPEED 1/3 */
	-4, -5, -3, -5, -2, -5, 6, -5,
	-4, -4, -3, -4, 0, -4, 2, -4, 3, -4, 5, -4, 6, -4,
	-2, -3, -1, -3, 0, -3, 5, -3,
	-4, -2, -1, -2, 1, -2, 5, -2,
	-5, -1, 0, -1, 5, -1,
	-5, 0, 0, 0, 5, 0,
	-4, 1, -1, 1, 1, 1, 5, 1,
	-2, 2, -1, 2, 0, 2, 5, 2,
	-4, 3, -3, 3, 0, 3, 2, 3, 3, 3, 5, 3, 6, 3,
	-4, 4, -3, 4, -2, 4, 6, 4,
	127
    },
    {				/* SMALLEST KNOWN PERIOD 5 SPEED 2/5 */
	1, -7, 3, -7,
	-2, -6, 3, -6,
	-3, -5, -2, -5, -1, -5, 4, -5,
	-4, -4, -2, -4,
	-5, -3, -4, -3, -1, -3, 0, -3, 5, -3,
	-4, -2, -3, -2, 0, -2, 1, -2, 2, -2, 3, -2, 4, -2,
	-4, 2, -3, 2, 0, 2, 1, 2, 2, 2, 3, 2, 4, 2,
	-5, 3, -4, 3, -1, 3, 0, 3, 5, 3,
	-4, 4, -2, 4,
	-3, 5, -2, 5, -1, 5, 4, 5,
	-2, 6, 3, 6,
	1, 7, 3, 7,
	127
    },
    {				/* SYM PUFFER */
	1, -4, 2, -4, 3, -4, 4, -4,
	0, -3, 4, -3,
	4, -2,
	-4, -1, -3, -1, 0, -1, 3, -1,
	-4, 0, -3, 0, -2, 0,
	-4, 1, -3, 1, 0, 1, 3, 1,
	4, 2,
	0, 3, 4, 3,
	1, 4, 2, 4, 3, 4, 4, 4,
	127
    },
    {				/* ], NEAR SHIP, PI HEPTOMINO */
	-2, -1, -1, -1, 0, -1,
	1, 0,
	-2, 1, -1, 1, 0, 1,
	127
    },
    {				/* R PENTOMINO */
	0, -1, 1, -1,
	-1, 0, 0, 0,
	0, 1,
	127
    }
};

#define NPATS	(sizeof patterns / sizeof patterns[0])
