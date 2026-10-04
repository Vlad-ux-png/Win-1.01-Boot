// Function: FUN_1000_dd42

void __cdecl16near FUN_1000_dd42(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 local_8;
  
  iVar3 = func_0x0000ffff(0x1000);
  if ((iVar3 == 2) && (iVar3 = func_0x0000ffff(0,0,0xc29,0xf5a), iVar3 != -1)) {
    uVar7 = func_0x00000f39(0,2,0,0,iVar3);
    local_8 = func_0x0000ffff(0,uVar7,0x42);
    piVar8 = (int *)func_0x0000ffff(0,local_8);
    uVar9 = (undefined2)((ulong)piVar8 >> 0x10);
    piVar4 = (int *)piVar8;
    func_0x0000ffff(0,0,0,0,iVar3);
    func_0x0000ffff(0,(int)uVar7,piVar8,iVar3);
    func_0x0000ffff(0,iVar3);
    func_0x0000ffff(0,0xc29,0xffff);
    iVar3 = *piVar8;
    if (iVar3 == 1) {
      func_0x0000ffff(0,piVar8,piVar4 + 2,uVar9);
      func_0x00000388(0,local_8);
      *(undefined2 *)0x20 = 0;
      *(undefined2 *)0x24 = 1;
      uVar9 = 1;
    }
    else {
      if (iVar3 < 2) {
        return;
      }
      if (3 < iVar3) {
        return;
      }
      iVar1 = piVar4[6];
      iVar2 = piVar4[7];
      if (iVar3 == 3) {
        iVar5 = 8;
      }
      else {
        iVar5 = 6;
      }
      uVar6 = func_0x000001b5(0,piVar4 + iVar5,uVar9,piVar4[5],piVar4[4],piVar4[3],piVar4[2]);
      if (iVar3 == 3) {
        func_0x0000ffff(0,iVar2,iVar1,uVar6);
      }
      func_0x00000fa3(0,local_8);
      func_0x0000ffff(0,local_8);
      *(undefined2 *)0x20 = 0;
      *(undefined2 *)0x24 = 1;
      uVar9 = 2;
      local_8 = uVar6;
    }
    func_0x0000ffff(0,local_8,uVar9);
    func_0x0000ffff(0);
  }
  return;
}

