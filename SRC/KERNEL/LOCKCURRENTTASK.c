// Function: LOCKCURRENTTASK

void __stdcall16far LOCKCURRENTTASK(int param_1)

{
  DAT_1000_001a = 0;
  if (param_1 != 0) {
    DAT_1000_001a = DAT_1000_0018;
  }
  return;
}

