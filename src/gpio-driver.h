/*
 * gpio_driver.h
 *
 * Created: 14/06/2022 16:58:04
 *  Author: aluno26
 */ 


#ifndef GPIO-DRIVER_H_
#define GPIO-DRIVER_H_


 gpio_config(uint8_t gpio_num, uint8_t dir);
 gpio_write(uint8_t gpio_num, bool val);
 gpio_read(uint8_t gpio_num);
 gpio_toggle(uint8_t gpio_num);
 gpio_dir(uint8_t gpio_num);


#endif /* GPIO-DRIVER_H_ */