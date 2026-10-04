// Function: FUN_2000_7e6b

undefined2 FUN_2000_7e6b(int param_1,undefined2 param_2,undefined2 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = param_3[9] - param_3[8];
  piVar2 = (int *)func_0x0000192c(0x1000,param_3[0x1b]);
  func_0x0000197c(0,*param_3);
  iVar3 = *piVar2;
  piVar2[1] = param_3[8];
  func_0x000019b6(0,param_3[0x1b]);
  if ((param_1 == 0) || (iVar3 == param_3[8])) {
    iVar3 = func_0x00001448(0,0,iVar1 + 8,param_3[0x1b]);
    param_3[0x1b] = iVar3;
    if (iVar3 != 0) {
      iVar3 = func_0x000019ed(0,iVar3);
      *(int *)(iVar3 + 4) = iVar1;
      *(undefined2 *)(iVar3 + 6) = param_2;
      func_0x00001b33(0,iVar1,iVar3 + 8);
      func_0x000019bd(0,param_3[0x1b]);
    }
  }
  func_0x00001a48(0,*param_3);
  return param_3[0x1b];
}

