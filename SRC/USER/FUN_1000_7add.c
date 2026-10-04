// Function: FUN_1000_7add

uint __stdcall16far FUN_1000_7add(int param_1)

{
  uint in_AX;
  undefined2 in_CX;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    if (CONCAT11((char)((uint)in_CX >> 8),1) == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 4) + 2) != 0x4b4e) {
      return 0;
    }
  }
  return in_AX | 1;
}

