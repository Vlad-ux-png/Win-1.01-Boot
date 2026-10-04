// Function: FUN_1000_3255

void FUN_1000_3255(int param_1,undefined2 *param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_1a [16];
  undefined2 local_a;
  int local_8;
  int local_6;
  int local_4;
  
  func_0x00001d83(0x1000,*(undefined2 *)0xea8,param_3);
  func_0x00001d8f(0,1,param_3);
  func_0x00001d9f(0,*(undefined2 *)0xea0,*(undefined2 *)0xea2,param_3);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  puVar2 = (undefined2 *)param_2;
  local_8 = puVar2[1];
  local_a = *param_2;
  if (*(int *)0xea6 < 1) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)0xea6 + -1;
  }
  local_4 = local_4 + puVar2[3];
  if (*(int *)0xea4 < 1) {
    local_6 = 0;
  }
  else {
    local_6 = *(int *)0xea4 + -1;
  }
  local_6 = local_6 + puVar2[2];
  FUN_1000_357d(&local_a);
  iVar1 = func_0x0000259b(0,&local_a);
  if (iVar1 != 0) {
    if (param_1 != 0) {
      FUN_1000_29d6(local_1a,unaff_SS,param_3);
    }
    FUN_1000_2184(local_1a,unaff_SS,param_3);
  }
  if (((*(int *)0x28 != 0) && (local_8 <= *(int *)0x3a)) && (*(int *)0x3a < local_4)) {
    local_8 = *(undefined2 *)0x3e;
    local_4 = *(undefined2 *)0x42;
    if (param_1 != 0) {
      FUN_1000_29d6(&local_a,unaff_SS,param_3);
    }
    FUN_1000_2184(&local_a,unaff_SS,param_3);
  }
  return;
}

