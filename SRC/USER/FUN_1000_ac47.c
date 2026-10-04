// Function: FUN_1000_ac47

void FUN_1000_ac47(undefined2 param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  undefined1 local_30 [32];
  int local_10;
  int local_e;
  undefined2 local_c;
  
  func_0x0000ffff(0x1000,local_30);
  if (*(int *)(param_3 + 0xe) == 0) {
    return;
  }
  if ((*param_4 & 1) == 0) {
    local_10 = *(int *)0x450 / 2;
  }
  else {
    local_10 = *(int *)0x450;
  }
  local_10 = local_10 + param_2;
  local_c = *(undefined2 *)(param_3 + 0xc);
  iVar1 = *(int *)(param_3 + 0xe) + 2;
  if (iVar1 == 0) {
    return;
  }
  local_e = func_0x0000ffff(0,iVar1);
  if (local_e == 0) {
    return;
  }
  iVar2 = FUN_1000_bbf5(9,iVar1,unaff_DS);
  iVar3 = FUN_1000_bbf5(8,iVar1,unaff_DS);
  if ((iVar3 == 0) || (local_e == iVar3)) {
    if ((iVar2 == 0) || (iVar4 = iVar2, iVar5 = iVar1, local_e != iVar3)) goto LAB_1000_ad45;
  }
  else {
    func_0x000005f1(0,iVar3,iVar1);
    if (iVar2 <= iVar3 + 1) goto LAB_1000_ad45;
    func_0x0000ffff(0,(iVar2 - iVar3) + -1,iVar1 + iVar3 + 1);
    iVar4 = (iVar2 - iVar3) + -1;
    iVar5 = iVar1 + iVar3 + 1;
  }
  func_0x0000061b(0,iVar4,iVar5);
LAB_1000_ad45:
  if (iVar2 < local_e + -1) {
    func_0x0000ffff(0,(local_e - iVar2) + -1,iVar1 + iVar2 + 1);
  }
  return;
}

