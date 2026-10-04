// Function: FUN_1000_df25

void __cdecl16near FUN_1000_df25(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)func_0x0000114b(0x1000,0x1a,0x40);
  puVar1[0xb] = 0x8004;
  puVar1[0xc] = 0;
  puVar1[8] = *(undefined2 *)0x636;
  *puVar1 = 3;
  puVar1[1] = 0xffff;
  puVar1[2] = 0xffff;
  puVar1[5] = *(undefined2 *)0x3a0;
  func_0x00001182(0,puVar1);
  func_0x0000118a(0,puVar1);
  *(undefined2 *)0x5b2 = 0;
  *(undefined2 *)0x658 = 0;
  return;
}

