// Function: FUN_1000_1262

void FUN_1000_1262(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = 0x1000;
  if (param_1 != 0) {
    if (*(int *)0x1518 != 0) {
      uVar1 = 0;
      func_0x000006ff(0x1000,*(undefined2 *)0x1518);
    }
    uVar2 = uVar1;
    if (*(int *)0x138e != 0) {
      uVar2 = 0;
      func_0x0000ffff(uVar1,*(undefined2 *)0x138e);
    }
    func_0x0000ffff(uVar2,param_1);
  }
  return;
}

