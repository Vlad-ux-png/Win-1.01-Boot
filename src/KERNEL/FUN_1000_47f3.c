// Function: FUN_1000_47f3

void __cdecl16near FUN_1000_47f3(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  GLOBALUNLOCK(*(undefined2 *)0x22);
  LOCK();
  iVar1 = *(int *)0x28;
  *(int *)0x28 = -1;
  UNLOCK();
  if (iVar1 != -1) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}

