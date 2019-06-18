/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1823
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void __interrupt() INTERRUPT_InterruptManager (void);
void Chack_ID_Device(void);
void Control_Relay(void);
uint16_t RTU_CalculateChecksum(uint8_t *pData, int16_t length) ;
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
        if(Flag_Time.Time_1S)
        {
            Flag_Time.Time_1S = 0;
            Chack_ID_Device();
            Status_MCU_Toggle();
        } 
        
        if((success == 1)&&(Address_ModBus == ID_Device))
        {
            success = 0;
            char Buff_Chack[7];
            Flag_Value.Relay = Function_Control;
            Control_Relay();
            
            Buff_Chack[0] = Address_Device;
            Buff_Chack[1] = Function_Code;
            Buff_Chack[2] = ID_Device;
            Buff_Chack[3] = Flag_Value.Relay;
            
            Chack_CRC = RTU_CalculateChecksum(&Buff_Chack,4);
            EUSART_Write(Address_Device);
            EUSART_Write(Function_Code);
            EUSART_Write(ID_Device);
            EUSART_Write(Flag_Value.Relay);
            EUSART_Write(Chack_CRC);
            EUSART_Write(Chack_CRC>>8);
        }
        
    }
}
/**
 End of File
*/
void __interrupt() INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(INTCONbits.TMR0IE == 1 && INTCONbits.TMR0IF == 1)
    {
        TMR0_ISR();
        if(++Count_Time.Time_10ms >= 10)
        {
            Count_Time.Time_10ms = 0;
            Flag_Time.Time_10ms = 1;
            if(++Count_Time.Time_100ms >= 10)
            {
                Count_Time.Time_100ms = 0;
                Flag_Time.Time_100ms = 1;
                if(--Count_Value.Comman_Relay==0)
                {
                    Relay_A_SetLow();
                    Relay_B_SetLow();
                }
                if(++Count_Time.Time_500ms >= 5)
                {
                    Count_Time.Time_500ms = 0;
                    Flag_Time.Time_500ms = 1;
                    if(++Count_Time.Time_1S >= 2)
                    {
                        Count_Time.Time_1S = 0;
                        Flag_Time.Time_1S = 1;
                    }
                }
            }
        }
    }
    if(INTCONbits.PEIE == 1)
    {
        if(PIE1bits.TXIE == 1 && PIR1bits.TXIF == 1)
        {
            EUSART_TxDefaultInterruptHandler();
        } 
        else if(PIE1bits.RCIE == 1 && PIR1bits.RCIF == 1)
        {
            EUSART_RxDefaultInterruptHandler();
            Buffer = EUSART_Read();
            if(head == 0){
                if(Buffer == Address_Device)
                {
                    Counter_Keep_data = 1;
                    Keep_data[Counter_Keep_data] = Buffer;
                    head = 1;
                }
            }else if(head == 1)
            {
                if(Buffer == Function_Code)
                {
                    Counter_Keep_data = 2;
                    Keep_data[Counter_Keep_data] = Buffer;
                    head = 2;
                }
            }else if(head == 2)
            {
                Keep_data[++Counter_Keep_data] = Buffer;   
                if(Counter_Keep_data >= 6)
                {
                    char Buff_Data[6];
                    unsigned int Cal_CRC;
                    Buff_Data[0] = Keep_data[1];
                    Buff_Data[1] = Keep_data[2];
                    Buff_Data[2] = Keep_data[3];
                    Buff_Data[3] = Keep_data[4];
                    Buff_Data[4] = Keep_data[5];
                    Buff_Data[5] = Keep_data[6];
                    Cal_CRC = RTU_CalculateChecksum(&Buff_Data,4);
                    Chack_Sum = (Keep_data[5]<<8)|Keep_data[6];
                    if(Cal_CRC == Chack_Sum)
                    {
                        success = 1;
                        Address_ModBus = Keep_data[3];
                        Function_Control = Keep_data[4];
                    }   
                    head = 0;
                }
            }
            else
            {
                head = 0;
            }
        } 
        else
        {
            //Unhandled Interrupt
        }
    }      
}

void Chack_ID_Device(void)
{
    if(ADD_0_GetValue()== 0)
    {
        ID_Address_00 = 1;
    }
    else if(ADD_0_GetValue() == 1)
    {
        ID_Address_00 = 0;
    }

    if(ADD_1_GetValue()== 0)
    {
        ID_Address_01 = 1;
    }
    else if(ADD_1_GetValue() == 1)
    {
        ID_Address_01 = 0;
    }

    ID_Device = (ID_Address_01<<1)|ID_Address_00;
}

void Control_Relay(void)
{
    if(Flag_Value.Relay)
    {
        Relay_A_SetHigh();
        Relay_B_SetLow(); 
        Count_Value.Comman_Relay = 5; //count time on relay 500mS
    }
    else if(!Flag_Value.Relay)
    {
        Relay_A_SetLow();
        Relay_B_SetHigh();
        Count_Value.Comman_Relay = 5; //count time on relay 500mS
    }
}

uint16_t RTU_CalculateChecksum(uint8_t *pData, int16_t length) 
{ 
    uint16_t crc = 0xFFFF; 
    int8_t pos, i; 
     
    for(pos = 0; pos < length; pos++) 
    { 
        crc ^= (uint16_t)pData[pos]; 

        for(i = 8; i != 0; i--) 
        { 
            if ((crc & 0x0001) != 0) 
            { 
                crc >>= 1; 
                crc ^= 0xA001; 
                 
            } else { 
                crc >>= 1; 
            } 
        } 
    } 
    return crc; 
}