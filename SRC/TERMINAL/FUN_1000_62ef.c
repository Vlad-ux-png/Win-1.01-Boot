// Function: FUN_1000_62ef

void FUN_1000_62ef(uint param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  if ((*(int *)0x125c != 0) && (*(int *)0x440 != 0)) {
    if ((param_1 & 1) == 0) {
      FUN_1000_62bb(param_1,param_2,param_3);
    }
    else {
      uVar1 = FUN_1000_367e(param_2,param_3);
      FUN_1000_5b0f(uVar1);
    }
  }
  return;
}

