// Function: ANSIUPPER

undefined2 __stdcall16far ANSIUPPER(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1000_4ba7();
  if (iVar2 != 0) {
    FUN_1000_4b77();
    uVar1 = *(undefined2 *)((int)register0x00000010 + 4);
  }
  return uVar1;
}

