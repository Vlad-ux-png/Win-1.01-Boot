// Function: FUN_1000_2085

uint FUN_1000_2085(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  code *pcVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  uint unaff_SS;
  bool bVar21;
  int local_48 [30];
  int local_c;
  int local_a;
  uint local_8;
  uint local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  if (param_1._2_2_ != 0) {
    local_4 = *param_1 + 1;
  }
  bVar21 = param_2 < param_3;
  if (param_2 == param_3) {
    pbVar15 = (byte *)local_48;
    uVar11 = 0x40;
    pcVar8 = (code *)swi(0x21);
    uVar10 = (*pcVar8)();
    if ((((bVar21) || (uVar10 < uVar11)) || (local_48[0] != 0x5a4d)) ||
       (bVar21 = false, local_a == 0 && local_c == 0)) {
      return 0;
    }
    pcVar8 = (code *)swi(0x21);
    (*pcVar8)();
    if (bVar21) {
      return 0;
    }
    iVar13 = 0x40;
    pcVar8 = (code *)swi(0x21);
    iVar17 = (*pcVar8)();
    if (bVar21) {
      return 0;
    }
    if (iVar17 != iVar13) {
      return 0;
    }
    if (local_48[0] != 0x454e) {
      return 0;
    }
  }
  else {
    pbVar15 = (byte *)0x0;
    unaff_SS = param_3;
  }
  local_8 = param_3;
  iVar17 = *(int *)(pbVar15 + 4) + *(int *)(pbVar15 + 6) + *(int *)(pbVar15 + 0x1c) * 7 +
           *(int *)(pbVar15 + 0x30) * 5 + 0x14 + local_4;
  uVar10 = FUN_1000_098a(0,iVar17,7);
  if (uVar10 != 0) {
    local_6 = uVar10;
    if (param_2 == local_8) {
      uVar11 = *(int *)(pbVar15 + 4) + *(int *)(pbVar15 + 6);
      pbVar18 = (byte *)((iVar17 - local_4) - uVar11);
      bVar21 = uVar11 < 0x40;
      iVar17 = uVar11 - 0x40;
      for (iVar13 = 0x40; iVar13 != 0; iVar13 = iVar13 + -1) {
        pbVar4 = pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar1 = pbVar15;
        pbVar15 = pbVar15 + 1;
        *pbVar4 = *pbVar1;
      }
      pcVar8 = (code *)swi(0x21);
      iVar13 = (*pcVar8)();
      if ((bVar21) || (pbVar15 = pbVar18 + -0x40, unaff_SS = uVar10, iVar13 != iVar17))
      goto LAB_1000_2165;
    }
    if (((*(uint *)(pbVar15 + 0xc) & 0x2000) == 0) && ('\x03' < (char)pbVar15[2])) {
      pbVar18 = (byte *)0x0;
      for (iVar17 = 0x40; iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar4 = pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar1 = pbVar15;
        pbVar15 = pbVar15 + 1;
        *pbVar4 = *pbVar1;
      }
      iVar17 = *(int *)0x1c;
      *(undefined2 *)0x22 = pbVar18;
      for (; iVar17 != 0; iVar17 = iVar17 + -1) {
        *(undefined2 *)pbVar18 = *(undefined2 *)pbVar15;
        *(undefined2 *)(pbVar18 + 2) = *(undefined2 *)(pbVar15 + 2);
        pbVar19 = pbVar15 + 6;
        *(undefined2 *)(pbVar18 + 4) = *(undefined2 *)(pbVar15 + 4);
        pbVar7 = pbVar18 + 8;
        pbVar15 = pbVar15 + 8;
        *(undefined2 *)(pbVar18 + 6) = *(undefined2 *)pbVar19;
        pbVar18 = pbVar18 + 10;
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      iVar17 = *(int *)0x26;
      iVar13 = *(int *)0x24;
      *(undefined2 *)0x24 = pbVar18;
      for (iVar17 = iVar17 - iVar13; iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar4 = pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar1 = pbVar15;
        pbVar15 = pbVar15 + 1;
        *pbVar4 = *pbVar1;
      }
      iVar17 = *(int *)0x28;
      iVar13 = *(int *)0x26;
      *(undefined2 *)0x26 = pbVar18;
      puVar16 = (uint *)(pbVar15 + 1);
      uVar11 = (uint)*pbVar15;
      pbVar19 = pbVar18 + 1;
      *pbVar18 = *pbVar15;
      iVar17 = ((iVar17 - iVar13) - uVar11) + -1;
      do {
        puVar16 = (uint *)((int)puVar16 + 1);
        bVar9 = FUN_1000_4ba7();
        pbVar1 = pbVar19;
        pbVar19 = pbVar19 + 1;
        *pbVar1 = bVar9;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      for (; iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar1 = pbVar19;
        pbVar19 = pbVar19 + 1;
        puVar2 = puVar16;
        puVar16 = (uint *)((int)puVar16 + 1);
        *pbVar1 = (byte)*puVar2;
      }
      iVar17 = *(int *)0x2a;
      iVar13 = *(int *)0x28;
      *(undefined2 *)0x28 = pbVar19;
      for (iVar17 = iVar17 - iVar13; iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar1 = pbVar19;
        pbVar19 = pbVar19 + 1;
        puVar2 = puVar16;
        puVar16 = (uint *)((int)puVar16 + 1);
        *pbVar1 = (byte)*puVar2;
      }
      *(undefined2 *)0x3e = pbVar19;
      for (iVar17 = *(int *)0x1c; iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar1 = pbVar19;
        pbVar19 = pbVar19 + 1;
        *pbVar1 = 0xff;
      }
      *(undefined2 *)0x3c = pbVar19;
      iVar17 = *(int *)0x1c;
      if (iVar17 != 0) {
        iVar13 = 0;
        do {
          iVar13 = (uint)(byte)((char)((uint)iVar13 >> 8) + 1) << 8;
          pbVar15 = pbVar19 + 2;
          pbVar19[0] = 0xcd;
          pbVar19[1] = 0x3f;
          pbVar19 = pbVar19 + 4;
          *(int *)pbVar15 = iVar13;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      pbVar19[0] = 0;
      pbVar19[1] = 0;
      puVar20 = (uint *)(pbVar19 + 4);
      *(uint *)(pbVar19 + 2) = uVar10;
      iVar17 = *(int *)0x4 - *(int *)0x2a;
      *(undefined2 *)0x2a = puVar20;
      if (iVar17 != 0) {
        for (; iVar17 != 0; iVar17 = iVar17 + -1) {
          puVar5 = puVar20;
          puVar20 = (uint *)((int)puVar20 + 1);
          puVar2 = puVar16;
          puVar16 = (uint *)((int)puVar16 + 1);
          *(byte *)puVar5 = (byte)*puVar2;
        }
      }
      *(undefined2 *)0x4 = puVar20;
      while( true ) {
        puVar2 = puVar16;
        puVar16 = puVar16 + 1;
        uVar11 = *puVar2;
        puVar2 = puVar20;
        puVar20 = puVar20 + 1;
        *puVar2 = uVar11;
        uVar14 = uVar11 & 0xff;
        if (uVar14 == 0) break;
        cVar12 = (char)(uVar11 >> 8);
        if (cVar12 != '\0') {
          if (cVar12 == -1) {
            do {
              *puVar20 = CONCAT11(0x2e,(byte)*puVar16);
              puVar20[1] = 0x3ed0;
              puVar20[2] = (uint)(byte)(*(byte *)((int)puVar16 + 3) - 1) + *(int *)0x3e;
              puVar20[3] = *(uint *)((int)puVar16 + 1);
              puVar6 = (uint *)((int)puVar20 + 9);
              puVar3 = puVar16 + 2;
              *(byte *)(puVar20 + 4) = *(byte *)((int)puVar16 + 3);
              puVar20 = (uint *)((int)puVar20 + 0xb);
              puVar16 = puVar16 + 3;
              *puVar6 = *puVar3;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          else {
            for (iVar17 = uVar14 * 3; iVar17 != 0; iVar17 = iVar17 + -1) {
              puVar5 = puVar20;
              puVar20 = (uint *)((int)puVar20 + 1);
              puVar2 = puVar16;
              puVar16 = (uint *)((int)puVar16 + 1);
              *(byte *)puVar5 = (byte)*puVar2;
            }
          }
        }
      }
      *(undefined2 *)0x2 = 0;
      *(undefined2 *)0x6 = 0;
      *(undefined2 *)0xa = 0;
      if (*(int *)0x32 == 0) {
        *(undefined2 *)0x32 = 9;
      }
      if (local_4 != 0) {
        *(undefined2 *)0xa = puVar20;
        pbVar15 = (byte *)param_1;
        for (; local_4 != 0; local_4 = local_4 + -1) {
          puVar2 = puVar20;
          puVar20 = (uint *)((int)puVar20 + 1);
          pbVar1 = pbVar15;
          pbVar15 = pbVar15 + 1;
          *(byte *)puVar2 = *pbVar1;
        }
      }
      iVar17 = 0;
      if (*(int *)0xe != 0) {
        iVar17 = (*(int *)0xe + -1) * 10 + *(int *)0x22;
      }
      *(int *)0x8 = iVar17;
      iVar17 = *(int *)0x22;
      uVar11 = 0;
LAB_1000_22ad:
      uVar11 = uVar11 + 1;
      if (*(uint *)0x1c < uVar11) {
        if (*(int *)0x16 != 0) {
          iVar17 = (*(int *)0x16 + -1) * 10 + *(int *)0x22;
          pbVar1 = (byte *)(iVar17 + 4);
          *pbVar1 = *pbVar1 | 0x40;
          if (*(int *)0xe != 0) {
            puVar2 = (uint *)(iVar17 + 4);
            *puVar2 = *puVar2 | 0x400;
            *(byte *)(*(int *)0x8 + 4) = *(byte *)(*(int *)0x8 + 4) | 0x40;
          }
        }
        if (((*(uint *)0xc & 0x8000) == 0) && (*(int *)0x12 == 0)) {
          *(undefined2 *)0x12 = 0x1000;
        }
        *(uint *)0x1 = uVar10;
        return uVar10;
      }
      if ((*(byte *)(iVar17 + 4) & 1) == 0) {
        if ((*(byte *)(iVar17 + 4) & 0x10) == 0) {
          if (DAT_1000_008e == '\0') {
            *(uint *)(iVar17 + 4) = *(uint *)(iVar17 + 4) | 0x40;
          }
        }
        else {
          *(uint *)(iVar17 + 4) = *(uint *)(iVar17 + 4) | 0xf000;
          *(byte *)0xc = *(byte *)0xc | 0x80;
        }
        if (((*(byte *)0xc & 2) == 0) && ((*(byte *)0xc & 1) != 0)) {
          pbVar15 = (byte *)*(undefined2 *)0x4;
          while( true ) {
            pbVar18 = pbVar15 + 1;
            uVar14 = (uint)*pbVar15;
            if (uVar14 == 0) break;
            pbVar15 = pbVar15 + 2;
            bVar9 = *pbVar18;
            if (bVar9 != 0) {
              if (bVar9 == 0xff) {
                do {
                  if ((pbVar15[8] == (byte)uVar11) && ((*pbVar15 & 2) != 0)) goto LAB_1000_2354;
                  pbVar15 = pbVar15 + 0xb;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              else if (bVar9 == (byte)uVar11) {
                do {
                  if ((*pbVar15 & 2) != 0) goto LAB_1000_2354;
                  pbVar15 = pbVar15 + 3;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              else {
                pbVar15 = pbVar15 + uVar14 * 3;
              }
            }
          }
        }
      }
      else {
        *(uint *)(iVar17 + 4) = *(uint *)(iVar17 + 4) & 0xfff;
        if (*(int *)0x8 != iVar17) {
          *(byte *)(iVar17 + 4) = *(byte *)(iVar17 + 4) | 0x40;
          *(byte *)(iVar17 + 4) = *(byte *)(iVar17 + 4) & 0xef;
        }
      }
      goto LAB_1000_2371;
    }
  }
LAB_1000_2165:
  FUN_1000_09f3(local_6);
  return 1;
LAB_1000_2354:
  *(uint *)(iVar17 + 4) = *(uint *)(iVar17 + 4) | 0x400;
  if (((*(byte *)(iVar17 + 4) & 0x40) != 0) && (*(int *)0x8 != 0)) {
    pbVar1 = (byte *)(*(int *)0x8 + 4);
    *pbVar1 = *pbVar1 | 0x40;
  }
LAB_1000_2371:
  iVar17 = iVar17 + 10;
  goto LAB_1000_22ad;
}

