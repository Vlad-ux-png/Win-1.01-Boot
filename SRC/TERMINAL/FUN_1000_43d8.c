// Function: FUN_1000_43d8

int __cdecl16near FUN_1000_43d8(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_82 [4];
  undefined2 local_7e;
  undefined2 local_7c;
  int local_2a;
  int local_26 [4];
  int local_1e;
  undefined2 local_1c;
  int local_4;
  
  local_4 = func_0x000008d6(0x1000,param_1);
  if (param_2 == 0) {
    if (*(int *)0x16c != 0) {
      puVar2 = (undefined2 *)FUN_1000_37e3(local_82);
      local_7e = *puVar2;
      local_7c = puVar2[1];
      FUN_1000_3922(0,1,0,local_7c);
    }
    if (*(int *)0x16c != 0) {
      func_0x00003971(0,0,0,0,0,0,1,*(undefined2 *)0x1532);
      *(undefined2 *)0x1502 = 0;
      func_0x000034b6(0,0,0,0,0,0,0xb,*(undefined2 *)0x1532);
      func_0x000034f5(0,*(undefined2 *)0x1532);
    }
  }
  else {
    iVar1 = FUN_1000_4342();
    *(int *)0x1532 = iVar1;
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      local_2a = func_0x000038c5(0,0,0,0x3dc);
      if (-1 < local_2a) {
        func_0x00003541(0,0x12d6);
        local_2a = func_0x00003957(0,0,0,0x12d6);
      }
      if (-1 < local_2a) {
        uVar3 = func_0x0000ffff(0,10,*(undefined2 *)0x1532);
        *(undefined2 *)0x14d4 = uVar3;
        func_0x000024ce(0,local_26);
        *(int *)0x1384 = local_26[0] + local_1e;
        *(undefined2 *)0x1382 = local_1c;
        goto LAB_1000_4506;
      }
      func_0x0000397a(0,*(undefined2 *)0x1532);
      iVar1 = local_2a;
    }
    FUN_1000_3c36(iVar1,param_1);
    param_2 = 0;
  }
LAB_1000_4506:
  if (local_4 != 0) {
    uVar3 = 8;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    func_0x000039dd(0,uVar3,8,local_4);
  }
  return param_2;
}

