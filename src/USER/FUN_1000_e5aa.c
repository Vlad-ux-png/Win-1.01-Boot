// Function: FUN_1000_e5aa

undefined2 FUN_1000_e5aa(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0x1000;
  if (param_4 != 0) {
    uVar2 = 0;
    iVar1 = func_0x00000225(0x1000,param_1,0,param_2,param_3,param_4);
    if (iVar1 != 0) goto LAB_1000_e5eb;
  }
  param_4 = *(int *)0x614;
  iVar1 = func_0x000002c3(uVar2,param_1,0,param_2,param_3,param_4);
LAB_1000_e5eb:
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x000002d3(0,iVar1,param_4);
  }
  return uVar2;
}

