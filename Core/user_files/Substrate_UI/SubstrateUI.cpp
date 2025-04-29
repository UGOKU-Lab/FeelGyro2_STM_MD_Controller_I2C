/*
 * SubstrateUI.cpp
 *
 *  Created on: Aug 7, 2024
 *      Author: hayashi
 */

#include "SubstrateUI.h"

Substrate_UI::Substrate_UI(ADC_HandleTypeDef *hadc) {
	// TODO Auto-generated constructor stub
	pmeter = hadc;
}

Substrate_UI::~Substrate_UI() {
	// TODO Auto-generated destructor stub
}

uint8_t Substrate_UI::get_dipsw(void){
	uint8_t dipsw = 0;
	dipsw = HAL_GPIO_ReadPin(STM_SW3_GPIO_Port, STM_SW3_Pin) << 3 |
			HAL_GPIO_ReadPin(STM_SW2_GPIO_Port, STM_SW2_Pin) << 2 |
			HAL_GPIO_ReadPin(STM_SW1_GPIO_Port, STM_SW1_Pin) << 1 |
			HAL_GPIO_ReadPin(STM_SW0_GPIO_Port, STM_SW0_Pin) << 0 ;
	return dipsw;
}

uint32_t Substrate_UI::get_pmeter(void){
	uint32_t pmeter_val;
	HAL_ADC_Start_DMA(pmeter, &pmeter_val, 1);
	return pmeter_val;
}
