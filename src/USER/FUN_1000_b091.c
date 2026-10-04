// Function: FUN_1000_b091

int FUN_1000_b091(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_4;
  
  local_4 = -1;
  if (param_1 < 0) {
    iVar2 = *(int *)(param_3 + 10) + -1;
  }
  else {
    iVar2 = 0;
  }
  local_c = 20000;
  local_a = 20000;
  iVar4 = param_2 * 0x10 + param_3;
  iVar1 = *(int *)(iVar4 + 0x12);
  iVar4 = *(int *)(iVar4 + 0x10);
  while( true ) {
    param_2 = FUN_1000_b92b(param_1,param_2,param_3);
    if (param_2 == iVar2) break;
    iVar5 = param_2 * 0x10 + param_3;
    iVar3 = iVar4 - *(int *)(iVar5 + 0x10);
    local_e = iVar1 - *(int *)(iVar5 + 0x12);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (local_e < 0) {
      local_e = -local_e;
    }
    if (((iVar3 < local_c) && (local_e != 0)) && (local_e <= local_a)) {
      local_a = local_e;
      local_c = iVar3;
      local_4 = param_2;
    }
  }
  return local_4;
}

