// Function: FUN_2000_28cf

void FUN_2000_28cf(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = param_4 * 0xe + *(int *)0x4dc;
  uVar2 = 0x1000;
  while (param_3 != param_4) {
    func_0x0000ffff(uVar2,0,param_1,iVar1);
    FUN_2000_27df(0,param_2,0,*(undefined2 *)(iVar1 + 0xc));
    param_4 = param_4 + 1;
    iVar1 = iVar1 + 0xe;
    uVar2 = 0;
  }
  return;
}

