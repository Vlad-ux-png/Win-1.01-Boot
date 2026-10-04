// Function: FUN_2000_1c13

void FUN_2000_1c13(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = param_1 + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = param_1;
  if (*(int *)0x51c <= param_1) {
    iVar2 = *(int *)0x51c + -1;
  }
  FUN_2000_1c76(0,iVar2,iVar1,param_1);
  return;
}

