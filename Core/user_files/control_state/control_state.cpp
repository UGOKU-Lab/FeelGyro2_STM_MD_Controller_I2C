#include "control_state.h"

control_state::control_state(void) {
	state_val = init_state;
	return;
}

control_state::~control_state(void) {
	return;
}

int control_state::get_stval(void) {
	return state_val;
}

int control_state::state_sift(int change_stval) {
	int now_state = state_val;
	int sterr;
	if(now_state == init_state){
		if(change_stval == ui_control){
			state_val = ui_control;
			sterr = no_err;
		}
		else if(change_stval == i2c_control){
			state_val = i2c_control;
			sterr = no_sift;
		}
	}
	else if(now_state == ui_control){
		if(change_stval == i2c_control){
			state_val = i2c_control;
			sterr = no_err;
		}
		else {
			state_val = state_val;
			sterr = no_sift;
		}
	}
	else if(now_state == i2c_control){
		if(change_stval == ui_control){
			state_val = ui_control;
			sterr = no_err;
		}
		else {
			state_val = state_val;
			sterr = no_sift;
		}
	}
	return sterr;
}
