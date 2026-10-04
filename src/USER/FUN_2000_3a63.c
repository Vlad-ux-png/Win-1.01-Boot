// Function: FUN_2000_3a63

void FUN_2000_3a63(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x51c;
  iVar2 = *(int *)0x51c * 0xe + *(int *)0x4dc;
  uVar3 = 0x1000;
  while (param_1 < iVar1) {
    func_0x0000ffff(uVar3,0xe,iVar2);
    FUN_2000_3a41(1,iVar2);
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + -0xe;
    uVar3 = 0;
  }
  *(int *)0x51c = *(int *)0x51c + 1;
  func_0x0000ffff(uVar3,0,0xe,param_1 * 0xe + *(int *)0x4dc);
  func_0x00001f69(0,0x512);
  return;
}

