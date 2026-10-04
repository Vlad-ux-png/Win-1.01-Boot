// Function: FUN_2000_b48c

void FUN_2000_b48c(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  undefined4 local_6;
  
  if (*(char *)(param_3 + 0x33) == '\0') {
    if (param_1 != 0) {
      *(int *)(param_3 + 8) = param_2;
    }
  }
  else {
    uVar1 = func_0x0000166b(0x1000,*(undefined2 *)(param_3 + 0x1c));
    local_6 = CONCAT22((int)((ulong)uVar1 >> 0x10),
                       *(int *)(param_3 + 0x10) * 2 + (int)uVar1 + param_2);
    *(bool *)local_6 = param_1 != 0;
    func_0x0000168d(0,*(undefined2 *)(param_3 + 0x1c));
  }
  return;
}

