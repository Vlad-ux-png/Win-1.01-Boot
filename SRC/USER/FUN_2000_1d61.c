// Function: FUN_2000_1d61

undefined2 *
FUN_2000_1d61(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_8;
  int local_6;
  int local_4;
  
  local_6 = 1;
  for (puVar2 = param_4; param_3 != puVar2; puVar2 = (undefined2 *)*puVar2) {
    local_6 = local_6 + 1;
  }
  uVar1 = func_0x0000ffff(0x1000,param_4,param_5);
  local_c = FUN_2000_2be5(uVar1);
  if (param_3 == (undefined2 *)0x0) {
    local_8 = *(int *)(param_5 + 6);
    uVar1 = 0;
  }
  else {
    local_8 = param_3[0x12];
    uVar1 = *param_3;
  }
  local_4 = local_8 - local_c;
  if (local_4 / local_6 < *(int *)&SUB_0000_0464) {
    local_c = *(int *)(param_5 + 2);
    local_4 = *(int *)(param_5 + 6) - local_c;
    param_4 = (undefined2 *)*(undefined2 *)(param_5 + 0xc);
    uVar1 = 0;
  }
  FUN_2000_19d5(param_5,local_4,local_c,uVar1,param_4);
  if (param_2 != 0) {
    *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) & 0xef;
  }
  if (param_1 != 0) {
    FUN_2000_394c(param_4,param_5);
  }
  return param_4;
}

