// Function: FUN_1000_170a

void FUN_1000_170a(char *param_1)

{
  int unaff_SI;
  int unaff_DI;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (((*param_1 == -0x48) || (*param_1 == -0x34)) && (*(int *)((char *)param_1 + 1) == unaff_SI)) {
    *(int *)((char *)param_1 + 1) = unaff_DI;
  }
  return;
}

