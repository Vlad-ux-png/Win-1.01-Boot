// Function: FUN_1000_50a4

int __stdcall16far
FUN_1000_50a4(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  int local_e;
  int local_c;
  undefined1 local_a [6];
  
  local_c = 0;
  if ((*(int *)0x16e != 0) && (-1 < *(int *)0x136c)) {
    local_e = 0;
    local_c = func_0x00003d82(0x1000,param_1,param_2,param_3,*(undefined2 *)0x136c);
    if (local_c != param_1) {
      if (local_c < 0) {
        local_c = -local_c;
      }
      uVar1 = *(undefined2 *)0x136c;
      local_e = func_0x00004675(0,local_a);
      if (local_e == 0x100) {
        func_0x00004667(0,*(undefined2 *)0x136c,param_4);
        local_e = 0;
      }
      else {
        *(char *)0x179 = *(char *)0x258 + '1';
        FUN_1000_3ced(0x176,0x15,param_4,uVar1);
      }
    }
    if (*(int *)0x248 != 0) {
      FUN_1000_507e(local_c,param_2,param_3,param_4);
    }
    if (local_e != 0) {
      local_c = -1;
    }
  }
  return local_c;
}

