/*
 * gpio_driver.c
 *
 * Created: 14/06/2022 16:57:50
 *  Author: aluno26
 */ 

#include <asf.h>
#include <gpio-driver.h>

struct port_config port;

gpio_config(uint8_t gpio_num, uint8_t dir){
	port.direction = dir;
	port_pin_set_config(gpio_num, &port);
}
gpio_write(uint8_t gpio_num, uint8_t val){
	port_pin_set_output_level(gpio_num, val);
}
gpio_read(uint8_t gpio_num, uint8_t *val){
	return port_pin_get_output_level(gpio_num);
}
gpio_toggle(uint8_t gpio_num){
	port_pin_toggle_output_level(gpio_num);
}
gpio_dir(uint8_t gpio_num){
	return port.direction;
}