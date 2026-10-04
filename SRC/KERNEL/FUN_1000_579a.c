// Function: FUN_1000_579a

void __cdecl16near FUN_1000_579a(void)

{
  char *pcVar1;
  uint in_CX;
  int in_BX;
  undefined2 unaff_DS;
  
  if ((byte)((char)(in_CX >> 8) - 1U) < 0xfe) {
    pcVar1 = (char *)(in_BX + 3);
    *pcVar1 = *pcVar1 + -1;
    if ((*pcVar1 == '\0') && ((in_CX & 1) != 0)) {
      FUN_1000_57b1();
    }
  }
  return;
}

