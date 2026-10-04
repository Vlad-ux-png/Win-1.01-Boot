// Function: FUN_2000_6a81

void FUN_2000_6a81(uint param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_24;
  int local_20;
  undefined2 *local_1c;
  undefined2 in_stack_0000ffe6;
  int local_18;
  int local_12;
  undefined2 local_10 [4];
  int local_8;
  int local_6;
  int local_4;
  
  puVar1 = param_2;
  local_20 = 0;
  local_18 = param_2[8];
  local_12 = FUN_2000_6cde(local_18,param_2);
  *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 0x10;
  *(byte *)((int)puVar1 + 7) = *(byte *)((int)puVar1 + 7) | 8;
  iVar2 = func_0x0000ffff(0x1000,param_1);
  if (iVar2 != 0) {
    param_1 = func_0x0000ffff(0,param_1,puVar1[1]);
  }
  if (param_1 == 8) {
    FUN_2000_8208(puVar1);
    if (puVar1[8] == puVar1[10]) {
      local_4 = puVar1[9];
    }
    else {
      local_4 = puVar1[8];
    }
    local_8 = func_0x00000285(0,*puVar1);
    iVar3 = func_0x0000ffff(0,0x10);
    iVar2 = local_4;
    if (iVar3 < 0) {
      local_20 = local_4 + 1;
      local_24 = local_4;
      if (((puVar1[3] & 0x2000) != 0) &&
         (iVar3 = func_0x0000ffff(0,local_20,puVar1), iVar3 != local_20)) {
        local_20 = iVar2 + 2;
      }
      iVar4 = FUN_2000_79c7(iVar2 + local_8);
      local_18 = local_24;
      iVar3 = local_20;
      if (iVar4 != 0) {
        iVar2 = FUN_2000_79c7(iVar2 + local_8 + 1);
        iVar3 = local_20 + 1;
        if (iVar2 != 0) {
          iVar3 = local_20 + 2;
        }
      }
    }
    else {
      iVar3 = local_20;
      if (0 < local_4) {
        local_24 = local_4 + -1;
        local_20 = local_4;
        if ((puVar1[3] & 0x2000) != 0) {
          local_24 = func_0x0000061e(0,local_24,puVar1);
        }
        iVar2 = FUN_2000_79c7(local_24 + local_8 + -1);
        local_18 = local_24;
        iVar3 = local_20;
        if (iVar2 != 0) {
          iVar2 = FUN_2000_79c7(local_24 + -1 + local_8 + -1);
          local_18 = local_24 + -1;
          if (iVar2 != 0) {
            local_18 = local_24 + -2;
          }
        }
      }
    }
    local_20 = iVar3;
    local_24 = local_18;
    func_0x0000029b(0,*puVar1);
    func_0x00000179(0,0,local_20,local_24,puVar1);
    local_12 = FUN_2000_6cde(local_24,puVar1);
    local_18 = 0;
    unaff_SS = in_stack_0000ffe6;
  }
  else if (param_1 == 9) {
    local_6 = 0;
    do {
      *(undefined1 *)((int)local_10 + local_6) = 0x20;
      local_6 = local_6 + 1;
    } while (local_6 < 8);
    local_18 = local_18 - *(int *)(local_12 * 2 + puVar1[0x1c]);
    local_18 = (local_18 + 8U & 0xfff8) - local_18;
    local_1c = local_10;
  }
  else {
    if (param_1 == 0xd) {
      *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 2;
      param_1 = 0xa0d;
    }
    if (param_1 < 0x20) {
      func_0x0000ffff(0,0);
      return;
    }
    if ((param_1 & 0xff00) == 0) {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
    local_1c = &param_1;
  }
  if (param_1 == 8) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  FUN_2000_784a(uVar5,local_18,local_1c,unaff_SS,local_12,puVar1);
  return;
}

