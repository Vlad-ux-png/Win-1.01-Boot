// Function: LOCALSIZE

int __stdcall16far LOCALSIZE(void)

{
  int iVar1;
  int in_BX;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  iVar1 = FUN_1000_4f46();
  if (!(bool)in_ZF) {
    iVar1 = -(iVar1 - *(int *)(in_BX + 2));
  }
  return iVar1;
}

