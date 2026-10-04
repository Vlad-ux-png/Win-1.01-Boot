// Function: FUN_1000_4f1e

void __cdecl16near FUN_1000_4f1e(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  LOCK();
  iVar1 = *(int *)(*(int *)0x6 + 0x1a);
  *(int *)(*(int *)0x6 + 0x1a) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    return;
  }
  FATALEXIT(unaff_CS,0x140);
  return;
}

