// Function: FUN_1000_422e

void __cdecl16near FUN_1000_422e(void)

{
  char *pcVar1;
  char cVar2;
  char *in_DX;
  char *pcVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  do {
    pcVar3 = DAT_1000_00c4;
    pcVar1 = in_DX;
    in_DX = in_DX + 1;
    cVar2 = *pcVar1;
    *pcVar3 = cVar2;
    DAT_1000_00c4 = pcVar3 + 1;
  } while (cVar2 != '\0');
  DAT_1000_00c4 = pcVar3;
  return;
}

