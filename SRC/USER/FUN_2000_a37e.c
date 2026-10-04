// Function: FUN_2000_a37e

undefined2 FUN_2000_a37e(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (((*(char *)(param_3 + 0x33) == '\0') || (param_1 < -1)) ||
     (*(int *)(param_3 + 0x10) < param_1)) {
    uVar1 = 0xffff;
  }
  else {
    if (param_1 == -1) {
      for (iVar2 = 0; iVar2 < *(int *)(param_3 + 0x10); iVar2 = iVar2 + 1) {
        FUN_2000_b48c(param_2,iVar2,param_3);
      }
    }
    else {
      FUN_2000_b48c(param_2,param_1,param_3);
    }
    FUN_2000_b241(0,0,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

