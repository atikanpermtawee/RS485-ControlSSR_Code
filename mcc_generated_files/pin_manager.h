/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1823
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Relay_B aliases
#define Relay_B_TRIS                 TRISAbits.TRISA4
#define Relay_B_LAT                  LATAbits.LATA4
#define Relay_B_PORT                 PORTAbits.RA4
#define Relay_B_WPU                  WPUAbits.WPUA4
#define Relay_B_ANS                  ANSELAbits.ANSA4
#define Relay_B_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Relay_B_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Relay_B_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Relay_B_GetValue()           PORTAbits.RA4
#define Relay_B_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Relay_B_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Relay_B_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Relay_B_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Relay_B_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define Relay_B_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set Status_MCU aliases
#define Status_MCU_TRIS                 TRISAbits.TRISA5
#define Status_MCU_LAT                  LATAbits.LATA5
#define Status_MCU_PORT                 PORTAbits.RA5
#define Status_MCU_WPU                  WPUAbits.WPUA5
#define Status_MCU_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Status_MCU_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Status_MCU_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Status_MCU_GetValue()           PORTAbits.RA5
#define Status_MCU_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Status_MCU_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Status_MCU_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Status_MCU_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set ADD_1 aliases
#define ADD_1_TRIS                 TRISCbits.TRISC0
#define ADD_1_LAT                  LATCbits.LATC0
#define ADD_1_PORT                 PORTCbits.RC0
#define ADD_1_WPU                  WPUCbits.WPUC0
#define ADD_1_ANS                  ANSELCbits.ANSC0
#define ADD_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ADD_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ADD_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ADD_1_GetValue()           PORTCbits.RC0
#define ADD_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ADD_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ADD_1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define ADD_1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define ADD_1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define ADD_1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set ADD_0 aliases
#define ADD_0_TRIS                 TRISCbits.TRISC1
#define ADD_0_LAT                  LATCbits.LATC1
#define ADD_0_PORT                 PORTCbits.RC1
#define ADD_0_WPU                  WPUCbits.WPUC1
#define ADD_0_ANS                  ANSELCbits.ANSC1
#define ADD_0_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ADD_0_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ADD_0_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ADD_0_GetValue()           PORTCbits.RC1
#define ADD_0_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ADD_0_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ADD_0_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define ADD_0_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define ADD_0_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define ADD_0_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set Relay_A aliases
#define Relay_A_TRIS                 TRISCbits.TRISC3
#define Relay_A_LAT                  LATCbits.LATC3
#define Relay_A_PORT                 PORTCbits.RC3
#define Relay_A_WPU                  WPUCbits.WPUC3
#define Relay_A_ANS                  ANSELCbits.ANSC3
#define Relay_A_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Relay_A_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Relay_A_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Relay_A_GetValue()           PORTCbits.RC3
#define Relay_A_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Relay_A_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Relay_A_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define Relay_A_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define Relay_A_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define Relay_A_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)

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