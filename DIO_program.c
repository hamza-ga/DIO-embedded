#include"../lib/STD.h"
#include"../lib/bitmath.h"
#include"DIO_interface.h"
#include"DIO_private.h"
//#include "config.h"

void DIO_SetPinDirection(u8 Port,u8 Pin,u8 Direction)
{
	if(Direction == DIO_directionOUT)
	{
		switch(Port)
		{
		  case DIO_PORTA: SET_BIT(DDRA,Pin); break;
		  case DIO_PORTB: SET_BIT(DDRB,Pin); break;
		  case DIO_PORTC: SET_BIT(DDRC,Pin); break;
		  case DIO_PORTD: SET_BIT(DDRD,Pin); break;
		}
	}
	else if(Direction == DIO_directionIN)
	{
		switch(Port)
		{
		  case DIO_PORTA: CLR_BIT(DDRA,Pin); break;
	      case DIO_PORTB: CLR_BIT(DDRB,Pin); break;
   	      case DIO_PORTC: CLR_BIT(DDRC,Pin); break;
	      case DIO_PORTD: CLR_BIT(DDRD,Pin); break;
		}
	}
}

void DIO_SetPortDirection(u8 Port,u8 Direction)
{
	switch(Port)
	{
	  case DIO_PORTA: DDRA = Direction;break;
	  case DIO_PORTB: DDRB = Direction;break;
	  case DIO_PORTC: DDRC = Direction;break;
	  case DIO_PORTD: DDRD = Direction;break;
	}
}

void DIO_SetPinValue(u8 Port,u8 Pin,u8 Value)
{
	if(Value == DIO_HIGH)
		{
			switch(Port)
			{
			  case DIO_PORTA: SET_BIT(PORTA,Pin); break;
			  case DIO_PORTB: SET_BIT(PORTB,Pin); break;
			  case DIO_PORTC: SET_BIT(PORTC,Pin); break;
			  case DIO_PORTD: SET_BIT(PORTD,Pin); break;
			}
		}
		else if(Value == DIO_LOW)
		{
			switch(Port)
			{
		   	  case DIO_PORTA: CLR_BIT(PORTA,Pin); break;
		      case DIO_PORTB: CLR_BIT(PORTB,Pin); break;
	   	      case DIO_PORTC: CLR_BIT(PORTC,Pin); break;
		      case DIO_PORTD: CLR_BIT(PORTD,Pin); break;
			}
		}
}

void DIO_SetPortValue(u8 Port,u8 Value)
{
	switch(Port)
		{
		  case DIO_PORTA: PORTA = Value;break;
		  case DIO_PORTB: PORTB = Value;break;
		  case DIO_PORTC: PORTC = Value;break;
		  case DIO_PORTD: PORTD = Value;break;
		}
}

u8 DIO_GetPinValue(u8 Port,u8 Pin)
{
	u8 ReturnPin=0;
	switch(Port)
	{
	  case DIO_PORTA: ReturnPin = GET_BIT(PINA,Pin);break;
	  case DIO_PORTB: ReturnPin = GET_BIT(PINB,Pin);break;
	  case DIO_PORTC: ReturnPin = GET_BIT(PINC,Pin);break;
	  case DIO_PORTD: ReturnPin = GET_BIT(PIND,Pin);break;
	}
	return ReturnPin;

}

u8 DIO_GetPortValue(u8 Port)
{
	u8 ReturnPort=0;
	switch(Port)
			{
	            case DIO_PORTA: ReturnPort = PINA ; break;
	            case DIO_PORTB: ReturnPort = PINB ; break;
	            case DIO_PORTC: ReturnPort = PINC ; break;
	            case DIO_PORTD: ReturnPort = PIND ; break;
			}
	return ReturnPort;
}
