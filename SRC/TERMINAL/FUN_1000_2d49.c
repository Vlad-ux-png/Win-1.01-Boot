// Function: FUN_1000_2d49

void FUN_1000_2d49(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_24 [4];
  int local_1c;
  undefined2 local_1a;
  int local_4;
  
  if (param_1 != *(int *)0xea8) {
    *(int *)0xea8 = param_1;
    uVar4 = FUN_1000_28f3();
    func_0x0000065b(0x1000,local_24);
    func_0x000006cf(0,uVar4,*(undefined2 *)0x1530);
    *(int *)0xea6 = local_24[0] + local_1c;
    *(undefined2 *)0xea4 = local_1a;
    iVar1 = *(int *)0x138c;
    iVar2 = *(int *)0x1388;
    iVar3 = *(int *)0xea6;
    local_4 = (*(int *)0x138a - *(int *)0x1386) / *(int *)0xea4;
    FUN_1000_33af(*(undefined2 *)0xea6,*(int *)0xea4,5);
    FUN_1000_2dda((iVar1 - iVar2) / iVar3,local_4);
    func_0x00002392(0,1,0x1386);
  }
  return;
}

