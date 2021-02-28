/*
 * SPI_interface.h
 *
 *  Created on: Sep 29, 2018
 *      Author: Abdulnaser
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#define master 1
#define slave 0
void SPI_Init (void);
u8 SPI_Tranceive (u8 data);


#endif /* SPI_INTERFACE_H_ */
