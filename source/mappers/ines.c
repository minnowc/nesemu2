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

#include "mapperinc.h"

struct ines_boardid_s {
	int num;
	int boardid;
};

#define INES_BOARD_START()		static struct ines_boardid_s boards[] = {
#define INES_BOARD_END()		{0,-1}};
#define INES_BOARD(n,b)			{n,b},

INES_BOARD_START()
	INES_BOARD(0,		B_NINTENDO_NROM)
	INES_BOARD(1,		B_NINTENDO_SxROM)
	INES_BOARD(2,		B_NINTENDO_UxROM)
	INES_BOARD(3,		B_NINTENDO_CNROM)
	INES_BOARD(4,		B_NINTENDO_TxROM)
	INES_BOARD(5,		B_NINTENDO_ExROM)
	INES_BOARD(7,		B_NINTENDO_AxROM)
	INES_BOARD(9,		B_NINTENDO_PxROM)
	INES_BOARD(10,		B_NINTENDO_FxROM)
	INES_BOARD(11,		B_COLORDREAMS)
	INES_BOARD(12,		B_REXSOFT_DBZ5)
	INES_BOARD(13,		B_NINTENDO_CPROM)
	INES_BOARD(15,		B_BMC_CONTRA_FUNCTION_16)
	INES_BOARD(18,		B_JALECO_SS88006)
	INES_BOARD(19,		B_NAMCOT_163)
	INES_BOARD(21,		B_KONAMI_VRC4A)
	INES_BOARD(22,		B_KONAMI_VRC2A)
	INES_BOARD(23,		B_KONAMI_VRC2B)
	INES_BOARD(24,		B_KONAMI_VRC6A)
	INES_BOARD(25,		B_KONAMI_VRC4B)
	INES_BOARD(26,		B_KONAMI_VRC6B)
	INES_BOARD(28,		B_TEPPLES)
	INES_BOARD(33,		B_TAITO_TC0190FMC)
	INES_BOARD(34,		B_NINTENDO_BxROM)
	INES_BOARD(36,		B_TXC_STRIKEWOLF)
	INES_BOARD(37,		B_NINTENDO_PAL_ZZ)
	INES_BOARD(38,		B_UNL_BITCORP)
	INES_BOARD(41,		B_NTDEC_CALTRON6IN1)
	INES_BOARD(42,		B_BTL_BIOMIRACLEA)
	INES_BOARD(44,		B_BMC_BIG7IN1)
	INES_BOARD(45,		B_BMC_SUPERHIKXIN1)
	INES_BOARD(46,		B_RUMBLESTATION)
	INES_BOARD(47,		B_NINTENDO_QJ)
	INES_BOARD(48,		B_TAITO_TC0190FMC_PAL16R4)
	INES_BOARD(49,		B_BMC_SUPERHIK4IN1)
	INES_BOARD(50,		B_BTL_SMB2B)
	INES_BOARD(51,		B_BMC_BALLGAMES11IN1)
	INES_BOARD(52,		B_BMC_MARIO7IN1)
	INES_BOARD(56,		B_KAISER_KS202)
	INES_BOARD(57,		B_BMC_SUPERGK)
	INES_BOARD(60,		B_BMC_RESET4IN1)
	INES_BOARD(62,		B_BMC_SUPER700IN1)
	INES_BOARD(64,		B_TENGEN_RAMBO_1)
	INES_BOARD(65,		B_IREM_H3001)
	INES_BOARD(66,		B_NINTENDO_GxROM_MxROM)
	INES_BOARD(67,		B_SUNSOFT_3)
	INES_BOARD(68,		B_SUNSOFT_4)
	INES_BOARD(69,		B_SUNSOFT_5B)
	INES_BOARD(71,		B_CAMERICA_BF9093)
	INES_BOARD(73,		B_KONAMI_VRC3)
	INES_BOARD(75,		B_KONAMI_VRC1)
	INES_BOARD(78,		B_JALECO_JF16)
	INES_BOARD(79,		B_AVE_NINA_006)
	INES_BOARD(80,		B_TAITO_X1_005)
	INES_BOARD(82,		B_TAITO_X1_017)
	INES_BOARD(85,		B_KONAMI_VRC7A)
	INES_BOARD(88,		B_NAMCOT_34x3)
	INES_BOARD(89,		B_SUNSOFT_2)
	INES_BOARD(93,		B_SUNSOFT_2)
	INES_BOARD(94,		B_NINTENDO_UN1ROM)
	INES_BOARD(95,		B_NAMCOT_3425)
	INES_BOARD(97,		B_IREM_TAM_S1)
	INES_BOARD(101,	B_UNL_UY)
	INES_BOARD(104,	B_CAMERICA_GOLDENFIVE)
	INES_BOARD(105,	B_NINTENDO_EVENT)
	INES_BOARD(107,	B_MAGICSERIES)
	INES_BOARD(112,	B_NTDEC_ASDER)
	INES_BOARD(113,	B_HES)
	INES_BOARD(114,	B_UNL_SUPERLIONKING)
	INES_BOARD(115,	B_KASING)
	INES_BOARD(116,	B_REXSOFT_SL1632)
	INES_BOARD(119,	B_NINTENDO_TQROM)
