/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PinA13_Pin GPIO_PIN_2
#define PinA13_GPIO_Port GPIOE
#define Pin17_Pin GPIO_PIN_3
#define Pin17_GPIO_Port GPIOE
#define ExtInt_Pin GPIO_PIN_4
#define ExtInt_GPIO_Port GPIOE
#define ExtInt_EXTI_IRQn EXTI4_IRQn
#define JogB1_Pin GPIO_PIN_5
#define JogB1_GPIO_Port GPIOE
#define JogB1_EXTI_IRQn EXTI9_5_IRQn
#define JogA1_Pin GPIO_PIN_6
#define JogA1_GPIO_Port GPIOE
#define JogA1_EXTI_IRQn EXTI9_5_IRQn
#define PinA12_Pin GPIO_PIN_13
#define PinA12_GPIO_Port GPIOC
#define Dir2_Pin GPIO_PIN_0
#define Dir2_GPIO_Port GPIOC
#define Dir5_Pin GPIO_PIN_1
#define Dir5_GPIO_Port GPIOC
#define SPI_SEL_Pin GPIO_PIN_2
#define SPI_SEL_GPIO_Port GPIOC
#define Dir1_Pin GPIO_PIN_3
#define Dir1_GPIO_Port GPIOC
#define PinA10_Pin GPIO_PIN_0
#define PinA10_GPIO_Port GPIOA
#define PinA11_Pin GPIO_PIN_1
#define PinA11_GPIO_Port GPIOA
#define Encoder_Pin GPIO_PIN_2
#define Encoder_GPIO_Port GPIOA
#define Step2a_Pin GPIO_PIN_3
#define Step2a_GPIO_Port GPIOA
#define Pin1_Pin GPIO_PIN_4
#define Pin1_GPIO_Port GPIOA
#define Step1_Pin GPIO_PIN_5
#define Step1_GPIO_Port GPIOA
#define PinA8_Pin GPIO_PIN_6
#define PinA8_GPIO_Port GPIOA
#define PinA9_Pin GPIO_PIN_7
#define PinA9_GPIO_Port GPIOA
#define PinA6_Pin GPIO_PIN_4
#define PinA6_GPIO_Port GPIOC
#define PinA7_Pin GPIO_PIN_5
#define PinA7_GPIO_Port GPIOC
#define PinA5_Pin GPIO_PIN_0
#define PinA5_GPIO_Port GPIOB
#define Dbg9_Pin GPIO_PIN_1
#define Dbg9_GPIO_Port GPIOB
#define Index2_Pin GPIO_PIN_2
#define Index2_GPIO_Port GPIOB
#define Index2_EXTI_IRQn EXTI2_IRQn
#define JogA2_Pin GPIO_PIN_7
#define JogA2_GPIO_Port GPIOE
#define JogA2_EXTI_IRQn EXTI9_5_IRQn
#define PinA4_Pin GPIO_PIN_8
#define PinA4_GPIO_Port GPIOE
#define JogB2_Pin GPIO_PIN_9
#define JogB2_GPIO_Port GPIOE
#define JogB2_EXTI_IRQn EXTI9_5_IRQn
#define PinA3_Pin GPIO_PIN_10
#define PinA3_GPIO_Port GPIOE
#define Pin14_Pin GPIO_PIN_11
#define Pin14_GPIO_Port GPIOE
#define PinA2_Pin GPIO_PIN_12
#define PinA2_GPIO_Port GPIOE
#define XFlag_Pin GPIO_PIN_13
#define XFlag_GPIO_Port GPIOE
#define PinA15_Pin GPIO_PIN_14
#define PinA15_GPIO_Port GPIOE
#define ZFlag_Pin GPIO_PIN_15
#define ZFlag_GPIO_Port GPIOE
#define DbgTx_Pin GPIO_PIN_10
#define DbgTx_GPIO_Port GPIOB
#define DbgRx_Pin GPIO_PIN_11
#define DbgRx_GPIO_Port GPIOB
#define Dbg0_Pin GPIO_PIN_12
#define Dbg0_GPIO_Port GPIOB
#define Dbg1_Pin GPIO_PIN_13
#define Dbg1_GPIO_Port GPIOB
#define Pin16_Pin GPIO_PIN_14
#define Pin16_GPIO_Port GPIOB
#define Dbg2_Pin GPIO_PIN_15
#define Dbg2_GPIO_Port GPIOB
#define Dbg3_Pin GPIO_PIN_8
#define Dbg3_GPIO_Port GPIOD
#define Dbg4_Pin GPIO_PIN_9
#define Dbg4_GPIO_Port GPIOD
#define XB_Pin GPIO_PIN_10
#define XB_GPIO_Port GPIOD
#define XB_EXTI_IRQn EXTI15_10_IRQn
#define XA_Pin GPIO_PIN_11
#define XA_GPIO_Port GPIOD
#define XA_EXTI_IRQn EXTI15_10_IRQn
#define ZB_Pin GPIO_PIN_12
#define ZB_GPIO_Port GPIOD
#define ZB_EXTI_IRQn EXTI15_10_IRQn
#define Step3_Pin GPIO_PIN_13
#define Step3_GPIO_Port GPIOD
#define ZA_Pin GPIO_PIN_14
#define ZA_GPIO_Port GPIOD
#define ZA_EXTI_IRQn EXTI15_10_IRQn
#define Dbg5_Pin GPIO_PIN_15
#define Dbg5_GPIO_Port GPIOD
#define RemTx_Pin GPIO_PIN_6
#define RemTx_GPIO_Port GPIOC
#define RemRx_Pin GPIO_PIN_7
#define RemRx_GPIO_Port GPIOC
#define Step4_Pin GPIO_PIN_8
#define Step4_GPIO_Port GPIOC
#define Step5_Pin GPIO_PIN_9
#define Step5_GPIO_Port GPIOC
#define Step2b_Pin GPIO_PIN_8
#define Step2b_GPIO_Port GPIOA
#define PinA16_Pin GPIO_PIN_9
#define PinA16_GPIO_Port GPIOA
#define SPI_SCK_Pin GPIO_PIN_10
#define SPI_SCK_GPIO_Port GPIOC
#define SPI_MISO_Pin GPIO_PIN_11
#define SPI_MISO_GPIO_Port GPIOC
#define Uart5Tx_Pin GPIO_PIN_12
#define Uart5Tx_GPIO_Port GPIOC
#define Pin12_Pin GPIO_PIN_0
#define Pin12_GPIO_Port GPIOD
#define Pin13_Pin GPIO_PIN_1
#define Pin13_GPIO_Port GPIOD
#define Uart5Rx_Pin GPIO_PIN_2
#define Uart5Rx_GPIO_Port GPIOD
#define PinA17_Pin GPIO_PIN_3
#define PinA17_GPIO_Port GPIOD
#define Pin10_Pin GPIO_PIN_4
#define Pin10_GPIO_Port GPIOD
#define Dir3_Pin GPIO_PIN_5
#define Dir3_GPIO_Port GPIOD
#define Pin11_Pin GPIO_PIN_6
#define Pin11_GPIO_Port GPIOD
#define Dir4_Pin GPIO_PIN_7
#define Dir4_GPIO_Port GPIOD
#define SPI_MOSI_Pin GPIO_PIN_5
#define SPI_MOSI_GPIO_Port GPIOB
#define I2C_SCL_Pin GPIO_PIN_6
#define I2C_SCL_GPIO_Port GPIOB
#define I2C_SDA_Pin GPIO_PIN_7
#define I2C_SDA_GPIO_Port GPIOB
#define Dbg8_Pin GPIO_PIN_8
#define Dbg8_GPIO_Port GPIOB
#define Dbg7_Pin GPIO_PIN_9
#define Dbg7_GPIO_Port GPIOB
#define Pin15_Pin GPIO_PIN_0
#define Pin15_GPIO_Port GPIOE
#define Index_Pin GPIO_PIN_1
#define Index_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
