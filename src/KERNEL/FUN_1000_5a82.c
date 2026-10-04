// Function: FUN_1000_5a82

undefined2 __cdecl16near FUN_1000_5a82(void)

{
  int in_CX;
  undefined2 *in_BX;
  uint unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  do {
    bVar1 = *(uint *)(unaff_DI + 1) < unaff_DI;
    if (*(uint *)(unaff_DI + 1) == unaff_DI) {
      FUN_1000_5aa0();
      if (!bVar1) {
        return unaff_ES;
      }
      if ((char)in_BX == '\x06') {
        return 0;
      }
    }
    unaff_ES = *in_BX;
    in_CX = in_CX + -1;
    if (in_CX == 0) {
      return 0;
    }
  } while( true );
}

