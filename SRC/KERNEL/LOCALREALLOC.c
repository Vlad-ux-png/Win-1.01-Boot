// Function: LOCALREALLOC

void __stdcall16far LOCALREALLOC(uint param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 uVar4;
  int *piVar5;
  int *piVar6;
  uint in_CX;
  int iVar7;
  byte *extraout_DX;
  byte *pbVar8;
  byte *extraout_DX_00;
  byte *extraout_DX_01;
  undefined2 *in_BX;
  byte *pbVar9;
  uint *puVar10;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar11;
  undefined1 uVar12;
  
  FUN_1000_4f06();
  bVar11 = (param_1 & 0x10) == 0;
  if (!bVar11) {
    piVar1 = (int *)(unaff_DI + 2);
    *piVar1 = *piVar1 + 1;
    bVar11 = *piVar1 == 0;
  }
  FUN_1000_4f46();
  if (bVar11) {
    if ((in_CX & 0x40) == 0) goto LAB_1000_5115;
    bVar11 = (param_1 | 2) == 0;
    piVar5 = param_3;
    iVar7 = FUN_1000_4c25();
    if (bVar11) goto LAB_1000_5115;
    *(byte *)(piVar5 + 1) = *(byte *)(piVar5 + 1) ^ 0x40;
LAB_1000_510b:
    *piVar5 = iVar7;
    *(byte *)(iVar7 + -6) = *(byte *)(iVar7 + -6) | 2;
    *(undefined2 *)(iVar7 + -2) = piVar5;
  }
  else {
    if ((param_1 & 0x80) != 0) {
      if (param_3 != (int *)0x0) {
        *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) & 0xc0;
        *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | (byte)(param_1 >> 8) & 0x3f;
      }
      goto LAB_1000_5115;
    }
    FUN_1000_4f33();
    pbVar9 = (byte *)in_BX[1];
    if (param_2 == 0) {
      if ((in_CX == 0) && ((param_1 & 2) != 0)) {
        bVar11 = true;
        FUN_1000_4f63();
        if (!bVar11) {
          bVar11 = true;
          uVar4 = FUN_1000_4cde();
          if (!bVar11) {
            *in_BX = uVar4;
            *(byte *)(in_BX + 1) = *(byte *)(in_BX + 1) | 0x40;
          }
        }
      }
      goto LAB_1000_5115;
    }
    pbVar8 = extraout_DX;
    if (pbVar9 < extraout_DX) {
      if (((*pbVar9 & 1) != 0) || (*(byte **)(pbVar9 + 2) < extraout_DX)) {
        if ((in_CX != 0) && ((param_1 & 2) == 0)) goto LAB_1000_5115;
        bVar11 = false;
        if (((uint)param_3 & 2) == 0) {
          if ((param_1 & 2) == 0) goto LAB_1000_5115;
          bVar11 = (param_1 | 2) == 2;
        }
        uVar4 = FUN_1000_4c25();
        if (bVar11) goto LAB_1000_5115;
        FUN_1000_4f63(uVar4);
        piVar5 = (int *)FUN_1000_4f46();
        iVar7 = param_3[1] - (int)piVar5;
        uVar12 = iVar7 == 0;
        piVar6 = (int *)FUN_1000_4c0b();
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          piVar3 = piVar6;
          piVar6 = piVar6 + 1;
          piVar1 = piVar5;
          piVar5 = piVar5 + 1;
          *piVar3 = *piVar1;
        }
        iVar7 = FUN_1000_4cde();
        if ((bool)uVar12) goto LAB_1000_5115;
        goto LAB_1000_510b;
      }
      FUN_1000_4bfb();
      pbVar8 = extraout_DX_00;
      if ((param_1 & 0x40) != 0) {
        FUN_1000_4c11();
        pbVar8 = extraout_DX_01;
      }
    }
    if (pbVar8 + 8 < pbVar9) {
      LOCK();
      puVar10 = (uint *)in_BX[1];
      in_BX[1] = pbVar8;
      UNLOCK();
      *(undefined2 **)pbVar8 = in_BX;
      puVar2 = puVar10;
      *puVar2 = *puVar2 & 3;
      if (*puVar2 == 0) {
        puVar10 = (uint *)puVar10[1];
        *puVar10 = *puVar10 & 3;
      }
      else {
        *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + 1;
      }
      *puVar10 = *puVar10 | (uint)pbVar8;
      *(uint **)(pbVar8 + 2) = puVar10;
    }
  }
LAB_1000_5115:
  if ((param_1 & 0x10) != 0) {
    *(int *)(unaff_DI + 2) = *(int *)(unaff_DI + 2) + -1;
  }
  FUN_1000_4f1e();
  return;
}

