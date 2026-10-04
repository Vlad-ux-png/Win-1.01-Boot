// Function: FUN_1000_357d

void FUN_1000_357d(int *param_1)

{
  undefined2 unaff_DS;
  
  if ((0 < *(int *)0xea6) && (0 < *(int *)0xea4)) {
    param_1[1] = param_1[1] / *(int *)0xea6 + *(int *)0x36;
    *param_1 = *param_1 / *(int *)0xea4 + *(int *)0x34;
    param_1[3] = param_1[3] / *(int *)0xea6 + *(int *)0x36;
    param_1[2] = param_1[2] / *(int *)0xea4 + *(int *)0x34;
  }
  return;
}

