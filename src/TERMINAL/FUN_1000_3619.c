// Function: FUN_1000_3619

undefined4 FUN_1000_3619(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((0 < *(int *)0xea6) && (0 < *(int *)0xea4)) {
    param_2 = param_2 / *(int *)0xea6 + *(int *)0x36;
    param_1 = param_1 / *(int *)0xea4 + *(int *)0x34;
  }
  return CONCAT22(param_2,param_1);
}

