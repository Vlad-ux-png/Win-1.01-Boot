// Function: FUN_2000_63e9

void __stdcall16far
FUN_2000_63e9(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_c [2];
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  
  if (((*(byte *)(param_4 + 6) & 4) == 0) &&
     (((*(byte *)(param_4 + 6) & 8) != 0 || ((*(uint *)(param_4 + 6) & 0x1000) != 0)))) {
    FUN_2000_61ea(local_c,unaff_SS,param_2,param_4);
    FUN_2000_61ea(&local_8,unaff_SS,param_1,param_4);
    local_6 = local_6 + *(int *)(param_4 + 0xe);
    func_0x0000ffff(0x1000,local_c);
    func_0x0000ffff(0,local_a,local_8);
  }
  return;
}

