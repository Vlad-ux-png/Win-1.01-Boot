// Function: FUN_2000_803e

uint FUN_2000_803e(uint param_1,undefined2 param_2,undefined2 param_3,int param_4,
                  undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint local_6;
  
  local_6 = 0;
  if (param_4 < (int)param_5[0x10]) {
    iVar2 = func_0x000013ea(0x1000,*param_5);
    iVar1 = *(int *)(param_4 * 2 + param_5[0x1c]);
    local_6 = FUN_2000_6ee7(param_4,param_5);
    if (param_1 < local_6) {
      local_6 = param_1;
    }
    func_0x0000141c(0,local_6,param_2,param_3,iVar1 + iVar2);
    func_0x00001429(0,*param_5);
  }
  return local_6;
}

