// Function: FUN_1000_8245

undefined2 FUN_1000_8245(char *param_1)

{
  undefined2 unaff_DS;
  
  while( true ) {
    if (*param_1 == '\0') {
      return 0;
    }
    if ((*param_1 == '*') || (*param_1 == '?')) break;
    param_1 = param_1 + 1;
  }
  return 1;
}

