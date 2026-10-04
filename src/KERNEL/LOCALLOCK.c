// Function: LOCALLOCK

undefined2 * __stdcall16far LOCALLOCK(undefined2 *param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if (((uint)param_1 & 2) != 0) {
    if ((*(byte *)(param_1 + 1) & 0x40) == 0) {
      pcVar1 = (char *)((int)param_1 + 3);
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        *(char *)((int)param_1 + 3) = *(char *)((int)param_1 + 3) + -1;
      }
    }
    param_1 = (undefined2 *)*param_1;
  }
  return param_1;
}

