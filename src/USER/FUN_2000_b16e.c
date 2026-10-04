// Function: FUN_2000_b16e

void FUN_2000_b16e(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(param_3 + 6);
  iVar2 = *(int *)(param_3 + 0xe);
  iVar3 = func_0x0000107d(0x1000,param_1,param_2);
  for (iVar4 = func_0x0000108c(0,param_1,param_2); iVar4 < iVar3 + 1; iVar4 = iVar4 + 1) {
    if (((param_2 != iVar4) && (*(int *)(param_3 + 6) <= iVar4)) && (iVar4 <= iVar1 + iVar2 + 1)) {
      uVar5 = FUN_2000_b4e5(iVar4,param_3);
      if (uVar5 != *(byte *)(param_3 + 0x2f)) {
        FUN_2000_b1d1(iVar4,param_3);
      }
    }
  }
  return;
}

