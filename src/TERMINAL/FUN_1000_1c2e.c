// Function: FUN_1000_1c2e

void FUN_1000_1c2e(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_1000_1b5a(param_1,0x50,0,param_2);
  *(undefined2 *)(param_2 + 8) = 1;
  if (param_1 == 0) {
    *(undefined2 *)(param_2 + 0x10) = 0;
    *(undefined2 *)(param_2 + 0xe) = 0;
  }
  return;
}

