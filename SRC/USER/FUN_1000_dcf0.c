// Function: FUN_1000_dcf0

void __cdecl16near FUN_1000_dcf0(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = func_0x00000b39(0x1000,0x1a,0x40);
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)0x656;
  *(undefined2 *)(iVar1 + 0x16) = 0xbf5;
  *(undefined2 *)(iVar1 + 0x18) = 0xffff;
  *(undefined2 *)(iVar1 + 2) = 0xffff;
  *(undefined2 *)(iVar1 + 4) = 0xffff;
  *(undefined2 *)(iVar1 + 8) = 6;
  *(undefined2 *)(iVar1 + 10) = *(undefined2 *)0x3a0;
  func_0x0000ffff(0,iVar1);
  func_0x00000b9b(0,iVar1);
  return;
}

