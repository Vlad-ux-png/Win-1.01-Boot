// Function: FUN_2000_1c46

void FUN_2000_1c46(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    iVar1 = param_1 + -1;
  }
  iVar2 = param_1;
  if (param_1 + 1 != *(int *)0x51c) {
    iVar2 = param_1 + 1;
  }
  FUN_2000_1c76(param_2,iVar2,iVar1,param_1);
  return;
}

