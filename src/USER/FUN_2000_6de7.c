// Function: FUN_2000_6de7

void __stdcall16far FUN_2000_6de7(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = func_0x0000ffff(0x1000,*(undefined2 *)(param_2 + 2));
  if (iVar1 == 0) {
    return;
  }
  if (param_1 == -1) {
    param_1 = *(int *)(param_2 + 0x10);
  }
  iVar2 = FUN_2000_6cde(param_1,param_2);
  iVar1 = *(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x22);
  param_1 = param_1 - *(int *)(*(int *)(param_2 + 0x38) + iVar2 * 2);
  if (iVar2 < iVar1) {
    if (*(int *)(param_2 + 0x24) <= iVar2) goto LAB_2000_6e7c;
    iVar2 = iVar2 - *(int *)(param_2 + 0x24);
  }
  else {
    iVar2 = (iVar2 - iVar1) + 1;
  }
  func_0x00000977(0,iVar2,0x406,0x115,param_2);
LAB_2000_6e7c:
  if ((*(uint *)(param_2 + 6) & 0x200) != 0) {
    iVar1 = (param_1 - *(int *)(param_2 + 0x2a)) - *(int *)(param_2 + 0x28);
    if (iVar1 < 1) {
      param_1 = param_1 - *(int *)(param_2 + 0x2a);
      if (-1 < param_1) {
        return;
      }
      iVar1 = param_1 - *(int *)(param_2 + 0x28) / 3;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x28) / 3 + iVar1;
    }
    func_0x000000a9(0,iVar1,0x406,0x114,param_2);
  }
  return;
}

