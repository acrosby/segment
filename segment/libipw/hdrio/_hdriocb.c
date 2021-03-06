/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that: (1) source distributions retain this entire copyright
 * notice and comment, and (2) distributions including binaries display
 * the following acknowledgement:  ``This product includes software
 * developed by the Computer Systems Laboratory, University of
 * California, Santa Barbara and its contributors'' in the documentation
 * or other materials provided with the distribution and in all
 * advertising materials mentioning features or use of this software.
 *
 * Neither the name of the University nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* LINTLIBRARY */

#include "ipw.h"

#include "_hdrio.h"

/*
** NAME
**	_hdriocb -- array of image header I/O control blocks
**
** SYNOPSIS
**	#include "_hdrio.h"
**
**	extern HDRIO_T	_hdriocb[];
**
** DESCRIPTION
**	_hdriocb is an array of image header I/O control blocks, indexed by
**	the corresponding UNIX file descriptor.
**
** RESTRICTIONS
**	The number of image header I/O control blocks is set at compile time
**	to {OPEN_MAX}.  This imposes a hard limit on the number of image file
**	descriptors a process may have open at once.
**
** WARNINGS
**
** APPLICATION USAGE
**	_hdriocb should only be accessed by other hdrio routines.
**
** FUTURE DIRECTIONS
**	The control blocks should be dynamically allocated.
**
** BUGS
*/

HDRIO_T         _hdriocb[OPEN_MAX] = {0};

#ifndef	lint
static char     rcsid[] = "$Header: /local/share/pkg/ipw/src/lib/libipw/hdrio/RCS/_hdriocb.c,v 1.3 90/11/11 17:15:39 frew Exp $";

#endif
