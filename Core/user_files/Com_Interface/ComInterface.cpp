/*
 * ComInterface.cpp
 *
 *  Created on: Aug 9, 2024
 *      Author: hayashi
 */

#include "ComInterface.h"

Com_Interface::Com_Interface(
		I2C_HandleTypeDef *p_i2c,
		UART_HandleTypeDef *p_uart
		) {
	// TODO Auto-generated constructor stub
	hi2c = p_i2c;
	huart = p_uart;
	err_val = 0;
}

Com_Interface::~Com_Interface() {
	// TODO Auto-generated destructor stub
}

//uint16_t Com_Interface::com_RX(uint8_t *rxdata){
//	err_val = HAL_I2C_Slave_Receive_DMA(hi2c, rxdata, (uint16_t)sizeof(rxdata));
//	return err_val;
//}
//
//uint16_t Com_Interface::com_RX(uint8_t *rxdata,uint8_t com_mode){
//	if(com_mode & 0x01){
//		err_val = HAL_I2C_Slave_Transmit_DMA(hi2c, txdata, (uint16_t)sizeof(txdata));
//	}
//
//	if(com_mode & 0x02){
//		err_val = HAL_UART_Transmit_DMA(huart, txdata, (uint16_t)sizeof(txdata));
//	}
//	return err_val;
//}
//
//uint16_t Com_Interface::com_TX(uint8_t *txdata){
//	err_val = HAL_I2C_Slave_Transmit_DMA(hi2c, txdata, (uint16_t)sizeof(txdata));
//	return err_val;
//}
//
//uint16_t Com_Interface::com_TX(uint8_t *txdata,uint8_t com_mode){
//	if(com_mode & 0x01){
//		err_val = HAL_I2C_Slave_Transmit_DMA(hi2c, txdata, (uint16_t)sizeof(txdata));
//	}
//
//	if(com_mode & 0x02){
//		err_val = HAL_UART_Transmit_DMA(huart, txdata, (uint16_t)sizeof(txdata));
//	}
//	return err_val;
//}
