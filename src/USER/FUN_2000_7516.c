// Function: FUN_2000_7516

undefined2 __stdcall16far FUN_2000_7516(int param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  while( true ) {
    if (param_1 < 1) {
      return 0;
    }
    if (*param_2 == '\r') break;
    param_2 = param_2 + 1;
    param_1 = param_1 + -1;
  }
  return 1;
}

