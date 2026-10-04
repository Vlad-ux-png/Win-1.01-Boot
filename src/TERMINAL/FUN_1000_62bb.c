// Function: FUN_1000_62bb

void FUN_1000_62bb(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  if ((*(int *)0x125c != 0) && (*(int *)0x440 != 0)) {
    uVar1 = FUN_1000_367e(param_2,param_3);
    FUN_1000_5b0f(uVar1);
    *(undefined2 *)0x440 = 0;
  }
  return;
}

