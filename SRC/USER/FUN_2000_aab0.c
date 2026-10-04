// Function: FUN_2000_aab0

void FUN_2000_aab0(uint param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_8;
  undefined1 local_6;
  
  if (*(int *)(param_3 + 0x10) != 0) {
    if (param_1 == 0x20) {
      if (*(char *)(param_3 + 0x33) != '\0') {
        FUN_2000_b042(*(undefined2 *)(param_3 + 10),param_3);
        FUN_2000_b004(*(undefined2 *)(param_3 + 10),param_3);
        return;
      }
      iVar1 = 0;
    }
    else {
      iVar1 = func_0x00000c62(0x1000,0x10);
      iVar2 = func_0x00000ce9(0,0x11);
      if ((iVar2 < 0) && (param_1 < 0x20)) {
        param_1 = param_1 + 0x40;
      }
      local_8 = param_1;
      local_6 = 0;
      iVar1 = FUN_2000_b383(-1 < iVar1,1,*(undefined2 *)(param_3 + 10),&local_8,unaff_SS,param_3);
      if (iVar1 == -1) {
        return;
      }
      iVar1 = iVar1 - *(int *)(param_3 + 10);
    }
    FUN_2000_ab70(iVar1,param_3);
    FUN_2000_ac57(*(undefined2 *)(param_3 + 0x26),*(undefined2 *)(param_3 + 0x28),0x403,param_3);
  }
  return;
}

