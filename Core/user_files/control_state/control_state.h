#pragma once


#define init_state			0x00
#define ui_control			0x01
#define i2c_control			0x02

#define no_err				0x00
#define no_sift				0x01
#define cant_sift			0x02
#define chenge_st_err		0xFF

class control_state {
public:
	control_state(void);
	~control_state(void);
	int get_stval(void);
	int state_sift(int);
private:
	int state_val;
};

