// Function: FUN_1000_0c7b

void __cdecl16near FUN_1000_0c7b(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  long lVar3;
  undefined2 uVar4;
  
  if (param_2 == 7) {
    iVar2 = FUN_1000_5268(*(int *)0x16e == 0,param_1);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = *(int *)0x16e;
code_r0x00010d19:
    *(uint *)0x16e = (uint)(iVar2 == 0);
  }
  else {
    if (param_2 < 8) {
      if (param_2 == 1) {
        if (*(int *)0x16a != 0) {
          uVar1 = FUN_1000_0ebd(param_1,*(undefined2 *)0x16a);
          *(undefined2 *)0x16a = uVar1;
        }
        FUN_1000_45a7(0x17c,1);
        if ((*(int *)0x16e != 0) && (iVar2 = FUN_1000_5268(0,param_1), iVar2 != 0)) {
          *(undefined2 *)0x16e = 0;
          *(undefined2 *)0x168 = 0;
          func_0x0000ffff(0x1000,1,param_1);
        }
        FUN_1000_410a(0x1298);
        *(undefined1 *)0x12d6 = 0;
        FUN_1000_66c8(0xc4,0x17c,unaff_DS,0x240,unaff_DS);
        FUN_1000_4da7(1,0x240,param_1);
        return;
      }
      if (param_2 == 2) {
        uVar1 = 0;
        lVar3 = func_0x00000347(0x1000,0,1);
        if (lVar3 == 0) {
          return;
        }
        iVar2 = FUN_1000_3ced(0,0x18,param_1,uVar1);
        if (iVar2 != 6) {
          return;
        }
        iVar2 = FUN_1000_5268(*(int *)0x16e == 0,param_1);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = *(int *)0x16e;
        goto code_r0x00010d19;
      }
      if (param_2 == 3) {
        if (*(char *)0x12d6 != '\0') {
          FUN_1000_4cd8(0x12d6,param_1);
          return;
        }
      }
      else if (param_2 != 4) {
        if (param_2 == 5) {
          func_0x0000ffff(0x1000,param_1);
          return;
        }
        if (param_2 != 6) {
          return;
        }
        func_0x0000ffff(0x1000,param_1);
        return;
      }
      uVar4 = 2;
      uVar1 = 1;
    }
    else {
      if (param_2 == 0xb) {
        FUN_1000_0c32(param_1);
        return;
      }
      if (param_2 < 0xc) {
        if (param_2 == 8) {
          uVar1 = FUN_1000_43d8(param_1,*(int *)0x16c == 0);
          *(undefined2 *)0x16c = uVar1;
        }
        else {
          if (param_2 != 9) {
            if (param_2 != 10) {
              return;
            }
            FUN_1000_42b1(param_1,*(undefined2 *)0x16e);
            return;
          }
          uVar1 = FUN_1000_0ebd(param_1,*(undefined2 *)0x16a);
          *(undefined2 *)0x16a = uVar1;
        }
        FUN_1000_410a(0x12d6);
        return;
      }
      if (param_2 == 0xc) {
        uVar4 = 6;
        uVar1 = 5;
      }
      else if (param_2 == 0xd) {
        uVar4 = 5;
        uVar1 = 4;
      }
      else {
        if (param_2 == 0xe) {
          FUN_1000_523a();
          return;
        }
        if (param_2 != 0x3e9) {
          return;
        }
        uVar4 = 3;
        uVar1 = 2;
      }
    }
    func_0x0000014e(0x1000,uVar1,uVar4);
  }
  return;
}

