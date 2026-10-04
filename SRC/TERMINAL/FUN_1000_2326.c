// Function: FUN_1000_2326

void FUN_1000_2326(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((((0 < param_1) && (-1 < param_3)) && (param_3 < 0x19)) &&
     ((-1 < param_2 && (param_2 < 0x50)))) {
    iVar1 = *(int *)(param_3 * 2 + 0xe6e);
    iVar2 = (*(int *)(iVar1 + 10) - param_2) + *(int *)(iVar1 + 0xc);
    if (0 < iVar2) {
      if (iVar2 < param_1) {
        param_1 = iVar2;
      }
      FUN_1000_6704(-param_1,iVar2,param_2 + iVar1 + 0x12,unaff_DS);
      FUN_1000_1922(iVar2,param_2,iVar1);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - param_1;
    }
  }
  return;
}

