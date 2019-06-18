

#include <xc.h> // include processor files - each processor file is guarded.  

//==============================================================================
//==== Time Management==========================================================
//==============================================================================
typedef struct
{
   unsigned char Time_1ms:1;
   unsigned char Time_10ms:1;
   unsigned char Time_100ms:1;
   unsigned char Time_500ms:1;
   unsigned char Time_1S:1;

}FLAG_TIMER;
FLAG_TIMER Flag_Time;

typedef struct
{
   unsigned char Time_1ms;
   unsigned char Time_10ms;
   unsigned char Time_100ms;
   unsigned char Time_500ms;
   unsigned char Time_1S;
}COUNT_TIMER;
COUNT_TIMER Count_Time;