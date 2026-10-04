// Function: FUN_1000_df82

void __cdecl16near FUN_1000_df82(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x4e4 = *(undefined2 *)0x460;
  *(undefined2 *)0x5c6 = *(undefined2 *)0x45e;
  *(undefined2 *)0x4e6 = *(undefined2 *)0x434;
  *(undefined2 *)0x5c8 = *(undefined2 *)0x43e;
  uVar2 = *(undefined2 *)0x47e;
  *(undefined2 *)0x5d0 = uVar2;
  *(undefined2 *)0x4ec = uVar2;
  uVar2 = *(undefined2 *)0x480;
  *(undefined2 *)&SUB_0000_05ce = uVar2;
  *(undefined2 *)0x4ee = uVar2;
  puVar1 = (undefined2 *)func_0x00000ca0(0x1000,0x1a,0x40);
  puVar1[7] = *(undefined2 *)0x608;
  puVar1[0xb] = 0xc09;
  puVar1[0xc] = 0x1192;
  puVar1[1] = 0xffff;
  puVar1[2] = 0xffff;
  puVar1[4] = 8;
  *puVar1 = 0xb;
  puVar1[5] = *(undefined2 *)0x3a0;
  func_0x00000cd4(0,puVar1);
  func_0x00000cda(0,puVar1);
  uVar2 = func_0x0000ffff(0,0xc09,0xffff);
  *(undefined2 *)&SUB_0000_0624 = uVar2;
  return;
}

