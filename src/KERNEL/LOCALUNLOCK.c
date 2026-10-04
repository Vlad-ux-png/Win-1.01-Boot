// Function: LOCALUNLOCK

uint __stdcall16far LOCALUNLOCK(uint param_1)

{
  uint uVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if ((((param_1 & 2) != 0) && ((*(uint *)(param_1 + 2) & 0x40) == 0)) &&
     (bVar2 = (char)(*(uint *)(param_1 + 2) >> 8) - 1, bVar2 < 0xfe)) {
    *(byte *)(param_1 + 3) = bVar2;
    uVar1 = param_1;
  }
  return uVar1;
}

