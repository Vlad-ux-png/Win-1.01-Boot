// Function: FUN_1000_f3f5

void FUN_1000_f3f5(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = param_2 - *(int *)0x50a;
  if (iVar1 != 0) {
    if (param_1 == 0) {
      FUN_1000_f473(param_3);
    }
    iVar2 = iVar1;
    if (*(int *)0x3a4 != 0) {
      iVar2 = 0;
    }
    if (*(int *)0x3a4 == 0) {
      iVar1 = 0;
    }
    func_0x0000ffff(0x1000,iVar1,iVar2,0x406);
    if (param_1 == 0) {
      FUN_1000_f473(param_3);
      iVar1 = FUN_1000_f170(param_2,param_3);
      if (iVar1 != *(int *)0x3a8) {
        FUN_1000_f7ee(iVar1,5);
        *(int *)0x3a8 = iVar1;
      }
    }
  }
  return;
}

