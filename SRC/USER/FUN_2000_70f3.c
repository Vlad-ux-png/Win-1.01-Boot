// Function: FUN_2000_70f3

void __stdcall16far
FUN_2000_70f3(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,undefined2 *param_6
             )

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_e;
  int local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  uVar1 = func_0x000003da(0x1000,1,param_5,param_6[1]);
  local_6 = func_0x00000c69(0,uVar1,param_5);
  uVar1 = func_0x000009a5(0,*param_6);
  do {
    if (param_3 <= param_4) {
LAB_2000_71b5:
      func_0x000009cf(0,*param_6);
      FUN_2000_79df(param_6);
      func_0x0000ffff(0,local_6,param_5);
      return;
    }
    if ((int)param_6[0x10] <= param_4) {
      local_e = param_6[0xb];
      uStack_a = param_6[0xd];
      uStack_8 = param_6[0xe];
      local_c = param_6[0xc] + param_6[0x10] * param_6[7];
      if (local_e < 0) {
        local_e = 0;
      }
      func_0x0000ffff(0,&local_e);
      goto LAB_2000_71b5;
    }
    if (param_4 < (int)param_6[0x10]) {
      FUN_2000_7c04(*(int *)(param_4 * 2 + param_6[0x1c]) + param_2,param_4,param_6,uVar1,param_5);
    }
    if (param_1 != 0) {
      param_2 = 0;
    }
    param_4 = param_4 + 1;
  } while( true );
}

