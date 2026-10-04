// Function: FUN_2000_205b

void FUN_2000_205b(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  uint uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)(unaff_BP + 6);
  if (*(int *)0x1be == 0) {
    *(int *)0x518 = *(int *)0x518 + iVar2;
  }
  *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)0x4dc;
  for (uVar4 = 0; uVar4 < *(byte *)0x5e2; uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(unaff_BP + -4);
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 0xe;
    piVar1 = (int *)(iVar3 + 6);
    *piVar1 = *piVar1 + iVar2;
  }
  return;
}

