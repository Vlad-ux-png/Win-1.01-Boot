// Function: FUN_1000_5ae5

void FUN_1000_5ae5(undefined2 param_1,int param_2)

{
  undefined2 unaff_DS;
  
  param_2 = param_2 + *(int *)0x430;
  *(undefined2 *)0x1254 = param_1;
  *(int *)0x1256 = param_2;
  *(undefined2 *)0x124e = param_1;
  *(int *)0x1250 = param_2;
  FUN_1000_5aac(param_1,param_2,param_1,param_2);
  return;
}

