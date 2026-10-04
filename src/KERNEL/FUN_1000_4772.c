// Function: FUN_1000_4772

void FUN_1000_4772(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int in_CX;
  int iVar4;
  char *in_BX;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar8 = (undefined2)((ulong)*(undefined4 *)0x24 >> 0x10);
  pcVar7 = (char *)(char *)*(undefined4 *)0x24;
  uVar9 = (undefined2)((ulong)*(undefined4 *)0x24 >> 0x10);
  pcVar6 = (char *)(char *)*(undefined4 *)0x24;
LAB_1000_477b:
  do {
    do {
      pcVar5 = pcVar6;
      iVar4 = in_CX;
      in_CX = iVar4 + -1;
      pcVar6 = pcVar5 + 1;
    } while (in_CX != 0 && (*pcVar5 == ' ' || *pcVar5 == '\t'));
    pcVar3 = in_BX;
    if (in_CX == 0) {
LAB_1000_47be:
      do {
        pcVar6 = pcVar7;
        pcVar7 = pcVar6 + -1;
      } while (pcVar6[-1] == '\x1a');
      pcVar6[0] = '\r';
      pcVar6[1] = '\n';
      pcVar6[2] = '\0';
      uVar8 = *(undefined2 *)0x22;
      GLOBALUNLOCK(uVar8);
      uVar8 = GLOBALREALLOC(0,pcVar6 + 3,0,uVar8);
      uVar10 = GLOBALLOCK(uVar8);
      *(undefined2 *)0x24 = (int)uVar10;
      *(undefined2 *)0x26 = (int)((ulong)uVar10 >> 0x10);
      return;
    }
LAB_1000_4788:
    in_BX = pcVar3;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar1 = cVar2;
    iVar4 = iVar4 + -1;
    if (cVar2 != '=') {
      if (iVar4 == 0) goto LAB_1000_47be;
      pcVar3 = in_BX;
      if (((cVar2 == ' ') || (cVar2 == '\t')) ||
         (in_CX = iVar4, pcVar3 = pcVar7, pcVar6 = pcVar5, cVar2 != '\n')) goto LAB_1000_4788;
      goto LAB_1000_477b;
    }
    pcVar7 = in_BX + 1;
    *in_BX = '=';
    if (iVar4 == 0) goto LAB_1000_47be;
    do {
      pcVar6 = pcVar5;
      in_CX = iVar4;
      iVar4 = in_CX + -1;
      pcVar5 = pcVar6 + 1;
    } while (iVar4 != 0 && (*pcVar6 == ' ' || *pcVar6 == '\t'));
    if (iVar4 == 0) goto LAB_1000_47be;
    do {
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar2;
      in_CX = in_CX + -1;
      if (in_CX == 0) goto LAB_1000_47be;
    } while (cVar2 != '\n');
  } while( true );
}

