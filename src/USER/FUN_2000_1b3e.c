// Function: FUN_2000_1b3e

void FUN_2000_1b3e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_c;
  int *local_4;
  
  uVar4 = 0x1000;
  param_3 = param_3 - param_4;
  if (param_3 != 0) {
    local_4 = (int *)(param_4 * 0xe + *(int *)0x4dc);
    iVar2 = param_2;
    local_c = param_3;
    while (local_c != 0) {
      *local_4 = iVar2;
      iVar1 = param_1 + param_2;
      if (local_c + -1 != 0) {
        iVar1 = param_1 / param_3 + iVar2;
      }
      local_4[2] = iVar1;
      for (puVar3 = (undefined2 *)local_4[6]; puVar3 != (undefined2 *)0x0;
          puVar3 = (undefined2 *)*puVar3) {
        func_0x0000ffff(uVar4,puVar3 + 0xf);
        FUN_2000_1bcc(local_4,puVar3 + 0xb);
        uVar4 = 0;
      }
      local_4 = local_4 + 7;
      iVar2 = iVar1;
      local_c = local_c + -1;
    }
  }
  return;
}

