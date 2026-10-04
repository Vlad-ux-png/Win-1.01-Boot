// Function: FUN_1000_dbf6

void __cdecl16near FUN_1000_dbf6(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)func_0x00000deb(0x1000,0x1a,0x40);
  puVar1[7] = *(undefined2 *)0x608;
  puVar1[0xb] = 0x8002;
  puVar1[0xc] = 0;
  puVar1[1] = 0xffff;
  puVar1[2] = 0xffff;
  puVar1[4] = 0x18;
  puVar1[5] = *(undefined2 *)0x3a0;
  *puVar1 = 8;
  func_0x00000e1e(0,puVar1);
  func_0x00000e26(0,puVar1);
  return;
}

