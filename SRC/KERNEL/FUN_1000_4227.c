// Function: FUN_1000_4227

void FUN_1000_4227(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *in_DX;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)0x92;
  do {
    DAT_1000_00c4 = pcVar3;
    pcVar1 = in_DX;
    in_DX = in_DX + 1;
    cVar2 = *pcVar1;
    *DAT_1000_00c4 = cVar2;
    pcVar3 = DAT_1000_00c4 + 1;
  } while (cVar2 != '\0');
  return;
}

