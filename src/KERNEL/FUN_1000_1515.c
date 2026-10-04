// Function: FUN_1000_1515

void FUN_1000_1515(code *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  code *extraout_DX;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  
  pcVar5 = (char *)param_3;
  iVar3 = 0x3f;
  pcVar4 = param_2;
  do {
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    if (*pcVar1 == '\0') break;
    cVar2 = (*param_1)();
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar2;
    iVar3 = iVar3 + -1;
    param_1 = extraout_DX;
  } while (iVar3 != 0);
  pcVar4[1] = '\0';
  *param_2 = (char)pcVar4 - (char)param_2;
  return;
}

