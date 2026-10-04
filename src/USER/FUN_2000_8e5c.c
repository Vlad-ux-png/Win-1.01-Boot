// Function: FUN_2000_8e5c

undefined2 FUN_2000_8e5c(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  if (param_1 == 0) {
    if (1 < *(int *)(param_2 + 0x26)) {
      local_6 = *(undefined2 *)(param_2 + 0x2a);
      iVar1 = *(int *)(param_2 + 0x26);
      goto LAB_2000_8e91;
    }
  }
  else if (2 < *(int *)(param_2 + 0x20)) {
    local_6 = *(undefined2 *)(param_2 + 0x24);
    iVar1 = *(int *)(param_2 + 0x20) + -1;
LAB_2000_8e91:
    uVar2 = func_0x0000ffff(0x1000,iVar1 + -1,100,local_6);
    return uVar2;
  }
  return 0;
}

