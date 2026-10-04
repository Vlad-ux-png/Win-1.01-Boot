// Function: FUN_1000_1ca6

int FUN_1000_1ca6(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_16;
  int *local_12;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_c = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  *(undefined2 *)0x18 = 1;
  local_16 = 0;
  local_12 = (int *)0xe6e;
  iVar3 = 0;
  do {
    iVar1 = *local_12;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = iVar3 - *(int *)(iVar1 + 6);
      if (local_6 == 0) {
        local_6 = 1;
        local_8 = iVar3;
        local_4 = iVar2;
      }
      else if ((local_8 + local_6 == iVar3) && (local_4 == iVar2)) {
        local_6 = local_6 + 1;
      }
      else {
        local_a = iVar3 - local_c;
        local_16 = FUN_1000_1d8e(&local_c,param_1);
        if (local_16 != 0) goto LAB_1000_1d77;
        local_6 = 1;
        local_8 = iVar3;
        local_4 = iVar2;
      }
    }
    *(int *)(iVar1 + 6) = iVar3;
    *(undefined2 *)(iVar1 + 8) = 0;
    iVar3 = iVar3 + 1;
    local_12 = local_12 + 1;
  } while (iVar3 < 0x19);
  local_a = iVar3 - local_c;
  while ((local_16 == 0 && (0 < local_a))) {
    local_16 = FUN_1000_1d8e(&local_c,param_1);
  }
LAB_1000_1d77:
  *(undefined2 *)0x18 = 0;
  *(undefined2 *)0x16 = 0;
  return local_16;
}

