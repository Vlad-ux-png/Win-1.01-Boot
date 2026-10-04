// Function: WAITEVENT

void WAITEVENT(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int unaff_BP;
  int iVar4;
  
  iVar4 = unaff_BP + 1;
  uVar3 = FUN_1000_367e();
  piVar1 = (int *)0x6;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW2(iVar2,1) != *piVar1 < 0) {
    *(undefined2 *)0x6 = 0;
    FUN_1000_360e();
    return;
  }
  FUN_1000_361d(iVar4);
  return;
}

