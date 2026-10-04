// Function: FUN_1000_4bcd

void __cdecl16near FUN_1000_4bcd(void)

{
  byte in_AL;
  byte bVar1;
  
  if (DAT_1000_0061 != '\0') {
    bVar1 = (byte)((uint)DAT_1000_0055 >> 8);
    if ((byte)DAT_1000_0055 <= bVar1) {
      if ((in_AL < (byte)DAT_1000_0055) || (bVar1 < in_AL)) {
        bVar1 = (byte)((uint)DAT_1000_0057 >> 8);
        if (bVar1 < (byte)DAT_1000_0057) {
          return;
        }
        if (in_AL < (byte)DAT_1000_0057) {
          return;
        }
        if (bVar1 < in_AL) {
          return;
        }
      }
      return;
    }
  }
  return;
}

