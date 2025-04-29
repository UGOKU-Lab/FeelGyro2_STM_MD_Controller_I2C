/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f3xx_hal.h"

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
#define Monitor_Pin GPIO_PIN_0
#define Monitor_GPIO_Port GPIOA
#define Posttension_Meter_Pin GPIO_PIN_2
#define Posttension_Meter_GPIO_Port GPIOA
#define Set_Speed_Pin GPIO_PIN_4
#define Set_Speed_GPIO_Port GPIOA
#define NTC_Pin GPIO_PIN_5
#define NTC_GPIO_Port GPIOA
#define STM_SW0_Pin GPIO_PIN_0
#define STM_SW0_GPIO_Port GPIOB
#define STM_SW1_Pin GPIO_PIN_1
#define STM_SW1_GPIO_Port GPIOB
#define Enable_Pin GPIO_PIN_11
#define Enable_GPIO_Port GPIOA
#define Direction_Pin GPIO_PIN_12
#define Direction_GPIO_Port GPIOA
#define DigIn1_Pin GPIO_PIN_13
#define DigIn1_GPIO_Port GPIOA
#define DigIn2_Pin GPIO_PIN_14
#define DigIn2_GPIO_Port GPIOA
#define Ready_Pin GPIO_PIN_15
#define Ready_GPIO_Port GPIOA
#define STM_SW2_Pin GPIO_PIN_3
#define STM_SW2_GPIO_Port GPIOB
#define STM_SW3_Pin GPIO_PIN_4
#define STM_SW3_GPIO_Port GPIOB
#define STM_MODE_Pin GPIO_PIN_5
#define STM_MODE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
