/*
 * led_driver.h
 *
 * Created: 14/06/2022 16:40:49
 *  Author: aluno26
 */ 


#ifndef LED-DRIVER_H_
#define LED-DRIVER_H_


void led_config();
void led_on(uint8_t led_num); // ligar
void led_off(uint8_t led_num); // desligar
void led_toggle(uint8_t led_num); // alter


#endif /* LED-DRIVER_H_ */