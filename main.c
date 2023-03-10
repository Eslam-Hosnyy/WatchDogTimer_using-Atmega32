/************************************/
/*	Author		: Eslam_Hosny		*/
/*	SWC			: N/A				*/
/*	Layer		: N/A				*/
/*	Version   	: 0.0				*/
/*	Date	  	: N/A				*/
/*	Last Edit 	: N/A				*/
/************************************/
#define F_CPU	8000000UL
#include <util/delay.h>
#include "LSTD_types.h"
#include "LBIT_math.h"
#include "MDIO_interface.h"
#include "PORT_interface.h"
#include "MWDT_interface.h"


int main (void)
{
	PORT_voidInit();
	MDIO_u8SetPinValue(MDIO_PORTA, PIN0, MDIO_HIGH);
	_delay_ms(1000);
	MDIO_u8SetPinValue(MDIO_PORTA, PIN0, MDIO_LOW);

	MWDT_voidEnable();
	MWDT_voidSleep(TIME_OUT5v_1_00ms);
	MWDT_voidDisable();

	while(1)
	{

	}
}
