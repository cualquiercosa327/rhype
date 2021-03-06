/*
 * Copyright (C) 2005 Jimi Xenidis <jimix@watson.ibm.com>, IBM Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * $Id$
 *
 */

#ifndef _X86_MAILBOX_H_
#define _X86_MAILBOX_H_

#include <types.h>

/* same as platform info but x86 specific */
struct mailbox {
	uval32	IF;		/* interrupt flag */
	uval32 	irq_masked;	/* irq mask */
	uval32 	irq_pending;	/* irq pending mask */
	uval64  ticks;		/* ticks value at dispatch */
};

#endif /* _X86_MAILBOX_H_ */
