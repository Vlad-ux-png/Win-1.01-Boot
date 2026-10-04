// Function: FUN_1000_dc9e

void __cdecl16near FUN_1000_dc9e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = func_0x00000e8f(0x1000,0x1a,0x40);
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)0x608;
  *(undefined2 *)(iVar1 + 0x16) = 0x8003;
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(undefined2 *)(iVar1 + 2) = 0xffff;
  *(undefined2 *)(iVar1 + 4) = 0xffff;
  *(undefined2 *)(iVar1 + 10) = *(undefined2 *)0x3a0;
  *(undefined2 *)(iVar1 + 8) = 0x2c;
  func_0x00000ec2(0,iVar1);
  func_0x00000eca(0,iVar1);
  return;
}

