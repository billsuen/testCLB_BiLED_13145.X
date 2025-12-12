/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
? [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define YG_TRIS                 TRISAbits.TRISA0
#define YG_LAT                  LATAbits.LATA0
#define YG_PORT                 PORTAbits.RA0
#define YG_WPU                  WPUAbits.WPUA0
#define YG_OD                   ODCONAbits.ODCA0
#define YG_ANS                  ANSELAbits.ANSA0
#define YG_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define YG_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define YG_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define YG_GetValue()           PORTAbits.RA0
#define YG_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define YG_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define YG_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define YG_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define YG_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define YG_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define YG_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define YG_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define RED_TRIS                 TRISAbits.TRISA1
#define RED_LAT                  LATAbits.LATA1
#define RED_PORT                 PORTAbits.RA1
#define RED_WPU                  WPUAbits.WPUA1
#define RED_OD                   ODCONAbits.ODCA1
#define RED_ANS                  ANSELAbits.ANSA1
#define RED_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RED_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RED_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RED_GetValue()           PORTAbits.RA1
#define RED_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RED_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RED_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define RED_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define RED_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define RED_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define RED_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define RED_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/