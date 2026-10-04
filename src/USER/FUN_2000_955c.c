// Function: FUN_2000_955c

void FUN_2000_955c(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0x1000;
  if ((*(byte *)(param_1 + 0x40) & 4) != 0) {
    FUN_2000_9348(0,param_1);
    if ((*(byte *)(param_1 + 0x40) & 0x20) != 0) {
      uVar1 = 0;
      func_0x0000057a(0x1000);
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xdf;
    }
  }
  func_0x000005ce(uVar1,0);
  return;
}

