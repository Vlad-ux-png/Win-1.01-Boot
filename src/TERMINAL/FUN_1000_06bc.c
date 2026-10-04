// Function: FUN_1000_06bc

void __stdcall16far FUN_1000_06bc(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0x1000;
  if (*(int *)0x172 < 1) {
    *(undefined2 *)0x174 = 0;
    uVar2 = 0;
    iVar1 = func_0x0000ffff(0x1000,0xff,0x1398);
    *(int *)0x172 = iVar1;
    if (iVar1 < 1) {
      uVar2 = 0;
      iVar1 = func_0x0000ffff(0,0,0,param_1);
      if (iVar1 != 0) {
        *(int *)0x172 = -*(int *)0x172;
      }
    }
  }
  if (0 < *(int *)0x172) {
    iVar1 = func_0x0000ffff(uVar2,*(undefined2 *)0x172,*(int *)0x174 + 0x1398);
    *(int *)0x174 = *(int *)0x174 + iVar1;
    *(int *)0x172 = *(int *)0x172 - iVar1;
  }
  return;
}

