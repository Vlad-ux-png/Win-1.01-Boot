// Function: FUN_1000_5f87

void __cdecl16near FUN_1000_5f87(void)

{
  uint in_AX;
  int iVar1;
  int unaff_BP;
  int unaff_DI;
  int unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (in_AX != 0xffff) {
    if (*(int *)(unaff_BP + 4) != unaff_CS) {
      in_AX = in_AX & 0xfff2;
    }
    *(undefined1 *)(unaff_DI + 0xb) = (char)in_AX;
    if ((in_AX & 0xf00) != 0) {
      in_AX = in_AX & 0xf0ff;
    }
    if ((in_AX & 0x3000) != 0) {
      return;
    }
  }
  return;
}

