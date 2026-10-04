// Function: FUN_2000_b122

void FUN_2000_b122(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(param_2 + 6);
  iVar2 = *(int *)(param_2 + 0xe);
  for (iVar4 = 0; iVar4 < *(int *)(param_2 + 0x10); iVar4 = iVar4 + 1) {
    if (((param_1 != iVar4) && (*(int *)(param_2 + 6) <= iVar4)) && (iVar4 <= iVar1 + iVar2 + 1)) {
      iVar3 = FUN_2000_b4e5(iVar4,param_2);
      if (iVar3 != 0) {
        FUN_2000_b1d1(iVar4,param_2);
      }
    }
    FUN_2000_b48c(0,iVar4,param_2);
  }
  return;
}

