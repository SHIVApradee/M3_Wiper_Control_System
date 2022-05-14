/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "MyStm32f407xx.h"

void delay(int a)
{
	for (uint32_t i=0;i<a;i++);
}
int message=1;
int main(void)
{
	    GPIO_Handle_t Led,INP;
		Led.pGPIOx = GPIOD;
		Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
		Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
		Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&Led);

		Led.pGPIOx = GPIOD;
		Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
		Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
		Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&Led);

		Led.pGPIOx = GPIOD;
		Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
		Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
		Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&Led);

		Led.pGPIOx = GPIOD;
		Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
		Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
		Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD, ENABLE);
		GPIO_Init(&Led);

		INP.pGPIOx=GPIOA;
		INP.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_IN;
		GPIO_Init(&INP);

		while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA,GPIO_PIN_NO_0)==ENABLE){
				if(message==1){
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
					if(GPIO_ReadFromInputPin(GPIOA,GPIO_PIN_NO_0)==ENABLE)
					{
			        message++;
					}
			        }
               if(message==2){
					while(message==2){
			   GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			       delay(30000000);
			     GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
			   GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		           delay(30000000);
		         GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
			   GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			       delay(30000000);
			     GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_13,0);
			   GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			       delay(30000000);
			     GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
			   GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			       delay(30000000);
			     GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
			     if(GPIO_ReadFromInputPin(GPIOA,GPIO_PIN_NO_0)==ENABLE){
			     message++;}
				}
			}
			if(message==3){
					while(message==3){
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					     delay(20000000);
					  GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				         delay(20000000);
				      GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
				    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					     delay(20000000);
					  GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_13,0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			             delay(20000000);
			          GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
			        GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			             delay(20000000);
			          GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
			          if(GPIO_ReadFromInputPin(GPIOA,GPIO_PIN_NO_0)==ENABLE){
					     message++;}
				}
			}
				if(message==4){
					while(message==4){
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					     delay(10000000);
					  GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					     delay(10000000);
					  GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					     delay(10000000);
					  GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_13,0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			             delay(10000000);
			          GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_12,0);
			        GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			             delay(10000000);
			          GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_15,0);
			          if(GPIO_ReadFromInputPin(GPIOA,GPIO_PIN_NO_0)==ENABLE){
					message++;}
					}
				}
                if(message==5){
                	delay(50000000);
                	GPIO_WriteToOutputPin(GPIOD,GPIO_PIN_NO_14,0);
                }
		}
	}

}
