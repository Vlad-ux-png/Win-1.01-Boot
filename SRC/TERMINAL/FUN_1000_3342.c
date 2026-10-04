// Function: FUN_1000_3342

void FUN_1000_3342(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  iVar1 = func_0x000027ea(0x1000,param_1,param_2,0x34);
  if ((iVar1 == 0) && (*(int *)0x28 != 0)) {
    iVar1 = func_0x0000ffff(0,param_1,param_2,0x3c);
    if (iVar1 != 0) {
      param_2 = *(undefined2 *)0x3a;
    }
  }
  if (iVar1 == 0) {
    uVar2 = CONCAT22(*(int *)0x138c + 1,*(int *)0x138a + 1);
  }
  else {
    uVar2 = FUN_1000_3658(param_1,param_2);
  }
  func_0x0000ffff(0,(int)((ulong)uVar2 >> 0x10),(int)uVar2);
  return;
}

