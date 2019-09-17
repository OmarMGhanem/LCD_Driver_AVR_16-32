/*
 * main.c
 *
 *  Created on: Sep 16, 2019
 *      Author: OmarG
 */

#include "lcd.h"
#include <avr\io.h>
#include <stdio.h>

int main(void){
_delay_ms(5);
lcdInit();

lcdSendFloat(-100.1234,3);

/**


**/
//lcdGoTo(0,5);
while(1){


}
	return 0 ;
}
