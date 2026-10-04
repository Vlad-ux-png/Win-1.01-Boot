// Function: FUN_1000_33af

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010540) overlaps instruction at (ram,0x0001053f)
    */
/* WARNING: Removing unreachable block (ram,0x00010515) */
/* WARNING: Removing unreachable block (ram,0x00010518) */
/* WARNING: Removing unreachable block (ram,0x00010540) */
/* WARNING: Removing unreachable block (ram,0x00010520) */
/* WARNING: Removing unreachable block (ram,0x00010523) */
/* WARNING: Removing unreachable block (ram,0x00010530) */
/* WARNING: Removing unreachable block (ram,0x00010014) */
/* WARNING: Removing unreachable block (ram,0x00010023) */
/* WARNING: Removing unreachable block (ram,0x0001002b) */
/* WARNING: Removing unreachable block (ram,0x0001002d) */
/* WARNING: Removing unreachable block (ram,0x00010038) */
/* WARNING: Removing unreachable block (ram,0x00010043) */
/* WARNING: Removing unreachable block (ram,0x0001006f) */

undefined4 __stdcall16far FUN_1000_33af(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  code *pcVar7;
  undefined3 uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  byte bVar14;
  char cVar16;
  int iVar15;
  undefined2 in_CX;
  int iVar17;
  uint uVar18;
  undefined2 in_DX;
  char *pcVar19;
  char *pcVar20;
  uint in_BX;
  undefined1 *puVar21;
  int unaff_BP;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  int *unaff_SI;
  byte *pbVar25;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_AF;
  bool bVar26;
  bool bVar27;
  longdouble in_ST0;
  undefined4 uVar28;
  undefined1 in_stack_00000002;
  undefined1 in_stack_00000003;
  byte *pbStack0011;
  char *pcStack0013;
  uint uStack0015;
  undefined1 *puStack0017;
  undefined2 in_stack_00000042;
  undefined2 in_stack_0000004c;
  byte bStack004e;
  uint uStack004f;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_8;
  undefined1 auStack_7 [2];
  undefined2 uStack_5;
  byte bStack_3;
  undefined2 uStack_2;
  undefined2 uVar13;
  
  uVar28 = CONCAT22(in_DX,in_BX);
  uVar12 = CONCAT11(in_stack_00000003,in_stack_00000002);
  puVar21 = (undefined1 *)CONCAT11((undefined1)uStack_5,auStack_7[1]);
  iVar22 = unaff_BP + 1;
  uStack_2._0_1_ = (undefined1)iVar22;
  uStack_2._1_1_ = (undefined1)((uint)iVar22 >> 8);
  uStack_5._1_1_ = (undefined1)unaff_DS;
  bStack_3 = (byte)((uint)unaff_DS >> 8);
  if (10 < param_3) {
    return CONCAT22(*(undefined2 *)0x56,*(undefined2 *)0x54);
  }
  bVar27 = SCARRY2(param_3,param_3);
  pcVar19 = (char *)(param_3 * 2);
  bVar26 = pcVar19 == (char *)0x0;
  bVar11 = (byte)in_BX;
  cVar9 = (char)(in_BX >> 8);
  cVar16 = (char)((uint)pcVar19 >> 8);
  uStack_2 = iVar22;
  switch(param_3) {
  case 1:
    (&stack0x0258)[(int)unaff_DI] = (&stack0x0258)[(int)unaff_DI] + cVar9;
    *(int *)0x260 = *(int *)((int)unaff_SI + 0x15) - *(int *)((int)unaff_SI + 0x17);
    *(undefined2 *)0x25c =
         *(undefined2 *)((*(int *)((int)unaff_SI + 9) - *(int *)((int)unaff_SI + 0xb)) * 2 + 0x92);
    *(undefined2 *)0x25e =
         *(undefined2 *)
          ((*(int *)((int)unaff_SI + 0xf) - *(int *)((int)unaff_SI + 0x11)) * 2 + 0x98);
    uVar13 = *(undefined2 *)(*(int *)0x260 * 2 + 0x9e);
    *(undefined2 *)0x260 = uVar13;
    return CONCAT22(in_DX,uVar13);
  case 2:
    return CONCAT22(in_DX,in_BX);
  case 3:
    bVar14 = (byte)in_CX;
    cVar16 = (char)((uint)in_CX >> 8) + bVar14 * '\x02';
    bVar10 = 9 < (bVar11 & 0xf) | in_AF;
    bVar10 = 9 < (bVar11 + bVar10 * -6 & 0xf) | bVar10;
    pcVar7 = (code *)swi(0x3f);
    (*pcVar7)();
    pbVar25 = unaff_DI + *(int *)0xa;
    pcVar7 = (code *)swi(0x3f);
    cVar9 = (*pcVar7)();
    *unaff_SI = (int)(&stack0x0002 + *unaff_SI);
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar7 = (code *)swi(0x3f);
    iVar22 = (*pcVar7)();
    *(int *)(pcVar19 + (int)unaff_SI) = *(int *)(pcVar19 + (int)unaff_SI) + iVar22;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + (char)iVar22;
    pcVar7 = (code *)swi(0x3f);
    (*pcVar7)();
    iVar15 = CONCAT11((char)((uint)pcVar19 >> 8),(char)pcVar19 + (&stack0x002b)[(int)unaff_SI]);
    pcVar7 = (code *)swi(0x3f);
    iVar22 = (*pcVar7)();
    *(int *)(iVar15 + (int)unaff_SI) = *(int *)(iVar15 + (int)unaff_SI) + iVar22;
    *(int *)(iVar15 + (int)unaff_SI) = *(int *)(iVar15 + (int)unaff_SI) + iVar22;
    pcVar7 = (code *)swi(0x3f);
    cVar9 = (*pcVar7)();
    *(char *)(iVar15 + (int)unaff_SI) =
         *(char *)(iVar15 + (int)unaff_SI) + cVar9 + (char)*(undefined2 *)(iVar15 + (int)unaff_SI);
    pcVar7 = (code *)swi(0x3f);
    bVar11 = (*pcVar7)();
    cVar16 = cVar16 + bVar14;
    bVar10 = 9 < (bVar11 & 0xf) | bVar10;
    pcVar19 = (char *)CONCAT11((char)((uint)iVar15 >> 8) + *(char *)(iVar15 + 0x4f),(char)iVar15);
    pcVar7 = (code *)swi(0x3f);
    uVar28 = (*pcVar7)();
    iVar17 = CONCAT11((char)((ulong)uVar28 >> 0x18) + *(char *)((int)&uStack_2 + 1 + (int)unaff_SI),
                      (char)((ulong)uVar28 >> 0x10));
    bVar10 = 9 < ((byte)uVar28 & 0xf) | bVar10;
    bVar5 = (byte)uVar28 + bVar10 * -6;
    uStack0015 = CONCAT11((char)((ulong)uVar28 >> 8) - bVar10,bVar5) & 0xff0f;
    bVar11 = *pbVar25;
    pcVar19[(int)unaff_SI - 1U] = pcVar19[(int)unaff_SI - 1U] + (bVar5 & 0xf);
    bVar10 = pbVar25[0x69];
    puVar1 = (uint *)(&stack0x006c + (int)unaff_SI);
    iVar22 = ((int)unaff_SI - 1U & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (uint)(0 < iVar22) * iVar22;
    puStack0017 = &stack0x0019;
    uVar18 = iVar17 + 1;
    iVar15 = CONCAT11(cVar16 + bVar14 + bVar11,bVar14 & bVar10) + 1;
    bVar11 = *pbVar25;
    *(char *)0x4e46 = *(char *)0x4e46 + (char)uStack0015;
    *pcVar19 = *pcVar19 + (char)uStack0015;
    uVar12 = uStack0015 - 1;
    pbStack0011 = pbVar25 + -1;
    *(uint *)(pcVar19 + (int)unaff_SI + -3) = *(uint *)(pcVar19 + (int)unaff_SI + -3) | uVar12;
    in_stack_0000004c._1_1_ = in_stack_0000004c._1_1_ | (byte)uVar12;
    bVar10 = (byte)uVar12 | pcVar19[(int)(unaff_SI + -2)];
    iVar22 = CONCAT11((char)(uVar12 >> 8),bVar10) + 0xb00;
    auStack_7 = (undefined1  [2])&stack0x0001;
    piVar23 = unaff_SI + -3;
    param_2._1_1_ = (byte)iVar22;
    pcVar20 = pcVar19 + 2;
    *(int *)(pcVar20 + (int)piVar23) = *(int *)(pcVar20 + (int)piVar23) + iVar22;
    bStack004e = bStack004e | bVar10 | param_2._1_1_;
    uStack_2._1_1_ = SUB21(pcVar20,0);
    uVar12 = iVar22 + *(int *)(pcVar20 + (int)piVar23);
    uStack004f = uStack004f | uVar12;
    uStack_5 = &bStack_3;
    bStack_3 = (byte)uVar12;
    uStack_2._0_1_ = (undefined1)(uVar12 >> 8);
    *(char *)0x4e46 = *(char *)0x4e46 + bStack_3;
    pbVar4 = (byte *)(pcVar19 + 4 + (int)piVar23);
    *pbVar4 = *pbVar4 | bStack_3;
    puVar1 = (uint *)(pcVar19 + 4 + (int)piVar23 + 0x52);
    *puVar1 = *puVar1 | uVar18;
    bStack_15 = bStack_3 | (byte)*(undefined2 *)(pcVar19 + 5 + (int)unaff_SI + -7);
    puVar24 = (uint *)(unaff_SI + -4);
    cVar9 = (pcVar19 + 5)[(int)puVar24];
    *puVar24 = *puVar24 ^ CONCAT11((char)((uint)iVar15 >> 8),(byte)iVar15 ^ bVar11) + 4U;
    (pcVar19 + 6)[(int)puVar24] =
         (pcVar19 + 6)[(int)puVar24] + (bStack_15 + cVar9 | (byte)uStack004f);
    uVar13 = in(iVar17 + 2);
    *(undefined2 *)(pbVar25 + -6) = uVar13;
    pcStack0013 = pcVar19;
    uVar28 = FUN_1000_09ed();
    return uVar28;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    (pcVar19 + (int)unaff_SI)[1] = (pcVar19 + (int)unaff_SI)[1] + cVar16;
    return CONCAT22(in_DX,in_BX);
  case 8:
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] & bVar11;
    iVar22 = CONCAT11(cVar16 + bVar11,(char)pcVar19);
    bVar11 = bVar11 & *(byte *)(iVar22 + (int)unaff_SI);
    uVar13 = CONCAT11(cVar9,bVar11);
    pcVar2 = (char *)(iVar22 + (int)unaff_SI);
    *pcVar2 = *pcVar2 - bVar11;
    if (0x18 < *(int *)0x1e) {
      uVar13 = *(undefined2 *)0x20;
      in_DX = *(undefined2 *)0x22;
      *(undefined2 *)0x1c = uVar13;
      *(undefined2 *)0x1e = in_DX;
    }
    return CONCAT22(in_DX,uVar13);
  case 9:
    puVar21 = (undefined1 *)((int)&uStack_5 + 1);
    uVar28 = FUN_1000_0038();
    uVar13 = (undefined2)((ulong)uVar28 >> 0x10);
    auStack_7[0] = 's';
    bVar11 = (byte)((ulong)uVar28 >> 0x18);
    (pcVar19 + (int)unaff_SI)[0x72] = (pcVar19 + (int)unaff_SI)[0x72] & bVar11;
    piVar3 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    out(*piVar3,uVar13);
    cVar9 = (char)uVar28;
    pbVar4 = unaff_DI;
    unaff_DI = unaff_DI + 2;
    uVar13 = in(uVar13);
    *(undefined2 *)pbVar4 = uVar13;
    (&stack0x0063)[(int)unaff_SI] = (&stack0x0063)[(int)unaff_SI] & bVar11;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
  case 0:
    iVar22 = (int)((ulong)uVar28 >> 0x10);
    cVar9 = (char)uVar28;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    in_stack_00000042._1_1_ = in_stack_00000042._1_1_ + (char)in_CX;
    *(uint *)0x6a01 = (uint)uVar28;
    puVar1 = (uint *)((int)&uStack_2 + (int)unaff_SI);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 + (int)unaff_SI;
    unique0x1000042b = puVar21;
    if (CARRY2(uVar12,(uint)unaff_SI)) {
      uVar12 = (uint)uVar28 | *(uint *)0x700;
      cVar9 = (char)uVar12;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      *(char *)((int)unaff_SI + 0x101) = *(char *)((int)unaff_SI + 0x101) + (char)((uint)in_CX >> 8)
      ;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      *pcVar19 = *pcVar19 + cVar9;
      *pcVar19 = *pcVar19 + cVar9;
      pbVar4 = (byte *)((int)&uStack_2 + (int)unaff_DI);
      *pbVar4 = *pbVar4 + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + (char)((uint)pcVar19 >> 8);
      pcVar19[(int)unaff_DI] = pcVar19[(int)unaff_DI] + -0x74;
      *(int *)(&stack0x0cff + (int)unaff_SI) = *(int *)(&stack0x0cff + (int)unaff_SI) + iVar22;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      cVar9 = cVar9 + pcVar19[(int)unaff_SI];
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
      out(iVar22,CONCAT11((char)(uVar12 >> 8),cVar9));
      *(undefined1 **)(pcVar19 + (int)unaff_SI) = auStack_7 + *(int *)(pcVar19 + (int)unaff_SI) + 1;
      *unaff_DI = *unaff_DI & cVar9 + 0x50U;
      unaff_SI[0x38] = -unaff_SI[0x38];
      pcVar7 = (code *)swi(1);
      uVar28 = (*pcVar7)();
      return uVar28;
    }
    cVar9 = cVar9 + '\x11';
    *(char *)0x415 = *(char *)0x415 + (char)((ulong)uVar28 >> 0x18);
    pbVar4 = (byte *)((int)&uStack_2 + (int)unaff_DI);
    *pbVar4 = *pbVar4 + cVar9;
    pcVar19[(int)unaff_DI] = pcVar19[(int)unaff_DI];
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    iVar22 = func_0x00034109();
    LOCK();
    *(int *)(pcVar19 + (int)unaff_SI) = *(int *)(pcVar19 + (int)unaff_SI) + iVar22;
    UNLOCK();
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + (char)iVar22;
    cVar9 = (char)iVar22 + -0x80;
    *(int *)(pcVar19 + (int)unaff_SI) =
         *(int *)(pcVar19 + (int)unaff_SI) + CONCAT11((char)((uint)iVar22 >> 8),cVar9);
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    *(long *)(pcVar19 + (int)unaff_DI) = (long)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
  }
  while( true ) {
    uVar18 = uVar12;
    if ((bVar26 || bVar27 != (int)pcVar19 < 0) && ((bVar27 != (int)pcVar19 < 0 || (in_BX < uVar12)))
       ) {
      uVar18 = CONCAT11(auStack_7[0],uStack_8);
    }
    iVar22 = CONCAT11((undefined1)uStack_5,auStack_7[1]) / 100;
    if (iVar22 == 0) {
      iVar22 = 1;
    }
    while (auStack_7[0] = (char)(uVar18 >> 8), 0 < iVar22) {
      uVar28 = func_0x0000024c();
      if (((int)((ulong)uVar28 >> 0x10) != CONCAT11(uStack_11,uStack_12)) ||
         ((int)uVar28 != CONCAT11(uStack_13,uStack_14))) {
        uVar28 = func_0x0000ffff();
        uStack_14 = (undefined1)uVar28;
        uStack_13 = (undefined1)((ulong)uVar28 >> 8);
        uStack_12 = (undefined1)((ulong)uVar28 >> 0x10);
        uStack_11 = (undefined1)((ulong)uVar28 >> 0x18);
        iVar22 = iVar22 + -1;
      }
    }
    bVar26 = uVar12 < uVar18;
    uVar12 = uVar12 - uVar18;
    param_1 = (param_1 - ((int)auStack_7[0] >> 7)) - (uint)bVar26;
    while (uVar18 = uVar18 - 1, -1 < (int)uVar18) {
      uVar8 = CONCAT12((undefined1)param_3,param_2);
      param_2 = param_2 + 1;
      cVar9 = *(char *)CONCAT13(param_3._1_1_,uVar8);
      if (cVar9 != '\n') {
        iVar22 = func_0x000002b1();
        if (iVar22 < 1) goto LAB_1000_7b32;
        iVar22 = func_0x000002c6();
        if (iVar22 < 1) goto LAB_1000_7b32;
        if ((*(int *)0x246 != 0) && (cVar9 == '\r')) {
          iVar22 = func_0x0000ffff();
          if (iVar22 < 1) goto LAB_1000_7b32;
          iVar22 = func_0x0000ffff();
          if (iVar22 < 1) goto LAB_1000_7b32;
        }
      }
    }
    if ((param_1 < 0) || ((param_1 < 1 && (uVar12 == 0)))) break;
    func_0x0000ffff();
    func_0x0000023d();
    uStack_12 = 0x40;
    uStack_11 = 0x42;
    uStack_14 = 0;
    uStack_13 = 0;
    iVar22 = func_0x0000ffff();
    auStack_7[1] = (undefined1)iVar22;
    uStack_5._0_1_ = (undefined1)((uint)iVar22 >> 8);
    lVar6 = 100 / (long)iVar22;
    uStack_8 = (undefined1)lVar6;
    auStack_7[0] = (char)((ulong)lVar6 >> 8);
    if ((int)lVar6 == 0) {
      uStack_8 = 1;
      auStack_7[0] = '\0';
    }
    in_BX = CONCAT11(auStack_7[0],uStack_8);
    iVar22 = (int)auStack_7[0] >> 7;
    bVar27 = SBORROW2(iVar22,param_1);
    pcVar19 = (char *)(iVar22 - param_1);
    bVar26 = iVar22 == param_1;
  }
LAB_1000_7b32:
  uVar28 = func_0x0000ffff();
  return uVar28;
}

