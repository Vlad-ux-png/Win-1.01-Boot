// Function: FUN_2000_7bd2

int FUN_2000_7bd2(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = func_0x000002ba(0x1000,0x42,param_1 * 2 + 2,*(undefined2 *)(param_2 + 0x38));
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x38) = iVar1;
  }
  return iVar1;
}

