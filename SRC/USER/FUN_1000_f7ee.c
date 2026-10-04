// Function: FUN_1000_f7ee

void FUN_1000_f7ee(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x3a4;
  uVar2 = *(undefined2 *)0x628;
  if (iVar1 == 0) {
    uVar3 = 0x114;
  }
  else {
    uVar3 = 0x115;
  }
  func_0x0000ffff(0x1000,param_1,*(undefined2 *)0x654,param_2,uVar3,*(undefined2 *)0x3a6);
  *(undefined2 *)0x628 = uVar2;
  *(int *)0x3a4 = iVar1;
  return;
}

