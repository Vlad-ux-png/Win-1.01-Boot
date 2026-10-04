// Function: FUN_1000_584f

void __cdecl16near FUN_1000_584f(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(unaff_DI + 10);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 2) & 1) != 0)) && ((*(byte *)(iVar1 + 2) & 0x40) == 0)) {
    piVar2 = (int *)*(int *)(unaff_DI + 0xe);
    piVar3 = (int *)*(undefined2 *)(unaff_DI + 0xc);
    *(undefined2 *)(unaff_DI + 0xc) = piVar3;
    *(int *)(unaff_DI + 0xe) = (int)piVar2;
    *(int *)(unaff_DI + 0x1c) = *(int *)(unaff_DI + 0x1c) + -1;
    piVar3 = (int *)*(undefined2 *)(unaff_DI + 10);
    if (((int *)*(undefined2 *)(unaff_DI + 0x1a) == piVar3) &&
       (*(int *)(unaff_DI + 0x1a) = (int)piVar2, piVar2 == piVar3)) {
      *(int *)(unaff_DI + 0x1a) = *(int *)(unaff_DI + 0x1a) - (int)piVar2;
    }
  }
  return;
}

