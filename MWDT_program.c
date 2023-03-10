/************************************/
/*	Author	  :	ESLAM_HOSNY			*/
/*	SWC		  : WDT					*/
/*  Layer	  : MCAL				*/
/*	Version	  :	1.0		  			*/
/*	Date	  :	March 1, 2023		*/
/*	Last Edit : N/A					*/
/************************************/
#include "LSTD_types.h"
#include "LBIT_math.h"
#include "MWDT_config.h"
#include "MWDT_private.h"
#include "MWDT_interface.h"

void MWDT_voidEnable(void)
{
	SET_BIT(MWDT_WDTCR,WDTCR_WDE);
}

void MWDT_voidDisable(void)
{
	MWDT_WDTCR |= 0b00011000;
	MWDT_WDTCR = 0;
}

void MWDT_voidSleep(u8 ARG_Time)
{
	MWDT_WDTCR &= 0b11111000;
	MWDT_WDTCR |= (ARG_Time&0b00000111);
}
