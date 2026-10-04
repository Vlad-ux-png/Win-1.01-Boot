// Function: FUN_2000_607e

void FUN_2000_607e(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  int local_1c;
  
  iVar1 = param_2;
  bVar8 = false;
  local_1c = 0;
  iVar2 = func_0x0000ffff(0x1000,param_1);
  if (iVar2 != 0) {
    param_1 = func_0x0000ffff(0,param_1,*(undefined2 *)(iVar1 + 2));
  }
  uVar3 = func_0x0000ffff(0,iVar1);
  *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 0x10;
  *(byte *)(iVar1 + 7) = *(byte *)(iVar1 + 7) | 8;
  iVar2 = *(int *)(iVar1 + 0x10);
  if (param_1 == 8) {
    if (*(int *)(iVar1 + 0x10) == *(int *)(iVar1 + 0x14)) {
      iVar4 = *(int *)(iVar1 + 0x12);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x10);
    }
    iVar5 = func_0x0000ffff(0,0x10);
    if (iVar5 < 0) {
      local_1c = iVar4 + 1;
      iVar2 = iVar4;
      if (((*(uint *)(iVar1 + 6) & 0x2000) != 0) &&
         (iVar5 = func_0x0000ffff(0,local_1c,iVar1), iVar5 != local_1c)) {
        local_1c = iVar4 + 2;
      }
    }
    else if ((0 < iVar4) &&
            (iVar2 = iVar4 + -1, local_1c = iVar4, (*(uint *)(iVar1 + 6) & 0x2000) != 0)) {
      iVar2 = func_0x000002bb(0,iVar4 + -1,iVar1);
    }
    func_0x0000ffff(0,0,local_1c,iVar2,iVar1);
    FUN_2000_637e(iVar1);
  }
  else {
    if (param_1 == 0xd) {
      param_1 = 0x2e;
    }
    if ((param_1 < 0x20) ||
       ((*(int *)(iVar1 + 0x30) != 0 &&
        (*(uint *)(iVar1 + 0x30) <=
         (uint)((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x10)))))) {
      func_0x0000ffff(0,0);
    }
    else {
      bVar8 = *(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 0x10);
      FUN_2000_637e(iVar1);
      uVar6 = func_0x0000ffff(0);
      if ((param_1 & 0xff00) == 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
      }
      func_0x0000ffff(0,1,&param_1,uVar6,uVar7,iVar1);
    }
  }
  FUN_2000_62a4(bVar8,iVar2,uVar3,iVar1);
  FUN_2000_6229(*(undefined2 *)(iVar1 + 0x12),iVar1);
  func_0x0000ffff(0,uVar3,*(undefined2 *)(iVar1 + 2));
  return;
}

