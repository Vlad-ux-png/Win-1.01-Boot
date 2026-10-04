// Function: FUN_2000_b1d1

void FUN_2000_b1d1(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_a [2];
  int local_8;
  int local_4;
  
  if (*(int *)(param_2 + 6) <= param_1) {
    iVar1 = FUN_2000_b56b(param_2);
    if ((param_1 <= iVar1) && (*(char *)(param_2 + 0x31) != '\0')) {
      func_0x000013d9(0x1000,local_a);
      local_8 = (param_1 - *(int *)(param_2 + 6)) * *(int *)(param_2 + 0x24);
      local_4 = local_8 + *(int *)(param_2 + 0x24);
      FUN_2000_b642(param_2);
      uVar2 = func_0x000013e1(0,*(undefined2 *)(param_2 + 2));
      func_0x00000b53(0,local_a);
      func_0x000013fd(0,uVar2,*(undefined2 *)(param_2 + 2));
      FUN_2000_b612(param_2);
    }
  }
  return;
}

