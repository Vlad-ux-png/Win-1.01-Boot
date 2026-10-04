// Function: FUN_1000_5c27

void __cdecl16near FUN_1000_5c27(void)

{
  int iVar1;
  undefined2 in_DX;
  undefined2 extraout_DX;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar2;
  
  while( true ) {
    if (*(int *)(unaff_DI + 0x1e) != unaff_DI) {
      FUN_1000_5c5e(in_DX);
    }
    iVar1 = FUN_1000_5c5e(in_DX);
    bVar2 = false;
    if ((iVar1 != 0) && (FUN_1000_5aa0(), !bVar2)) {
      return;
    }
    if ((*(byte *)(unaff_DI + 0xb) & 0x30) != 0) {
      return;
    }
    bVar2 = *(int *)(unaff_DI + 2) == unaff_DI;
    if (!bVar2) break;
    FUN_1000_5e3e();
    in_DX = extraout_DX;
    if (bVar2) {
      return;
    }
  }
  return;
}

