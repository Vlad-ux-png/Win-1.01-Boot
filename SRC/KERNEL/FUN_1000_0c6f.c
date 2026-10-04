// Function: FUN_1000_0c6f

int FUN_1000_0c6f(int param_1,int param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  bool bVar20;
  int *piVar21;
  undefined2 uVar22;
  
  uVar18 = (undefined2)((ulong)param_4 >> 0x10);
  piVar14 = (int *)param_4;
  uVar19 = uVar18;
  iVar9 = FUN_1000_09e1(piVar14[4]);
  if ((iVar9 != 0) ||
     ((iVar9 = GLOBALREALLOC(0,piVar14[3],0,piVar14[4]), piVar14[4] == iVar9 &&
      (iVar9 = FUN_1000_09e1(piVar14[4]), iVar9 != 0)))) {
    puVar11 = (undefined1 *)piVar14[1];
    if (param_1 != param_2) {
      puVar15 = (undefined1 *)0x0;
      puVar17 = (undefined1 *)0x0;
      for (; puVar11 != (undefined1 *)0x0; puVar11 = puVar11 + -1) {
        puVar5 = puVar17;
        puVar17 = puVar17 + 1;
        puVar2 = puVar15;
        puVar15 = puVar15 + 1;
        *puVar5 = *puVar2;
      }
LAB_1000_0d37:
      iVar10 = *(int *)0x3 * 0x10 - (int)puVar17;
      if (iVar10 != 0) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar17;
          puVar17 = puVar17 + 1;
          *puVar2 = 0;
        }
      }
      if ((piVar14[2] & 1U) == 0) {
        iVar10 = 0;
        if (*(int *)0x8 != 0) {
          iVar10 = FUN_1000_09e1(*(undefined2 *)(*(int *)0x8 + 8));
        }
        pbVar16 = (byte *)*(undefined2 *)0x4;
LAB_1000_0d83:
        pbVar3 = pbVar16 + 1;
        uVar12 = (uint)*pbVar16;
        uVar19 = uVar18;
        if (uVar12 != 0) {
          pbVar16 = pbVar16 + 2;
          bVar4 = *pbVar3;
          if (bVar4 != 0) {
            iVar13 = 0xb;
            if (bVar4 == 0xff) goto LAB_1000_0da4;
            iVar13 = 3;
            if (param_3 == bVar4) {
              do {
                if ((iVar10 != 0) &&
                   (((piVar21 = *(int **)(pbVar16 + iVar13 + -2), *piVar21 == 0x581e ||
                     (*piVar21 == -0x2774)) && ((char)piVar21[1] == -0x70)))) {
                  if ((*pbVar16 & 2) == 0) {
                    if (((*(byte *)0xc & 2) != 0) && ((*pbVar16 & 1) != 0)) {
                      *piVar21 = -0x6f70;
                    }
                  }
                  else {
                    *(undefined1 *)piVar21 = 0xb8;
                    *(int *)((int)piVar21 + 1) = iVar10;
                  }
                }
                if (iVar13 != 3) {
                  pbVar16[6] = 0xea;
                  LOCK();
                  uVar19 = *(undefined2 *)(pbVar16 + 9);
                  *(int *)(pbVar16 + 9) = iVar9;
                  UNLOCK();
                  *(undefined2 *)(pbVar16 + 7) = uVar19;
                }
                do {
                  pbVar16 = pbVar16 + iVar13;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_1000_0d83;
LAB_1000_0da4:
                } while ((iVar13 == 0xb) && ((pbVar16[6] == 0xea || (param_3 != pbVar16[8]))));
              } while( true );
            }
            pbVar16 = pbVar16 + uVar12 * 3;
          }
          goto LAB_1000_0d83;
        }
      }
      *(byte *)(piVar14 + 2) = *(byte *)(piVar14 + 2) | 4;
      if ((piVar14[4] & 1U) == 0) {
        *(undefined1 *)(*(int *)0x3e + param_3 + -1) = 0;
      }
      cVar8 = '\0';
      if (((piVar14[2] & 1U) != 0) && ((*(byte *)0xc & 2) != 0)) {
        cVar8 = *(char *)0x2 + -1;
      }
      FUN_1000_63ae(piVar14[2] & 1U,cVar8,iVar9,param_3 - 1,*(int *)0x26 + 1,uVar19);
      return iVar9;
    }
    iVar10 = *piVar14;
    uVar12 = 0;
    iVar13 = *(int *)0x32;
    do {
      bVar20 = iVar10 < 0;
      iVar10 = iVar10 << 1;
      uVar7 = (ulong)CONCAT12(bVar20,uVar12) << 1;
      uVar12 = (uint)uVar7 | (uint)bVar20;
      bVar20 = (uVar7 & 0x10000) != 0;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    pcVar6 = (code *)swi(0x21);
    piVar21 = piVar14;
    uVar22 = uVar19;
    (*pcVar6)();
    if (!bVar20) {
      bVar20 = false;
      pcVar6 = (code *)swi(0x21);
      puVar15 = puVar11;
      puVar17 = (undefined1 *)(*pcVar6)();
      if ((!bVar20) && (puVar17 == puVar15)) {
        puVar1 = (uint *)(piVar14 + 2);
        bVar20 = false;
        puVar17 = puVar11;
        piVar14 = piVar21;
        uVar19 = uVar22;
        if ((*puVar1 & 0x100) != 0) {
          iVar13 = 2;
          pcVar6 = (code *)swi(0x21);
          iVar10 = (*pcVar6)();
          if (bVar20) {
            return 0;
          }
          piVar14 = piVar21;
          uVar19 = uVar22;
          if (iVar10 != iVar13) {
            return 0;
          }
        }
        goto LAB_1000_0d37;
      }
    }
  }
  return 0;
}

