// Function: FUN_1000_b222

undefined2 FUN_1000_b222(undefined2 param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x40 = 0;
  *(undefined2 *)0x38 = 1;
  *(undefined2 *)0x3c = 0;
  uVar1 = 0;
  if (*(int *)0x35a == 0) {
    if (param_2 != 0) {
      uVar1 = FUN_1000_b293(param_1,param_2,param_3);
    }
  }
  else {
    FUN_1000_b7e6();
    uVar1 = FUN_1000_b293(1,*(undefined2 *)0x30,*(undefined2 *)0x35a);
    func_0x0000ffff(0x1000,*(undefined2 *)0x35a);
    *(undefined2 *)0x30 = 0;
    *(undefined2 *)0x35a = 0;
    FUN_1000_b293(param_1,param_2,param_3);
  }
  return uVar1;
}

