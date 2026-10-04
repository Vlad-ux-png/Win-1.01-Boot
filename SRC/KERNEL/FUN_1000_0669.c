// Function: FUN_1000_0669

void FUN_1000_0669(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar3 = DAT_1000_0008;
  do {
    if (iVar3 == 0) {
      return;
    }
    if (*(char *)*(undefined2 *)0x26 == (char)param_1) {
      pcVar6 = (char *)*(undefined2 *)0x26 + 1;
      bVar7 = pcVar6 == (char *)0x0;
      pcVar5 = (char *)param_2;
      iVar4 = param_1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar1 = pcVar5;
        pcVar5 = pcVar5 + 1;
        bVar7 = *pcVar1 == *pcVar2;
      } while (bVar7);
      if (bVar7) {
        return;
      }
    }
    iVar3 = *(int *)0x6;
  } while( true );
}

