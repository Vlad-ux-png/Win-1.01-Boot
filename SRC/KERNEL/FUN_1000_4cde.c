// Function: FUN_1000_4cde

void __cdecl16near FUN_1000_4cde(void)

{
  uint uVar1;
  uint *in_BX;
  undefined2 unaff_DS;
  
  if (in_BX != (uint *)0x0) {
    uVar1 = *in_BX;
    *in_BX = *in_BX ^ uVar1 & 3;
    if ((uVar1 & 2) != 0) {
      LOCK();
      in_BX[2] = 0;
      UNLOCK();
    }
    if ((*(byte *)in_BX[1] & 1) == 0) {
      FUN_1000_4bfb();
    }
    if ((*(byte *)*in_BX & 1) == 0) {
      FUN_1000_4bfb();
    }
  }
  return;
}

