// Function: FUN_2000_5389

void __stdcall16far FUN_2000_5389(int param_1)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int *piVar1;
  int local_24 [4];
  int local_1c;
  uint local_1a;
  
  FUN_2000_532f(param_1);
  piVar1 = local_24;
  func_0x0000ffff(0x1000,piVar1);
  FUN_2000_5361(piVar1,unaff_SS);
  if (*(char *)(param_1 + 10) == '\0') {
    local_24[0] = local_24[0] + local_1c;
  }
  *(int *)(param_1 + 0xe) = local_24[0];
  *(uint *)(param_1 + 0x1e) = local_1a;
  func_0x00000124(0,param_1 + 0x16);
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    func_0x0000ffff(0,-((*(uint *)(param_1 + 0xe) >> 2) - 1),-((local_1a >> 1) - 1),param_1 + 0x16);
  }
  *(int *)(param_1 + 0x1c) =
       *(int *)(param_1 + 0xe) * *(int *)(param_1 + 0x22) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1a) =
       *(int *)(param_1 + 0x1e) * *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x16) + 1;
  return;
}

