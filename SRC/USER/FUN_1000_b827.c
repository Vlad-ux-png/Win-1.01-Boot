// Function: FUN_1000_b827

undefined2 __stdcall16far FUN_1000_b827(uint param_1)

{
  if (param_1 != 0x1b) {
    if (0x1b < param_1) {
      if (param_1 == 0x25) {
        return 0x4b00;
      }
      if (param_1 == 0x26) {
        return 0x4800;
      }
      if (param_1 == 0x27) {
        return 0x4d00;
      }
      if (param_1 != 0x28) {
        return 0;
      }
      return 0x5000;
    }
    if (param_1 != 3) {
      if (param_1 != 0x12) {
        return 0;
      }
      return 0x4d01;
    }
  }
  return 0x1b;
}

