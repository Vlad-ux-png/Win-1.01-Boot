// Function: FUN_1000_4cd8

bool __stdcall16far FUN_1000_4cd8(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined2 uVar4;
  undefined1 local_84 [128];
  
  uVar4 = 0x1000;
  iVar1 = func_0x000042b5(0x1000,0x1000,local_84);
  if (iVar1 < 0) {
    FUN_1000_3ced(param_1,0xb,param_2,uVar4);
    bVar3 = true;
  }
  else {
    *(undefined2 *)0x240 = 0;
    uVar4 = FUN_1000_4c2a(0xc4,0x240);
    *(undefined2 *)0x240 = uVar4;
    uVar4 = 0xc4;
    iVar2 = func_0x0000ffff(0,0xc4,0x240);
    bVar3 = iVar2 != 0xc4;
    if (bVar3) {
      FUN_1000_3ced(0x1e,0xf,param_2,uVar4);
    }
    else {
      FUN_1000_4c85(1);
    }
    func_0x00004310(0,iVar1);
  }
  *(uint *)0x164 = (uint)!bVar3;
  return !bVar3;
}

