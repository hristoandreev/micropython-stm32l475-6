#include STM32_HAL_H
// mcu476_board
#define MICROPY_BOARD_EARLY_INIT    mcu476_board_early_init
void mcu476_board_early_init(void);

#define MICROPY_HW_BOARD_NAME       "mcu476_board_R1.0"
#define MICROPY_HW_MCU_NAME         "STM32L475"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)

// use external SPI flash for storage
#define MICROPY_HW_SPIFLASH_SIZE_BITS (64 * 1024 * 1024)
#define MICROPY_HW_SPIFLASH_CS      (pin_B11)
#define MICROPY_HW_SPIFLASH_SCK     (pin_B10)
#define MICROPY_HW_SPIFLASH_MOSI    (pin_B1)
#define MICROPY_HW_SPIFLASH_MISO    (pin_B0)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// The pyboard has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// USART1 config
#define MICROPY_HW_UART1_TX     (pin_B6)
#define MICROPY_HW_UART1_RX     (pin_B7)

// USART2 config
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)

// USART3 config
#define MICROPY_HW_UART3_TX     (pin_C4)
#define MICROPY_HW_UART3_RX     (pin_C5)

// USART 2 is connected to the virtual com port on the ST-LINK
#define MICROPY_HW_UART_REPL        PYB_UART_2
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C1 busses
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
//#define MICROPY_HW_I2C2_SCL (pin_B10)
//#define MICROPY_HW_I2C2_SDA (pin_B11)
// We use an array of baudrates and corresponding TIMINGR values.
//
// The value 0x90112626 was obtained from the DISCOVERY_I2C1_TIMING constant
// defined in the STM32L4Cube file Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.h
#define MICROPY_HW_I2C_BAUDRATE_TIMING  {{100000, 0x90112626}}
#define MICROPY_HW_I2C_BAUDRATE_DEFAULT 100000
#define MICROPY_HW_I2C_BAUDRATE_MAX     100000

// SPI2 busses
//#define MICROPY_HW_SPI2_NSS     (pin_D0)
#define MICROPY_HW_SPI2_SCK     (pin_B13)
#define MICROPY_HW_SPI2_MISO    (pin_B14)
#define MICROPY_HW_SPI2_MOSI    (pin_B15)

// SPI1 busses
//#define MICROPY_HW_SPI1_NSS     (pin_D0)
#define MICROPY_HW_SPI1_SCK     (pin_B3)
#define MICROPY_HW_SPI1_MISO    (pin_B4)
#define MICROPY_HW_SPI1_MOSI    (pin_B5)

// Joystick is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_B12)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_C13) // main board green
//#define MICROPY_HW_LED2             (pin_C12) // display board green
//#define MICROPY_HW_LED3             (pin_C11) // dispaly board yelow
//#define MICROPY_HW_LED4             (pin_C9)  // display board red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// SD card detect switch
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_C7)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLDOWN)
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10) // This is not the official ID Pin which should be PA10
