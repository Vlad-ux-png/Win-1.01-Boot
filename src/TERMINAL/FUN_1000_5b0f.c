// Function: FUN_1000_5b0f

void FUN_1000_5b0f(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x430;
  *(undefined2 *)0x124e = param_1;
  *(int *)0x1250 = param_2 + iVar1;
  FUN_1000_5aac(param_1,param_2 + iVar1,*(undefined2 *)0x1254,*(undefined2 *)0x1256);
  return;
}

