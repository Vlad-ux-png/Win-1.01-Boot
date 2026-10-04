// Function: BUILDPDB

undefined2 __stdcall16far
BUILDPDB(uint param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 uVar10;
  int extraout_DX;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined2 unaff_DS;
  undefined2 uVar16;
  byte bVar17;
  byte bVar18;
  byte in_AF;
  byte bVar19;
  byte bVar20;
  byte in_TF;
  byte in_IF;
  byte bVar21;
  byte in_NT;
  uint uVar22;
  byte local_6 [2];
  
  bVar17 = &stack0xfffc < (undefined1 *)0x2;
  bVar21 = SBORROW2((int)&stack0xfffc,2);
  bVar20 = (int)local_6 < 0;
  bVar19 = &stack0x0000 == (undefined1 *)0x6;
  bVar18 = (POPCOUNT((uint)local_6 & 0xff) & 1U) == 0;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar22 = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar21 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
           (uint)(in_TF & 1) * 0x100 | (uint)(bVar20 & 1) * 0x80 | (uint)(bVar19 & 1) * 0x40 |
           (uint)(in_AF & 1) * 0x10 | (uint)(bVar18 & 1) * 4 | (uint)(bVar17 & 1);
  local_6[0] = (*(code *)*(undefined2 *)0x7a)();
  (*(code *)*(undefined2 *)0x7a)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(bVar21 & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                    (uint)(bVar20 & 1) * 0x80 | (uint)(bVar19 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10
                    | (uint)(bVar18 & 1) * 4 | (uint)(bVar17 & 1),*DAT_1000_0038,uVar22);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  (*(code *)*(undefined2 *)0x7a)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(bVar21 & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                    (uint)(bVar20 & 1) * 0x80 | (uint)(bVar19 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10
                    | (uint)(bVar18 & 1) * 4 | (uint)(bVar17 & 1));
  *(undefined2 *)0x16 = param_4;
  *(int *)0x2 = param_1 + extraout_DX;
  if (0xfff < param_1) {
    param_1 = 0xfff;
  }
  iVar11 = 0x1395 - (param_1 - 0x10);
  iVar9 = (param_1 - 0x10) * 0x10 + 0xe;
  *(int *)0x6 = iVar9;
  *(int *)0x8 = iVar11;
  *(int *)0x51 = iVar9;
  *(int *)0x53 = iVar11;
  *(undefined2 *)0xa = 0x3f1f;
  *(undefined2 *)0xc = 0x1000;
  *(undefined2 *)0x48 = 0;
  *(undefined2 *)0x4a = 0;
  uVar16 = (undefined2)((ulong)param_2 >> 0x10);
  iVar11 = (int)param_2;
  pbVar6 = (byte *)*(undefined4 *)(iVar11 + 6);
  pbVar12 = (byte *)pbVar6;
  puVar14 = (undefined2 *)0x5c;
  bVar17 = *pbVar6;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    pbVar2 = pbVar12;
    pbVar12 = pbVar12 + 2;
    *puVar4 = *(undefined2 *)pbVar2;
  }
  *puVar14 = 0;
  puVar14[1] = 0;
  pbVar6 = (byte *)*(undefined4 *)(iVar11 + 10);
  pbVar12 = (byte *)pbVar6;
  puVar14 = (undefined2 *)0x6c;
  bVar18 = *pbVar6;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    pbVar2 = pbVar12;
    pbVar12 = pbVar12 + 2;
    *puVar4 = *(undefined2 *)pbVar2;
  }
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar7 = (undefined1 *)*(undefined4 *)(iVar11 + 2);
  puVar13 = (undefined1 *)puVar7;
  puVar15 = (undefined1 *)0x80;
  for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar3 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar3 = *puVar1;
  }
  uVar8 = 0;
  uVar10 = 0;
  if (local_6[0] < bVar18) {
    uVar10 = 0xff;
  }
  if (local_6[0] < bVar17) {
    uVar8 = 0xff;
  }
  return CONCAT11(uVar10,uVar8);
}

