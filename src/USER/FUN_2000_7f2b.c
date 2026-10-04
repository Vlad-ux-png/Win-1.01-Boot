// Function: FUN_2000_7f2b

void FUN_2000_7f2b(int param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    iVar2 = func_0x00001af9(0x1000,param_3);
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - *(int *)(iVar2 + 6);
    uVar3 = func_0x0000159c(0);
    FUN_2000_7928(param_4);
    FUN_2000_7225(iVar2 + 8,uVar3,iVar1,param_4);
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x12) - iVar1;
    func_0x00001b3a(0,param_3);
  }
  else {
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - param_1;
    FUN_2000_7928(param_4);
  }
  return;
}

