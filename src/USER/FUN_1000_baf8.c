// Function: FUN_1000_baf8

void __stdcall16far FUN_1000_baf8(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  iVar4 = FUN_1000_b9d7(param_1);
  if (iVar4 != 0) {
    uVar5 = func_0x0000ffff(0x1000,0,iVar4);
    bVar6 = *(int *)0x5a != 0;
    bVar1 = bVar6;
    bVar2 = bVar6;
    if (((((*(byte *)(param_1 + 0x33) & 0xc0) == 0) && (*(int *)0x51c == 1)) &&
        (*(int *)(*(int *)0x4dc + 10) == 1)) && (bVar1 = true, *(int *)0x16 == 1)) {
      bVar2 = true;
    }
    if ((*(byte *)(param_1 + 0x33) & 0x20) != 0) {
      bVar1 = true;
    }
    bVar3 = bVar2;
    if (*(int *)0x1be == param_1) {
      bVar1 = true;
      bVar3 = true;
    }
    if ((*(byte *)(param_1 + 0x33) & 0xc0) == 0x80) {
      if ((*(byte *)(param_1 + 0x32) & 4) == 0) {
        bVar1 = true;
      }
      bVar2 = true;
      bVar6 = true;
    }
    func_0x0000146d(0,bVar1,0xf000,uVar5);
    func_0x0000147a(0,bVar2,0xf020,uVar5);
    func_0x00001487(0,bVar6,0xf030,uVar5);
    func_0x00001494(0,0,0xf060,uVar5);
    func_0x0000ffff(0,bVar3,0xf010,uVar5);
  }
  return;
}

