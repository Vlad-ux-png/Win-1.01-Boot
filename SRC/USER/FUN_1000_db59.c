// Function: FUN_1000_db59

void __cdecl16near FUN_1000_db59(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)func_0x00000d43(0x1000,0x1a,0x40);
  puVar1[0xb] = 0x8000;
  puVar1[0xc] = 0;
  *puVar1 = 0x80;
  puVar1[1] = 0xffff;
  puVar1[2] = 0xffff;
  puVar1[5] = *(undefined2 *)0x3a0;
  func_0x00000d76(0,puVar1);
  func_0x00000d7e(0,puVar1);
  return;
}

