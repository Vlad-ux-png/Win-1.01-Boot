// Function: FUN_1000_4284

/* WARNING: Removing unreachable block (ram,0x10004373) */
/* WARNING: Removing unreachable block (ram,0x10004395) */
/* WARNING: Removing unreachable block (ram,0x100043ac) */
/* WARNING: Removing unreachable block (ram,0x100043b9) */
/* WARNING: Removing unreachable block (ram,0x100043c2) */
/* WARNING: Removing unreachable block (ram,0x100043d2) */
/* WARNING: Removing unreachable block (ram,0x100043d4) */
/* WARNING: Removing unreachable block (ram,0x10004377) */
/* WARNING: Removing unreachable block (ram,0x100043e0) */

void FUN_1000_4284(undefined2 param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined2 extraout_DX;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  undefined2 unaff_DS;
  bool bVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  if (param_2._2_2_ == 0) {
    return;
  }
  iVar6 = param_2._2_2_;
  iVar4 = GLOBALHANDLE(param_2._2_2_);
  pcVar10 = (char *)param_2;
  if (*param_2 == '#') {
    do {
      pcVar10 = pcVar10 + 1;
      if (*pcVar10 == '\0') {
        return;
      }
    } while ((byte)(*pcVar10 - 0x30U) < 10);
  }
  else {
    iVar12 = param_2._2_2_;
    if (*(int *)0x8 != 0) goto LAB_1000_42d1;
    INITATOMTABLE(0);
    if (iVar6 == 0) {
      return;
    }
    if (iVar4 != 0) {
      GLOBALHANDLE(iVar4);
      param_2 = (char *)CONCAT22(extraout_DX,(char *)param_2);
    }
  }
  iVar12 = (int)((ulong)param_2 >> 0x10);
LAB_1000_42d1:
  iVar4 = 0;
  iVar6 = 0;
  iVar7 = 0;
  while( true ) {
    pcVar2 = (char *)param_2;
    param_2._0_2_ = (char *)param_2 + 1;
    if (*pcVar2 == '\0') break;
    cVar5 = (char)iVar6 + '\x01';
    iVar6 = CONCAT11((char)((uint)iVar6 >> 8),cVar5);
    if (cVar5 == '\0') {
      return;
    }
    uVar14 = FUN_1000_4ba7();
    uVar8 = (uint)(uVar14 >> 0x10);
    iVar4 = (int)uVar14;
    iVar7 = (uVar8 >> 1 | (uint)((uVar14 & 0x10000) != 0) << 0xf) +
            (uVar8 << 1 | (uint)((long)uVar14 < 0)) + uVar8 + iVar4;
  }
  if (iVar6 != 0) {
    puVar3 = (uint *)*(int *)0x8 +
             (int)(CONCAT22(CONCAT11((char)((uint)iVar4 >> 8),*pcVar2),iVar7) %
                  (ulong)*(uint *)*(int *)0x8) + 1;
    do {
      do {
        puVar9 = puVar3;
        puVar3 = (uint *)*puVar9;
        puVar11 = (uint *)0x0;
        if (puVar3 == (uint *)0x0) goto LAB_1000_436a;
      } while ((char)puVar3[2] != (char)iVar6);
      bVar13 = true;
      iVar4 = iVar6;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        FUN_1000_4ba7();
        uVar15 = FUN_1000_4ba7();
        iVar4 = (int)((ulong)uVar15 >> 0x10);
        bVar13 = (char)((ulong)uVar15 >> 8) == (char)uVar15;
      } while (bVar13);
      puVar11 = (uint *)*puVar9;
      iVar6 = iVar4;
      puVar3 = puVar11;
    } while (!bVar13);
LAB_1000_436a:
    if (puVar11 != (uint *)0x0) {
      puVar1 = puVar11 + 1;
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 == 0 || SBORROW2(uVar8,1) != (int)*puVar1 < 0) {
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = 0;
        UNLOCK();
        *puVar9 = uVar8;
        LOCALFREE(puVar11);
      }
    }
  }
  return;
}

