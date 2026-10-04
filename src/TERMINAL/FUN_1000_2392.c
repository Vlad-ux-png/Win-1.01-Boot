// Function: FUN_1000_2392

void FUN_1000_2392(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_6;
  
  if ((((0 < param_1) && (-1 < param_5)) && (param_5 < 0x19)) &&
     ((-1 < param_4 && (param_4 < 0x50)))) {
    iVar1 = *(int *)(param_5 * 2 + 0xe6e);
    iVar2 = param_4 + iVar1 + 0x12;
    if (0x50 < param_4 + param_1) {
      param_1 = 0x50 - param_4;
    }
    local_c = (*(int *)(iVar1 + 10) + *(int *)(iVar1 + 0xc)) - param_4;
    if (local_c < 0) {
      local_c = 0;
    }
    local_6 = param_1 + local_c;
    if (0x50 < param_4 + local_6) {
      local_6 = 0x50 - param_4;
    }
    FUN_1000_6704(param_1,local_6,iVar2,unaff_DS);
    FUN_1000_66c8(param_1,param_2,param_3,iVar2,unaff_DS);
    iVar2 = param_4;
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 10) < param_4)) {
      iVar2 = *(int *)(iVar1 + 10);
    }
    *(int *)(iVar1 + 10) = iVar2;
    *(int *)(iVar1 + 0xc) = (param_4 - *(int *)(iVar1 + 10)) + local_6;
    FUN_1000_1922(local_6,param_4,iVar1);
  }
  return;
}

