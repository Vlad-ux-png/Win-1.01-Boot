// Function: FUN_2000_d180

int FUN_2000_d180(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_e;
  undefined1 local_a;
  undefined1 local_9;
  char local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  int local_4;
  
  uVar1 = FUN_2000_d329();
  iVar2 = FUN_2000_d30b(0);
  local_a = 0x5b;
  local_9 = 0x2d;
  local_8 = ' ';
  local_7 = 0x2d;
  local_6 = 0x5d;
  local_5 = 0;
  uVar5 = 0x1000;
  for (local_e = 0; local_e < iVar2; local_e = local_e + 1) {
    FUN_2000_d30b(local_e);
    iVar3 = FUN_2000_d329();
    uVar4 = uVar5;
    if (iVar3 == local_e) {
      uVar4 = 0;
      iVar3 = func_0x0000ffff(uVar5,local_e,1);
      if (iVar3 != 0) {
        local_8 = (char)local_e + 'A';
        uVar4 = 0;
        local_4 = func_0x0000ffff(0,&local_a);
        if (local_4 < 0) break;
      }
    }
    uVar5 = uVar4;
  }
  FUN_2000_d30b(uVar1);
  return local_4;
}

