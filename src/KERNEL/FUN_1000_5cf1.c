// Function: FUN_1000_5cf1

undefined2 __cdecl16near FUN_1000_5cf1(void)

{
  int in_AX;
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  int iVar3;
  int *in_BX;
  undefined1 *unaff_DI;
  int unaff_ES;
  undefined2 unaff_DS;
  int iStack_4;
  int iStack_2;
  
  iVar3 = in_DX + 1;
  if ((char)in_BX == '\b') {
    if (*in_BX == in_AX) {
      iStack_2 = in_AX + iVar3;
    }
    else {
      iStack_2 = *(int *)(unaff_DI + 8);
    }
    iVar1 = unaff_ES;
    in_AX = unaff_ES;
    iStack_4 = unaff_ES + iVar3;
  }
  else {
    iStack_2 = *(int *)(unaff_DI + 8);
    iVar1 = iStack_2 - iVar3;
    iStack_4 = iVar1;
    if (*in_BX != in_AX) {
      in_AX = unaff_ES;
    }
  }
  iVar3 = FUN_1000_5b69();
  if (iVar3 != 0) {
    *(int *)(unaff_DI + 6) = iVar3;
  }
  *(int *)(unaff_DI + 8) = iStack_4;
  *(int *)(unaff_DI + 6) = in_AX;
  *(int *)(unaff_DI + 8) = iStack_2;
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
  uVar2 = FUN_1000_5a42();
  return uVar2;
}

