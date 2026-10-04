// Function: FUN_1000_f170

int FUN_1000_f170(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x5b8;
  if (param_1 < *(int *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(iVar1 + 2);
  }
  else if (param_1 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 10)) {
    iVar2 = func_0x000001d5(0x1000,*(undefined2 *)(iVar1 + 10),param_1 - *(int *)(iVar1 + 0xc),
                            *(int *)(iVar1 + 4) - *(int *)(iVar1 + 2));
    iVar2 = iVar2 + *(int *)(iVar1 + 2);
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  return iVar2;
}

