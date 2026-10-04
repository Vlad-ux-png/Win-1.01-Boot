// Function: FUN_2000_6229

void __stdcall16far FUN_2000_6229(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 == -1) {
    param_1 = *(int *)(param_2 + 0x10);
  }
  iVar1 = param_1 - *(int *)(param_2 + 0x2a);
  if (iVar1 < 0) {
    iVar1 = -(*(int *)(param_2 + 0x28) / 3 - iVar1);
  }
  else {
    if ((*(uint *)(param_2 + 6) & 0x200) == 0) {
      return;
    }
    iVar1 = (param_1 - *(int *)(param_2 + 0x2a)) - *(int *)(param_2 + 0x28);
    if (iVar1 < 1) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x28) / 3 + iVar1;
  }
  func_0x0000ffff(0x1000,iVar1,0x406,0x114,param_2);
  return;
}

