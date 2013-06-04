/***************************************************************************
 *   Copyright (C) 2013 by James Holodnak                                  *
 *   jamesholodnak@gmail.com                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "mappers/mapperinc.h"
#include "mappers/chips/latch.h"

static void sync()
{
	mem_setprg32(8,0);
	mem_setchr4(0,latch_data & 7);
	mem_setchr4(4,((latch_data >> 4) & 7) | 4);
}

static void reset(int hard)
{
	int i;

	latch_reset(sync,hard);
	for(i=8;i<16;i++)
		mem_setwritefunc(i,0);
	mem_setwritefunc(6,latch_write);
	mem_setwritefunc(7,latch_write);
}

MAPPER(B_SUNSOFT_1,reset,0,0,latch_state);
