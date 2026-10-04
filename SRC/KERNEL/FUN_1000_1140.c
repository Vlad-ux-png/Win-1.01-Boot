// Function: FUN_1000_1140

undefined2
FUN_1000_1140(undefined2 param_1,uint param_2,undefined2 param_3,int param_4,byte *param_5,
             int param_6,int param_7,undefined2 param_8)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  int *piVar11;
  int unaff_SS;
  bool bVar12;
  undefined1 uVar13;
  long lVar14;
  undefined4 uVar15;
  byte bVar16;
  uint local_a;
  uint local_8;
  uint local_6;
  
  lVar4 = CONCAT22(local_8,local_a);
  if (param_6 == 0 && param_7 == 0) {
    bVar12 = false;
    uVar10 = 0;
    pcVar3 = (code *)swi(0x21);
    lVar14 = (*pcVar3)();
    uVar13 = true;
    lVar4 = lVar14;
    lVar5 = CONCAT22(local_8,local_a);
    if (bVar12) goto LAB_1000_119a;
  }
  do {
    local_8 = (uint)((ulong)lVar4 >> 0x10);
    local_a = (uint)lVar4;
    iVar8 = param_6;
    if (param_6 == 0) {
      uVar13 = false;
      if (param_7 == 0) {
        pcVar3 = (code *)swi(0x21);
        uVar10 = local_8;
        lVar14 = (*pcVar3)();
        lVar5 = lVar4;
        if (!(bool)uVar13) {
          uVar10 = 8;
          uVar13 = CARRY2(local_8,(uint)(0xfff7 < local_a));
          pcVar3 = (code *)swi(0x21);
          lVar14 = (*pcVar3)();
          lVar5 = lVar4 + 8;
        }
LAB_1000_119a:
        lVar4 = lVar5;
        param_5 = (byte *)((ulong)lVar14 >> 0x10);
        if ((bool)uVar13) {
          return 0;
        }
        iVar8 = unaff_SS;
        if ((uint)lVar14 != uVar10) {
          return 0;
        }
      }
      else {
        iVar8 = FUN_1000_09e1(param_7);
      }
    }
    piVar11 = *(int **)(param_5 + 2);
    iVar6 = *(int *)(param_5 + 6);
    local_6 = 0;
    if ((param_5[1] & 3) == 0) {
      uVar10 = (uint)param_5[4];
      if (uVar10 == 0) {
        return 0;
      }
      uVar9 = param_8;
      if (param_5[4] == 0xff) goto LAB_1000_11f9;
      if (*(uint *)0x1c <= uVar10 - 1) {
        return 0;
      }
      iVar8 = (uVar10 - 1) * 10 + *(int *)0x22;
      if ((*(byte *)(iVar8 + 4) & 0x40) == 0) {
        uVar7 = FUN_1000_0e71(param_1,param_1,uVar10,param_8);
      }
      else {
        uVar7 = FUN_1000_0b1f(iVar8,param_8);
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_1000_09e1(uVar7);
        }
      }
      uVar15 = CONCAT22(uVar7,iVar6);
      if (uVar10 == 0) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_5 + 4) == 0) {
        return 0;
      }
      uVar9 = *(undefined2 *)((*(int *)(param_5 + 4) + -1) * 2 + *(int *)0x28);
      if ((param_5[1] & 3) != 1) {
        uVar15 = FUN_1000_0b06(iVar6,param_1,param_8);
        iVar6 = FUN_1000_0737(uVar15,uVar9);
        if (iVar6 == 0) {
          return 0;
        }
      }
LAB_1000_11f9:
      uVar15 = FUN_1000_069f(iVar6,uVar9);
      if (*(int *)0x0 == 0x454e) {
        local_6 = 1;
      }
    }
    iVar8 = param_6;
    if ((param_6 == 0) && (iVar8 = unaff_SS, param_7 != 0)) {
      iVar8 = FUN_1000_09e1(param_7);
    }
    bVar16 = *param_5 & 7;
    uVar10 = (uint)(param_5[1] & 4);
    uVar9 = FUN_1000_09e1(param_3);
    iVar8 = (int)((ulong)uVar15 >> 0x10);
    iVar6 = (int)uVar15;
    if (bVar16 == 2) {
      if ((local_6 & param_2) == 0) {
        if (uVar10 == 0) {
          do {
            LOCK();
            piVar1 = piVar11;
            piVar11 = (int *)*piVar1;
            *piVar1 = iVar8;
            UNLOCK();
          } while (piVar11 != (int *)0xffff);
        }
        else {
          *piVar11 = *piVar11 + iVar8;
        }
      }
      else if (uVar10 == 0) {
        do {
          LOCK();
          piVar2 = (int *)*piVar11;
          *piVar11 = iVar8;
          UNLOCK();
          piVar11[-1] = iVar6;
          piVar11 = piVar2;
        } while (piVar2 != (int *)0xffff);
      }
      else {
        *piVar11 = *piVar11 + iVar8;
        piVar11[-1] = piVar11[-1] + iVar6;
      }
    }
    else if (bVar16 == 3) {
      if (uVar10 == 0) {
        do {
          LOCK();
          piVar2 = (int *)*piVar11;
          *piVar11 = iVar6;
          UNLOCK();
          piVar11[1] = iVar8;
          piVar11 = piVar2;
        } while (piVar2 != (int *)0xffff);
      }
      else {
        *piVar11 = *piVar11 + iVar6;
        piVar11[1] = piVar11[1] + iVar8;
      }
    }
    else if (bVar16 == 5) {
      if (uVar10 == 0) {
        do {
          LOCK();
          piVar1 = piVar11;
          piVar11 = (int *)*piVar1;
          *piVar1 = iVar6;
          UNLOCK();
        } while (piVar11 != (int *)0xffff);
      }
      else {
        *piVar11 = *piVar11 + iVar6;
      }
    }
    param_5 = param_5 + 8;
    iVar8 = param_4 + -1;
    bVar12 = param_4 < 1;
    param_4 = iVar8;
    if (iVar8 == 0 || bVar12) {
      return 1;
    }
  } while( true );
}

