// Function: FUN_1000_daea

void __cdecl16near FUN_1000_daea(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x510;
  iVar2 = *(int *)0x466;
  *(int *)0x52a = iVar1 / iVar2;
  *(int *)0x52c = iVar1 / iVar2;
  *(undefined2 *)0x528 = 1;
  puVar3 = (undefined2 *)func_0x00000cf8(0x1000,0x1a,0x40);
  puVar3[0xb] = 0x8001;
  puVar3[0xc] = 0;
  puVar3[7] = *(undefined2 *)0x4f8;
  puVar3[1] = 0xffff;
  puVar3[2] = 0xffff;
  puVar3[5] = *(undefined2 *)0x3a0;
  *puVar3 = 0xb;
  puVar3[8] = 2;
  func_0x00000d24(0,puVar3);
  func_0x00000d2c(0,puVar3);
  *(undefined2 *)0x634 = 0;
  return;
}

