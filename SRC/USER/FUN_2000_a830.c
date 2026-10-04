// Function: FUN_2000_a830

int FUN_2000_a830(char param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (((('`' < param_1) && (param_1 < '{')) || ((0xdf < param_1 && (param_1 < 0xf7)))) ||
     ((0xf7 < param_1 && (param_1 < 0xff)))) {
    iVar1 = iVar1 + -0x20;
  }
  return iVar1;
}

