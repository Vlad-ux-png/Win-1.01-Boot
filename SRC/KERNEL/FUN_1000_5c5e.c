// Function: FUN_1000_5c5e

int __cdecl16near FUN_1000_5c5e(void)

{
  int iVar1;
  int *in_BX;
  int unaff_DI;
  int unaff_ES;
  undefined2 unaff_DS;
  bool bVar2;
  int iStack_2;
  
  iVar1 = *(int *)(unaff_DI + 4);
  iStack_2 = 0;
  do {
    if (*(int *)(unaff_DI + 1) == unaff_DI) {
      do {
        if (((*(byte *)(unaff_DI + 0xb) & 0x10) != 0) ||
           (bVar2 = *(int *)(unaff_DI + 2) == unaff_DI, !bVar2)) break;
        FUN_1000_5ce0();
      } while ((!bVar2) || (FUN_1000_5d8a(), !bVar2));
      if (((((char)in_BX == '\x06') && (iStack_2 != unaff_ES)) &&
          (*(int *)(unaff_DI + 1) == unaff_DI)) &&
         ((iStack_2 == 0 ||
          (((*(int *)(unaff_DI + 0x1e) == unaff_DI || ((*(byte *)(unaff_DI + 0xb) & 8) == 0)) &&
           (*(uint *)(unaff_DI + 3) <= *(uint *)(unaff_DI + 3))))))) {
        iStack_2 = unaff_ES;
      }
    }
    unaff_ES = *in_BX;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return iStack_2;
    }
  } while( true );
}

