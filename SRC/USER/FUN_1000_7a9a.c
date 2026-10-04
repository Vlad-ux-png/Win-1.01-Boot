// Function: FUN_1000_7a9a

void __cdecl16near FUN_1000_7a9a(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_1000_5daa = 1;
  bVar2 = DAT_1000_5daf == 0;
  iVar1 = DAT_1000_5dad;
  if ((bVar2) || (FUN_1000_7a75(), iVar1 = DAT_1000_5dad, bVar2)) {
    do {
      bVar2 = iVar1 == 0;
      if (bVar2) {
        return;
      }
      FUN_1000_7a75();
      iVar1 = *(int *)0x0;
    } while (bVar2);
  }
  return;
}

