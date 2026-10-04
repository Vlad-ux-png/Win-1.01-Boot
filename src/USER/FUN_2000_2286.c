// Function: FUN_2000_2286

int * FUN_2000_2286(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined2 unaff_DS;
  int *piVar2;
  undefined1 local_16 [8];
  int local_e;
  int local_a;
  int *local_8;
  int local_6;
  int local_4;
  
  func_0x00000a66(0x1000,param_3 + 0xf);
  if ((param_1 != 0) || (param_2 != 0)) {
    local_6 = (char)param_3[0x1c] * 0xe + *(int *)0x4dc;
    param_3[4] = (param_3[0x12] - param_3[0x10]) + param_2 + param_1;
    if (param_1 == 0) {
      param_3[0x10] = param_3[0x10] - param_2;
      piVar1 = (int *)func_0x000003e2(0,param_3,local_6);
      local_a = param_3[0x10] - piVar1[0x10];
      piVar2 = param_3;
      if (*(int *)&SUB_0000_0464 < local_a) {
        local_4 = piVar1[0x10];
        local_e = local_a + *(int *)0x480;
        local_8 = piVar1;
      }
      else {
        local_4 = *(int *)0x514;
        local_e = (param_3[0x10] - local_4) + *(int *)0x480;
        piVar1 = (int *)*(int *)(local_6 + 0xc);
        local_8 = piVar1;
      }
    }
    else {
      param_3[0x12] = param_3[0x12] + param_1;
      local_4 = param_3[0x12] - *(int *)0x480;
      piVar1 = (int *)*param_3;
      local_a = piVar1[0x12] - param_3[0x12];
      if (*(int *)&SUB_0000_0464 < local_a) {
        local_e = local_a + *(int *)0x480;
        piVar2 = (int *)*piVar1;
        local_8 = piVar2;
      }
      else {
        local_e = *(int *)0x518 - local_4;
        local_8 = (int *)0x0;
        piVar2 = local_8;
      }
    }
    FUN_2000_19d5(local_6,local_e,local_4,piVar2,piVar1);
  }
  func_0x0000089c(0,param_3 + 0xf);
  param_3[0xc] = param_3[0x10];
  param_3[0xe] = param_3[0x12];
  func_0x00000865(0,local_16);
  return local_8;
}

