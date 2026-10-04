// Function: FUN_1000_1d06

byte * __cdecl16near FUN_1000_1d06(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  byte bVar5;
  byte extraout_AH;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  byte *unaff_SI;
  undefined2 *unaff_DI;
  byte *pbVar14;
  byte *pbVar15;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar16;
  
  if (unaff_SI[1] == 0x3a) {
    pbVar2 = unaff_SI;
    unaff_SI = unaff_SI + 2;
    bVar5 = (*pbVar2 | 0x20) + 0x9f;
    if ((*pbVar2 | 0x20) < 0x61) {
      return (byte *)0x0;
    }
    if (0x19 < bVar5) {
      return (byte *)0x0;
    }
  }
  else {
    pcVar4 = (code *)swi(0x21);
    bVar5 = (*pcVar4)();
  }
  pbVar3 = (byte *)(unaff_DI + 1);
  *unaff_DI = CONCAT11(0x3a,bVar5 + 0x41);
  iVar12 = 0x2f5c;
  bVar5 = *unaff_SI;
  bVar6 = 0x3a;
  pbVar14 = pbVar3;
  if ((bVar5 != 0x2f) && (bVar16 = bVar5 < 0x5c, bVar5 != 0x5c)) {
    pbVar15 = (byte *)((int)unaff_DI + 3);
    *pbVar3 = 0x5c;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if (bVar16) {
      return (byte *)0x0;
    }
    iVar9 = -1;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar2 = pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (*pbVar2 != 0);
    pbVar14 = pbVar15 + -1;
    bVar6 = extraout_AH;
    if ((pbVar15[-2] != (byte)((uint)iVar12 >> 8)) && (pbVar15[-2] != (byte)iVar12)) {
      *pbVar14 = (byte)iVar12;
      pbVar14 = pbVar15;
    }
  }
LAB_1000_1d65:
  pbVar15 = pbVar14;
  iVar9 = 0;
  pbVar14 = pbVar15;
LAB_1000_1d69:
  pbVar2 = unaff_SI;
  unaff_SI = unaff_SI + 1;
  bVar5 = *pbVar2;
  bVar11 = (byte)iVar12;
  bVar13 = (byte)((uint)iVar12 >> 8);
  bVar10 = (byte)((uint)iVar9 >> 8);
  bVar7 = (byte)iVar9;
  if ((bVar5 == bVar11) || (bVar5 == bVar13)) {
    if (pbVar14[-1] != 0x3a) {
      if (*unaff_SI == bVar11) {
        return (byte *)0x0;
      }
      if (*unaff_SI == bVar13) {
        return (byte *)0x0;
      }
    }
    if (bVar7 != bVar10) {
      *pbVar14 = bVar11;
      pbVar14 = pbVar14 + 1;
      goto LAB_1000_1d65;
    }
    if (iVar9 != 0) goto code_r0x10001d88;
  }
  else {
    if (bVar5 == 0) goto LAB_1000_1e26;
    if (bVar5 < 0x20) {
      return (byte *)0x0;
    }
    if (bVar5 < 0x21) goto LAB_1000_1db6;
    if (bVar5 == 0x3b) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x3a) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x2c) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x7c) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x2b) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x3c) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x3e) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x22) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x5b) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x5d) {
      return (byte *)0x0;
    }
    if (bVar5 == 0x3d) {
      return (byte *)0x0;
    }
    if ((0x60 < bVar5) && (bVar5 < 0x7b)) {
      bVar5 = bVar5 - 0x20;
    }
    iVar9 = CONCAT11(bVar10,bVar7 + 1);
    if (0x77 < (byte)(bVar7 + 1)) {
      return (byte *)0x0;
    }
  }
  pbVar2 = pbVar14;
  pbVar14 = pbVar14 + 1;
  *pbVar2 = bVar5;
  if (bVar5 == 0x2e) {
    cVar8 = (char)iVar9;
    iVar9 = CONCAT11((char)((uint)iVar9 >> 8) + '\x01',cVar8);
    bVar6 = cVar8 - 1;
  }
  bVar5 = (byte)iVar9;
  if ((char)((uint)iVar9 >> 8) == '\0') {
    if (8 < bVar5) {
      return (byte *)0x0;
    }
  }
  else {
    if (0xc < bVar5) {
      return (byte *)0x0;
    }
    if (4 < (byte)(bVar5 - bVar6)) {
      return (byte *)0x0;
    }
  }
  goto LAB_1000_1d69;
code_r0x10001d88:
  if (2 < bVar7) {
    return (byte *)0x0;
  }
  pbVar14 = pbVar14 + -1;
  if (bVar7 != 1) {
    while( true ) {
      pbVar1 = pbVar15 + -2;
      pbVar14 = pbVar15 + -1;
      if (*pbVar1 == bVar11) break;
      pbVar15 = pbVar15 + -1;
      if (*pbVar1 == 0x3a) {
        return (byte *)0x0;
      }
    }
  }
  goto LAB_1000_1d65;
LAB_1000_1db6:
  while( true ) {
    pbVar2 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    if (*pbVar2 == 0) break;
    if (*pbVar2 != 0x20) {
      return (byte *)0x0;
    }
  }
LAB_1000_1e26:
  if ((bVar10 != 1) && (bVar6 = bVar7, 1 < bVar10)) {
    return (byte *)0x0;
  }
  *pbVar14 = 0;
  if (bVar6 == 0) {
    return (byte *)0x0;
  }
  if (8 < bVar6) {
    return (byte *)0x0;
  }
  return pbVar15 + ((iVar12 + 3 + iVar9) - (int)pbVar3);
}

