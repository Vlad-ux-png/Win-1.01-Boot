// Function: FUN_2000_520e

int __stdcall16far
FUN_2000_520e(int param_1,undefined2 param_2,undefined2 param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0x1000;
  iVar1 = param_5[6] + param_4;
  if ((((param_1 == 0) || ((*(byte *)((int)param_5 + 7) & 2) != 0)) ||
      (*(char *)(param_5 + 5) == '\0')) || (iVar1 <= (int)param_5[0x14])) {
    if ((uint)param_5[0x16] < iVar1 + 1U) {
      iVar1 = iVar1 + 0x21;
      uVar3 = 0;
      iVar2 = func_0x0000ffff(0x1000,0,iVar1,*param_5);
      if (iVar2 == 0) {
        FUN_2000_5c8d();
        return 0;
      }
      param_5[0x16] = iVar1;
    }
    func_0x0000ffff(uVar3,param_3);
    iVar1 = func_0x0000ffff(0,*param_5,param_2,extraout_DX);
    iVar1 = iVar1 + param_5[9];
    if (param_5[6] - param_5[9] != 0) {
      func_0x0000ffff(0,param_5[6] - param_5[9],iVar1 + param_4);
    }
    func_0x000000da(0,param_4,iVar1);
    param_5[6] = param_5[6] + param_4;
    param_5[9] = param_5[9] + param_4;
    uVar3 = param_5[9];
    param_5[8] = uVar3;
    param_5[10] = uVar3;
    func_0x0000ffff(0,*param_5);
  }
  else {
    param_4 = 0;
  }
  return param_4;
}

