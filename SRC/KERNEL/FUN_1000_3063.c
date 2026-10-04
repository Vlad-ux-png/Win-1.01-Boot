// Function: FUN_1000_3063

int __stdcall16far FUN_1000_3063(undefined4 param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined2 uVar13;
  
  uVar8 = param_2;
  if (param_3 != 0) {
    uVar8 = 0;
  }
  if (param_1._2_2_ != 0) {
    uVar8 = uVar8 + 0x100;
  }
  uVar8 = uVar8 + 0x8f + (uint)DAT_1000_0021;
  iVar4 = GLOBALALLOC(uVar8 & 0xfff0,0,0x2040);
  if (iVar4 != 0) {
    *(int *)0x1 = iVar4;
    uVar5 = param_2;
    if (param_3 == 0) {
      uVar5 = uVar8 & 0xfff0;
      *(int *)0xa = uVar5 - param_2;
      *(uint *)0xe = uVar5;
      *(uint *)0xc = uVar5;
      param_3 = iVar4;
    }
    *(int *)0x2 = uVar5 - 0x16;
    uVar6 = FUN_1000_09e1(param_3);
    *(undefined2 *)0x4 = uVar6;
    iVar9 = 1;
    iVar11 = (int)param_1;
    iVar7 = 0;
    if (param_1._2_2_ != 0 || iVar11 != 0) {
      iVar9 = iVar4 + (DAT_1000_0021 + 0x8f >> 4);
      BUILDPDB(0x100,iVar11,param_1._2_2_,iVar9,DAT_1000_0010);
      iVar7 = DAT_1000_0012;
      LOCK();
      UNLOCK();
      iVar3 = iVar9;
      *(int *)0x42 = DAT_1000_0012;
      DAT_1000_0012 = iVar3;
      piVar2 = (int *)*(undefined4 *)(iVar11 + 6);
      iVar11 = (int)((ulong)piVar2 >> 0x10);
      piVar10 = (int *)piVar2;
      puVar12 = (undefined1 *)0x5c;
      if (iVar11 != 0 || piVar10 != (int *)0x0) {
        uVar8 = *piVar2 + 2;
        if (0x24 < uVar8) {
          uVar8 = 0x24;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          puVar1 = puVar12;
          puVar12 = puVar12 + 1;
          piVar2 = piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          *puVar1 = (char)*piVar2;
        }
      }
    }
    if (DAT_1000_0021 != 0) {
      *(undefined2 *)0x30 = 0x80;
    }
    FUN_1000_3398(iVar4);
    FUN_1000_319a(iVar4);
    if (iVar9 != 0) {
      *(int *)0x32 = iVar9;
    }
    uVar13 = (undefined2)((ulong)*(undefined4 *)0x2 >> 0x10);
    iVar9 = (int)*(undefined4 *)0x2;
    uVar6 = *(undefined2 *)0x32;
    *(int *)(iVar9 + 8) = iVar7;
    *(undefined2 *)(iVar9 + 4) = uVar6;
    *(undefined2 *)(iVar9 + 0x10) = 0;
    *(undefined2 *)0x34 = 0x80;
    *(undefined2 *)0x36 = uVar6;
    *(undefined2 *)0x6 = 1;
    *(undefined2 *)0x7e = 0x4454;
  }
  return iVar4;
}

