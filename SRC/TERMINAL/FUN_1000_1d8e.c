// Function: FUN_1000_1d8e

undefined2 FUN_1000_1d8e(int *param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_14;
  undefined2 local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  local_12 = 0;
  if (0 < param_1[1]) {
    if (param_1[3] < 1) {
      local_10 = *param_1;
      local_14 = param_1[1];
      local_e = 0;
      *param_1 = *param_1 + local_14;
      param_1[1] = 0;
    }
    else if (param_1[4] < 1) {
      if (param_1[4] < 0) {
        local_4 = param_1[2];
        local_e = param_1[3] - param_1[4];
        local_10 = *param_1;
        local_14 = param_1[2] - *param_1;
        param_1[1] = param_1[1] - (local_14 + local_e);
        *param_1 = *param_1 + local_14 + local_e;
      }
      else {
        local_e = 0;
        local_10 = *param_1;
        local_14 = param_1[2] - *param_1;
        *param_1 = *param_1 + local_14 + param_1[3];
        param_1[1] = param_1[1] - (local_14 + param_1[3]);
        param_1[3] = 0;
      }
    }
    else {
      local_4 = param_1[2] - param_1[4];
      local_e = param_1[3] + param_1[4];
      local_10 = *param_1;
      local_14 = local_4 - *param_1;
      *param_1 = *param_1 + local_e + local_14;
      param_1[1] = param_1[1] - (local_e + local_14);
    }
    if (local_e != 0) {
      local_a = local_4;
      local_c = 0;
      local_6 = local_4 + local_e;
      local_8 = 0x50;
      FUN_1000_2a6b(param_1[4],&local_c,param_2);
    }
    if (local_14 != 0) {
      local_a = local_10;
      local_c = 0;
      local_6 = local_10 + local_14;
      local_8 = 0x50;
      local_12 = FUN_1000_29d6(&local_c,unaff_SS,param_2);
      FUN_1000_2184(&local_c,unaff_SS,param_2);
    }
  }
  param_1[3] = 0;
  return local_12;
}

