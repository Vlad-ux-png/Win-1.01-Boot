// Function: FUN_2000_7c04

void __stdcall16far
FUN_2000_7c04(uint param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_6;
  
  local_6 = *(int *)(param_3 + 8);
  if (local_6 != 0) {
    param_1 = *(uint *)(param_2 * 2 + *(int *)(param_3 + 0x38));
  }
  local_10 = FUN_2000_6ee7(param_2,param_3);
  uVar2 = *(int *)(param_2 * 2 + *(int *)(param_3 + 0x38)) + local_10;
  if (uVar2 <= param_1) {
    param_1 = uVar2;
  }
  FUN_2000_6c6b(&local_18,unaff_SS,param_1,param_3);
  local_12 = local_16 + *(int *)(param_3 + 0xe);
  local_14 = *(int *)(param_3 + 0x1a) + *(int *)(param_3 + 0x1e);
  if (local_6 != 0) {
    local_18 = 0x8300;
  }
  func_0x00000c0c(0x1000,&local_18);
  if (0 < local_10) {
    FUN_2000_71da(uVar2 - param_1,param_1 + param_4,&local_18,unaff_SS,param_5);
  }
  if (((((*(uint *)(param_3 + 6) & 0x1000) != 0) || ((*(byte *)(param_3 + 6) & 8) != 0)) &&
      (*(uint *)(param_3 + 0x10) < uVar2)) && (param_1 <= *(uint *)(param_3 + 0x12))) {
    iVar1 = FUN_2000_6d5e(&local_18,unaff_SS,*(undefined2 *)(param_3 + 0x12),
                          *(undefined2 *)(param_3 + 0x10),param_2,param_3);
    if (iVar1 != 0) {
      func_0x00000f6a(0,&local_18);
    }
  }
  return;
}

