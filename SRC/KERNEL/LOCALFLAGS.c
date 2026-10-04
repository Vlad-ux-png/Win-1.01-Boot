// Function: LOCALFLAGS

undefined2 __stdcall16far LOCALFLAGS(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_1000_4f46();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 2);
  }
  return CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8));
}

