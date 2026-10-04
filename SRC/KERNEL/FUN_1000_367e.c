// Function: FUN_1000_367e

void __cdecl16near FUN_1000_367e(void)

{
  int in_AX;
  undefined2 unaff_CS;
  
  if (in_AX == 0) {
    unaff_CS = 0x1000;
    in_AX = DAT_1000_0018;
  }
  if (*(int *)0x7e == 0x4454) {
    return;
  }
  FATALEXIT(unaff_CS,0x301);
  return;
}

