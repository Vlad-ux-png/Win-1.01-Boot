// Function: FUN_1000_77b5

void __cdecl16near FUN_1000_77b5(void)

{
  int in_AX;
  int in_BX;
  
  if (in_AX < DAT_1000_5aad) {
    in_AX = DAT_1000_5aad;
  }
  if (DAT_1000_5ab1 <= in_AX) {
    in_AX = DAT_1000_5ab1 + -1;
  }
  DAT_1000_5aa5 = in_AX;
  if (in_BX < DAT_1000_5aaf) {
    in_BX = DAT_1000_5aaf;
  }
  if (DAT_1000_5ab3 <= in_BX) {
    in_BX = DAT_1000_5ab3 + -1;
  }
  DAT_1000_5aa7 = in_BX;
  DAT_1000_5a9f = 0;
  DAT_1000_5aa1 = 0;
  return;
}

