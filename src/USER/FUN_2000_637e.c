// Function: FUN_2000_637e

int __stdcall16far FUN_2000_637e(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = param_1[9] - param_1[8];
  if (iVar2 != 0) {
    iVar3 = func_0x0000ffff(0x1000,*param_1);
    func_0x0000ffff(0,param_1[6] - param_1[9],param_1[8] + iVar3);
    param_1[6] = param_1[6] - iVar2;
    func_0x0000ffff(0,*param_1);
    uVar1 = param_1[8];
    param_1[9] = uVar1;
    param_1[10] = uVar1;
  }
  return -iVar2;
}

