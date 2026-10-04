// Function: FUN_1000_5dcc

undefined4 __cdecl16near FUN_1000_5dcc(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 in_DX;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((*(int *)(unaff_DI + 1) == unaff_DI) && (*(int *)(unaff_DI + 3) != *(int *)(unaff_DI + 3))) {
    FUN_1000_5cf1();
    *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + 1;
    iVar4 = FUN_1000_5a42();
  }
  else {
    uVar1 = *(undefined1 *)(unaff_DI + 5);
    uVar2 = *(undefined2 *)(unaff_DI + 1);
    uVar3 = *(undefined2 *)(unaff_DI + 0xc);
    *(undefined2 *)(unaff_DI + 0xe) = *(undefined2 *)(unaff_DI + 0xe);
    *(undefined2 *)(unaff_DI + 0xc) = uVar3;
    *(undefined2 *)(unaff_DI + 1) = uVar2;
    *(undefined1 *)(unaff_DI + 5) = uVar1;
    FUN_1000_5b69();
    iVar4 = FUN_1000_5a42();
    if (unaff_SI != (int *)0x0) {
      *unaff_SI = iVar4;
      *(undefined2 *)(unaff_DI + 10) = unaff_SI;
    }
  }
  return CONCAT22(in_DX,iVar4);
}

