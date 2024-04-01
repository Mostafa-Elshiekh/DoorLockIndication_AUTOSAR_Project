/******************************************************************************
 * @file           : main.c
 * @author         : Eng : Mostafa Elshiekh -- Learn In Depth
 * @brief          :Context Switching In RTOS -APP(Master/Slave)communications with UART Session 3
 ******************************************************************************/
#include "DIO.h"
#include "STM32_F103C6.h"
#include "STM32F103C6_GPIO_DRIVERS.h"
#include "Timer.h"





/*Global Variables*/

void MCU_HW_Init(void)
{
	Timer2_init(); //for delay

	RCC_GPIOA_CLOCK_EN();
	GPIO_Pin_Configure_t DIO_DoorConfig;
	DIO_DoorConfig.GPIO_Pin_Number=DIO_Door;
	DIO_DoorConfig.GPIO_MODE = GPIO_MODE_INPUT_FLO;
	MCAL_GPIO_Init(GPIO_Port_Used, &DIO_DoorConfig);

	GPIO_Pin_Configure_t DIO_LedConfig;
	DIO_LedConfig.GPIO_Pin_Number=DIO_Led;
	DIO_LedConfig.GPIO_MODE = GPIO_MODE_OUTPUT_PP;
	MCAL_GPIO_Init(GPIO_Port_Used, &DIO_LedConfig);
}


void StartOs()
{
	uint8_t tick=0;

	while(1)
	{
		if(tick==10)
		{
			Run_ReadDoorSensor();
			tick++;
		}
		else if(tick==12)
		{
			Run_DoorLockAlgo();
			tick=0;
		}
		else
		{
			tick++;
		}
	}
	dms(10);
}

int main(void)
{
	MCU_HW_Init();
	StartOs();

	while(1)
	{

	}

	return 0;
}

