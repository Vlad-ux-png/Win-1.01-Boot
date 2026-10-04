// Function: FUN_1000_2dd6

void __cdecl16near FUN_1000_2dd6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_SI;
  
  if (*(int *)0xa != 0) {
    uVar1 = *(undefined2 *)0x1;
    iVar3 = *(int *)0x22;
    iVar2 = *(int *)0x1c;
    do {
      if (*(int *)(iVar3 + 8) == *(int *)0xa) {
        return;
      }
      iVar3 = iVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

