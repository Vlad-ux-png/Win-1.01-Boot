// Function: FUN_1000_702e

uint __cdecl16near FUN_1000_702e(void)

{
  int in_AX;
  undefined2 unaff_DS;
  
  DAT_1000_54a0 = *(uint *)0x54a0;
  do {
    if (*(int *)(DAT_1000_54a0 - 8) != in_AX) {
      return DAT_1000_54a0;
    }
    DAT_1000_54a0 = DAT_1000_54a0 - 0x10;
  } while (0x5380 < DAT_1000_54a0);
  return DAT_1000_54a0;
}

