/**
 * @file    SDK_EVAL_Gpio.h
 * @author  AMS - AAS Division
 * @version V1.0.1
 * @date    March, 10 2014
 * @brief   This file contains definitions for Software Development Kit eval SPI devices
 * @details
 *
 * In this module there are API for the management of the SPI devices on the SDK Eval
 * motherboards.
 *
 * <b>Example:</b>
 * @code
 *
 *   SdkEvalSpiInit();
 *
 *   ...
 *
 * @endcode
 *
 * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
 * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 *
 * THIS SOURCE CODE IS PROTECTED BY A LICENSE.
 * FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
 * IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
 *
 * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SDK_EVAL_GPIO_H
#define __SDK_EVAL_GPIO_H

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx.h"

#ifdef __cplusplus
 extern "C" {
#endif


/** @addtogroup SDK_EVAL_STM32L
* @{
*/
   
   
/** @defgroup SPI_Private_TypesDefinitions
* @{
*/

/**
* @}
*/


/** @addtogroup SDK_EVAL_Spi                    SDK EVAL Spi
* @brief SPI functions implementation.
* @details This file implements the BlueNRG Library SPI interface functions. 
* @{
*/

   /** @addtogroup SDK_EVAL_SPI_Exported_Types          SDK EVAL Spi Exported Types
 * @{
 */


/**
* @}
*/

/** @defgroup SPI_Private_Defines
* @{
*/


/**
* @}
*/


/** @defgroup SDK_EVAL_Spi_Peripheral_Gpio
* @{
*/

/* BlueNRG SW reset line define values */
#define BNRG_RESET_PIN              GPIO_PIN_8       /* PA.8 */
#define BNRG_RESET_MODE	        GPIO_MODE_OUTPUT_PP
#define BNRG_RESET_PULL	        GPIO_NOPULL // PULLUP 
#define BNRG_RESET_SPEED		GPIO_SPEED_LOW  // HIGH
#define BNRG_RESET_ALTERNATE	0
#define BNRG_RESET_PORT             GPIOA 
#define BNRG_RESET_CLK_ENABLE()     __GPIOA_CLK_ENABLE()

/* BlueNRG BOOTLOADER line define values */
#define BNRG_BOOT_PIN              GPIO_PIN_14     /* PB.14 */
#define BNRG_BOOT_MODE	        GPIO_MODE_OUTPUT_PP
#define BNRG_BOOT_PULL	        GPIO_NOPULL 
#define BNRG_BOOT_SPEED		GPIO_SPEED_LOW 
#define BNRG_BOOT_ALTERNATE	0
#define BNRG_BOOT_PORT             GPIOB 
#define BNRG_BOOT_CLK_ENABLE()     __GPIOB_CLK_ENABLE() 

/* Defines for MOSI BOOT pin */
#define BNRG_SPI_MOSI_BOOT_PIN             GPIO_PIN_7                 /* PA.7 */
#define BNRG_SPI_MOSI_BOOT_UPDATER_MODE	      GPIO_MODE_AF_PP
#define BNRG_SPI_MOSI_BOOT_UPDATER_PULL	      GPIO_NOPULL
#define BNRG_SPI_MOSI_BOOT_SPEED	      GPIO_SPEED_HIGH
#define BNRG_SPI_MOSI_BOOT_ALTERNATE	      GPIO_AF5_SPI1
#define BNRG_SPI_MOSI_BOOT_PORT            GPIOA                      
#define BNRG_SPI_MOSI_BOOT_CLK_ENABLE()    __GPIOA_CLK_ENABLE()
   
/* end  */

void BlueNRG_Power_Down(void);
void BlueNRG_Power_Up(void);
void BlueNRG_RST(void);
void Sdk_Eval_Gpio_Init(void);
void BlueNRG_HW_Bootloader(void);

/**
* @}
*/

/**
* @}
*/

/**
* @}
*/


/**
* @}
*/


/**
* @}
*/


#ifdef __cplusplus
}
#endif

#endif

/******************* (C) COPYRIGHT 2014 STMicroelectronics *****END OF FILE****/
