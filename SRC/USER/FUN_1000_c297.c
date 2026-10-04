// Function: FUN_1000_c297

undefined2 FUN_1000_c297(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x33) & 0xc0) == 0x40) {
    uVar1 = 0;
  }
  else {
    if (((*(byte *)(param_1 + 0x33) & 0x20) == 0) && ((*(byte *)(param_1 + 0x33) & 0x10) != 0)) {
      func_0x0000ffff(0x1000,param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

