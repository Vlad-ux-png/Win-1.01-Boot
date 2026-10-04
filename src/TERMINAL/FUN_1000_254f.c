// Function: FUN_1000_254f

void FUN_1000_254f(int param_1,undefined2 param_2,int param_3,undefined2 param_4,int param_5,
                  undefined2 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_14;
  int local_12;
  undefined2 local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = 0x1000;
  if ((*(int *)(param_1 + 2) <= param_3) && (param_5 < *(int *)(param_1 + 6))) {
    if (param_5 < *(int *)(param_1 + 2)) {
      param_5 = *(int *)(param_1 + 2);
      param_4 = 0;
    }
    if (*(int *)(param_1 + 6) <= param_3) {
      param_3 = *(int *)(param_1 + 6) + -1;
      param_2 = 0x50;
    }
    for (; param_5 <= param_3; param_5 = param_5 + 1) {
      local_12 = param_5;
      local_14 = param_4;
      local_e = param_5 + 1;
      if (param_5 == param_3) {
        local_10 = param_2;
      }
      else {
        local_10 = 0x50;
      }
      local_c = *(int *)(param_5 * 2 + 0xe6e);
      local_8 = param_5;
      local_4 = param_5 + 1;
      local_a = 0;
      local_6 = *(int *)(local_c + 10) + *(int *)(local_c + 0xc);
      iVar1 = func_0x0000ffff(uVar2,&local_a);
      if (iVar1 != 0) {
        FUN_1000_2961(&local_14,param_6);
      }
      param_4 = 0;
      uVar2 = 0;
    }
  }
  return;
}

