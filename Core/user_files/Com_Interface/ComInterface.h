/*
 * ComInterface.h
 *
 *  Created on: Aug 9, 2024
 *      Author: hayashi
 */

#ifndef USER_FILES_COM_INTERFACE_COMINTERFACE_H_
#define USER_FILES_COM_INTERFACE_COMINTERFACE_H_

#include <main.h>

class Com_Interface {
public:
	Com_Interface(I2C_HandleTypeDef *,UART_HandleTypeDef *);
	virtual ~Com_Interface();
	uint16_t com_RX(uint8_t *);
	uint16_t com_RX(uint8_t *,uint8_t);
	uint16_t com_TX(uint8_t *);
	uint16_t com_TX(uint8_t *,uint8_t);
private:
	uint16_t err_val;
	I2C_HandleTypeDef *hi2c;
	UART_HandleTypeDef *huart;
};

#endif /* USER_FILES_COM_INTERFACE_COMINTERFACE_H_ */
