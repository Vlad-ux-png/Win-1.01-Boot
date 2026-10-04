// Function: FUN_2000_b41b

undefined2 FUN_2000_b41b(int param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0xffff;
  if (((*(char *)(param_2 + 0x33) == '\0') && (-2 < param_1)) &&
     (param_1 < *(int *)(param_2 + 0x10))) {
    FUN_2000_b642(param_2);
    if (*(int *)(param_2 + 8) != -1) {
      FUN_2000_b042(param_1,param_2);
      FUN_2000_b1d1(*(undefined2 *)(param_2 + 8),param_2);
    }
    if (param_1 == -1) {
      *(undefined2 *)(param_2 + 8) = 0xffff;
    }
    else {
      FUN_2000_b042(param_1,param_2);
      *(int *)(param_2 + 8) = param_1;
      *(int *)(param_2 + 10) = param_1;
      FUN_2000_b1d1(param_1,param_2);
    }
    local_4 = *(undefined2 *)(param_2 + 8);
    FUN_2000_b612(param_2);
  }
  return local_4;
}

