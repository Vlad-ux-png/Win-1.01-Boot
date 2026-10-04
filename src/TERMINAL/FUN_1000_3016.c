// Function: FUN_1000_3016

void FUN_1000_3016(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  int local_22 [4];
  int local_1a;
  undefined2 local_18;
  
  FUN_1000_30aa();
  uVar3 = 0xd;
  uVar1 = func_0x0000083c(0x1000,0xd);
  *(undefined2 *)0xea8 = uVar1;
  uVar1 = param_1;
  uVar2 = func_0x00001d76(0,param_1);
  func_0x000026db(0,*(undefined2 *)0xea8,uVar2,uVar1,uVar3,uVar2);
  func_0x000023c1(0,0x1386);
  func_0x000021e2(0,local_22);
  func_0x000021a2(0,uVar2,param_1);
  *(int *)0xea6 = local_22[0] + local_1a;
  *(undefined2 *)0xea4 = local_18;
  FUN_1000_2dda(*(int *)0x138c / *(int *)0xea6,*(int *)0x138a / *(int *)0xea4);
  return;
}

