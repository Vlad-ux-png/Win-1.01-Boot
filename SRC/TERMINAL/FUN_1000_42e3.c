// Function: FUN_1000_42e3

char * __cdecl16near FUN_1000_42e3(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  while ((*param_1 != '\0' && (param_3 = param_3 + -1, 0 < param_3))) {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == ',') break;
    *param_2 = *pcVar1;
    param_2 = param_2 + 1;
  }
  *param_2 = '\0';
  return param_1;
}

