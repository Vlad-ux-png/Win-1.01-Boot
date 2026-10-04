// Function: FUN_1000_cad9

int FUN_1000_cad9(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  if (param_2 != 0 || param_1 != 0) {
    iVar1 = func_0x0000ffff(0x1000,param_1,param_2);
    piVar2 = (int *)func_0x0000ffff(0,iVar1 + 3,0x40);
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      iVar3 = param_1;
      func_0x0000ffff(0,param_1,param_2,piVar2 + 1);
    }
  }
  return iVar3;
}

