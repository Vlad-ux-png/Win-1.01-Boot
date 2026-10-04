// Function: FUN_2000_27df

void FUN_2000_27df(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_a [8];
  
  uVar1 = 0x1000;
  for (; param_3 != param_4; param_4 = (undefined2 *)*param_4) {
    func_0x0000096c(uVar1,param_4 + 0xf);
    func_0x00000fc2(0,param_1,param_2,local_a);
    uVar1 = 0;
    func_0x00000a4b(0,local_a);
    if (param_1 != 0) {
      FUN_2000_2844(param_4 + 0xb,param_4);
    }
    if (param_2 != 0) {
      FUN_2000_2879(param_4 + 0xb,(int)*(char *)(param_4 + 0x1c));
    }
  }
  return;
}

