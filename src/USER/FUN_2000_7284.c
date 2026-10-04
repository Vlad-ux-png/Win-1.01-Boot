// Function: FUN_2000_7284

int FUN_2000_7284(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined2 unaff_DS;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_a = param_3[0x10];
  iVar1 = param_2 + 1;
  if (param_3[0x14] == 0) {
    local_6 = 0;
  }
  else {
    if (param_2 == 0) {
      param_3[0x13] = 0;
    }
    local_4 = *(int *)(param_2 * 2 + param_3[0x1c]);
    local_6 = iVar1;
    local_10 = func_0x0000104a(0x1000,*param_3);
    local_10 = local_10 + local_4;
    local_c = 0;
    while (local_c < 3) {
      local_8 = 0;
      if ((local_c == 1) && (local_8 = 2, *(char *)(local_10 + 1) == '\r')) {
        local_8 = 3;
      }
      if ((local_8 != 0) || (((param_3[3] & 0x4000) != 0 && (local_c != 0)))) {
        iVar3 = param_2 + 1;
        if ((local_a < iVar3) && (iVar2 = FUN_2000_7bd2(iVar3,param_3), iVar2 == 0)) {
          func_0x00000e35(0,*param_3);
          goto LAB_2000_73c2;
        }
        local_10 = local_10 + local_8;
        local_4 = local_4 + local_8;
        piVar5 = (int *)(iVar3 * 2 + param_3[0x1c]);
        if (local_4 == *piVar5) {
          if ((param_1 != 0) && (iVar1 < iVar3)) {
            func_0x00000e3e(0,*param_3);
            goto LAB_2000_740d;
          }
        }
        else {
          local_6 = param_2 + 2;
          *piVar5 = local_4;
        }
        piVar5 = (int *)(iVar3 * 2 + param_3[0x1c]);
        local_e = *piVar5 - piVar5[-1];
        param_2 = iVar3;
        if ((int)param_3[0x13] < local_e) {
          param_3[0x13] = local_e;
        }
      }
      local_c = FUN_2000_7731(*(undefined2 *)(param_2 * 2 + param_3[0x1c]),&local_10,&local_4,
                              param_3);
    }
    func_0x00000c58(0,*param_3);
    iVar1 = param_2 + 1;
    param_3[0x10] = iVar1;
    if ((local_a < (int)param_3[0x10]) &&
       (local_6 = iVar1, iVar3 = FUN_2000_7bd2(iVar1,param_3), iVar3 == 0)) {
LAB_2000_73c2:
      param_3[6] = local_4;
      uVar4 = func_0x0000ffff(0,0xfff4,param_3[1],0x111,param_3[2]);
      func_0x0000ffff(0,param_3[1],0x500,uVar4);
      return -1;
    }
    piVar5 = (int *)(iVar1 * 2 + param_3[0x1c]);
    if (local_4 + 1 != *piVar5) {
      *piVar5 = local_4 + 1;
      local_6 = iVar1;
    }
LAB_2000_740d:
    param_2 = param_2 + 1;
    piVar5 = (int *)(param_2 * 2 + param_3[0x1c]);
    iVar1 = *piVar5 - piVar5[-1];
    if ((int)param_3[0x13] < iVar1) {
      param_3[0x13] = iVar1;
    }
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) & 0xfd;
  }
  return local_6;
}

