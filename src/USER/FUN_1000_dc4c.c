// Function: FUN_1000_dc4c

void __cdecl16near FUN_1000_dc4c(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = func_0x00000e3d(0x1000,0x1a,0x40);
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)0x608;
  *(undefined2 *)(iVar1 + 0x16) = 0xbfa;
  *(undefined2 *)(iVar1 + 0x18) = 0xffff;
  *(undefined2 *)(iVar1 + 2) = 0xffff;
  *(undefined2 *)(iVar1 + 4) = 0xffff;
  *(undefined2 *)(iVar1 + 8) = 6;
  *(undefined2 *)(iVar1 + 10) = *(undefined2 *)0x3a0;
  func_0x00000e70(0,iVar1);
  func_0x00000e78(0,iVar1);
  return;
}

