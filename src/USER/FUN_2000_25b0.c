// Function: FUN_2000_25b0

void FUN_2000_25b0(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  int *piVar6;
  undefined2 unaff_DS;
  undefined2 in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  undefined2 in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  undefined2 uVar7;
  undefined2 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  undefined2 in_stack_0000ffee;
  undefined2 in_stack_0000fff0;
  int iVar8;
  undefined2 in_stack_0000fff4;
  char local_8;
  undefined2 *local_4;
  
  func_0x0000080f(0x1000);
  local_8 = *(char *)(param_3 + 0x1c);
  piVar6 = (int *)(local_8 * 0xe + *(int *)0x4dc);
  uVar4 = *param_3;
  local_4 = (undefined2 *)(param_2 * 0xe + *(int *)0x4dc);
  iVar8 = 0;
  if (param_2 < 0) {
    iVar8 = 1;
    param_2 = -1 - param_2;
    local_4 = (undefined2 *)(param_2 * 0xe + *(int *)0x4dc);
    if (param_2 <= local_8) {
      piVar6 = piVar6 + 7;
      local_8 = local_8 + '\x01';
    }
    FUN_2000_3a63(param_2,unaff_SI,unaff_DI,in_stack_0000ffe2,in_stack_0000ffe4,in_stack_0000ffe6,
                  in_stack_0000ffe8,in_stack_0000ffea,in_stack_0000ffec,in_stack_0000ffee,
                  in_stack_0000fff0,1,in_stack_0000fff4);
  }
  func_0x00000645(0,piVar6,param_3);
  func_0x000008c6(0,param_1,local_4,param_3);
  *(undefined1 *)(param_3 + 0x1c) = (undefined1)param_2;
  if ((iVar8 == 0) || (piVar6[5] == 0)) {
    if (piVar6[5] == 0) {
      iVar5 = *piVar6 - piVar6[2];
      iVar1 = (int)local_8;
      FUN_2000_39e9(iVar1);
      if (iVar1 < param_2) {
        local_4 = local_4 + -7;
        param_2 = param_2 + -1;
      }
      if (iVar8 == 0) {
        FUN_2000_1b21();
        FUN_2000_19b1(local_4);
      }
      else {
        iVar2 = (int)local_8;
        iVar8 = iVar2;
        iVar1 = param_2;
        if (param_2 < iVar2) {
          iVar8 = param_2 + 1;
          iVar5 = -iVar5;
          iVar1 = iVar2;
        }
        FUN_2000_28cf(iVar5,0xffff,iVar1,iVar8);
        func_0x00000e83(0,param_3 + 0xf);
        uVar4 = FUN_2000_2bae(param_2);
        *local_4 = uVar4;
        uVar4 = FUN_2000_2baa(param_2);
        local_4[2] = uVar4;
        FUN_2000_2879(param_3 + 0xb,param_2);
      }
      *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) & 0xef;
      FUN_2000_396f((int)local_8);
    }
    else {
      if (local_8 != param_2) {
        uVar3 = FUN_2000_1cf3(0,0,param_1,param_3,local_4);
        uVar4 = FUN_2000_1d2f(0,uVar4,piVar6);
        FUN_2000_394c(uVar3,local_4);
        FUN_2000_394c(uVar4,piVar6);
        goto LAB_2000_27d2;
      }
      iVar5 = (param_3[0x12] - param_3[0x10]) - *(int *)0x480;
      iVar8 = FUN_2000_2be5(param_1);
      if ((int)param_3[0x10] < iVar8) {
        iVar5 = -iVar5;
        uVar3 = uVar4;
        uVar7 = *param_1;
      }
      else {
        uVar3 = *param_3;
        uVar7 = uVar4;
      }
      FUN_2000_27df(iVar5,0,uVar7,uVar3);
      *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) & 0xef;
      FUN_2000_394c(uVar4,piVar6);
      func_0x00000ee3(0,param_3 + 0xf);
      uVar4 = FUN_2000_2be5(param_1);
      param_3[0xc] = uVar4;
      uVar4 = FUN_2000_2be8(*param_3);
      param_3[0xe] = uVar4;
    }
  }
  else {
    FUN_2000_1b21();
    FUN_2000_19b1(local_4);
    FUN_2000_19b1(piVar6);
    *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) & 0xef;
    FUN_2000_398b(param_2,0);
    FUN_2000_39b9(*(undefined2 *)0x51c,param_2);
  }
  *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) | 0x10;
  func_0x000008cc(0,param_3);
LAB_2000_27d2:
  func_0x00000b42(0);
  return;
}

