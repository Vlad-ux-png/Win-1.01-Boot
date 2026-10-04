// Function: FUN_1000_ab3b

void FUN_1000_ab3b(int param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 unaff_DS;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined1 local_c [8];
  int local_4;
  
  local_4 = func_0x0000000c(0x1000,param_3);
  if ((*(int *)(local_4 + 8) == 0) || (*(int *)(local_4 + 6) == 0)) {
    func_0x0000ffff(0,0,0,0,0,param_3);
  }
  if ((*(byte *)(param_4 + 0x33) & 0x20) != 0) {
    param_1 = *(int *)(param_4 + 0x20) - *(int *)(local_4 + 6);
  }
  if (*(int *)0x510 < *(int *)(local_4 + 8) + param_2) {
    param_2 = *(int *)0x510 - *(int *)(local_4 + 8);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  func_0x00000497(0,*(int *)(local_4 + 6) + param_1,*(int *)(local_4 + 8) + param_2,param_1,param_2,
                  &local_14);
  func_0x000001e9(0,param_3);
  func_0x000001b7(0,*(undefined2 *)0x50e,*(undefined2 *)0x510,0,0,local_c);
  func_0x0000ffff(0,local_c);
  func_0x0000ffff(0,0,0,*(undefined2 *)0x3a0,0,0,(local_e - local_12) + *(int *)0x480,
                  (local_10 - local_14) + *(int *)0x47e * 2,local_12,local_14,0,0x8088,0,0,0x8000,0)
  ;
  return;
}

