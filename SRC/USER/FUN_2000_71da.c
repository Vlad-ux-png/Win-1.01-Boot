// Function: FUN_2000_71da

void FUN_2000_71da(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(param_1 + param_2);
  func_0x0000ffff(0x1000,1,param_5);
  while ((pcVar1 = pcVar1 + -1, *pcVar1 == '\r' || (*pcVar1 == '\n'))) {
    param_1 = param_1 + -1;
  }
  func_0x0000ffff(0,param_1,param_2);
  return;
}