//	INES_BOARD(123,	B_UNL_H2288)
	INES_BOARD(132,	B_TXC_22211A)
	INES_BOARD(133,	B_SA_72008)		//??
	INES_BOARD(137,	B_SACHEN_8259D)
	INES_BOARD(138,	B_SACHEN_8259B)
	INES_BOARD(139,	B_SACHEN_8259C)
	INES_BOARD(140,	B_JALECO_JF11)
	INES_BOARD(141,	B_SACHEN_8259A)
	INES_BOARD(143,	B_SACHEN_TCA01)
	INES_BOARD(144,	B_DEATHRACE)
	INES_BOARD(145,	B_SA_72007)
	INES_BOARD(146,	B_SA_0161M)
	INES_BOARD(147,	B_SACHEN_TCU01)
	INES_BOARD(148,	B_SA_0037)
	INES_BOARD(149,	B_SA_0036)
//	INES_BOARD(150,	B_SACHEN_74LS374N)
//	INES_BOARD(150,	B_SA_72008)
	INES_BOARD(154,	B_NAMCOT_3453)
	INES_BOARD(155,	B_NINTENDO_SxROM_MMC1A)
	INES_BOARD(156,	B_OPENCORP)
	INES_BOARD(163,	B_NANJING)
	INES_BOARD(164,	B_WAIXING_FFV)
	INES_BOARD(165,	B_WAIXING_SH2)
	INES_BOARD(168,	B_UNL_RACERMATE)
	INES_BOARD(172,	B_TXC_22211B)
	INES_BOARD(173,	B_TXC_22211C)
	INES_BOARD(180,	B_NINTENDO_UNROM_74HC08)
	INES_BOARD(182,	B_HOSENKAN)
	INES_BOARD(184,	B_SUNSOFT_1)
	INES_BOARD(185,	B_NINTENDO_CNROM_CP)
	INES_BOARD(189,	B_TXC_TW)
	INES_BOARD(193,	B_NTDEC_TC112)
	INES_BOARD(194,	B_WAIXING_TYPE_D)
	INES_BOARD(200,	B_BMC_36IN1)
	INES_BOARD(201,	B_BMC_21IN1)
	INES_BOARD(202,	B_BMC_150IN1)
	INES_BOARD(203,	B_BMC_35IN1)
	INES_BOARD(205,	B_BMC_15IN1)
	INES_BOARD(206,	B_NINTENDO_DxROM)
	INES_BOARD(207,	B_TAITO_X1_005A)
	INES_BOARD(218,	B_MAGICFLOOR)
	INES_BOARD(225,	B_BMC_72IN1)
	INES_BOARD(226,	B_BMC_76IN1)
	INES_BOARD(227,	B_BMC_1200IN1)
	INES_BOARD(228,	B_ACTIVE)
	INES_BOARD(229,	B_BMC_31IN1)
	INES_BOARD(230,	B_BMC_22IN1)
	INES_BOARD(231,	B_BMC_20IN1)
	INES_BOARD(232,	B_CAMERICA_BF9096)
	INES_BOARD(233,	B_BMC_SUPER42IN1)
	INES_BOARD(234,	B_AVE_D1012)
	INES_BOARD(235,	B_BMC_GOLDENGAME260IN1)
	INES_BOARD(240,	B_CNE_SHLZ)
	INES_BOARD(241,	B_TXC_MXMDHTWO)
	INES_BOARD(242,	B_WAIXING_ZS)
	INES_BOARD(243,	B_SACHEN_74LS374N)
	INES_BOARD(244,	B_CNE_DECATHLON)
	INES_BOARD(245,	B_WAIXING_TYPE_H)
	INES_BOARD(246,	B_CNE_FSB)
	INES_BOARD(250,	B_NITRA)
	INES_BOARD(252,	B_WAIXING_SGZ)
	INES_BOARD(254,	B_BTL_PIKACHUY2K)
INES_BOARD_END()

int mapper_get_mapperid_ines(int num)
{
	int i;

	for(i=0;boards[i].boardid != -1;i++) {
		if(num == boards[i].num)
			return(boards[i].boardid);
	}
	return(B_UNSUPPORTED);
}
