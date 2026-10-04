// Function: FUN_1000_b35d

void __stdcall16far FUN_1000_b35d(undefined2 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  int local_2a;
  byte *local_8;
  
  if (*(int *)0x36 == -1) {
    return;
  }
  iVar1 = *(int *)0x36;
  local_2a = FUN_1000_b99d(*(undefined2 *)0x3a,1,*(undefined2 *)0x64);
  if (local_2a == 0) {
    return;
  }
  if ((param_2 == 0xd) || ((param_2 == 0x4d01 && (*(int *)0x3c != 0)))) {
    FUN_1000_b14b(0,0,*(undefined2 *)0x3c,local_2a,*(undefined2 *)0x64);
    return;
  }
  pbVar3 = (byte *)func_0x00000725(0x1000,local_2a);
  bVar2 = false;
  local_8 = pbVar3;
  if ((*(int *)0x38 == 0) && (iVar4 = FUN_1000_b803(), iVar4 != 0)) {
    if ((*(int *)(*(int *)0x34 + 2) < 0) && ((pbVar3[*(int *)(pbVar3 + 2) * 0x10 + 0xc] & 3) != 0))
    {
      bVar2 = true;
    }
    local_8 = (byte *)*(undefined2 *)0x34;
  }
  iVar8 = -1;
  iVar4 = *(int *)(local_8 + 2);
  if ((param_2 == 0x4b00) || (param_2 == 0x4800)) {
    iVar5 = -1;
  }
  else {
    iVar5 = 1;
  }
  if (param_2 == 0x20) {
    if ((*(int *)0x3a != 0) || (iVar8 = FUN_1000_b764(2,*(undefined2 *)0x3a,local_2a), iVar8 == 0))
    goto LAB_1000_b490;
    iVar8 = 0;
LAB_1000_b563:
    iVar6 = *(int *)0x3a;
    iVar7 = FUN_1000_b764(1,iVar6,local_2a);
    if (iVar6 != *(int *)0x3a) {
      FUN_1000_b222(1,local_2a,*(undefined2 *)0x64);
      local_8 = (byte *)func_0x000010c9(0,iVar7);
      iVar4 = -1;
      local_2a = iVar7;
      goto LAB_1000_b5b4;
    }
  }
  else {
    if (param_2 < 0x21) {
      if (param_2 == 0) goto LAB_1000_b490;
      if (param_2 == 0x1b) {
        *(undefined2 *)0x3c = 0;
        FUN_1000_b14b(0,0,0,local_2a,*(undefined2 *)0x64);
        goto LAB_1000_b490;
      }
LAB_1000_b44a:
      if (((*(int *)0x38 == 0) && (bVar2)) ||
         ((((*(byte *)(*(int *)0x64 + 0x33) & 0x20) != 0 && (*(int *)0x38 != 0)) ||
          (iVar8 = FUN_1000_b88f(param_2,local_8), iVar8 == -1)))) goto LAB_1000_b490;
      goto LAB_1000_b5c0;
    }
    if (param_2 != 0x4800) {
      if ((param_2 == 0x4b00) || (param_2 == 0x4d00)) {
        if ((*(byte *)(*(int *)0x64 + 0x33) & 0x20) == 0) {
          if (*(int *)0x38 == 0) {
            if ((iVar4 != -1) && (iVar8 = FUN_1000_b091(iVar5,iVar4,local_8), iVar8 != -1))
            goto LAB_1000_b5c0;
            FUN_1000_b7e6();
            iVar4 = *(int *)(pbVar3 + 2);
            iVar8 = FUN_1000_b92b(iVar5,iVar4,pbVar3);
            if ((iVar8 == iVar4) &&
               (iVar8 = FUN_1000_b764(2,*(undefined2 *)0x3a,local_2a), iVar8 == 0))
            goto LAB_1000_b490;
            *(undefined2 *)0x38 = 1;
            local_8 = pbVar3;
          }
          iVar8 = -1;
          if (((*(int *)0x38 != 0) &&
              (((iVar8 = FUN_1000_b92b(iVar5,iVar4,local_8), 0 < iVar5 && (iVar8 <= iVar4)) ||
               ((iVar5 < 0 && (iVar4 <= iVar8)))))) &&
             (iVar6 = FUN_1000_b764(2,*(undefined2 *)0x3a,local_2a), iVar6 != 0))
          goto LAB_1000_b563;
        }
        goto LAB_1000_b5c0;
      }
      if (param_2 != 0x5000) goto LAB_1000_b44a;
    }
    if ((*(int *)0x30 == 0) || (bVar2)) goto LAB_1000_b490;
LAB_1000_b5b4:
    iVar8 = FUN_1000_b92b(iVar5,iVar4,local_8);
  }
LAB_1000_b5c0:
  if (iVar8 != iVar4) {
    if (iVar1 != 1) {
      *(undefined2 *)0x36 = 1;
      func_0x00000f4d(0,4,*(undefined2 *)0x64);
      FUN_1000_ba15(*(undefined2 *)0x64);
    }
    FUN_1000_af77(iVar8,local_2a,*(undefined2 *)0x64);
    if (((local_8[iVar8 * 0x10 + 0xc] & 0x10) == 0) && ((*local_8 & 1) == 0)) {
      *(undefined2 *)0x38 = 1;
    }
    else {
      *(undefined2 *)0x38 = 0;
    }
    FUN_1000_b7e6();
    func_0x00001089(0,local_2a);
    if (iVar1 == 1) {
      return;
    }
    FUN_1000_b664(0xffff,0x7fff);
    return;
  }
LAB_1000_b490:
  FUN_1000_b7e6();
  func_0x0000074c(0,local_2a);
  return;
}

