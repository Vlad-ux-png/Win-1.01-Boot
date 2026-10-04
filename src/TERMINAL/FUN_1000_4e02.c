// Function: FUN_1000_4e02

bool __stdcall16far FUN_1000_4e02(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar2;
  int local_152 [98];
  int local_8e;
  undefined2 local_8c;
  int local_8a;
  int local_88;
  int local_86;
  undefined1 local_84 [8];
  undefined1 local_7c [120];
  
  func_0x0000ffff(0x1000,param_1);
  local_8a = 0;
  local_86 = *(int *)&SUB_0000_024e;
  local_8c = 2;
  uVar2 = 2;
  local_8e = func_0x0000ffff(0,2,local_84);
  if (local_8e < 0) {
    FUN_1000_3ced(param_1,0xc,param_2,uVar2);
    local_8a = 1;
    goto LAB_1000_4eb3;
  }
  uVar2 = 0xc4;
  iVar1 = func_0x0000ffff(0,0xc4,local_152);
  if (iVar1 == 0xc4) {
    local_88 = local_152[0];
    local_152[0] = 0;
    iVar1 = FUN_1000_4c2a(0xc4,local_152);
    if (iVar1 != local_88) goto LAB_1000_4e7e;
  }
  else {
LAB_1000_4e7e:
    FUN_1000_3ced(param_1,0x1a,param_2,uVar2);
    local_8a = 1;
  }
  func_0x0000ffff(0,local_8e);
LAB_1000_4eb3:
  if (local_8a == 0) {
    FUN_1000_66c8(0xc4,local_152,unaff_SS,0x240,unaff_DS);
    FUN_1000_4c85(1);
    FUN_1000_4da7(local_86 != *(int *)&SUB_0000_024e,0x240,*(undefined2 *)0x1530);
    func_0x000035e0(0,local_7c);
    FUN_1000_410a(0x12d6);
    *(undefined2 *)0x164 = 1;
  }
  return local_8a == 0;
}

