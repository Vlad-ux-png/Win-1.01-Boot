// Function: FUN_1000_3c36

void FUN_1000_3c36(uint param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_BP;
  undefined2 uVar2;
  
  if ((param_1 & 0x4000) != 0) {
    if (param_1 == 0xfffb) {
      uVar2 = 10;
      uVar1 = 0x14d6;
    }
    else if (param_1 == 0xfffc) {
      uVar2 = 0xf;
      uVar1 = 0x27;
    }
    else {
      if (param_1 == 0xfffd) {
        return;
      }
      uVar2 = 0x12;
      uVar1 = 0;
    }
    FUN_1000_3ced(uVar1,uVar2,param_2,unaff_BP);
  }
  return;
}

