// Function: FUN_2000_6cde

int __stdcall16far FUN_2000_6cde(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_2 + 0x2e);
  if (param_1 == 0xffff) {
    iVar2 = 0;
  }
  else if (*(uint *)(param_2 + 0xc) < param_1) {
    iVar2 = *(int *)(param_2 + 0x20);
  }
  else {
    if ((iVar2 != 0) &&
       ((iVar2 = iVar2 + -1, *(int *)(param_2 + 0x20) < *(int *)(param_2 + 0x2e) ||
        (param_1 < *(uint *)(*(int *)(param_2 + 0x38) + iVar2 * 2))))) {
      iVar2 = 0;
    }
    local_8 = (uint *)CONCAT22(unaff_DS,(uint *)(*(int *)(param_2 + 0x38) + iVar2 * 2 + 2));
    while (puVar1 = local_8, local_8 = (uint *)CONCAT22(local_8._2_2_,(uint *)local_8 + 1),
          *puVar1 <= param_1) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_2 + 0x2e) = iVar2;
  }
  return iVar2;
}

