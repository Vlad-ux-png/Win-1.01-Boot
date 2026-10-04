// Function: FUN_1000_4f2a

void __cdecl16near FUN_1000_4f2a(undefined2 param_1,int param_2,int param_3,char param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  
  *(char *)0x179 = param_4 + '1';
  if (param_2 == 0) {
    if (param_3 == -0xc) {
      uVar1 = 0x17;
      if (*(int *)0x244 == 0) {
        uVar2 = 0x21;
      }
      else {
        uVar2 = 0x22;
      }
    }
    else if (param_3 == -4) {
      uVar1 = 10;
      uVar2 = 0x1284;
    }
    else {
      if (param_3 == -2) {
        uVar1 = 0x1c;
      }
      else {
        uVar1 = 0x13;
      }
      uVar2 = 0x176;
    }
    FUN_1000_3ced(uVar2,uVar1,param_1,unaff_BP);
  }
  return;
}

