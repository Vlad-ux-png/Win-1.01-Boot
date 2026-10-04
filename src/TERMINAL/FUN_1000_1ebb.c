// Function: FUN_1000_1ebb

void FUN_1000_1ebb(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined2 unaff_DS;
  int local_3e [27];
  int local_8;
  int local_6;
  int local_4;
  
  if ((-1 < param_3) && (param_3 + param_2 < 0x1a)) {
    *(undefined2 *)0x16 = 1;
    FUN_1000_2624(param_1,param_2,param_3);
    if (param_1 < 0) {
      piVar2 = (int *)(param_3 * 2 + 0xe6e);
      piVar3 = local_3e;
      local_4 = param_2 + param_1;
      local_8 = -param_1;
      while (local_8 = local_8 + -1, -1 < local_8) {
        piVar1 = piVar2;
        piVar2 = piVar2 + 1;
        local_6 = *piVar1;
        *(int *)(local_6 + 4) = *(int *)(local_6 + 4) + local_4;
        FUN_1000_1c2e(0,local_6);
        *(undefined2 *)(local_6 + 8) = 1;
        *piVar3 = local_6;
        piVar3 = piVar3 + 1;
      }
      piVar3 = (int *)(param_3 * 2 + 0xe6e);
      while (local_4 = local_4 + -1, -1 < local_4) {
        piVar1 = piVar2;
        piVar2 = piVar2 + 1;
        local_6 = *piVar1;
        *(int *)(local_6 + 4) = *(int *)(local_6 + 4) + param_1;
        *piVar3 = local_6;
        piVar3 = piVar3 + 1;
      }
      piVar2 = local_3e;
      param_1 = -param_1;
      while (param_1 = param_1 + -1, -1 < param_1) {
        piVar1 = piVar2;
        piVar2 = piVar2 + 1;
        *piVar3 = *piVar1;
        piVar3 = piVar3 + 1;
      }
    }
    else if (0 < param_1) {
      piVar2 = (int *)((param_3 + param_2) * 2 + 0xe6e);
      local_8 = param_1;
      local_4 = param_2 - param_1;
      piVar3 = local_3e + param_1;
      while (local_8 = local_8 + -1, -1 < local_8) {
        piVar2 = piVar2 + -1;
        local_6 = *piVar2;
        FUN_1000_1c2e(0,local_6);
        *(undefined2 *)(local_6 + 8) = 1;
        *(int *)(local_6 + 4) = *(int *)(local_6 + 4) - local_4;
        piVar3 = piVar3 + -1;
        *piVar3 = local_6;
      }
      piVar3 = (int *)((param_3 + param_2) * 2 + 0xe6e);
      while (local_4 = local_4 + -1, -1 < local_4) {
        piVar2 = piVar2 + -1;
        local_6 = *piVar2;
        *(int *)(local_6 + 4) = *(int *)(local_6 + 4) + param_1;
        piVar3 = piVar3 + -1;
        *piVar3 = local_6;
      }
      piVar2 = local_3e + param_1;
      while (param_1 = param_1 + -1, -1 < param_1) {
        piVar3 = piVar3 + -1;
        piVar2 = piVar2 + -1;
        *piVar3 = *piVar2;
      }
    }
  }
  return;
}

