// Function: OPENFILE

int __stdcall16far OPENFILE(uint param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int extraout_DX;
  int extraout_DX_00;
  int unaff_BP;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  int *piVar17;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int iVar18;
  undefined2 uVar19;
  bool bVar20;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  undefined4 uVar21;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  piVar14 = &iStack_2;
  piVar13 = &iStack_2;
  if ((param_1 & 0x8000) == 0) {
    piVar13 = &iStack_2;
    iVar11 = FUN_1000_1d06();
    if ((*(byte *)((int)piVar13 + 7) & 4) != 0) {
      piVar14 = (int *)0x0;
    }
    *(undefined2 *)((int)piVar13 + -6) = piVar14;
    iVar9 = 0;
    if (iVar11 == 0) goto LAB_1000_1bda;
    iVar18 = (int)((ulong)*(undefined4 *)((int)piVar13 + 8) >> 0x10);
    iVar11 = (int)*(undefined4 *)((int)piVar13 + 8) + 8;
    if (DAT_1000_0053 != '\0') {
      (*(code *)*(undefined2 *)0x72)(0x1000,iVar11,iVar18,iVar11,iVar18);
    }
    if ((*(byte *)((int)piVar13 + 7) & 1) != 0) {
      iVar9 = 0;
      goto LAB_1000_1c46;
    }
    bVar20 = false;
    if ((*(byte *)((int)piVar13 + 7) & 0x10) == 0) {
      pcVar7 = (code *)swi(0x21);
      uVar21 = (*pcVar7)();
      if (bVar20) goto LAB_1000_1b0a;
    }
    bVar20 = false;
    pcVar7 = (code *)swi(0x21);
    uVar21 = (*pcVar7)();
    iVar9 = (int)uVar21;
    if (bVar20) goto LAB_1000_1b0a;
LAB_1000_1bf8:
    piVar8 = (int *)*(undefined4 *)((int)piVar13 + 8);
    iVar18 = (int)((ulong)piVar8 >> 0x10);
    piVar14 = (int *)piVar8;
    piVar17 = piVar14 + 4;
    iVar11 = -1;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      piVar5 = piVar17;
      piVar17 = (int *)((int)piVar17 + 1);
    } while ((char)*piVar5 != '\0');
    uVar12 = 6 - iVar11;
    *(char *)piVar8 = (char)uVar12;
    uVar10 = uVar12;
    if (DAT_1000_0053 != '\0') {
      bVar20 = (*(byte *)(piVar14 + 4) | 0x20) == 0x61;
      FUN_1000_1c65();
      uVar10 = uVar12 & 0xff;
      if (!bVar20) {
        uVar10 = CONCAT11(1,(char)uVar12);
      }
    }
    *(undefined1 *)((int)piVar14 + 1) = (char)(uVar10 >> 8);
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    iVar11 = extraout_DX_00;
  }
  else {
    iVar18 = (int)((ulong)param_2 >> 0x10);
    piVar14 = (int *)param_2;
    if ((piVar14 == (int *)0x0) && (*param_2 == 0x454e)) {
      unaff_CS = 0x1000;
      piVar14 = (int *)*(undefined2 *)0xa;
      iVar18 = DAT_1000_0008;
    }
    FUN_1000_3225();
    bVar20 = false;
    uVar10 = 0;
    uVar21 = (*(code *)*(undefined2 *)0x7a)
                       (unaff_CS,(uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                                 (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4);
    iVar9 = (int)uVar21;
    if (bVar20) {
LAB_1000_1b0a:
      iVar9 = (int)uVar21;
      if (3 < (byte)uVar21) {
LAB_1000_1bda:
        *(int *)((int)*(undefined4 *)((int)piVar13 + 8) + 2) = iVar9;
        return -1;
      }
      if (*(char *)((int)piVar13 + -6) == '\0') {
        iVar9 = FUN_1000_1e4b(*(undefined2 *)((int)piVar13 + -4),
                              (undefined1 *)((int)piVar13 + -0x56),unaff_SS,
                              (int)((ulong)uVar21 >> 0x10),iVar18);
        if (iVar9 != -1) {
LAB_1000_1b2a:
          FUN_1000_1d06();
          goto LAB_1000_1bf8;
        }
        iVar9 = -1;
        if (DAT_1000_0008 != 0) {
          pcVar16 = (char *)(*(int *)0xa + 8);
          pcVar15 = (char *)((int)piVar13 + -0x56);
          do {
            pcVar2 = pcVar16;
            pcVar16 = pcVar16 + 1;
            cVar4 = *pcVar2;
            pcVar2 = pcVar15;
            pcVar15 = pcVar15 + 1;
            *pcVar2 = cVar4;
          } while (cVar4 != '\0');
          pcVar16 = (char *)((int)piVar13 + -0x56);
          FUN_1000_1ce0();
          pcVar2 = (char *)*(undefined4 *)((int)piVar13 + 0xc);
          pcVar15 = (char *)pcVar2;
          do {
            pcVar3 = pcVar15;
            pcVar15 = pcVar15 + 1;
            cVar4 = *pcVar3;
            pcVar3 = pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar3 = cVar4;
          } while (cVar4 != '\0');
          bVar20 = false;
          pcVar7 = (code *)swi(0x21);
          iVar9 = (*pcVar7)();
          if (!bVar20) goto LAB_1000_1b2a;
        }
      }
LAB_1000_1b65:
      do {
        uVar19 = (undefined2)((ulong)*(undefined4 *)((int)piVar13 + 8) >> 0x10);
        pbVar1 = (byte *)((int)*(undefined4 *)((int)piVar13 + 8) + 8);
        if ((((*(byte *)((int)piVar13 + 7) & 0x20) == 0) || (DAT_1000_0053 == '\0')) ||
           (bVar6 = *pbVar1, bVar20 = bVar6 == 0x41, bVar6 < 0x41)) goto LAB_1000_1bda;
        FUN_1000_1c65();
        if (bVar20) {
          bVar20 = false;
          if (*(char *)((int)piVar13 + -6) == '\0') goto LAB_1000_1bb1;
        }
        else {
          if (((*(byte *)((int)piVar13 + 7) & 0x80) == 0) && (*(char *)((int)piVar13 + -6) != '\0'))
          {
            iVar9 = FUN_1000_1c72();
            goto LAB_1000_1bda;
          }
          iVar11 = -1;
          do {
            iVar11 = iVar11 + 1;
            bVar20 = iVar11 == 0;
            FUN_1000_1c65();
          } while (!bVar20);
          *pbVar1 = (char)iVar11 + 0x41;
LAB_1000_1bb1:
          uVar21 = *(undefined4 *)((int)piVar13 + 8);
          pcVar16 = (char *)((int)uVar21 + 0xb);
          FUN_1000_1ce0();
          pcVar15 = pcVar16;
          do {
            pcVar2 = pcVar16;
            pcVar16 = pcVar16 + 1;
            cVar4 = *pcVar2;
            pcVar2 = pcVar15;
            pcVar15 = pcVar15 + 1;
            *pcVar2 = cVar4;
            bVar20 = cVar4 == '\0';
          } while (!bVar20);
        }
        iVar9 = FUN_1000_1c80();
        if (bVar20) goto LAB_1000_1bda;
        bVar20 = false;
        pcVar7 = (code *)swi(0x21);
        iVar9 = (*pcVar7)();
      } while (bVar20);
      goto LAB_1000_1bf8;
    }
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    iVar11 = extraout_DX;
    piVar13 = &iStack_2;
    if (((param_1 & 0x400) != 0) &&
       ((piVar14[2] != extraout_DX || (piVar13 = &iStack_2, piVar14[3] != uVar10)))) {
      pcVar7 = (code *)swi(0x21);
      iVar9 = (*pcVar7)();
      piVar13 = &iStack_2;
      goto LAB_1000_1b65;
    }
  }
  piVar14[3] = uVar10;
  piVar14[2] = iVar11;
  if ((*(byte *)((int)piVar13 + 7) & 0x42) == 0) {
    return iVar9;
  }
  pcVar7 = (code *)swi(0x21);
  (*pcVar7)();
LAB_1000_1c46:
  if ((*(byte *)((int)piVar13 + 7) & 2) != 0) {
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
  }
  return iVar9;
}

