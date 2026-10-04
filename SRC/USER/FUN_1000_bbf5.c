// Function: FUN_1000_bbf5

int __stdcall16far FUN_1000_bbf5(uint param_1,byte *param_2,undefined2 param_3)

{
  int local_6;
  
  local_6 = 0;
  for (; (*param_2 != param_1 && (*param_2 != 0)); param_2 = param_2 + 1) {
    local_6 = local_6 + 1;
  }
  return local_6;
}

