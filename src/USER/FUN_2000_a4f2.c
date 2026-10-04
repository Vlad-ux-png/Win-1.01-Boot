// Function: FUN_2000_a4f2

bool FUN_2000_a4f2(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(param_1 + 0x12) * 2 + 0x40;
  if (*(char *)(param_1 + 0x33) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x12) + 0x20;
  }
  iVar1 = func_0x0000071f(0x1000,0,iVar1,iVar1 >> 0xf,*(undefined2 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 0x20;
  }
  return iVar1 != 0;
}

