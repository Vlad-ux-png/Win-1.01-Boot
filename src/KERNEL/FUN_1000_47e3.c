// Function: FUN_1000_47e3

void __cdecl16near FUN_1000_47e3(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = GLOBALLOCK(in_AX);
  *(undefined2 *)0x24 = (int)uVar1;
  *(undefined2 *)0x26 = (int)((ulong)uVar1 >> 0x10);
  return;
}

