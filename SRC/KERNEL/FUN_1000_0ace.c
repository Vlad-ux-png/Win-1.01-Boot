// Function: FUN_1000_0ace

undefined2 FUN_1000_0ace(int *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1[1];
  if ((*param_1 == 0) && (iVar2 != 0)) {
    uVar1 = FUN_1000_09e1(iVar2,iVar2);
    *param_1 = *(int *)0x0;
    param_1[1] = *(int *)0x2;
    uVar1 = GLOBALFREE(iVar2);
  }
  return uVar1;
}

