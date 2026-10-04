// Function: FUN_2000_4963

int FUN_2000_4963(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = param_1;
  while( true ) {
    param_1 = iVar1;
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      return param_1;
    }
    if (iVar1 == param_2) break;
    if ((*(byte *)(iVar1 + 0x33) & 0xc0) != 0x40) {
      return param_1;
    }
  }
  return param_1;
}

