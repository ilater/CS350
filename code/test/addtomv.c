/********
 *add to mv 
*********/
#include "syscall.h"
int lock;
int cv;
int monitor;
int val;
int main()
{
  Acquire(0);
  val = GetMonitor(0,0);
  val++;
  SetMonitor(0,0, val);
  Release(0);
  while(1==1)
    {
      Print("Wait for signal", 30, "", "");
      Wait(0,0);
      Print("Received Signal, attempt Acquire\n", 70, "","");
      Acquire(0);
      Print("Acquired lock after release\n",70, "","");
      val = GetMonitor(0,0);
      val++;
      SetMonitor(0,0,val);
      PrintInt("Val incremented to: %d\nRelease lock\n",40, val,0);
      Release(0);
    }
}
