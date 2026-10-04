// Function: FUN_2000_8426

bool FUN_2000_8426(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  uVar3 = *(undefined2 *)(param_1 + 0x36);
  iVar2 = func_0x00001922(0x1000,uVar3);
  iVar1 = *(int *)(iVar2 + 2);
  func_0x0000194f(0,*(undefined2 *)(param_1 + 0x36),uVar3,iVar2);
  return iVar1 != -1;
}

