// Function: FUN_1000_decf

void __cdecl16near FUN_1000_decf(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)func_0x000010c4(0x1000,0x1a,0x40);
  puVar1[7] = *(undefined2 *)0x608;
  puVar1[0xb] = 0xc01;
  puVar1[0xc] = 0xffff;
  puVar1[1] = 0xffff;
  puVar1[2] = 0xffff;
  *puVar1 = 8;
  puVar1[5] = *(undefined2 *)0x3a0;
  puVar1[4] = 2;
  func_0x000010f6(0,puVar1);
  func_0x000010fe(0,puVar1);
  return;
}

