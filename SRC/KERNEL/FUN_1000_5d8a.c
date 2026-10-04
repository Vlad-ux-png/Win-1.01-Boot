// Function: FUN_1000_5d8a

void __cdecl16near FUN_1000_5d8a(void)

{
  int in_CX;
  uint extraout_DX;
  int *in_BX;
  int iVar1;
  int unaff_DI;
  int unaff_ES;
  bool bVar2;
  
  iVar1 = 0;
  do {
    bVar2 = *(int *)(unaff_DI + 1) == unaff_DI;
    if (!bVar2) {
      FUN_1000_5cba();
      if ((!bVar2) && (*(uint *)(unaff_DI + 3) <= extraout_DX)) {
        if (iVar1 != 0) {
          if (*(uint *)(unaff_DI + 3) <= *(uint *)(unaff_DI + 3)) goto LAB_1000_5dbd;
        }
        iVar1 = unaff_ES;
      }
    }
LAB_1000_5dbd:
    unaff_ES = *in_BX;
    in_CX = in_CX + -1;
    if (in_CX == 0) {
      if (iVar1 != 0) {
        FUN_1000_5dcc();
      }
      return;
    }
  } while( true );
}

