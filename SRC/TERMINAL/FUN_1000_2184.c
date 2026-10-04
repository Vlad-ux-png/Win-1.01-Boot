// Function: FUN_1000_2184

void FUN_1000_2184(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_c;
  int *local_6;
  
  FUN_1000_2252(param_2);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  piVar5 = (int *)param_1;
  local_c = FUN_1000_1827(0x18,0,piVar5[1]);
  iVar2 = FUN_1000_1827(0x19,0,piVar5[3]);
  if (local_c <= iVar2 + -1) {
    local_6 = (int *)(local_c * 2 + 0xe6e);
    do {
      iVar1 = *local_6;
      iVar3 = *param_1;
      if (iVar3 <= *(int *)(iVar1 + 10)) {
        iVar3 = *(int *)(iVar1 + 10);
      }
      iVar4 = *(int *)(iVar1 + 10) + *(int *)(iVar1 + 0xc);
      if (piVar5[2] < iVar4) {
        iVar4 = piVar5[2];
      }
      iVar4 = iVar4 - iVar3;
      if (0 < iVar4) {
        if (*(int *)0x18 == 0) {
          FUN_1000_2126(iVar4,iVar3 + iVar1 + 0x12,unaff_DS,iVar3,local_c,param_2);
        }
        else {
          FUN_1000_1922(iVar4,iVar3,iVar1);
        }
      }
      local_c = local_c + 1;
      local_6 = local_6 + 1;
    } while (local_c <= iVar2 + -1);
  }
  return;
}

