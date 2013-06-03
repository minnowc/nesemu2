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
#include "mappers/chips/mmc3.h"

static u8 prg[4],chr,mirror;
static u8 r5ff1;

static void sync()
{
	mem_setprg8(0x8,prg[0]);
	mem_setprg8(0xA,prg[1]);
	mem_setprg8(0xC,prg[2]);
	mem_setprg8(0xE,prg[3]);
	mem_setchr8(0,chr);
	mem_setmirroring(mirror);
	mem_setmirroring(MIRROR_H);
}

static void write_5000(u32 addr,u8 data)
{
	log_printf("bmc-fk23c.c:  write_5000:  $%04X = $%02X\n",addr,data);
}

static void write(u32 addr,u8 data)
{
	log_printf("bmc-fk23c.c:  write:  $%04X = $%02X\n",addr,data);
}

static void reset(int hard)
{
	int i;

	mem_setwritefunc(5,write_5000);
	for(i=8;i<16;i++)
		mem_setwritefunc(i,write);
	prg[0] = 0;
	prg[1] = 1;
	prg[2] = 0x7E;
	prg[3] = 0x7F;
	chr = 0;
	mirror = nes->cart->mirroring;
	sync();
}

static void state(int mode,u8 *data)
{
//	STATE_ARRAY_U8(reg,8);
}

MAPPER(B_BMC_FK23C,reset,0,0,state);
