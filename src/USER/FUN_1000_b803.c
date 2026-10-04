// Function: FUN_1000_b803

undefined2 __cdecl16near FUN_1000_b803(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((*(int *)0x34 == 0) && (*(int *)0x30 != 0)) {
    uVar1 = func_0x00000a25(0x1000,*(undefined2 *)0x30);
    *(undefined2 *)0x34 = uVar1;
  }
  return *(undefined2 *)0x34;
}

