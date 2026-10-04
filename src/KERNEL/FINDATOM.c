// Function: FINDATOM

/* WARNING: Removing unreachable block (ram,0x10004371) */
/* WARNING: Removing unreachable block (ram,0x1000437c) */
/* WARNING: Removing unreachable block (ram,0x10004380) */
/* WARNING: Removing unreachable block (ram,0x10004385) */
/* WARNING: Removing unreachable block (ram,0x10004391) */
/* WARNING: Removing unreachable block (ram,0x10004373) */
/* WARNING: Removing unreachable block (ram,0x10004395) */
/* WARNING: Removing unreachable block (ram,0x100043ac) */
/* WARNING: Removing unreachable block (ram,0x100043b9) */
/* WARNING: Removing unreachable block (ram,0x100043c2) */
/* WARNING: Removing unreachable block (ram,0x100043d2) */
/* WARNING: Removing unreachable block (ram,0x100043d4) */
/* WARNING: Removing unreachable block (ram,0x10004377) */

void __stdcall16far FINDATOM(char *param_1)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined2 extraout_DX;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  undefined2 unaff_DS;
  bool bVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if (param_1._2_2_ == 0) {
    return;
  }
  iVar5 = param_1._2_2_;
  iVar3 = GLOBALHANDLE(param_1._2_2_);
  pcVar9 = (char *)param_1;
  if (*param_1 == '#') {
    do {
      pcVar9 = pcVar9 + 1;
      if (*pcVar9 == '\0') {
        return;
      }
    } while ((byte)(*pcVar9 - 0x30U) < 10);
  }
  else {
    iVar10 = param_1._2_2_;
    if (*(int *)0x8 != 0) goto LAB_1000_42d1;
    INITATOMTABLE(0);
    if (iVar5 == 0) {
      return;
    }
    if (iVar3 != 0) {
      GLOBALHANDLE(iVar3);
      param_1 = (char *)CONCAT22(extraout_DX,(char *)param_1);
    }
  }
  iVar10 = (int)((ulong)param_1 >> 0x10);
LAB_1000_42d1:
  iVar3 = 0;
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    pcVar1 = (char *)param_1;
    param_1._0_2_ = (char *)param_1 + 1;
    if (*pcVar1 == '\0') break;
    cVar4 = (char)iVar5 + '\x01';
    iVar5 = CONCAT11((char)((uint)iVar5 >> 8),cVar4);
    if (cVar4 == '\0') {
      return;
    }
    uVar12 = FUN_1000_4ba7();
    uVar7 = (uint)(uVar12 >> 0x10);
    iVar3 = (int)uVar12;
    iVar6 = (uVar7 >> 1 | (uint)((uVar12 & 0x10000) != 0) << 0xf) +
            (uVar7 << 1 | (uint)((long)uVar12 < 0)) + uVar7 + iVar3;
  }
  if (iVar5 != 0) {
    puVar2 = (uint *)*(int *)0x8 +
             (int)(CONCAT22(CONCAT11((char)((uint)iVar3 >> 8),*pcVar1),iVar6) %
                  (ulong)*(uint *)*(int *)0x8) + 1;
    do {
      do {
        puVar8 = puVar2;
        puVar2 = (uint *)*puVar8;
        if (puVar2 == (uint *)0x0) {
          return;
        }
      } while ((char)puVar2[2] != (char)iVar5);
      bVar11 = true;
      iVar3 = iVar5;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        FUN_1000_4ba7();
        uVar13 = FUN_1000_4ba7();
        iVar3 = (int)((ulong)uVar13 >> 0x10);
        bVar11 = (char)((ulong)uVar13 >> 8) == (char)uVar13;
      } while (bVar11);
      iVar5 = iVar3;
      puVar2 = (uint *)*puVar8;
    } while (!bVar11);
  }
  return;
}

