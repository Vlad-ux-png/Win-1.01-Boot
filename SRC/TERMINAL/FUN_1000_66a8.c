// Function: FUN_1000_66a8

undefined1 FUN_1000_66a8(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  do {
    if (param_1 == 0) {
      return 1;
    }
    param_1 = param_1 + -1;
    pcVar2 = param_2;
    param_2 = param_2 + 1;
    pcVar1 = param_3;
    param_3 = param_3 + 1;
  } while (*pcVar1 == *pcVar2);
  return 0;
}

