// Function: FUN_2000_04a8

void FUN_2000_04a8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_1 == *(int *)0x62) {
    if (*(int *)(param_1 + 0x46) == 0) {
      iVar1 = *(int *)0x5b4;
    }
    else {
      iVar1 = *(int *)0x3d0;
    }
    if (*(int *)(param_1 + 0x46) == 0) {
      iVar2 = *(int *)0x3d0;
    }
    else {
      iVar2 = *(int *)0x5b4;
    }
    func_0x0000ffff(0x1000,iVar2 + *(int *)0x480 * 2,iVar1 + *(int *)0x47e * 2);
  }
  return;
}

