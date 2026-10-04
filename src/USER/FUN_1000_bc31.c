// Function: FUN_1000_bc31

void __stdcall16far FUN_1000_bc31(uint param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *unaff_DI;
  undefined2 unaff_DS;
  undefined1 local_10 [8];
  undefined2 local_8;
  
  if (param_2 < 0) {
    return;
  }
  uVar1 = FUN_1000_b9d7(param_4);
  FUN_1000_ba6b(1,uVar1);
  puVar2 = (uint *)func_0x0000133e(0x1000,param_3);
  FUN_1000_beff();
  if (((*(byte *)(param_4 + 0x33) & 0x20) != 0) || ((*unaff_DI & 0x80) == param_1))
  goto LAB_1000_bd05;
  if ((*puVar2 & 1) == 0) {
    local_8 = func_0x0000ffff(0,param_4);
    if (((int)unaff_DI[2] < *(int *)0x506) ||
       (uVar3 = (*(int *)(param_4 + 0x24) - *(int *)(param_4 + 0x20)) - *(int *)0x506,
       unaff_DI[4] < uVar3)) goto LAB_1000_bcbc;
    uVar3 = uVar3 - 1;
  }
  else {
    local_8 = func_0x0000ffff(0,param_4);
LAB_1000_bcbc:
    uVar3 = unaff_DI[4];
  }
  func_0x00000479(0,unaff_DI[2] + uVar3,unaff_DI[3] + unaff_DI[5],unaff_DI[2],unaff_DI[3],local_10);
  func_0x000001c4(0,local_10);
  if ((*puVar2 & 1) == 0) {
    func_0x0000ffff(0,local_8);
  }
  else {
    func_0x0000ffff(0,local_8,param_4);
  }
LAB_1000_bd05:
  *unaff_DI = *unaff_DI & 0xff7f;
  *unaff_DI = *unaff_DI | param_1;
  func_0x00001368(0,param_3);
  return;
}

