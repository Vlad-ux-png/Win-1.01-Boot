// Function: FUN_2000_bd5f

void FUN_2000_bd5f(int param_1)

{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  undefined4 in_stack_0000fffa;
  
  if ((*(int *)(param_1 + 2) != 0) &&
     (iVar1 = FUN_2000_be1c(param_1,unaff_SI,in_stack_0000fffa,unaff_BP), iVar1 != 0)) {
    if (iVar1 == 1) {
      func_0x0000ffff();
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          return;
        }
        func_0x0000ffff();
        func_0x0000ffff();
        func_0x0000ffff();
      }
      func_0x0000ffff();
    }
  }
  return;
}

