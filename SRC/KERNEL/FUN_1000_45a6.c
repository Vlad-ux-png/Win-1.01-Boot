// Function: FUN_1000_45a6

uint FUN_1000_45a6(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 extraout_AH;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  bool bVar12;
  char *pcVar13;
  
  pcVar13 = (char *)FUN_1000_46d4();
  uVar6 = (uint)((ulong)pcVar13 >> 0x10);
  pcVar9 = (char *)pcVar13;
  uVar3 = (uint)pcVar9 | uVar6;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar4 = (undefined1)(uVar3 >> 8);
      if (*pcVar9 == '[') {
        pcVar9 = pcVar9 + 1;
        bVar12 = pcVar9 == (char *)0x0;
        FUN_1000_46b4();
        uVar4 = extraout_AH;
        if (bVar12) {
          iVar5 = -1;
          goto code_r0x100045e8;
        }
      }
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar13 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar13 != '\n');
      uVar3 = CONCAT11(uVar4,*pcVar9);
    } while (*pcVar9 != '\0');
  }
  return uVar3;
  while( true ) {
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar9;
    pcVar9 = pcVar9 + 1;
    if (*pcVar13 == '\n') break;
code_r0x100045e8:
    if (iVar5 == 0) break;
  }
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar1 = pcVar9;
  pcVar8 = (char *)param_2;
  uVar3 = 0;
  do {
    while( true ) {
      pcVar10 = pcVar1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if (cVar2 == '=') break;
      pcVar1 = pcVar9;
      if ((cVar2 != '\n') && ((cVar2 == '[' || (pcVar1 = pcVar10, cVar2 == '\0')))) {
        *pcVar8 = '\0';
        return uVar3;
      }
    }
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if (cVar2 == '=') {
        cVar2 = '\0';
      }
      *pcVar8 = cVar2;
      uVar7 = uVar3 + 1;
      pcVar9 = pcVar8 + 1;
      if (param_1 - 1U <= uVar3 + 1) {
        uVar7 = uVar3;
        pcVar9 = pcVar8;
      }
      uVar3 = uVar7;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    iVar5 = -1;
    do {
      pcVar9 = pcVar10;
      pcVar1 = pcVar10;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar13 = pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar10;
      pcVar1 = pcVar10;
    } while (*pcVar13 != '\n');
  } while( true );
}

