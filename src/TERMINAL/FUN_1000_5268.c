// Function: FUN_1000_5268

bool FUN_1000_5268(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 local_a [8];
  
  bVar5 = false;
  uVar3 = param_2;
  uVar1 = func_0x000039aa(0x1000,param_2);
  if (param_1 == 0) {
    iVar4 = func_0x00004716(0,6,7);
    if (iVar4 != 0) {
      if ((*(int *)0x244 != 0) && (*(char *)0x266 != '\0')) {
        FUN_1000_4ac4(0x240);
      }
      FUN_1000_4fc7(*(undefined2 *)0x136c);
      goto LAB_1000_5348;
    }
  }
  else {
    if ((*(int *)0x244 != 0) && (*(char *)0x266 == '\0')) {
      iVar4 = func_0x0000476c(0,8,9);
      bVar5 = iVar4 == 0;
    }
    if (bVar5) goto LAB_1000_5348;
    iVar4 = FUN_1000_4f8f(0x240);
    *(int *)0x136c = iVar4;
    if (iVar4 < 0) {
      FUN_1000_4f2a(param_2,0,iVar4,*(undefined2 *)0x258);
    }
    else {
      if ((*(int *)0x244 == 0) || (*(char *)0x266 == '\0')) goto LAB_1000_5348;
      do {
        iVar4 = func_0x00000bf4(0,9,10);
        if (iVar4 != 7) break;
        iVar2 = FUN_1000_3ced(0,0x10,param_2,uVar3);
      } while (iVar2 != 2);
      if (iVar4 < 0) {
LAB_1000_532a:
        FUN_1000_3ced(0,0x11,param_2,uVar3);
      }
      else {
        if (iVar4 < 2) goto LAB_1000_5348;
        if ((iVar4 < 6) || (7 < iVar4)) goto LAB_1000_532a;
      }
      FUN_1000_4fc7(*(undefined2 *)0x136c);
    }
  }
  bVar5 = true;
LAB_1000_5348:
  if (!bVar5) {
    func_0x000047e3(0,param_1,1,uVar1);
    func_0x0000095a(0,param_1,2,uVar1);
    if ((param_1 == 0) || (*(int *)0x168 != 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    func_0x00003753(0,uVar3,*(undefined2 *)0x1530);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000024c1(0,local_a);
      uVar3 = func_0x000024a7(0,*(undefined2 *)0x1530);
      FUN_1000_38c8(*(undefined2 *)0x1530);
      func_0x00003014(0,uVar3,*(undefined2 *)0x1530);
      uVar3 = 8;
    }
    func_0x00003995(0,uVar3,7,uVar1);
  }
  return !bVar5;
}

