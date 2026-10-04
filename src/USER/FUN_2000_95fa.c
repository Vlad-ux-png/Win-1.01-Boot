// Function: FUN_2000_95fa

void FUN_2000_95fa(uint param_1,int param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined1 local_a [8];
  
  if (param_1 != 0) {
    param_1 = 4;
  }
  if ((*(byte *)(param_2 + 0x40) & 4) != param_1) {
    if (*(byte *)(param_2 + 0x30) < 2) {
      func_0x000003b7(0x1000,local_a);
      func_0x000003cb(0,1,*(undefined1 *)(param_2 + 0x30),local_a);
    }
    else if (*(byte *)(param_2 + 0x30) != 7) {
      FUN_2000_9664(param_2,param_3);
    }
  }
  return;
}

