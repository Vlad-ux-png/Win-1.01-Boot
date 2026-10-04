// Function: FUN_2000_4371

void FUN_2000_4371(int *param_1,uint param_2)

{
  char *pcVar1;
  
  if (9 < param_2) {
    FUN_2000_4371((int *)param_1,param_1._2_2_,param_2 / 10);
    param_2 = param_2 % 10;
  }
  pcVar1 = (char *)*param_1;
  *param_1 = *param_1 + 1;
  *pcVar1 = (char)param_2 + '0';
  return;
}

