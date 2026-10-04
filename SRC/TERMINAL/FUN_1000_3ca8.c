// Function: FUN_1000_3ca8

char * __stdcall16far FUN_1000_3ca8(int param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  if (10 < param_1) {
    param_2 = (char *)FUN_1000_3ca8(param_1 / 10,param_2);
  }
  *param_2 = (char)(param_1 % 10) + '0';
  return param_2 + 1;
}

