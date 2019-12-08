#ifndef USER_LOGIC_H_
#define USER_LOGIC_H_

#include "gpio.h"
#include "gui.h"
#include "spi.h"

void Logic(void);
void delay_ms(uint16_t time);
void Menu(void);
void Menu_Show(uint8_t Menu_Index);

#endif