// Function: FUN_1000_5e52

int FUN_1000_5e52(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_6;
  
  if (param_1 < 1) {
    if (param_1 < 0) {
      iVar1 = -*(int *)0x36;
      if (iVar1 < param_1) {
        iVar1 = param_1;
      }
      local_6 = iVar1 + *(int *)0x36;
      param_1 = iVar1;
    }
  }
  else {
    iVar1 = 0x18 - *(int *)0x3a;
    if (param_1 < iVar1) {
      iVar1 = param_1;
    }
    local_6 = iVar1 + *(int *)0x3a + -1;
    param_1 = iVar1;
  }
  FUN_1000_2b36(local_6);
  return param_1;
}

