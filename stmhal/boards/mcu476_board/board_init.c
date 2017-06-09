#include "py/mphal.h"
#include "genhdr/pins.h"

void mcu476_board_early_init(void) {
    // set SPI flash WP and HOLD pins high
    mp_hal_pin_output(&pin_A7);
    mp_hal_pin_output(&pin_A6);
    mp_hal_pin_write(&pin_A7, 1);
    mp_hal_pin_write(&pin_A6, 1);
}
