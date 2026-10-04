// Function: FUN_1000_388e

void __cdecl16near FUN_1000_388e(void)

{
  char cVar1;
  
  cVar1 = DAT_1000_0053;
  LOCK();
  DAT_1000_0053 = 0;
  UNLOCK();
  if (cVar1 != '\0') {
    DISABLEDOS(0);
    uRam00000080 = DAT_1000_0076;
    uRam00000082 = DAT_1000_0078;
    uRam00000084 = DAT_1000_007a;
    uRam00000086 = DAT_1000_007c;
    uRam0000009c = DAT_1000_0082;
    uRam0000009e = DAT_1000_0084;
  }
  return;
}

