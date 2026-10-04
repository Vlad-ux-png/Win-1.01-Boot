// Function: FUN_1000_2f26

void __cdecl16near FUN_1000_2f26(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  uVar4 = FUN_1000_33af(0,0,2);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  func_0x00001dbe(0x1000,0x1386);
  *(int *)0xeb0 = *(int *)0x138c / *(int *)0xea6;
  iVar2 = (*(int *)0x138a + *(int *)0xea4 + -1) / *(int *)0xea4;
  *(int *)0xeae = iVar2;
  if (0x4f < iVar2) {
    iVar2 = 0x50;
  }
  iVar1 = *(int *)0x34;
  *(int *)0x38 = iVar2 + iVar1;
  *(int *)0x40 = iVar2 + iVar1;
  func_0x000020e2(0,*(undefined2 *)0x1530);
  *(undefined2 *)0x44 = *(undefined2 *)0x1386;
  *(undefined2 *)0x48 = *(undefined2 *)0x138a;
  if (*(int *)0x4a < *(int *)0x138c) {
    *(undefined2 *)0x4a = *(undefined2 *)0x138c;
    func_0x00002452(0,0,0x44);
  }
  *(int *)0x46 = *(int *)0xeb0 * *(int *)0xea6;
  if (*(int *)0x138c < *(int *)0x4a) {
    *(undefined2 *)0x4a = *(undefined2 *)0x138c;
    func_0x00002248(0,1,0x44);
  }
  FUN_1000_2dda(*(undefined2 *)0xeb0,*(undefined2 *)0xeae);
  FUN_1000_2b36(uVar3);
  FUN_1000_33af(uVar3,(int)uVar4,4);
  FUN_1000_33af(0,0,3);
  FUN_1000_579b(*(undefined2 *)0x1530);
  return;
}

