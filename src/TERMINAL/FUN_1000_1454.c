// Function: FUN_1000_1454

void FUN_1000_1454(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_e;
  undefined2 local_c;
  
  uVar3 = param_1;
  iVar2 = func_0x00000087(0x1000,param_1);
  if (iVar2 == 0) {
    FUN_1000_3ced(0x1356,10,param_1,uVar3);
  }
  else {
    if (*(int *)0x168 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 8;
    }
    func_0x00000381(0,uVar3,10,iVar2);
    bVar1 = true;
    iVar4 = func_0x0000ffff(0,param_1);
    if (iVar4 != 0) {
      local_e = 0;
      do {
        local_e = func_0x0000ffff(0,local_e);
        if (local_e == 0) goto LAB_1000_14b4;
      } while (local_e != 1);
      bVar1 = false;
LAB_1000_14b4:
      func_0x0000ffff(0,param_1);
    }
    local_c = 1;
    if (((*(int *)0x16e != 0) && (*(int *)0x168 == 0)) && (!bVar1)) {
      local_c = 0;
    }
    func_0x00000969(0,local_c,6,iVar2);
    func_0x00000997(0,0,7,iVar2);
    local_c = 1;
    if ((*(int *)0x16e == 0) || (*(int *)0x168 != 0)) {
      iVar4 = FUN_1000_577b();
      if (iVar4 == 0) {
        local_c = 0;
      }
    }
    func_0x000000a2(0,local_c,5,iVar2);
  }
  return;
}

