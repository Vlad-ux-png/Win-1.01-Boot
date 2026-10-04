// Function: FUN_1000_5ce0

int __cdecl16near FUN_1000_5ce0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_BX;
  undefined1 *unaff_DI;
  int unaff_ES;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined4 uVar4;
  int iStack_6;
  int iStack_4;
  
  uVar4 = FUN_1000_5cba();
  iStack_6 = (int)uVar4;
  if (!(bool)in_ZF) {
    iVar3 = (int)((ulong)uVar4 >> 0x10) + 1;
    if ((char)in_BX == '\b') {
      if (*in_BX == iStack_6) {
        iVar2 = iStack_6 + iVar3;
      }
      else {
        iVar2 = *(int *)(unaff_DI + 8);
      }
      iVar1 = unaff_ES;
      iStack_6 = unaff_ES;
      iStack_4 = unaff_ES + iVar3;
    }
    else {
      iVar2 = *(int *)(unaff_DI + 8);
      iVar1 = iVar2 - iVar3;
      iStack_4 = iVar1;
      if (*in_BX != iStack_6) {
        iStack_6 = unaff_ES;
      }
    }
    iVar3 = FUN_1000_5b69();
    if (iVar3 != 0) {
      *(int *)(unaff_DI + 6) = iVar3;
    }
    *(int *)(unaff_DI + 8) = iStack_4;
    *(int *)(unaff_DI + 6) = iStack_6;
    *(int *)(unaff_DI + 8) = iVar2;
    *(int *)(unaff_DI + 6) = iStack_4;
    if (*(int **)(unaff_DI + 10) != (int *)0x0) {
      **(int **)(unaff_DI + 10) = iVar1 + 1;
    }
    iVar3 = *in_BX;
    *(int *)(unaff_DI + 3) = (*(int *)(unaff_DI + 8) - iVar3) + -1;
    *unaff_DI = 0x4d;
    unaff_DI[5] = 0;
    *(undefined1 **)(unaff_DI + 10) = unaff_DI;
    *(undefined1 **)(unaff_DI + 0xc) = unaff_DI;
    *(undefined1 **)(unaff_DI + 0xe) = unaff_DI;
    iVar3 = FUN_1000_5a42();
    return iVar3;
  }
  return iStack_6;
}

