

#include <xc.h> // include processor files - each processor file is guarded.  

//==============================================================================
//==== Flag Status Program =====================================================
//==============================================================================
typedef struct
{
   unsigned char Relay:1;
   unsigned char Comman_Relay:1;
}FLAG_VALUE;
FLAG_VALUE Flag_Value;

typedef struct
{
   unsigned char Comman_Relay:1;
}COUNT_VALUE;
COUNT_VALUE Count_Value;

//==============================================================================
//==== Define Value Program ====================================================
//==============================================================================
unsigned char ID_Address_00,ID_Address_01,ID_Device;
//==============================================================================
//==== RX ModBus 458 Data ======================================================
//==============================================================================
unsigned char success = 0;
unsigned char head = 0;
unsigned char Buffer,Counter_Keep_data,Keep_data[9];
unsigned int Chack_Sum;
unsigned int Chack_CRC;
//==============================================================================
//==== Address_Device ModBus 458 ===============================================
//==============================================================================
unsigned char Address_Device = 0x15;
unsigned char Function_Code = 0x06; //Writing 
unsigned char Address_ModBus;
unsigned char Function_Control;