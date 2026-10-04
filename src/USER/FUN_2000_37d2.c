// Function: FUN_2000_37d2

void FUN_2000_37d2(int param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x33) & 0x40) != 0) {
    func_0x00000ed8(0x1000,-*(int *)(*(int *)(param_1 + 0x38) + 0x28),
                    -*(int *)(*(int *)(param_1 + 0x38) + 0x26),0x37c);
  }
  return;
}

