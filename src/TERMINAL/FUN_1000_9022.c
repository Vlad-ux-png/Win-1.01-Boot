// Function: FUN_1000_9022

undefined2 FUN_1000_9022(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  iVar1 = func_0x0000ffff(0x1000,*(undefined2 *)0x418,0xfce);
  if (iVar1 < 0) {
    uVar3 = 0xfffa;
  }
  else {
    func_0x0000ffff(0,2,0,0,iVar1);
    iVar2 = func_0x0000ffff(0,*(undefined2 *)0x416,0x104e);
    if (iVar2 != *(int *)0x416) {
      uVar3 = 0xfffe;
    }
    func_0x0000ffff(0,iVar1);
  }
  *(undefined2 *)0x416 = 0;
  return uVar3;
}

