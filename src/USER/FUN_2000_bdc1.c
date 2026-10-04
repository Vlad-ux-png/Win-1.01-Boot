// Function: FUN_2000_bdc1

int * FUN_2000_bdc1(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (((*(int *)0x22 != 0) && (param_1 != 0)) &&
     (piVar1 = (int *)func_0x000000c8(0x1000,*(undefined2 *)0x22), piVar1 != (int *)0x0)) {
    *(undefined2 *)0x2a = piVar1;
    iVar2 = *(int *)&SUB_0000_002c;
    while (iVar2 != 0) {
      if (param_1 == *piVar1) {
        return piVar1;
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + -1;
    }
    func_0x000000ee(0,*(undefined2 *)0x22);
  }
  return (int *)0x0;
}

