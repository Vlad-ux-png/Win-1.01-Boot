// Function: FUN_2000_198d

void __cdecl16near FUN_2000_198d(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x4dc;
  for (iVar2 = 0; iVar2 < *(int *)0x51c; iVar2 = iVar2 + 1) {
    FUN_2000_19b1(iVar1);
    iVar1 = iVar1 + 0xe;
  }
  return;
}

