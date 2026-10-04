// Function: FUN_1000_ba6b

void FUN_1000_ba6b(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 *local_6;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_6 = (undefined2 *)0x398;
    }
    else {
      local_6 = (undefined2 *)0x4f0;
    }
    iVar1 = func_0x00000e45(0x1000,param_2);
    *(undefined2 *)(iVar1 + 0x10) = local_6[1];
    *(undefined2 *)(iVar1 + 0x12) = *local_6;
    *(int *)(iVar1 + 0x14) = local_6[3] - local_6[1];
    *(int *)(iVar1 + 0x16) = local_6[2] - *(int *)(iVar1 + 0x12);
    func_0x00000ef0(0,param_2);
  }
  return;
}

