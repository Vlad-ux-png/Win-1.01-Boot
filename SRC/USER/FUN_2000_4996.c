// Function: FUN_2000_4996

undefined2 FUN_2000_4996(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 0x32) & 2) == 0) && (param_2 != param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

