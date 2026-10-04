// Function: SETTASKQUEUE

undefined2 __stdcall16far SETTASKQUEUE(void)

{
  undefined2 uVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  FUN_1000_366c();
  LOCK();
  uVar1 = *(undefined2 *)0x12;
  *(undefined2 *)0x12 = in_BX;
  UNLOCK();
  return uVar1;
}

