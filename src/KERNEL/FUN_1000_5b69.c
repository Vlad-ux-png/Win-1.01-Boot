// Function: FUN_1000_5b69

undefined4 __cdecl16near FUN_1000_5b69(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 in_DX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_SI;
  undefined2 *puVar9;
  int unaff_DI;
  undefined2 *puVar10;
  uint unaff_ES;
  int unaff_SS;
  bool bVar11;
  
  uVar2 = unaff_SI ^ unaff_SI & 1;
  uVar6 = (uint)(byte)((byte)(unaff_SI & 1) ^ 1) + *(int *)(unaff_DI + 3);
  FUN_1000_60eb();
  DAT_1000_5b65 = 0;
  if (unaff_SS == uVar2 + 1) {
    DAT_1000_5b65 = unaff_ES | 1;
    DAT_1000_5b67 = &stack0xfff0;
  }
  uVar2 = uVar6 + unaff_SI;
  uVar7 = uVar6 + unaff_ES;
  if (unaff_ES <= unaff_SI) {
    uVar2 = unaff_SI;
    uVar7 = unaff_ES;
  }
  while ((uVar4 = 0x1000, 0xfff < uVar6 || (uVar4 = uVar6, uVar6 != 0))) {
    uVar6 = uVar6 - uVar4;
    iVar5 = uVar4 * 8;
    bVar11 = uVar2 < uVar7;
    if (bVar11) {
      uVar3 = uVar2 - uVar4;
      uVar8 = uVar7 - uVar4;
      puVar9 = (undefined2 *)((iVar5 + -1) * 2);
      puVar10 = puVar9;
      uVar7 = uVar8;
      uVar2 = uVar3;
    }
    else {
      puVar9 = (undefined2 *)0x0;
      puVar10 = puVar9;
      uVar3 = uVar2;
      uVar8 = uVar7;
      uVar7 = uVar7 + uVar4;
      uVar2 = uVar2 + uVar4;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar10 = *puVar1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
  }
  return CONCAT22(in_DX,in_AX);
}

