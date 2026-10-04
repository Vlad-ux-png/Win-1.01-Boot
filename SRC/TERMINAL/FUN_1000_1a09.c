// Function: FUN_1000_1a09

void FUN_1000_1a09(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  if ((((-1 < param_5) && (param_5 < 0x19)) && (-1 < param_4)) && (param_4 < 0x50)) {
    iVar1 = *(int *)(param_5 * 2 + 0xe6e);
    iVar2 = 0x50 - param_4;
    if (param_1 < iVar2) {
      iVar2 = param_1;
    }
    if (0 < iVar2) {
      FUN_1000_66c8(iVar2,param_2,param_3,param_4 + iVar1 + 0x12,unaff_DS);
      if (*(int *)(iVar1 + 0xc) == 0) {
        *(int *)(iVar1 + 10) = param_4;
      }
      iVar3 = *(int *)(iVar1 + 10) + *(int *)(iVar1 + 0xc);
      iVar4 = param_4 + iVar2;
      iVar5 = param_4;
      if (*(int *)(iVar1 + 10) <= param_4) {
        iVar5 = *(int *)(iVar1 + 10);
      }
      *(int *)(iVar1 + 10) = iVar5;
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      *(int *)(iVar1 + 0xc) = iVar4 - *(int *)(iVar1 + 10);
      FUN_1000_1922(iVar2,param_4,iVar1);
    }
  }
  return;
}

