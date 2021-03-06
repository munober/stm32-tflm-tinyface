/**
  ******************************************************************************
  * File Name          : usart.h
  * Author             : Auto-generated by STM32CubeIDE
  * Author             : Philipp v. K. <philipp.van-kempen@tum.de>
  * Description        : This file provides code for the configuration
  *                      of the USART instances.
  ******************************************************************************
  * @attention
  *
  * [Copyright (c) 2020 STMicroelectronics]
  *
  * Modifications by @PhilippvK
  * - Cleand up to only provide minimal config
  * - Changed formatting according to cpplint
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SRC_DISCO_F769NI_USART_H_
#define SRC_DISCO_F769NI_USART_H_
#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

extern UART_HandleTypeDef huart1;
void MX_USART1_UART_Init(void);

#ifdef __cplusplus
}
#endif
#endif   // SRC_DISCO_F769NI_USART_H_
