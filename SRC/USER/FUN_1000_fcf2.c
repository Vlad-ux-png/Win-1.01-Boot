// Function: FUN_1000_fcf2

undefined2 FUN_1000_fcf2(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  undefined2 local_4;
  
  if (param_1 == 0) {
    func_0x000007d8(0x1000,*(undefined2 *)0x366,param_2);
  }
  else {
    if (*(int *)(*(int *)(param_3 + 4) + 4) == *(int *)&SUB_0000_0624) {
      iVar2 = -0x2ca;
      local_4 = func_0x0000ffff(0x1000,5,param_2,param_3);
    }
    else {
      local_4 = func_0x0000ffff(0x1000,param_3,5,param_2,0x19,param_3);
      iVar2 = param_3;
    }
    uVar1 = func_0x00000bdf(0,local_4,param_2,iVar2);
    *(undefined2 *)0x366 = uVar1;
  }
  return local_4;
}

