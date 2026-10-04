// Function: FUN_1000_be7a

void __stdcall16far
FUN_1000_be7a(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined2 unaff_DS;
  undefined2 local_22 [15];
  
  if (param_4 == 0xf) {
    func_0x0000ffff(0x1000,local_22);
    func_0x0000004d(0,*(undefined2 *)0x3c4,local_22[0]);
    func_0x0000006f(0,0x21,0xf0,*(int *)(param_5 + 0x2c) - *(int *)(param_5 + 0x28),
                    *(int *)(param_5 + 0x2a) - *(int *)(param_5 + 0x26),0,0,local_22[0]);
    FUN_1000_a750(*(undefined2 *)0x30,local_22[0],param_5);
    func_0x0000ffff(0);
  }
  else {
    func_0x0000ffff(0x1000,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

