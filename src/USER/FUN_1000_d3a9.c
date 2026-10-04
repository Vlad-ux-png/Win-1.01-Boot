// Function: FUN_1000_d3a9

void __cdecl16near FUN_1000_d3a9(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  FUN_1000_d36f();
  uVar1 = func_0x00000244(0x1000,0xc33,0xffff);
  uVar3 = func_0x0000ffff(0,0xd,0,uVar1);
  uVar1 = *(undefined2 *)0x32e;
  *(undefined2 *)0x5a97 = (int)uVar3;
  *(undefined2 *)0x5a99 = (int)((ulong)uVar3 >> 0x10);
  uVar3 = func_0x0000ffff(0,0,0);
  *(undefined2 *)0x5d4 = (int)uVar3;
  *(undefined2 *)0x5d6 = (int)((ulong)uVar3 >> 0x10);
  iVar2 = func_0x0000ffff(0,0x5f2);
  if (iVar2 != 0xc) {
    func_0x000005e6(0,0xc);
  }
  *(undefined2 *)0x1c0 = 0;
  *(undefined2 *)0x47c = 1;
  func_0x0000ffff(0,0x63e);
  if (*(char *)0x63e == '\0') {
    *(undefined2 *)0x1c0 = 0xffff;
    *(undefined2 *)0x47c = 0;
  }
  *(undefined2 *)0x1b4 = *(undefined2 *)0x47c;
  *(undefined2 *)0x5ab9 = *(undefined2 *)&SUB_0000_0644;
  *(undefined2 *)0x5abb = *(undefined2 *)0x646;
  iVar2 = func_0x0000ffff(0,0x61a);
  if (iVar2 != 4) {
    func_0x0000ffff(0,0xe);
  }
  return;
}

