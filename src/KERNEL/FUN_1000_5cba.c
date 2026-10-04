// Function: FUN_1000_5cba

void __cdecl16near FUN_1000_5cba(void)

{
  char in_BH;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((*(int *)(unaff_DI + 10) != 0) && (*(char *)(*(int *)(unaff_DI + 10) + 3) == in_BH)) {
    if ((*(byte *)(unaff_DI + 5) & 8) != 0) {
      return;
    }
    if (*(int *)(unaff_DI + 0x1e) != unaff_DI) {
      return;
    }
  }
  return;
}

