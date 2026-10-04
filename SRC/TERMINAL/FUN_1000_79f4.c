// Function: FUN_1000_79f4

void FUN_1000_79f4(uint param_1,int param_2,char *param_3)

{
  char *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int local_16;
  char local_a [2];
  uint local_8;
  int local_6;
  undefined2 local_4;
  
  local_4 = func_0x0000ffff(0x1000,0x7f02,0,0);
  uVar2 = func_0x000002d2(0,local_4);
  local_8 = 0;
  while ((-1 < param_2 && ((0 < param_2 || (param_1 != 0))))) {
    uVar6 = func_0x0000ffff(0);
    lVar7 = func_0x0000023d(0);
    local_6 = func_0x0000ffff(0,uVar6,0x4240,0xf);
    local_8 = (uint)(100 / (long)local_6);
    if (local_8 == 0) {
      local_8 = 1;
    }
    uVar3 = param_1;
    if (((int)local_8 >> 0xf <= param_2) && (((int)local_8 >> 0xf < param_2 || (local_8 < param_1)))
       ) {
      uVar3 = local_8;
    }
    local_16 = local_6 / 100;
    local_8 = uVar3;
    if (local_16 == 0) {
      local_16 = 1;
    }
    while (0 < local_16) {
      lVar8 = func_0x0000024c(0);
      if (lVar8 != lVar7) {
        lVar7 = func_0x0000ffff(0);
        local_16 = local_16 + -1;
      }
    }
    bVar5 = param_1 < local_8;
    param_1 = param_1 - local_8;
    param_2 = (param_2 - ((int)local_8 >> 0xf)) - (uint)bVar5;
    while (pcVar1 = param_3, local_8 = local_8 - 1, -1 < (int)local_8) {
      param_3 = (char *)CONCAT22(param_3._2_2_,(char *)param_3 + 1);
      local_a[0] = *pcVar1;
      if ((local_a[0] != '\n') &&
         (((iVar4 = func_0x000002b1(0), iVar4 < 1 ||
           (iVar4 = func_0x000002c6(0,1,local_a), iVar4 < 1)) ||
          (((*(int *)0x246 != 0 && (local_a[0] == '\r')) &&
           ((iVar4 = func_0x0000ffff(0), iVar4 < 1 ||
            (iVar4 = func_0x0000ffff(0,1,0x420), iVar4 < 1)))))))) goto LAB_1000_7b32;
    }
  }
LAB_1000_7b32:
  func_0x0000ffff(0,uVar2);
  return;
}

