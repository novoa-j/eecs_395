/**
 * \file
 *
 * \brief User board configuration template
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef CONF_BOARD_H
#define CONF_BOARD_H

#define LED_PIN PIO_PA20_IDX //pin definitions
#define LED_BUTTON PIO_PA19_IDX

#define LED_BUTTON_1_FLAGS    (PIO_INPUT | PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE) //straight from ioport example



#endif // CONF_BOARD_H
