// Function: FUN_1000_4f8f

int __cdecl16near FUN_1000_4f8f(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(char *)0x179 = *(char *)(param_1 + 0x18) + '1';
  iVar1 = func_0x0000ffff(0x1000,0x100,0x400,0x176);
  if (-1 < iVar1) {
    FUN_1000_4fdc(param_1,iVar1);
  }
  return iVar1;
}

