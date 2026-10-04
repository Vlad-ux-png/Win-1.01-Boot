// Function: FUN_2000_7731

int FUN_2000_7731(int param_1,undefined2 *param_2,int *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  int local_a;
  int local_8;
  int local_4;
  
  pcVar2 = (char *)*param_2;
  local_4 = *param_3;
  local_a = local_4 - param_1;
  bVar4 = local_4 == param_1;
  local_8 = 0;
  if (local_4 < *(int *)(param_4 + 0xc)) {
    uVar3 = 0x1000;
    if ((*(uint *)(param_4 + 6) & 0x4000) == 0) {
      if (*pcVar2 == '\r') {
        local_8 = 1;
      }
      else {
        iVar1 = func_0x00001280(0x1000,(int)*pcVar2);
        if (iVar1 != 0) {
          local_4 = local_4 + 1;
          pcVar2 = pcVar2 + 1;
        }
        local_4 = local_4 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
    else {
      for (; local_4 < *(int *)(param_4 + 0xc); local_4 = local_4 + 1) {
        iVar1 = FUN_2000_79c7(pcVar2);
        if (iVar1 != 0) {
          local_8 = 1;
          break;
        }
        if (bVar4) {
          if (*(int *)(param_4 + 0x28) <= local_a) {
            if (local_4 < *(int *)(param_4 + 0xc)) {
              local_8 = 2;
            }
            else {
              local_8 = 3;
            }
            break;
          }
        }
        else if (*(int *)(param_4 + 0x28) < local_a) {
          return 2;
        }
        if (*pcVar2 == ' ') break;
        iVar1 = func_0x00000552(uVar3,(int)*pcVar2);
        if (iVar1 != 0) {
          pcVar2 = pcVar2 + 1;
          local_a = local_a + 1;
          local_4 = local_4 + 1;
        }
        pcVar2 = pcVar2 + 1;
        local_a = local_a + 1;
        uVar3 = 0;
      }
      if (*(int *)(param_4 + 0x28) < local_a) {
        return 2;
      }
      if (local_8 == 0) {
        for (; (*pcVar2 == ' ' && (local_4 < *(int *)(param_4 + 0xc))); local_4 = local_4 + 1) {
          pcVar2 = pcVar2 + 1;
        }
      }
    }
    *param_3 = local_4;
    *param_2 = pcVar2;
  }
  else {
    local_8 = 3;
  }
  return local_8;
}

