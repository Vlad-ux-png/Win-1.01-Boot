// Function: FUN_2000_3397

void FUN_2000_3397(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int unaff_SI;
  int iVar5;
  int unaff_DI;
  undefined2 unaff_DS;
  int *local_12;
  int local_10;
  int local_e;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  iVar3 = *(int *)0x518;
  func_0x000013da(0x1000,*(undefined2 *)0x50e,*(undefined2 *)0x510,0,0,&local_a);
  iVar2 = func_0x0000ffff(0,*(undefined2 *)0x38a,*(undefined2 *)0x38c,&local_a);
  if (iVar2 == 0) goto LAB_2000_35af;
  iVar2 = *(int *)0x38c;
  iVar5 = *(int *)0x38a;
  bVar1 = iVar2 < iVar3;
  if (bVar1) {
    if (((*(byte *)(param_2 + 0x33) & 0xc0) == 0) &&
       (param_2 = func_0x0000107d(0,0,0,*(undefined2 *)0x38a,*(undefined2 *)0x38c), param_2 == 0)) {
      func_0x00001807(0,0x512);
      local_12 = (int *)0x37c;
    }
    else {
      local_12 = (int *)(param_2 + 0x1e);
    }
    local_10 = local_12[2] + *local_12 >> 1;
    local_e = local_12[3] + local_12[1] >> 1;
  }
  unaff_SI = iVar5;
  unaff_DI = iVar2;
  if (param_1 == 0x25) {
    if (!bVar1) {
      if (-1 < iVar5 - *(int *)0x466) {
        unaff_SI = iVar5 - *(int *)0x466;
      }
      goto LAB_2000_35af;
    }
    if (param_2 == 0) goto LAB_2000_35af;
    if (*local_12 != iVar5) {
      unaff_SI = local_10;
      if (iVar5 <= local_10) {
        unaff_SI = *local_12;
      }
      goto LAB_2000_35af;
    }
    iVar5 = iVar5 + -1;
  }
  else if (param_1 == 0x26) {
    if (bVar1) {
      unaff_SI = local_10;
      unaff_DI = local_e;
      if (param_2 == 0) goto LAB_2000_35af;
      if (local_12[1] != iVar2) {
        unaff_SI = iVar5;
        if (iVar2 <= local_e) {
          unaff_DI = local_12[1];
        }
        goto LAB_2000_35af;
      }
    }
    else if (iVar3 != iVar2) {
      unaff_DI = func_0x00001c89(0,iVar3,iVar2 - *(int *)0x468);
      goto LAB_2000_35af;
    }
    iVar2 = iVar2 + -1;
  }
  else {
    if (param_1 == 0x27) {
      if (bVar1) {
        if ((param_2 != 0) && (unaff_SI = local_10, local_10 <= iVar5)) {
          unaff_SI = local_12[2];
        }
      }
      else if (*(int *)0x466 + iVar5 <= *(int *)0x516) {
        unaff_SI = iVar5 + *(int *)0x466;
      }
      goto LAB_2000_35af;
    }
    if (param_1 != 0x28) goto LAB_2000_35af;
    if (!bVar1) {
      if (iVar2 < *(int *)0x50e - (*(int *)0x468 >> 1)) {
        if (iVar3 == iVar2) {
          iVar3 = *(int *)0x466;
          iVar5 = iVar5 + ((iVar3 >> 2) - (iVar5 % iVar3 - (iVar3 >> 1)));
          iVar3 = *(int *)0x468 >> 1;
        }
        else {
          iVar3 = *(int *)0x468;
        }
        unaff_SI = iVar5;
        unaff_DI = iVar2 + iVar3;
      }
      goto LAB_2000_35af;
    }
    unaff_DI = iVar3;
    if ((param_2 == 0) || (unaff_DI = local_e, iVar2 < local_e)) goto LAB_2000_35af;
    if (iVar2 < local_12[3] - *(int *)0x480) {
      unaff_DI = local_12[3] - *(int *)0x480;
      goto LAB_2000_35af;
    }
    iVar2 = iVar2 + 1;
  }
  *(int *)0x38a = iVar5;
  *(int *)0x38c = iVar2;
  FUN_2000_3397(param_1,param_2);
  unaff_SI = *(int *)0x38a;
  unaff_DI = *(int *)0x38c;
LAB_2000_35af:
  uVar4 = func_0x00001ca0(0,unaff_SI,local_a,local_6 + -1);
  uVar4 = func_0x00001ca6(0,uVar4);
  *(undefined2 *)0x38a = uVar4;
  uVar4 = func_0x00001a2d(0,unaff_DI,local_8,local_4 + -1);
  uVar4 = func_0x00001a33(0,uVar4);
  *(undefined2 *)0x38c = uVar4;
  return;
}

