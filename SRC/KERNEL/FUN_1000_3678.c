// Function: FUN_1000_3678

void FUN_1000_3678(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 unaff_CS;
  
  if (param_3 == 0) {
    unaff_CS = 0x1000;
    param_3 = DAT_1000_0018;
  }
  if (*(int *)0x7e == 0x4454) {
    return;
  }
  FATALEXIT(unaff_CS,0x301);
  return;
}

