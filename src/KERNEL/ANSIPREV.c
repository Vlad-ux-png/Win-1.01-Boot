// Function: ANSIPREV

void ANSIPREV(void)

{
  uint unaff_SI;
  uint uVar1;
  uint unaff_DI;
  bool bVar2;
  
  FUN_1000_4a74();
  if ((unaff_SI != unaff_DI) && (bVar2 = false, DAT_1000_0061 != '\0')) {
    do {
      uVar1 = unaff_DI + 1;
      FUN_1000_4bcd();
      if (!bVar2) {
        uVar1 = unaff_DI + 2;
      }
      bVar2 = true;
      unaff_DI = uVar1;
    } while (uVar1 < unaff_SI);
  }
  FUN_1000_4a85();
  return;
}

