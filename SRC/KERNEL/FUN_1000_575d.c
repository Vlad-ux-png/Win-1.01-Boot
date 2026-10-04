// Function: FUN_1000_575d

void __cdecl16near FUN_1000_575d(void)

{
  int iVar1;
  int in_DX;
  int extraout_DX;
  int extraout_DX_00;
  int unaff_DI;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  
  uVar2 = *(undefined2 *)(unaff_DI + 6);
  iVar1 = *(int *)(unaff_DI + 4);
  do {
    if (*(int *)(unaff_DI + 1) == in_DX) {
      FUN_1000_584f();
      FUN_1000_5a42();
      FUN_1000_53c9();
      in_DX = extraout_DX;
    }
    uVar2 = *(undefined2 *)(unaff_DI + 8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar3 = 1;
  *(undefined1 *)(unaff_DI + 0xb) = 0;
  while( true ) {
    FUN_1000_53f5();
    if ((bool)uVar3) break;
    uVar3 = (*(byte *)0x2 & 0x40) == 0;
    if ((!(bool)uVar3) && (uVar3 = *(int *)0x0 == extraout_DX_00, (bool)uVar3)) {
      FUN_1000_53c9();
    }
  }
  return;
}

