// Function: FUN_2000_8dfa

void FUN_2000_8dfa(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    uVar1 = func_0x000004c0(0x1000,100,param_2,*(int *)(param_3 + 0x26) + -1);
    *(undefined2 *)(param_3 + 0x2a) = uVar1;
  }
  else {
    uVar1 = func_0x00000462(0x1000,100,param_2,*(int *)(param_3 + 0x20) + -1);
    *(undefined2 *)(param_3 + 0x24) = uVar1;
  }
  return;
}

