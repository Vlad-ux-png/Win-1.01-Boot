// Function: FUN_2000_6f54

void FUN_2000_6f54(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  func_0x0000ffff(0x1000,&local_c);
  local_4 = local_c;
  local_c = local_8 - *(int *)(param_3 + 0x1e);
  if (*(int *)(param_3 + 0x1a) < local_c) {
    local_c = *(int *)(param_3 + 0x1a);
  }
  func_0x00000a66(0,1,&local_c);
  local_c = local_4;
  local_4 = local_a;
  local_a = local_6 - *(int *)(param_3 + 0xe);
  if (*(int *)(param_3 + 0x1c) < local_a) {
    local_a = *(int *)(param_3 + 0x1c);
  }
  func_0x00000af5(0,1,&local_c);
  local_a = local_4;
  if ((*(byte *)(param_3 + 6) & 0x80) != 0) {
    uVar3 = (int)*(uint *)(param_3 + 0xe) >> 0xf;
    func_0x0000ffff(0,-((((int)((*(uint *)(param_3 + 0xe) ^ uVar3) - uVar3) >> 2 ^ uVar3) - uVar3) +
                       -1),-(*(int *)(param_3 + 0x1e) / 2 + -1),&local_c);
  }
  iVar2 = *(int *)(param_3 + 0x1e);
  iVar1 = ((local_8 - local_c) + -1) / iVar2;
  *(int *)(param_3 + 0x28) = iVar1;
  *(int *)(param_3 + 0x1a) = iVar1 * iVar2 + local_c + 1;
  iVar2 = (local_6 - local_a) / *(int *)(param_3 + 0xe);
  *(int *)(param_3 + 0x22) = iVar2;
  if (iVar2 == 0) {
    *(undefined2 *)(param_3 + 0x22) = 1;
  }
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0xe) * *(int *)(param_3 + 0x22) + local_a;
  if ((*(uint *)(param_3 + 6) & 0x4000) != 0) {
    func_0x0000ffff(0,1,0,0,*(undefined2 *)(param_3 + 2));
  }
  FUN_2000_7284(0,0,param_3);
  return;
}

