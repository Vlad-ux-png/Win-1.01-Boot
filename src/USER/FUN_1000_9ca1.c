// Function: FUN_1000_9ca1

undefined2 __cdecl16near FUN_1000_9ca1(void)

{
  int iVar1;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1000_a2ac();
  iVar2 = *(int *)0x51c;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return 1;
    }
    *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)0x51c;
    iVar1 = FUN_1000_9ce7();
  } while (iVar1 != 0);
  return 0;
}

