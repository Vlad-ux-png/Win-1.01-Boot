// Function: FUN_2000_c7e5

int FUN_2000_c7e5(char param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ('`' < param_1) {
    iVar1 = iVar1 + -0x20;
  }
  return iVar1;
}

