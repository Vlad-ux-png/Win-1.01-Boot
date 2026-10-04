// Function: FUN_2000_b4e5

int FUN_2000_b4e5(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined4 local_6;
  
  if (*(char *)(param_2 + 0x33) == '\0') {
    if (*(int *)(param_2 + 8) == param_1) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    uVar2 = func_0x00000773(0x1000,*(undefined2 *)(param_2 + 0x1c));
    local_6 = (char *)CONCAT22((int)((ulong)uVar2 >> 0x10),
                               (char *)(*(int *)(param_2 + 0x10) * 2 + (int)uVar2 + param_1));
    iVar1 = (int)*local_6;
    func_0x0000075b(0,*(undefined2 *)(param_2 + 0x1c));
  }
  return iVar1;
}

