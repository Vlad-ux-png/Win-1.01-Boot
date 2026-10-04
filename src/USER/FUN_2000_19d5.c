// Function: FUN_2000_19d5

void FUN_2000_19d5(undefined2 param_1,int param_2,int param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_1a;
  int local_18;
  int local_16;
  int local_12;
  int local_10;
  int local_e;
  int local_6;
  
  uVar6 = 0x1000;
  local_12 = 0;
  local_18 = 0;
  local_e = 0;
  for (puVar5 = param_5; param_4 != puVar5; puVar5 = (undefined2 *)*puVar5) {
    if (puVar5[4] == 0) {
      local_e = local_e + 1;
    }
    else {
      local_18 = local_18 + 1;
      local_12 = local_12 + puVar5[4];
    }
  }
  iVar1 = *(int *)0x480;
  local_18 = local_e + local_18;
  iVar4 = param_2 - local_18 * *(int *)&SUB_0000_0464;
  if (iVar4 < 1) {
    iVar2 = param_2 / local_18;
  }
  else {
    iVar2 = *(int *)&SUB_0000_0464;
  }
  local_1a = 0;
  if ((local_12 < iVar4) && (local_e != 0)) {
    local_1a = ((param_2 - local_e * *(int *)&SUB_0000_0464) - local_12) / local_e;
  }
  local_6 = param_3;
  local_10 = local_18;
  for (; param_4 != param_5; param_5 = (undefined2 *)*param_5) {
    func_0x00000272(uVar6,0,0,param_5);
    param_5[0xc] = local_6;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      iVar3 = param_3 + param_2;
    }
    else {
      local_16 = iVar2;
      if (0 < iVar4) {
        if (param_5[4] == 0) {
          local_16 = local_1a + iVar2;
        }
        else if (local_12 < iVar4) {
          local_16 = param_5[4];
        }
        else {
          iVar3 = func_0x0000ffff(0,local_12,iVar4,param_5[4]);
          local_16 = iVar3 + *(int *)&SUB_0000_0464;
        }
      }
      iVar3 = param_5[0xc] + local_16;
    }
    uVar6 = 0;
    param_5[0xe] = iVar3;
    local_6 = local_6 + local_16;
    if (local_18 + -1 != local_10) {
      param_5[0xc] = param_5[0xc] - (iVar1 >> 1);
    }
    if (local_10 != 0) {
      param_5[0xe] = param_5[0xe] + (*(int *)0x480 - (iVar1 >> 1));
    }
    FUN_2000_1bcc(param_1,param_5 + 0xb);
  }
  return;
}

