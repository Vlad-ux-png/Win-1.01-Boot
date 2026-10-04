// Function: FUN_2000_aa18

void FUN_2000_aa18(uint param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    return;
  }
  if (param_1 == 0x21) {
    iVar1 = -*(int *)(param_3 + 0xe);
  }
  else {
    if (param_1 < 0x22) {
      if (param_1 != 0x10) {
        return;
      }
      if (param_2 != 0x101) {
        return;
      }
      if (*(char *)(param_3 + 0x2e) == '\0') {
        return;
      }
      goto LAB_2000_aa9a;
    }
    if (param_1 == 0x22) {
      iVar1 = *(int *)(param_3 + 0xe);
    }
    else {
      if (param_1 < 0x25) {
        return;
      }
      if (param_1 < 0x27) {
        iVar1 = -1;
      }
      else {
        if (param_1 < 0x27) {
          return;
        }
        if (0x28 < param_1) {
          return;
        }
        iVar1 = 1;
      }
    }
  }
  if (param_2 == 0x100) {
    FUN_2000_ab70(iVar1,param_3);
    return;
  }
  if ((*(char *)(param_3 + 0x35) == '\0') && (*(char *)(param_3 + 0x30) == '\0')) {
    return;
  }
  if (*(char *)(param_3 + 0x2e) != '\0') {
    return;
  }
LAB_2000_aa9a:
  FUN_2000_ac57(*(undefined2 *)(param_3 + 0x26),*(undefined2 *)(param_3 + 0x28),0x403,param_3);
  return;
}

