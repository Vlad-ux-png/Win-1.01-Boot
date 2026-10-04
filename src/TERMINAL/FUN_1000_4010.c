// Function: FUN_1000_4010

void FUN_1000_4010(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  uVar2 = 0x1000;
  if (*(int *)0x16c != 0) {
    local_6 = 0;
    if (*(int *)0x14d4 <= *(int *)0x1502) {
      uVar2 = 0;
      local_6 = func_0x0000ffff(0x1000,0,0,0,0,0,1,*(undefined2 *)0x1532);
      *(undefined2 *)0x1502 = 0;
    }
    if (local_6 < 0) {
      func_0x0000ffff(uVar2,*(undefined2 *)0x1532);
      *(undefined2 *)0x16c = 0;
      iVar1 = func_0x0000385b(0,*(undefined2 *)0x1530);
      if (iVar1 != 0) {
        func_0x000008f9(0,0,8,iVar1);
      }
      FUN_1000_3c36(local_6,*(undefined2 *)0x1530);
      FUN_1000_410a(0x12d6);
    }
    else {
      if (0 < param_1) {
        func_0x00002645(uVar2,param_1,param_2);
      }
      *(int *)0x1502 = *(int *)0x1502 + *(int *)0x1384;
    }
  }
  return;
}

