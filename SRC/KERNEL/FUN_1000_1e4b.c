// Function: FUN_1000_1e4b

undefined2 FUN_1000_1e4b(undefined2 param_1,char *param_2,char *param_3)

{
  undefined2 uVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  
  FUN_1000_1ce0();
  uVar1 = *(undefined2 *)0x2c;
  piVar7 = (int *)0x0;
  while( true ) {
    if ((char)*piVar7 == '\0') {
      return 0xffff;
    }
    piVar6 = piVar7 + 1;
    if (((*piVar7 == 0x4150) && (piVar4 = piVar6, piVar6 = piVar7 + 2, *piVar4 == 0x4854)) &&
       (piVar4 = piVar6, piVar6 = (int *)((int)piVar7 + 5), (char)*piVar4 == '=')) break;
    do {
      piVar4 = piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar7 = piVar6;
    } while ((char)*piVar4 != '\0');
  }
  do {
    uVar10 = (undefined2)((ulong)param_2 >> 0x10);
    piVar7 = piVar6;
    pcVar9 = (char *)param_2;
    do {
      pcVar8 = pcVar9;
      cVar3 = (char)*piVar7;
      *pcVar8 = cVar3;
      piVar6 = (int *)((int)piVar7 + 1);
      if (cVar3 == ';') break;
      piVar6 = piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      pcVar9 = pcVar8 + 1;
    } while (cVar3 != '\0');
    pcVar9 = pcVar8 + 1;
    if (pcVar8[-1] == '\\') {
      pcVar9 = pcVar8;
    }
    pcVar9[-1] = '\\';
    pcVar8 = (char *)param_3;
    do {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar3 = *pcVar2;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = cVar3;
      uVar11 = false;
    } while (cVar3 != '\0');
    pcVar5 = (code *)swi(0x21);
    uVar10 = (*pcVar5)();
    if (!(bool)uVar11) {
      pcVar5 = (code *)swi(0x21);
      uVar10 = (*pcVar5)();
    }
    if (!(bool)uVar11) {
      return uVar10;
    }
    if ((char)*piVar6 == '\0') {
      return 0xffff;
    }
  } while( true );
}

