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

// get/set LED_Yellow aliases
#define LED_Yellow_TRIS                 TRISAbits.TRISA2
#define LED_Yellow_LAT                  LATAbits.LATA2
#define LED_Yellow_PORT                 PORTAbits.RA2
#define LED_Yellow_WPU                  WPUAbits.WPUA2
#define LED_Yellow_ANS                  ANSELAbits.ANSA2
#define LED_Yellow_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_Yellow_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_Yellow_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_Yellow_GetValue()           PORTAbits.RA2
#define LED_Yellow_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_Yellow_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_Yellow_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_Yellow_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_Yellow_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_Yellow_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_Green aliases
#define LED_Green_TRIS                 TRISAbits.TRISA4
#define LED_Green_LAT                  LATAbits.LATA4
#define LED_Green_PORT                 PORTAbits.RA4
#define LED_Green_WPU                  WPUAbits.WPUA4
#define LED_Green_ANS                  ANSELAbits.ANSA4
#define LED_Green_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_Green_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_Green_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_Green_GetValue()           PORTAbits.RA4
#define LED_Green_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_Green_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_Green_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_Green_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_Green_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_Green_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_Red aliases
#define LED_Red_TRIS                 TRISAbits.TRISA5
#define LED_Red_LAT                  LATAbits.LATA5
#define LED_Red_PORT                 PORTAbits.RA5
#define LED_Red_WPU                  WPUAbits.WPUA5
#define LED_Red_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_Red_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_Red_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_Red_GetValue()           PORTAbits.RA5
#define LED_Red_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_Red_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_Red_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_Red_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set ADD_0 aliases
#define ADD_0_TRIS                 TRISCbits.TRISC0
#define ADD_0_LAT                  LATCbits.LATC0
#define ADD_0_PORT                 PORTCbits.RC0
#define ADD_0_WPU                  WPUCbits.WPUC0
#define ADD_0_ANS                  ANSELCbits.ANSC0
#define ADD_0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ADD_0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ADD_0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ADD_0_GetValue()           PORTCbits.RC0
#define ADD_0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ADD_0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ADD_0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define ADD_0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define ADD_0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define ADD_0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set ADD_1 aliases
#define ADD_1_TRIS                 TRISCbits.TRISC1
#define ADD_1_LAT                  LATCbits.LATC1
#define ADD_1_PORT                 PORTCbits.RC1
#define ADD_1_WPU                  WPUCbits.WPUC1
#define ADD_1_ANS                  ANSELCbits.ANSC1
#define ADD_1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ADD_1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ADD_1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ADD_1_GetValue()           PORTCbits.RC1
#define ADD_1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ADD_1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ADD_1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define ADD_1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define ADD_1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define ADD_1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set SSR2 aliases
#define SSR2_TRIS                 TRISCbits.TRISC2
#define SSR2_LAT                  LATCbits.LATC2
#define SSR2_PORT                 PORTCbits.RC2
#define SSR2_WPU                  WPUCbits.WPUC2
#define SSR2_ANS                  ANSELCbits.ANSC2
#define SSR2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SSR2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SSR2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SSR2_GetValue()           PORTCbits.RC2
#define SSR2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SSR2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SSR2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SSR2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SSR2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SSR2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SSR1 aliases
#define SSR1_TRIS                 TRISCbits.TRISC3
#define SSR1_LAT                  LATCbits.LATC3
#define SSR1_PORT                 PORTCbits.RC3
#define SSR1_WPU                  WPUCbits.WPUC3
#define SSR1_ANS                  ANSELCbits.ANSC3
#define SSR1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SSR1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SSR1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SSR1_GetValue()           PORTCbits.RC3
#define SSR1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SSR1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SSR1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SSR1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SSR1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SSR1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

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