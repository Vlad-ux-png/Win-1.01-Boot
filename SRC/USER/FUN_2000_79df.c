// Function: FUN_2000_79df

void __stdcall16far FUN_2000_79df(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  uVar2 = 0x1000;
  if ((*(byte *)(param_1 + 3) & 8) != 0) {
    if (param_1[8] == param_1[10]) {
      local_6 = param_1[9];
    }
    else {
      local_6 = param_1[8];
    }
    local_8 = FUN_2000_6cde(local_6,param_1);
    local_a = 0;
    if (local_6 != 0) {
      iVar1 = func_0x000015a6(0x1000,*param_1);
      local_a = FUN_2000_79c7(iVar1 + local_6 + -2);
      uVar2 = 0;
      func_0x000015fc(0,*param_1);
      if ((((local_a == 0) && ((param_1[3] & 0x4000) != 0)) &&
          (*(int *)(local_8 * 2 + param_1[0x1c]) == local_6)) && (local_8 < (int)param_1[0x10])) {
        local_a = 1;
      }
    }
    FUN_2000_6c6b(&local_e,unaff_SS,local_6,param_1);
    if (((param_1[3] & 0x200) == 0) && ((int)param_1[0xd] < local_e)) {
      local_e = param_1[0xb];
      local_c = local_c + param_1[7];
    }
    if ((int)(param_1[0x12] + param_1[0x11]) <= local_8) {
      local_c = 0x7f00;
    }
    func_0x0000ffff(uVar2,local_c,local_e);
  }
  return;
}

