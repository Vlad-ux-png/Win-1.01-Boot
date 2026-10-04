// Function: FUN_2000_62a4

void __stdcall16far FUN_2000_62a4(int param_1,int param_2,undefined2 param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int local_14;
  int iStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  
  FUN_2000_61ea(&local_c,unaff_SS,param_2,param_4);
  local_6 = local_a + param_4[7];
  local_8 = 32000;
  uVar10 = param_4[1];
  uVar8 = 1;
  uVar9 = param_3;
  func_0x0000ffff(0x1000,1,param_3,uVar10);
  local_14 = local_c;
  iStack_12 = local_a;
  uStack_10 = local_8;
  iStack_e = local_6;
  if (local_c < 0) {
    local_14 = 0;
  }
  if (param_1 == 0) {
    func_0x0000ffff(0,&local_14);
  }
  uVar6 = 1;
  uVar7 = param_3;
  func_0x0000ffff(0,1,param_3);
  uVar5 = *param_4;
  iVar1 = func_0x0000052f(0,uVar5);
  iVar1 = iVar1 + param_2;
  param_2 = param_4[6] - param_2;
  uVar3 = unaff_DS;
  uVar4 = param_3;
  func_0x0000ffff(0,param_2,iVar1);
  uVar2 = *param_4;
  func_0x0000055b(0,uVar2);
  if (((param_4[3] & 0x1000) != 0) || ((*(byte *)(param_4 + 3) & 8) != 0)) {
    FUN_2000_63e9(param_4[9],param_4[8],param_3,param_4,uVar2,param_2,iVar1,uVar3,local_a,local_c,
                  uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,unaff_SI,unaff_DI);
  }
  return;
}

