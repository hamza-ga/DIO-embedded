#ifndef DIO_DIO_INTERFACE_H
#define DIO_DIO_INTERFACE_H

#include"../lib/STD.h"



#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define DIO_HIGH 1
#define DIO_LOW 0

#define DIO_directionIN 0
#define DIO_directionOUT 1

void DIO_SetPinDirection(u8 Potr,u8 Pin,u8 Direction);
void DIO_SetPortDirection(u8 Potr,u8 Direction);
void DIO_SetPinValue(u8 Potr,u8 Pin,u8 Value);
void DIO_SetPortValue(u8 Potr,u8 Value);
u8 DIO_GetPinValue(u8 Potr,u8 Pin);
u8 DIO_GetPortValue(u8 Potr);



#endif
