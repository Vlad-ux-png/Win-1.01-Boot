// Function: FUN_1000_3c81

char * __cdecl16near FUN_1000_3c81(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar2 = param_1;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return pcVar2;
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    param_1 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}

