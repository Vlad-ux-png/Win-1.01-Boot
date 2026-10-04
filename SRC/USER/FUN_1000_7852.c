// Function: FUN_1000_7852

int FUN_1000_7852(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar1 = func_0x0000332d(0x1000);
  iVar2 = param_2 * param_1 + 0x3a;
  uVar4 = 0;
  iVar3 = func_0x0000ffff(0,iVar2,0,0x2040,iVar2,uVar1);
  if (iVar3 != 0) {
    *(undefined2 *)0x2 = uVar4;
    *(int *)0x4 = param_1;
    *(undefined2 *)0x8 = 0x3a;
    *(undefined2 *)0xa = 0x3a;
    *(int *)&SUB_0000_000c = iVar2;
  }
  return iVar3;
}

