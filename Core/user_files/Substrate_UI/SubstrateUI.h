/*
 * SubstrateUI.h
 *
 *  Created on: Aug 7, 2024
 *      Author: hayashi
 */

#ifndef USER_FILES_SUBSTRATE_UI_SUBSTRATEUI_H_
#define USER_FILES_SUBSTRATE_UI_SUBSTRATEUI_H_

#include <main.h>

class Substrate_UI {
public:
	Substrate_UI(ADC_HandleTypeDef *);
	virtual ~Substrate_UI();
	uint8_t get_dipsw(void);
	uint32_t get_pmeter(void);
private:
	ADC_HandleTypeDef *pmeter;
};

#endif /* USER_FILES_SUBSTRATE_UI_SUBSTRATEUI_H_ */
