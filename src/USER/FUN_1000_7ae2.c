// Function: FUN_1000_7ae2

/* WARNING: Removing unreachable block (ram,0x00017af2) */

uint __stdcall16far FUN_1000_7ae2(int param_1)

{
  uint in_AX;
  undefined2 unaff_DS;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int *)(*(int *)(param_1 + 4) + 2) == 0x4b4e)) {
    return in_AX | 1;
  }
  return 0;
}

