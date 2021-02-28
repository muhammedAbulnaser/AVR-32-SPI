/*
 * SPI_prog.c
 *
 *  Created on: Sep 29, 2018
 *  Author: Abdulnaser
 */
#include"LIB/types.h"
#include"LIB/util.h"
#include<avr/io.h>
#include"SPI_interface.h"
#include"SPI_config.h"
void SPI_Init (void)
{
#if SPI_mode==master
	SPCR=0b01010000;
#else
	SPCR=0b11000000;
#endif
}


u8 SPI_Tranceive (u8 data)
{
	SPDR=data;
	while(SPSR &(1<<SPIF)==0);
	return SPDR;

}
