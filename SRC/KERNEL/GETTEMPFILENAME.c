// Function: GETTEMPFILENAME

uint __stdcall16far GETTEMPFILENAME(char *param_1,uint param_2,char *param_3,uint param_4)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  uint extraout_DX;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  bool bVar14;
  
  uVar6 = GETTEMPDRIVE(param_4);
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar11 = (char *)param_1;
  pcVar12 = pcVar11 + 2;
  *(undefined2 *)param_1 = uVar6;
  if ((param_4 & 0x80) == 0) {
    uVar6 = *(undefined2 *)0x2c;
    piVar9 = (int *)0x0;
LAB_1000_1f5f:
    piVar10 = piVar9 + 1;
    if ((char)*piVar9 != '\0') {
      if (((*piVar9 != 0x4554) || (piVar1 = piVar10, piVar10 = piVar9 + 2, *piVar1 != 0x504d)) ||
         (piVar1 = piVar10, piVar10 = (int *)((int)piVar9 + 5), (char)*piVar1 != '='))
      goto LAB_1000_1f74;
      if ((char)piVar9[3] == ':') {
        pcVar12 = pcVar11;
      }
      while( true ) {
        piVar1 = piVar10;
        piVar10 = (int *)((int)piVar10 + 1);
        if ((char)*piVar1 == '\0') break;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar2 = (char)*piVar1;
      }
    }
    if (pcVar12[-1] == '\\') {
      pcVar12 = pcVar12 + -1;
    }
    pcVar11 = pcVar12 + 2;
    pcVar12[0] = '\\';
    pcVar12[1] = '~';
    goto LAB_1000_1f9b;
  }
  pcVar11 = pcVar11 + 3;
  *pcVar12 = '~';
LAB_1000_1f9b:
  pcVar12 = (char *)param_3;
  uVar7 = 3;
  do {
    pcVar2 = pcVar12;
    pcVar12 = pcVar12 + 1;
    if (*pcVar2 == '\0') break;
    pcVar3 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar3 = *pcVar2;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  bVar14 = false;
  uVar8 = param_2;
  if (param_2 == 0) {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    uVar8 = extraout_DX ^ uVar7;
    bVar14 = uVar8 == 0;
  }
  do {
    while (bVar14) {
      uVar8 = uVar8 + 1;
      bVar14 = uVar8 == 0;
    }
    uVar6 = FUN_1000_1f17();
    *(undefined2 *)pcVar11 = uVar6;
    uVar6 = FUN_1000_1f17();
    *(undefined2 *)(pcVar11 + 2) = uVar6;
    (pcVar11 + 4)[0] = '.';
    (pcVar11 + 4)[1] = 'T';
    (pcVar11 + 6)[0] = 'M';
    (pcVar11 + 6)[1] = 'P';
    pcVar11[8] = '\0';
    if (param_2 != 0) {
      return uVar8;
    }
    bVar14 = DAT_1000_0050 < 3;
    if (bVar14) {
      pcVar4 = (code *)swi(0x21);
      cVar5 = (*pcVar4)();
      if (bVar14) {
        if (cVar5 == '\x02') {
          bVar14 = false;
          pcVar4 = (code *)swi(0x21);
          (*pcVar4)();
          if (!bVar14) goto LAB_1000_200f;
        }
        return 0;
      }
    }
    else {
      bVar14 = false;
      pcVar4 = (code *)swi(0x21);
      cVar5 = (*pcVar4)();
      if (!bVar14) {
LAB_1000_200f:
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        return uVar8;
      }
      if (cVar5 != 'P') {
        return 0;
      }
    }
    uVar8 = uVar8 + 1;
    bVar14 = uVar8 == 0;
  } while( true );
LAB_1000_1f74:
  do {
    piVar1 = piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
    piVar9 = piVar10;
  } while ((char)*piVar1 != '\0');
  goto LAB_1000_1f5f;
}

