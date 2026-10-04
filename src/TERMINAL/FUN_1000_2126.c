// Function: FUN_1000_2126

void FUN_1000_2126(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
                  undefined2 param_6)

{
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  FUN_1000_30f1(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(int *)0x24 == 0) {
    local_8 = param_5;
    local_a = param_4;
    local_4 = param_5 + 1;
    local_6 = param_4 + param_1;
    FUN_1000_254f(&local_a,*(undefined2 *)0x20,*(undefined2 *)0x22,*(undefined2 *)0x1c,
                  *(undefined2 *)0x1e,param_6);
  }
  return;
}

