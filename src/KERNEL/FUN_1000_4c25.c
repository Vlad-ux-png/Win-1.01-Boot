// Function: FUN_1000_4c25

byte * __cdecl16near FUN_1000_4c25(void)

{
  uint *puVar1;
  uint in_AX;
  uint uVar2;
  int iVar3;
  uint extraout_DX;
  uint uVar4;
  uint extraout_DX_00;
  undefined2 in_BX;
  uint *puVar5;
  undefined2 unaff_SI;
  uint *puVar6;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint *puStackY_8;
  
  do {
    iVar3 = *(int *)(unaff_DI + 4);
    if ((in_AX & 2) == 0) {
      FUN_1000_4f33(in_BX,in_AX,unaff_SI);
      puVar5 = (uint *)*(undefined2 *)(unaff_DI + 6);
      do {
        puStackY_8 = (uint *)puVar5[1];
        if ((*puVar5 & 1) == 0) {
          uVar2 = (int)puStackY_8 - (int)puVar5;
          uVar4 = extraout_DX;
          puStackY_8 = puVar5;
          if (extraout_DX <= uVar2) goto LAB_1000_4c67;
          puStackY_8 = (uint *)puVar5[1];
        }
        iVar3 = iVar3 + -1;
        puVar5 = puStackY_8;
      } while (iVar3 != 0);
      uVar8 = FUN_1000_4d8c();
      uVar4 = (uint)((ulong)uVar8 >> 0x10);
      uVar2 = (uint)uVar8;
      if (uVar4 <= uVar2) {
LAB_1000_4c67:
        iVar3 = 4;
        puVar6 = (uint *)((int)puStackY_8 + uVar4);
        puVar5 = puStackY_8;
        puVar1 = puStackY_8;
        if ((uint *)(puStackY_8[1] - 8) <= puVar6) goto LAB_1000_4cc6;
LAB_1000_4cb0:
        puStackY_8 = puVar1;
        LOCK();
        puVar1 = (uint *)puVar5[1];
        puVar5[1] = (uint)puVar6;
        UNLOCK();
        *puVar6 = (uint)puVar5;
        puVar6[1] = (uint)puVar1;
        *puVar1 = *puVar1 & 3;
        *puVar1 = *puVar1 | (uint)puVar6;
        *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + 1;
LAB_1000_4cc6:
        pbVar9 = (byte *)CONCAT22(in_AX,(byte *)(iVar3 + (int)puStackY_8));
        *(byte *)puStackY_8 = (byte)*puStackY_8 | 1;
        if ((in_AX & 0x40) != 0) {
          pbVar9 = (byte *)FUN_1000_4c11();
        }
        return pbVar9;
      }
    }
    else {
      FUN_1000_4f33(in_BX,in_AX,unaff_SI);
      puStackY_8 = (uint *)*(undefined2 *)(unaff_DI + 8);
      do {
        if (((*puStackY_8 & 1) == 0) &&
           (uVar8 = CONCAT22(extraout_DX_00,puStackY_8[1] - (int)puStackY_8),
           extraout_DX_00 < puStackY_8[1] - (int)puStackY_8)) goto LAB_1000_4ca1;
        puStackY_8 = (uint *)(*puStackY_8 & 0xfffc);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar8 = FUN_1000_4d8c();
      uVar2 = (uint)uVar8;
      if ((uint)((ulong)uVar8 >> 0x10) <= uVar2) {
LAB_1000_4ca1:
        iVar3 = 6;
        uVar2 = (int)uVar8 - (int)((ulong)uVar8 >> 0x10);
        puVar6 = (uint *)(uVar2 + (int)puStackY_8);
        puVar5 = puStackY_8;
        puVar1 = puVar6;
        if (uVar2 < 8) goto LAB_1000_4cc6;
        goto LAB_1000_4cb0;
      }
    }
    bVar7 = true;
    FUN_1000_4f63();
    if (bVar7) {
      return (byte *)((ulong)uVar2 << 0x10);
    }
  } while( true );
}

