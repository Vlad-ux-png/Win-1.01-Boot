// Function: FUN_2000_c692

int FUN_2000_c692(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0x80) == 0) {
    iVar1 = (param_1 & 0xff) * 0xf + 0x20e;
  }
  else {
    iVar1 = (param_1 & 0x7f) * 0xf + 0x2a4;
  }
  return iVar1;
}

