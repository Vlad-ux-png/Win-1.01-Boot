// Function: FUN_2000_0ce8

void FUN_2000_0ce8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x634;
  piVar1 = (int *)(iVar2 + 0x28);
  *piVar1 = *piVar1 - param_1;
  piVar1 = (int *)(iVar2 + 0x20);
  *piVar1 = *piVar1 - param_1;
  func_0x0000ffff(0x1000,-param_1);
  *(undefined2 *)0x526 = 1;
  func_0x0000ffff(0);
  return;
}

