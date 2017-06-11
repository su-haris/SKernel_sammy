/**
 * wimax_plat.h
 *
 * GPIO settings for specific HW
 */
#ifndef __WIMAX_PLAT_H__
#define __WIMAX_PLAT_H__

#define WIMAX_EN		GPIO_WIMAX_EN
#define WIMAX_RESET		GPIO_WIMAX_RESET_N
#define WIMAX_USB_EN		GPIO_WIMAX_USB_EN

#define DEVICE_HSMMC		s3c_device_hsmmc3

#define WIMAX_WAKEUP		GPIO_WIMAX_WAKEUP
#define WIMAX_IF_MODE0		GPIO_WIMAX_IF_MODE0
#define WIMAX_IF_MODE1		GPIO_WIMAX_IF_MODE1
#define WIMAX_CON0		GPIO_WIMAX_CON0
#define WIMAX_CON1		GPIO_WIMAX_CON1
#define WIMAX_CON2		GPIO_WIMAX_CON2
#define WIMAX_INT		GPIO_WIMAX_INT

#define I2C_SEL			GPIO_WIMAX_I2C_CON
#define EEPROM_SCL		GPIO_CMC_SCL_18V
#define EEPROM_SDA		GPIO_CMC_SDA_18V

#define UART_SEL1		GPIO_UART_SEL1
#define UART_SEL		GPIO_UART_SEL
#if defined(CONFIG_MACH_C1_REV02)
#define USB_SEL			GPIO_USB_SW_EN_WIMAX
#endif /* CONFIG_MACH_C1_REV02 */
#define DBGEN			GPIO_WIMAX_DBGEN_28V//TBD
#define GPIO_LEVEL_LOW          0
#define GPIO_LEVEL_HIGH         1
#define GPIO_LEVEL_NONE         2
#endif	/* __WIMAX_PLAT_H__ */
