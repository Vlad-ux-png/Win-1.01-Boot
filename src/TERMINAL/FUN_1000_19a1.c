// Function: FUN_1000_19a1

int FUN_1000_19a1(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  if ((-1 < param_5) && (param_5 < 0x19)) {
    iVar2 = *(int *)(param_5 * 2 + 0xe6e);
    iVar1 = (*(int *)(iVar2 + 10) - param_4) + *(int *)(iVar2 + 0xc);
    if (iVar1 < 1) {
      iVar2 = 0;
    }
    else {
      if (iVar1 < param_1) {
        param_1 = iVar1;
      }
      FUN_1000_66c8(param_1,param_4 + iVar2 + 0x12,unaff_DS,param_2,param_3);
      iVar2 = param_1;
    }
  }
  return iVar2;
}

