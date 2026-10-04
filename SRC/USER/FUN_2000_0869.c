// Function: FUN_2000_0869

void FUN_2000_0869(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    piVar1 = (int *)(*(int *)0x524 * 2 + 0x552);
    iVar2 = *piVar1;
    *piVar1 = 0;
    if (*(int *)(param_3 * 2 + 0x552) != 0) {
      param_3 = *(int *)0x524;
    }
  }
  *(int *)(param_3 * 2 + 0x552) = iVar2;
  func_0x000001bc(0x1000,iVar2);
  FUN_2000_0bb3(param_3,iVar2);
  func_0x0000ffff(0,*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x28),
                  *(int *)(iVar2 + 0x1e) - *(int *)(iVar2 + 0x26),iVar2);
  func_0x0000ffff(0,iVar2 + 0x1e);
  func_0x000001d1(0,1,iVar2);
  if (param_2 != 0) {
    func_0x0000ffff(0,*(int *)(iVar2 + 0x22) - *(int *)(iVar2 + 0x1e),
                    *(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20),1,5,iVar2);
  }
  if (param_1 != 0) {
    FUN_2000_0f08(0,iVar2);
  }
  return;
}

