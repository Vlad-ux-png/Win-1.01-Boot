// Function: FUN_1000_bdca

void __stdcall16far FUN_1000_bdca(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_e [2];
  int local_c;
  int local_8;
  int local_6;
  
  iVar1 = func_0x0000150b(0x1000,*(undefined2 *)(param_2 + 0x34));
  local_6 = 0;
  if ((*(byte *)(param_2 + 0x32) & 0xc0) != 0) {
    local_6 = *(int *)0x506;
  }
  if ((*(int *)(iVar1 + 6) == 0) || (*(int *)(iVar1 + 8) == 0)) {
    func_0x00000415(0,*(int *)(param_2 + 0x2a) - *(int *)(param_2 + 0x26),*(undefined2 *)0x47e,
                    local_6,param_2,*(undefined2 *)(param_2 + 0x34));
  }
  func_0x00001588(0,local_6 + *(int *)(iVar1 + 6),*(int *)0x47e + *(int *)(iVar1 + 8),local_6,
                  *(int *)0x47e,local_e);
  FUN_1000_be6b();
  local_c = local_8 - *(int *)0x480;
  FUN_1000_be6b();
  FUN_1000_a750(*(undefined2 *)(param_2 + 0x34),param_1,param_2);
  func_0x000015c2(0,*(undefined2 *)(param_2 + 0x34));
  return;
}

