// Function: FUN_1000_af77

void FUN_1000_af77(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  undefined2 local_6;
  int local_4;
  
  uVar1 = FUN_1000_b99d(*(undefined2 *)0x3a,1,param_3);
  local_4 = func_0x000003f6(0x1000,uVar1);
  local_6 = uVar1;
  if (*(int *)0x34 != 0) {
    local_4 = *(int *)0x34;
    local_6 = *(undefined2 *)0x30;
  }
  if (*(int *)(local_4 + 2) != param_1) {
    if (*(int *)0x34 == 0) {
      FUN_1000_b222(1,uVar1,param_3);
      iVar2 = param_3;
    }
    else {
      FUN_1000_b293(1,*(undefined2 *)0x30,*(undefined2 *)0x35a);
      iVar2 = *(int *)0x35a;
    }
    FUN_1000_bc31(0x80,param_1,local_6,iVar2);
    iVar2 = param_1;
    if (param_1 < 0) {
      iVar2 = -1;
    }
    *(int *)(local_4 + 2) = iVar2;
    if (param_1 < 0) {
      *(undefined2 *)0x3c = 0;
    }
    else {
      local_4 = local_4 + param_1 * 0x10;
      pbVar4 = (byte *)(local_4 + 0xc);
      if (((*pbVar4 & 0x10) == 0) && ((*pbVar4 & 3) == 0)) {
        *(undefined2 *)0x3c = 1;
      }
      else {
        *(undefined2 *)0x3c = 0;
      }
      if ((*(int *)0x30 == 0) && ((*pbVar4 & 0x10) != 0)) {
        func_0x0000ffff(0,param_1,*(undefined2 *)0x3a,*(undefined2 *)(local_4 + 0xe),0x117,param_3);
        uVar3 = *(undefined2 *)(local_4 + 0xe);
        *(undefined2 *)0x30 = uVar3;
        uVar3 = FUN_1000_ab3b(*(int *)(param_3 + 0x20) + *(int *)(local_4 + 0x10) +
                              *(int *)(local_4 + 0x14),
                              *(int *)(param_3 + 0x1e) + *(int *)(local_4 + 0x12),uVar3,param_3);
        *(undefined2 *)0x35a = uVar3;
      }
    }
  }
  func_0x00000481(0,uVar1);
  return;
}

