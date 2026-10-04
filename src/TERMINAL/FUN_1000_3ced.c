// Function: FUN_1000_3ced

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014689) overlaps instruction at (ram,0x00014687)
    */
/* WARNING: Removing unreachable block (ram,0x00010515) */
/* WARNING: Removing unreachable block (ram,0x00010518) */
/* WARNING: Removing unreachable block (ram,0x00010540) */
/* WARNING: Removing unreachable block (ram,0x00010520) */
/* WARNING: Removing unreachable block (ram,0x00010523) */
/* WARNING: Removing unreachable block (ram,0x00010530) */

uint __stdcall16far FUN_1000_3ced(int *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 uVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  char cVar14;
  int iVar13;
  int in_CX;
  char extraout_DH;
  int iVar15;
  char cVar16;
  undefined1 uVar18;
  char *pcVar17;
  uint in_BX;
  uint *puVar19;
  byte *pbVar20;
  byte *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_AF;
  longdouble in_ST0;
  undefined4 uVar21;
  undefined2 in_stack_00000042;
  byte bStack004e;
  byte bStack004f;
  uint in_stack_00000050;
  undefined2 uStack_8a;
  char *pcStack_88;
  uint uStack_86;
  int iStack_84;
  undefined1 uStack_82;
  uint uStack_81;
  undefined1 *puStack_7f;
  char *pcStack_7d;
  undefined1 uStack_7b;
  byte *pbStack_7a;
  char *pcStack_78;
  uint uStack_76;
  undefined1 *puStack_74;
  undefined1 auStack_72 [91];
  uint auStack_17 [2];
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  uint local_a;
  uint local_6;
  
  if (param_2 == 10) {
    func_0x0000ffff();
  }
  else {
    func_0x000031e4();
  }
  uVar21 = func_0x0000ffff();
  uVar11 = uStack_10;
  iVar9 = (int)((ulong)uVar21 >> 0x10);
  local_6 = (uint)uVar21;
  uVar10 = param_2 - 10;
  if (0x12 < uVar10) {
    if (param_2 == 10) {
      local_a = local_a | 0x1000;
    }
    uVar11 = func_0x0000ffff();
    return uVar11;
  }
  pcVar17 = (char *)(uVar10 * 2);
  bVar7 = (byte)in_BX;
  bVar12 = (byte)((uint)pcVar17 >> 8);
  bVar8 = (byte)((ulong)uVar21 >> 0x18);
  switch(uVar10) {
  case 0:
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    *(undefined2 *)0xee2 = 5;
    *(undefined2 *)0xee0 = *(undefined2 *)0x262;
    func_0x0000ffff();
    return 1;
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
    if (pcVar17 != (char *)0x0) {
      if (in_BX == 0xe) {
        uVar11 = FUN_1000_523a();
        return uVar11;
      }
      if (in_BX != 0x3e9) {
        return in_BX;
      }
    }
    uVar11 = func_0x0000014e();
    return uVar11;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    func_0x0000ffff();
    uVar11 = func_0x0000ffff();
    return uVar11;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    do {
      if (in_BX != 0) goto LAB_1000_067b;
      do {
        func_0x0000ffff();
        func_0x0000ffff();
LAB_1000_067b:
        do {
          while (iVar9 = func_0x0000ffff(), iVar9 == 0) {
            if (((*(int *)0x1530 != 0) && (*(int *)0x168 == 0)) && (*(int *)0x16e != 0)) {
              FUN_1000_06bc();
            }
          }
          if (iStack_12 == 0x12) {
            return 0;
          }
        } while ((*(int *)0x1530 == 0) || (iVar9 = func_0x0000ffff(), iVar9 != 0));
      } while (iStack_12 != 0x100);
      in_BX = func_0x0000ffff();
    } while( true );
  case 7:
    iVar9 = CONCAT11((char)(in_BX >> 8),bVar7 ^ bVar8) + 0x80;
    cVar6 = (char)iVar9;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    *(char *)0x380 = *(char *)0x380 + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    (pcVar17 + (int)param_1)[0xd0a] =
         (pcVar17 + (int)param_1)[0xd0a] + (char)((ulong)uVar21 >> 0x10);
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar8;
    LOCK();
    *(int *)(pcVar17 + (int)param_1) = *(int *)(pcVar17 + (int)param_1) + iVar9;
    UNLOCK();
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar2 = (char *)(CONCAT11(bVar12,(byte)pcVar17 | pcVar17[(int)unaff_DI]) + (int)param_1);
    *pcVar2 = *pcVar2 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    cVar6 = (char)in_CX;
    cVar14 = (char)((uint)in_CX >> 8) + cVar6 * '\x02';
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar7 = bVar7 + in_AF * -6 & 0xf;
    uVar18 = (undefined1)((uint)pcVar17 >> 8);
    cVar16 = (char)pcVar17 + *pcVar17;
    in_AF = 9 < bVar7 | in_AF;
    if (cVar14 < '\0') {
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    else {
      cVar14 = cVar14 + cVar6;
      in_AF = 9 < (bVar7 + in_AF * -6 & 0xf) | in_AF;
    }
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    iVar9 = CONCAT11(uVar18,cVar16 + (&stack0x002a)[(int)unaff_DI]);
    cVar14 = cVar14 + cVar6;
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    pcVar5 = (code *)swi(0x3f);
    cVar16 = (*pcVar5)();
    cVar14 = cVar14 + cVar6;
    in_AF = 9 < (cVar16 + extraout_DH & 0xfU) | in_AF;
    cVar6 = cVar6 + *(char *)0x2e;
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    cVar14 = cVar14 + cVar6;
    in_AF = 9 < (bVar7 + in_AF * -6 & 0xf) | in_AF;
    cVar6 = cVar6 + unaff_DI[0x30];
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    *(byte *)(iVar9 + (int)param_1) = *(byte *)(iVar9 + (int)param_1) ^ bVar7;
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    cVar16 = cVar14 + cVar6 + (char)((uint)iVar9 >> 8);
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    cVar16 = cVar16 + (char)((uint)iVar9 >> 8);
    *(byte *)(iVar9 + (int)param_1) = *(byte *)(iVar9 + (int)param_1) & bVar7;
    pcVar5 = (code *)swi(0x3f);
    cVar14 = (*pcVar5)();
    *(char *)(iVar9 + (int)param_1) = *(char *)(iVar9 + (int)param_1) - cVar14;
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    iVar13 = CONCAT11((char)((uint)iVar9 >> 8),(char)iVar9 + (char)*param_1);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar7 = bVar7 + in_AF * -6 & 0xf;
    in_AF = 9 < bVar7 | in_AF;
    bVar7 = bVar7 + in_AF * -6 & 0xf;
    bVar12 = cVar6 + *(char *)((int)param_1 + iVar13 + 0x36);
    cVar14 = cVar16 + cVar6 * '\x02' + bVar12 * '\x02';
    in_AF = 9 < bVar7 | in_AF;
    in_AF = 9 < (bVar7 + in_AF * -6 & 0xf) | in_AF;
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
    pbVar20 = unaff_DI + *(int *)0xa;
    pcVar5 = (code *)swi(0x3f);
    cVar6 = (*pcVar5)();
    *param_1 = (int)&uStack_8a + *param_1 + 1;
    *(char *)(iVar13 + (int)param_1) = *(char *)(iVar13 + (int)param_1) + cVar6;
    pcVar5 = (code *)swi(0x3f);
    iVar9 = (*pcVar5)();
    *(int *)(iVar13 + (int)param_1) = *(int *)(iVar13 + (int)param_1) + iVar9;
    *(char *)(iVar13 + (int)param_1) = *(char *)(iVar13 + (int)param_1) + (char)iVar9;
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
    iVar13 = CONCAT11((char)((uint)iVar13 >> 8),(char)iVar13 + (&stack0x002c)[(int)param_1]);
    pcVar5 = (code *)swi(0x3f);
    iVar9 = (*pcVar5)();
    *(int *)(iVar13 + (int)param_1) = *(int *)(iVar13 + (int)param_1) + iVar9;
    *(int *)(iVar13 + (int)param_1) = *(int *)(iVar13 + (int)param_1) + iVar9;
    pcVar5 = (code *)swi(0x3f);
    cVar6 = (*pcVar5)();
    *(char *)(iVar13 + (int)param_1) =
         *(char *)(iVar13 + (int)param_1) + cVar6 + (char)*(undefined2 *)(iVar13 + (int)param_1);
    pcVar5 = (code *)swi(0x3f);
    bVar7 = (*pcVar5)();
    cVar14 = cVar14 + bVar12;
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    pcVar17 = (char *)CONCAT11((char)((uint)iVar13 >> 8) + *(char *)(iVar13 + 0x4f),(char)iVar13);
    pcVar5 = (code *)swi(0x3f);
    uVar21 = (*pcVar5)();
    iVar15 = CONCAT11((char)((ulong)uVar21 >> 0x18) + (&stack0x0000)[(int)param_1],
                      (char)((ulong)uVar21 >> 0x10));
    in_AF = 9 < ((byte)uVar21 & 0xf) | in_AF;
    bVar8 = (byte)uVar21 + in_AF * -6;
    uStack_76 = CONCAT11((char)((ulong)uVar21 >> 8) - in_AF,bVar8) & 0xff0f;
    bVar7 = *pbVar20;
    pcVar17[(int)param_1 - 1U] = pcVar17[(int)param_1 - 1U] + (bVar8 & 0xf);
    bVar8 = pbVar20[0x69];
    puVar1 = (uint *)(&stack0x006d + (int)param_1);
    iVar9 = ((int)param_1 - 1U & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (uint)(0 < iVar9) * iVar9;
    puStack_74 = auStack_72;
    uStack_86 = iVar15 + 1;
    iVar13 = CONCAT11(cVar14 + bVar12 + bVar7,bVar12 & bVar8) + 1;
    bVar7 = *pbVar20;
    *(char *)0x4e46 = *(char *)0x4e46 + (char)uStack_76;
    *pcVar17 = *pcVar17 + (char)uStack_76;
    uVar11 = uStack_76 - 1;
    pbStack_7a = pbVar20 + -1;
    *(uint *)(pcVar17 + (int)param_1 + -3) = *(uint *)(pcVar17 + (int)param_1 + -3) | uVar11;
    bStack004e = bStack004e | (byte)uVar11;
    bVar8 = (byte)uVar11 | pcVar17[(int)(param_1 + -2)];
    puStack_7f = (undefined1 *)&pcStack_7d;
    _pcStack_7d = CONCAT12((char)(uStack_86 >> 8),pcVar17);
    iVar9 = CONCAT11((char)(uVar11 >> 8),bVar8) + 0xb00;
    uStack_8a = param_1 + -3;
    _iStack_84 = CONCAT12((char)((uint)(pbVar20 + -2) >> 8),iVar9);
    pcStack_88 = pcVar17 + 2;
    *(int *)(pcStack_88 + (int)uStack_8a) = *(int *)(pcStack_88 + (int)uStack_8a) + iVar9;
    bStack004f = bStack004f | bVar8 | (byte)iVar9;
    in_stack_00000050 = in_stack_00000050 | iVar9 + *(int *)(pcStack_88 + (int)uStack_8a);
    bVar8 = (byte)(iVar9 + *(int *)(pcStack_88 + (int)uStack_8a));
    *(char *)0x4e46 = *(char *)0x4e46 + bVar8;
    pbVar3 = (byte *)(pcVar17 + 4 + (int)uStack_8a);
    *pbVar3 = *pbVar3 | bVar8;
    puVar1 = (uint *)(pcVar17 + 4 + (int)uStack_8a + 0x52);
    *puVar1 = *puVar1 | uStack_86;
    uVar4 = *(undefined2 *)(pcVar17 + 5 + (int)param_1 + -7);
    puVar19 = (uint *)(param_1 + -4);
    cVar6 = (pcVar17 + 5)[(int)puVar19];
    *puVar19 = *puVar19 ^ CONCAT11((char)((uint)iVar13 >> 8),(byte)iVar13 ^ bVar7) + 4U;
    (pcVar17 + 6)[(int)puVar19] =
         (pcVar17 + 6)[(int)puVar19] + ((bVar8 | (byte)uVar4) + cVar6 | (byte)in_stack_00000050);
    uVar4 = in(iVar15 + 2);
    *(undefined2 *)(pbVar20 + -6) = uVar4;
    uStack_81 = uStack_86;
    pcStack_78 = pcVar17;
    uVar11 = FUN_1000_09ed();
    return uVar11;
  case 9:
    break;
  case 10:
    uVar11 = func_0x0000ffff();
    return uVar11;
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    pcVar17[(int)param_1] = pcVar17[(int)param_1];
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar8;
    LOCK();
    *(uint *)(pcVar17 + (int)param_1) = *(int *)(pcVar17 + (int)param_1) + in_BX;
    UNLOCK();
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    *(int *)(pcVar17 + (int)unaff_DI) = *(int *)(pcVar17 + (int)unaff_DI) + -1;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + (bVar7 ^ bVar8);
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + (bVar7 ^ bVar8);
    (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] + (char)in_CX;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    do {
    } while (pcVar17 == (char *)0x0 || SCARRY2(uVar10,uVar10) != (int)pcVar17 < 0);
    *(byte *)((int)param_1 + -0x17) = *(byte *)((int)param_1 + -0x17) ^ bVar12;
    if ((char)unaff_DS < '6') {
      local_6 = (int)(char)unaff_DS - 0x30;
    }
    else {
      local_6 = 4;
    }
    break;
  case 0xf:
    return 0;
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
    *(int *)((int)param_1 + -0x33) = *(int *)((int)param_1 + -0x33) + in_CX;
    *(uint *)((int)auStack_17 + (int)param_1) =
         *(uint *)((int)auStack_17 + (int)param_1) & (uint)pcVar17;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar7;
    in_stack_00000042._1_1_ = in_stack_00000042._1_1_ + (char)in_CX;
    *(uint *)0x6a01 = in_BX;
    puVar1 = (uint *)(&stack0xfffe + (int)param_1);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 + (int)param_1;
    if (!CARRY2(uVar11,(uint)param_1)) {
      cVar6 = bVar7 + 0x11;
      *(char *)0x415 = *(char *)0x415 + bVar8;
      (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] + cVar6;
      pcVar17[(int)unaff_DI] = pcVar17[(int)unaff_DI];
      pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
      pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
      iVar9 = func_0x00034109();
      LOCK();
      *(int *)(pcVar17 + (int)param_1) = *(int *)(pcVar17 + (int)param_1) + iVar9;
      UNLOCK();
      pcVar17[(int)param_1] = pcVar17[(int)param_1] + (char)iVar9;
      cVar6 = (char)iVar9 + -0x80;
      *(int *)(pcVar17 + (int)param_1) =
           *(int *)(pcVar17 + (int)param_1) + CONCAT11((char)((uint)iVar9 >> 8),cVar6);
      pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
      pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
      *(long *)(pcVar17 + (int)unaff_DI) = (long)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar11 = *(uint *)0x700;
    cVar6 = (char)(in_BX | uVar11);
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    *(char *)((int)param_1 + 0x101) = *(char *)((int)param_1 + 0x101) + (char)((uint)in_CX >> 8);
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    *pcVar17 = *pcVar17 + cVar6;
    *pcVar17 = *pcVar17 + cVar6;
    (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + bVar12;
    pcVar17[(int)unaff_DI] = pcVar17[(int)unaff_DI] + -0x74;
    *(int *)(&stack0x0cff + (int)param_1) = *(int *)(&stack0x0cff + (int)param_1) + iVar9;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    cVar6 = cVar6 + pcVar17[(int)param_1];
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    pcVar17[(int)param_1] = pcVar17[(int)param_1] + cVar6;
    out(iVar9,CONCAT11((char)((in_BX | uVar11) >> 8),cVar6));
    *(undefined1 **)(pcVar17 + (int)param_1) = &stack0xff44 + *(int *)(pcVar17 + (int)param_1);
    *unaff_DI = *unaff_DI & cVar6 + 0x50U;
    param_1[0x38] = -param_1[0x38];
    pcVar5 = (code *)swi(1);
    uVar11 = (*pcVar5)();
    return uVar11;
  case 0x12:
    *(uint *)(pcVar17 + (int)unaff_DI) = *(int *)(pcVar17 + (int)unaff_DI) + in_BX;
    uStack_10 = uStack_10 | 0x800;
    uVar10 = uStack_10;
    iVar9 = *(int *)(pcVar17 + 0x20);
    uStack_10._0_1_ = (undefined1)uVar11;
    uStack_10._1_1_ = (byte)(uVar10 >> 8);
    if (iVar9 == 0) {
      uStack_e = 0x1311;
      uStack_10 = CONCAT11(uStack_10._1_1_,(undefined1)uStack_10) & 0x9fff | 0x300;
    }
    else {
      if (iVar9 == 1) {
        uStack_10._1_1_ = uStack_10._1_1_ | 0x60;
      }
      else {
        uStack_10 = uVar10;
        if (iVar9 != 2) goto LAB_1000_506e;
        uVar11 = uVar11 & 0xbfff;
        uStack_10._1_1_ = (byte)(uVar11 >> 8) & 0xdf | 8;
        uStack_10._0_1_ = (undefined1)uVar11;
      }
      uStack_10 = CONCAT11(uStack_10._1_1_,(undefined1)uStack_10) & 0xfcff;
    }
LAB_1000_506e:
    uVar11 = func_0x0000ffff();
    return uVar11;
  }
  return local_6;
}

