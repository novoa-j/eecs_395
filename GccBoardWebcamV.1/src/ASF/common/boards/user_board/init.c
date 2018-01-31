/**
 * \file
 *
 * \brief User board initialization template
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#include <asf.h>
#include <board.h>
#include <conf_board.h>

void board_init(void)
{
	/* This function is meant to contain board-specific initialization code
	 * for, e.g., the I/O pins. The initialization can rely on application-
	 * specific board configuration, found in conf_board.h. 
	 */
	
		/* Set output direction on the given LED IOPORTs */
		ioport_set_pin_dir(LED_PIN, IOPORT_DIR_OUTPUT);
		ioport_set_pin_level(LED_PIN,false);
		ioport_set_pin_mode(LED_BUTTON, IOPORT_MODE_PULLUP);
		
		
}
