// Function: GETATOMHANDLE

int __stdcall16far GETATOMHANDLE(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0xc000) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 << 2;
  }
  return iVar1;
}

