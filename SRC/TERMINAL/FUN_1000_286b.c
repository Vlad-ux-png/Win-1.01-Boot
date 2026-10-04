// Function: FUN_1000_286b

undefined2 FUN_1000_286b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if ((-1 < param_1) && (param_1 < 0x50)) {
    iVar3 = (param_1 - *(int *)0x34) * *(int *)0xea4;
    iVar1 = *(int *)0x38;
    iVar2 = *(int *)0x34;
    *(int *)0x34 = param_1;
    *(int *)0x38 = (iVar1 - iVar2) + *(int *)0x34;
    *(undefined2 *)0x3c = *(undefined2 *)0x34;
    *(undefined2 *)0x40 = *(undefined2 *)0x38;
    func_0x0000ffff(0x1000,*(undefined2 *)0x1530,iVar3);
    func_0x00001d56(0,*(undefined2 *)0x1530);
    func_0x00001f8e(0,0,0,0,0,0,-iVar3,*(undefined2 *)0x1530);
    func_0x00001f70(0,*(undefined2 *)0x1530);
    func_0x0000ffff(0,*(undefined2 *)0x1530);
  }
  return 0;
}

