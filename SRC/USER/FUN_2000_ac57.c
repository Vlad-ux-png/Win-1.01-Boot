// Function: FUN_2000_ac57

void FUN_2000_ac57(undefined2 param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  int local_a;
  
  uVar8 = 0x1000;
  if (*(int *)(param_4 + 0x10) == 0) {
    return;
  }
  if (param_3 == 0x202) {
    if (*(char *)(param_4 + 0x35) == '\0') {
      return;
    }
    uVar8 = 0;
    func_0x0000ffff(0x1000,1,*(undefined2 *)(param_4 + 2));
LAB_2000_af09:
    *(undefined1 *)(param_4 + 0x35) = 0;
    *(undefined1 *)(param_4 + 0x2e) = 0;
    func_0x0000ffff(uVar8);
    iVar6 = func_0x0000ffff(0,*(undefined2 *)(param_4 + 0x2c),*(undefined2 *)(param_4 + 0x2a));
    for (iVar7 = func_0x00000a61(0,*(undefined2 *)(param_4 + 0x2c),*(undefined2 *)(param_4 + 0x2a));
        iVar7 < iVar6 + 1; iVar7 = iVar7 + 1) {
      FUN_2000_b48c(*(undefined1 *)(param_4 + 0x2f),iVar7,param_4);
    }
    if (*(char *)(param_4 + 0x34) == '\0') {
      return;
    }
    FUN_2000_afd2(1,param_4);
    if (*(char *)(param_4 + 0x37) == '\0') {
      return;
    }
    FUN_2000_afd2(2,param_4);
    return;
  }
  if (param_3 < 0x203) {
    if (param_3 != 0x200) {
      if (param_3 != 0x201) {
        return;
      }
      goto LAB_2000_ac94;
    }
  }
  else {
    if (param_3 == 0x203) {
LAB_2000_ac94:
      func_0x00000279(0x1000,*(undefined2 *)(param_4 + 2));
      if (*(char *)(param_4 + 0x2e) != '\0') {
        return;
      }
      if (*(char *)(param_4 + 0x30) != '\0') {
        return;
      }
      *(undefined1 *)(param_4 + 0x35) = 1;
      func_0x0000ffff(0,*(undefined2 *)(param_4 + 2));
      uVar8 = 0;
      func_0x0000ffff(0,*(undefined2 *)(param_4 + 2));
    }
    else {
      if (param_3 != 0x401) {
        if (param_3 != 0x402) {
          if (param_3 != 0x403) {
            return;
          }
          if (*(char *)(param_4 + 0x30) == '\0') {
            return;
          }
          *(undefined1 *)(param_4 + 0x30) = 0;
          goto LAB_2000_af09;
        }
        goto LAB_2000_ad6e;
      }
      if (*(char *)(param_4 + 0x35) != '\0') {
        return;
      }
    }
    *(bool *)(param_4 + 0x37) = param_3 == 0x203;
    func_0x00000a4c(uVar8,param_4 + 0x14);
    uVar8 = FUN_2000_b5bb(param_1,param_2,param_4);
    *(undefined2 *)(param_4 + 0x2c) = uVar8;
    *(undefined2 *)(param_4 + 0x2a) = uVar8;
    uVar8 = 0;
    iVar6 = func_0x00000c4b(0,0x10);
    if ((iVar6 < 0) && (*(char *)(param_4 + 0x33) != '\0')) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    *(char *)(param_4 + 0x2e) = cVar3;
    if (cVar3 == '\0') {
      iVar6 = FUN_2000_b4e5(*(undefined2 *)(param_4 + 0x2a),param_4);
      *(undefined1 *)(param_4 + 0x2f) = 1;
      if (iVar6 != 1) {
        FUN_2000_b1d1(*(undefined2 *)(param_4 + 0x2a),param_4);
      }
      FUN_2000_b122(*(undefined2 *)(param_4 + 0x2a),param_4);
    }
    else {
      iVar6 = FUN_2000_b4e5(*(undefined2 *)(param_4 + 0x2a),param_4);
      *(bool *)(param_4 + 0x2f) = iVar6 == 0;
      FUN_2000_b1d1(*(undefined2 *)(param_4 + 0x2a),param_4);
    }
    FUN_2000_b106(*(undefined2 *)(param_4 + 0x2a),param_4);
    if (param_3 != 0x401) {
      uVar8 = 0;
      func_0x00000f4d(0,0,0,400,1,*(undefined2 *)(param_4 + 2));
    }
  }
LAB_2000_ad6e:
  if (param_3 == 0x402) {
    if (*(char *)(param_4 + 0x30) != '\0') goto LAB_2000_ad86;
LAB_2000_ad7b:
    bVar2 = true;
  }
  else {
    if (*(char *)(param_4 + 0x35) == '\0') goto LAB_2000_ad7b;
LAB_2000_ad86:
    bVar2 = false;
  }
  if (bVar2) {
    return;
  }
  uVar1 = *(undefined2 *)(param_4 + 0x14);
  *(undefined2 *)(param_4 + 0x26) = uVar1;
  *(int *)(param_4 + 0x28) = param_2;
  if ((param_2 < 0) || (*(int *)(param_4 + 0x1a) < param_2)) {
    if (param_3 == 0x200) {
      if (param_2 < 0) {
        iVar6 = -param_2;
      }
      else {
        iVar6 = param_2 - *(int *)(param_4 + 0x1a);
      }
      local_a = -(iVar6 * 0x10 + -400);
      if (local_a < 1) {
        local_a = 1;
      }
      func_0x0000ffff(uVar8,0,0,local_a,1,*(undefined2 *)(param_4 + 2));
    }
    if ((param_2 < 0) && (*(int *)(param_4 + 6) == 0)) {
      return;
    }
    if ((*(int *)(param_4 + 0x1a) < param_2) &&
       (*(int *)(param_4 + 0x10) + -1 == *(int *)(param_4 + 6))) {
      return;
    }
    FUN_2000_a208(0,-1 < param_2,param_4);
    if (param_2 < 0) {
      param_2 = 2;
    }
    else {
      param_2 = *(int *)(param_4 + 0x1a) - *(int *)(param_4 + 0x24);
    }
  }
  iVar6 = FUN_2000_af8f(uVar1,param_2,param_4);
  if (iVar6 == *(int *)(param_4 + 0x2c)) {
    return;
  }
  if (*(char *)(param_4 + 0x2e) == '\0') {
    FUN_2000_b1d1(*(int *)(param_4 + 0x2c),param_4);
    *(int *)(param_4 + 0x2c) = iVar6;
    *(int *)(param_4 + 0x2a) = iVar6;
    FUN_2000_b1d1(iVar6,param_4);
    goto LAB_2000_aedb;
  }
  iVar7 = iVar6;
  if (*(int *)(param_4 + 0x2a) == *(int *)(param_4 + 0x2c)) {
LAB_2000_ae78:
    iVar4 = *(int *)(param_4 + 0x2a);
  }
  else {
    iVar4 = FUN_2000_a7fc(*(int *)(param_4 + 0x2a) - *(int *)(param_4 + 0x2c));
    iVar5 = FUN_2000_a7fc(*(int *)(param_4 + 0x2a) - iVar6);
    if (iVar5 != iVar4) {
      FUN_2000_b16e(*(undefined2 *)(param_4 + 0x2c),*(undefined2 *)(param_4 + 0x2a),param_4);
      goto LAB_2000_ae78;
    }
    iVar4 = FUN_2000_a816(*(int *)(param_4 + 0x2a) - *(int *)(param_4 + 0x2c));
    iVar5 = FUN_2000_a816(*(int *)(param_4 + 0x2a) - iVar6);
    if (iVar5 < iVar4) {
      iVar7 = *(int *)(param_4 + 0x2c);
      iVar4 = iVar6;
    }
    else {
      iVar4 = *(int *)(param_4 + 0x2c);
    }
  }
  FUN_2000_b16e(iVar7,iVar4,param_4);
  *(int *)(param_4 + 0x2c) = iVar6;
LAB_2000_aedb:
  FUN_2000_b106(iVar6,param_4);
  return;
}

