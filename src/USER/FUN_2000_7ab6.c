// Function: FUN_2000_7ab6

void __stdcall16far FUN_2000_7ab6(int param_1,int param_2,undefined2 *param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_20;
  int local_1a;
  int *local_18;
  undefined1 local_14 [8];
  int local_c;
  undefined2 local_a;
  int local_8;
  
  local_a = param_3[9];
  if (param_3[0x10] + -1 < param_1) {
    param_1 = param_3[0x10] + -1;
  }
  iVar4 = 0;
  do {
    local_14[iVar4] = 0x20;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  uVar2 = func_0x0000023e(0x1000,unaff_SS);
  local_20 = func_0x00001624(0,*param_3);
  local_18 = (int *)(param_1 * 2 + param_3[0x1c]);
  while (iVar4 = param_1 + -1, param_2 < param_1) {
    piVar1 = local_18 + -1;
    local_1a = *local_18 + -1;
    iVar5 = *piVar1;
    local_c = iVar5;
    for (; param_1 = iVar4, local_18 = piVar1, iVar5 <= local_1a; iVar5 = iVar5 + 1) {
      local_8 = (int)*(char *)(local_20 + iVar5);
      if (local_8 == 9) {
        iVar3 = ((((iVar5 - local_c) + 8U & 0xfff8) + local_c) - iVar5) + -1;
        *(undefined1 *)(local_20 + iVar5) = 0x20;
        func_0x0000164e(0,*param_3);
        param_3[9] = iVar5 + 1;
        func_0x00000d13(0,0,local_14,uVar2,iVar3,param_3);
        iVar5 = iVar5 + iVar3;
        local_1a = local_1a + iVar3;
        local_20 = func_0x00000d65(0,*param_3);
      }
      else {
        iVar3 = func_0x00001233(0,local_8);
        if (iVar3 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  func_0x00001081(0,*param_3);
  param_3[8] = local_a;
  param_3[9] = local_a;
  FUN_2000_7284(0,param_2,param_3);
  return;
}

