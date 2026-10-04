// Function: FUN_1000_ae1b

void FUN_1000_ae1b(undefined2 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_8;
  
  uVar1 = FUN_1000_b9d7(param_3);
  FUN_1000_ba6b(0,uVar1);
  iVar2 = FUN_1000_b99d(*(undefined2 *)0x3a,1,param_3);
  iVar3 = FUN_1000_b9d7(param_3);
  *(uint *)0x3a = (uint)(iVar3 == iVar2);
  local_8 = -1;
  if (*(int *)0x30 != 0) {
    local_8 = FUN_1000_aa2c(param_1,*(undefined2 *)0x30,*(undefined2 *)0x35a);
    iVar3 = func_0x00000848(0x1000,iVar2);
    if (((*(byte *)(*(int *)(iVar3 + 2) * 0x10 + iVar3 + 0xc) & 3) != 0) && (-1 < local_8)) {
      local_8 = -2;
    }
    func_0x00000935(0,iVar2);
  }
  if ((((*(byte *)(param_3 + 0x33) & 0x20) != 0) || (-1 < local_8)) || (local_8 == -2)) {
    *(undefined2 *)0x40 = 1;
    goto LAB_1000_af58;
  }
  FUN_1000_b7e6();
  local_8 = FUN_1000_aa2c(param_1,iVar2,param_3);
  if (local_8 < 0) {
    *(undefined2 *)0x3c = 0;
    if (local_8 == -3) {
      *(undefined2 *)0x3a = 1;
      local_8 = 0;
LAB_1000_af11:
      if (local_8 < 0) goto LAB_1000_af28;
    }
    else {
      iVar3 = FUN_1000_b9d7(param_3);
      if (((iVar3 == param_2) ||
          ((local_8 = FUN_1000_aa2c(param_1,param_2,param_3), local_8 < 0 && (*(int *)0x40 != 0))))
         || (*(undefined2 *)0x3a = 0, *(int *)0x40 != 0)) goto LAB_1000_af11;
    }
    FUN_1000_b222(1,iVar2,param_3);
    *(undefined2 *)0x40 = 0;
  }
LAB_1000_af28:
  if ((-1 < local_8) && (*(int *)0x40 != 0)) {
    *(undefined2 *)0x3c = 0;
    FUN_1000_b293(1,*(undefined2 *)0x30,*(undefined2 *)0x35a);
    *(undefined2 *)0x40 = 0;
  }
LAB_1000_af58:
  if (*(int *)0x40 != 0) {
    FUN_1000_b803();
  }
  FUN_1000_af77(local_8,param_2,param_3);
  FUN_1000_b7e6();
  return;
}

