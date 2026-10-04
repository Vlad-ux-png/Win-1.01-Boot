// Function: FUN_2000_6c6b

void __stdcall16far FUN_2000_6c6b(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_a;
  
  iVar2 = FUN_2000_6cde(param_2,param_3);
  local_a = *(int *)(param_3 + 0x16);
  if (iVar2 < *(int *)(param_3 + 0x20)) {
    iVar3 = FUN_2000_764d(iVar2,param_3);
    local_a = local_a + (param_2 - *(int *)(iVar2 * 2 + *(int *)(param_3 + 0x38))) *
                        *(int *)(param_3 + 0x1e) + iVar3;
  }
  iVar3 = *(int *)(param_3 + 0xe);
  iVar1 = *(int *)(param_3 + 0x18);
  *param_1 = local_a;
  ((int *)param_1)[1] = iVar3 * iVar2 + iVar1;
  return;
}

