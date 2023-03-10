/************************************/
/*	Author	  :	ESLAM_HOSNY			*/
/*	SWC		  : WDT				*/
/*  Layer	  : MCAL				*/
/*	Version	  :	1.0		  			*/
/*	Date	  :	March 1, 2023		*/
/*	Last Edit : N/A					*/
/************************************/
#ifndef _MWDT_INTERFACE_H
#define _MWDT_INTERFACE_H

/* For  VCC = 5v  */
#define TIME_OUT5v_16_3ms		0
#define TIME_OUT5v_32_5ms		1
#define TIME_OUT5v_65_0ms		2
#define TIME_OUT5v_0_13ms		3
#define TIME_OUT5v_0_26ms		4
#define TIME_OUT5v_0_52ms		5
#define TIME_OUT5v_1_00ms		6
#define TIME_OUT5v_2_10ms		7

/* For  VCC = 3v  */
#define TIME_OUT3v_17_1ms		0
#define TIME_OUT3v_34_3ms		1
#define TIME_OUT3v_68_5ms		2
#define TIME_OUT3v_0_14ms		3
#define TIME_OUT3v_0_27ms		4
#define TIME_OUT3v_0_55ms		5
#define TIME_OUT3v_1_10ms		6
#define TIME_OUT3v_2_20ms		7


void MWDT_voidEnable(void);

void MWDT_voidDisable(void);

void MWDT_voidSleep(u8 ARG_Time);


#endif
