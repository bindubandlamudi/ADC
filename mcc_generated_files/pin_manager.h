/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED3_D5_RA1 aliases
#define LED3_D5_RA1_TRIS               TRISAbits.TRISA1
#define LED3_D5_RA1_LAT                LATAbits.LATA1
#define LED3_D5_RA1_PORT               PORTAbits.RA1
#define LED3_D5_RA1_WPU                WPUAbits.WPUA1
#define LED3_D5_RA1_OD                ODCONAbits.ODA1
#define LED3_D5_RA1_ANS                ANSELAbits.ANSA1
#define LED3_D5_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED3_D5_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED3_D5_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED3_D5_RA1_GetValue()           PORTAbits.RA1
#define LED3_D5_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED3_D5_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED3_D5_RA1_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define LED3_D5_RA1_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define LED3_D5_RA1_SetPushPull()    do { ODCONAbits.ODA1 = 0; } while(0)
#define LED3_D5_RA1_SetOpenDrain()   do { ODCONAbits.ODA1 = 1; } while(0)
#define LED3_D5_RA1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED3_D5_RA1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED2_D6_RA2 aliases
#define LED2_D6_RA2_TRIS               TRISAbits.TRISA2
#define LED2_D6_RA2_LAT                LATAbits.LATA2
#define LED2_D6_RA2_PORT               PORTAbits.RA2
#define LED2_D6_RA2_WPU                WPUAbits.WPUA2
#define LED2_D6_RA2_OD                ODCONAbits.ODA2
#define LED2_D6_RA2_ANS                ANSELAbits.ANSA2
#define LED2_D6_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED2_D6_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED2_D6_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED2_D6_RA2_GetValue()           PORTAbits.RA2
#define LED2_D6_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED2_D6_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED2_D6_RA2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LED2_D6_RA2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LED2_D6_RA2_SetPushPull()    do { ODCONAbits.ODA2 = 0; } while(0)
#define LED2_D6_RA2_SetOpenDrain()   do { ODCONAbits.ODA2 = 1; } while(0)
#define LED2_D6_RA2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED2_D6_RA2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED4_D4_RA5 aliases
#define LED4_D4_RA5_TRIS               TRISAbits.TRISA5
#define LED4_D4_RA5_LAT                LATAbits.LATA5
#define LED4_D4_RA5_PORT               PORTAbits.RA5
#define LED4_D4_RA5_WPU                WPUAbits.WPUA5
#define LED4_D4_RA5_OD                ODCONAbits.ODA5
#define LED4_D4_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED4_D4_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED4_D4_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED4_D4_RA5_GetValue()           PORTAbits.RA5
#define LED4_D4_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED4_D4_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED4_D4_RA5_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define LED4_D4_RA5_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define LED4_D4_RA5_SetPushPull()    do { ODCONAbits.ODA5 = 0; } while(0)
#define LED4_D4_RA5_SetOpenDrain()   do { ODCONAbits.ODA5 = 1; } while(0)

// get/set POT1_AN4 aliases
#define POT1_AN4_TRIS               TRISCbits.TRISC0
#define POT1_AN4_LAT                LATCbits.LATC0
#define POT1_AN4_PORT               PORTCbits.RC0
#define POT1_AN4_WPU                WPUCbits.WPUC0
#define POT1_AN4_OD                ODCONCbits.ODC0
#define POT1_AN4_ANS                ANSELCbits.ANSC0
#define POT1_AN4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define POT1_AN4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define POT1_AN4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define POT1_AN4_GetValue()           PORTCbits.RC0
#define POT1_AN4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define POT1_AN4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define POT1_AN4_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define POT1_AN4_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define POT1_AN4_SetPushPull()    do { ODCONCbits.ODC0 = 0; } while(0)
#define POT1_AN4_SetOpenDrain()   do { ODCONCbits.ODC0 = 1; } while(0)
#define POT1_AN4_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define POT1_AN4_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED1_D7_RC5 aliases
#define LED1_D7_RC5_TRIS               TRISCbits.TRISC5
#define LED1_D7_RC5_LAT                LATCbits.LATC5
#define LED1_D7_RC5_PORT               PORTCbits.RC5
#define LED1_D7_RC5_WPU                WPUCbits.WPUC5
#define LED1_D7_RC5_OD                ODCONCbits.ODC5
#define LED1_D7_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED1_D7_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED1_D7_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED1_D7_RC5_GetValue()           PORTCbits.RC5
#define LED1_D7_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED1_D7_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED1_D7_RC5_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LED1_D7_RC5_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LED1_D7_RC5_SetPushPull()    do { ODCONCbits.ODC5 = 0; } while(0)
#define LED1_D7_RC5_SetOpenDrain()   do { ODCONCbits.ODC5 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/