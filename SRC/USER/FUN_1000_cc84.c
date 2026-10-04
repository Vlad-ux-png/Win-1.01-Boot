// Function: FUN_1000_cc84

uint FUN_1000_cc84(int param_1,int param_2,uint param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint *unaff_DI;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  uint local_4;
  
  local_a = 0;
  iVar3 = func_0x00000b99(0x1000,param_5);
  uVar4 = func_0x0000ffff(0);
  if (((int)param_4 < *(int *)(iVar3 + 10)) && ((int)param_3 <= *(int *)(iVar3 + 10))) {
    FUN_1000_ca1f();
    uVar5 = func_0x0000ffff(0,1,*(undefined2 *)&SUB_0000_004e,*(undefined2 *)0x4c,uVar4);
    *(undefined2 *)0x542 = uVar5;
    for (local_4 = param_4; (int)local_4 < (int)param_3; local_4 = local_4 + 1) {
      local_8 = 0;
      unaff_DI[6] = param_2 + param_1;
      if (((*unaff_DI & 4) == 0) && (unaff_DI[7] != 0)) {
        iVar3 = func_0x0000ffff(0,9,unaff_DI[7] + 2);
        piVar2 = (int *)unaff_DI[7];
        if (iVar3 != *piVar2) {
          local_8 = func_0x00000c1f(0,(*piVar2 - iVar3) + -1,(int)piVar2 + iVar3 + 3);
          local_8 = local_8 + *(int *)0x542;
        }
      }
      uVar1 = local_8 + param_2 + param_1;
      if (local_a < uVar1) {
        local_a = uVar1;
      }
      unaff_DI = unaff_DI + 8;
    }
    local_a = local_a + *(int *)0x450;
    FUN_1000_ca1f();
    for (local_4 = param_4; local_4 < param_3; local_4 = local_4 + 1) {
      unaff_DI[5] = local_a - param_1;
      unaff_DI = unaff_DI + 8;
    }
  }
  func_0x0000ffff(0,uVar4);
  func_0x00000bc0(0,param_5);
  return local_a;
}

