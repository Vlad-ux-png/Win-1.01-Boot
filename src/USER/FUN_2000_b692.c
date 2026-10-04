// Function: FUN_2000_b692

void FUN_2000_b692(int param_1)

{
  undefined2 unaff_DS;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_2000_ac57(0,0,0x403,param_1);
  }
  if (*(char *)(param_1 + 0x35) != '\0') {
    FUN_2000_ac57(0,0,0x202,param_1);
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    func_0x0000ffff(0x1000);
    *(undefined1 *)(param_1 + 0x36) = 0;
  }
  return;
}

