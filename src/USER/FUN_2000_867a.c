// Function: FUN_2000_867a

undefined2 FUN_2000_867a(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  iVar1 = param_1[9] - param_1[8];
  iVar2 = func_0x000001b0(0x1000,param_1[1]);
  if (iVar2 != 0) {
    func_0x0000ffff(0);
    iVar2 = func_0x0000ffff(0,iVar1 + 1,iVar1 + 1 >> 0xf,0x42);
    if (iVar2 != 0) {
      uVar4 = func_0x000001dd(0,iVar2);
      iVar3 = func_0x0000ffff(0,*param_1);
      func_0x0000ffff(0,iVar1,uVar4,iVar3 + param_1[8]);
      *(undefined1 *)(iVar1 + (int)uVar4) = 0;
      func_0x0000ffff(0,*param_1);
      func_0x00000201(0,iVar2);
      func_0x0000ffff(0,iVar2,1);
      func_0x000001cd(0);
      return 1;
    }
    func_0x000000f2(0);
  }
  return 0;
}

