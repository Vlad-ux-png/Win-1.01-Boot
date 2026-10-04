// Function: FUN_1000_cf49

void __cdecl16near FUN_1000_cf49(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x510 / *(int *)&SUB_0000_0462;
  *(int *)0x5e2 = iVar1;
  if (10 < iVar1) {
    *(undefined2 *)0x5e2 = 10;
  }
  iVar1 = func_0x0000ffff(0x1000,*(int *)0x5e2 * 0xe + 0x46,0x40);
  *(int *)&SUB_0000_05d2 = iVar1;
  *(int *)0x3a2 = iVar1 + 0xe;
  *(int *)0x5ba = iVar1 + 0x1c;
  *(int *)0x5da = iVar1 + 0x2a;
  *(int *)0x4dc = iVar1 + 0x38;
  func_0x0000ffff(0,*(int *)0x50e - *(int *)0x468,*(undefined2 *)0x510,0,0,0x512);
  iVar1 = iVar1 + 0x38;
  for (iVar2 = 0; iVar2 < *(int *)0x5e2; iVar2 = iVar2 + 1) {
    *(undefined2 *)(iVar1 + 2) = *(undefined2 *)0x514;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)0x518;
    iVar1 = iVar1 + 0xe;
  }
  *(undefined2 *)(iVar1 + 2) = 0;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)0x50e;
  return;
}

