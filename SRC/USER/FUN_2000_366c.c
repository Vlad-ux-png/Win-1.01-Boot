// Function: FUN_2000_366c

undefined2 FUN_2000_366c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0;
  if ((param_2 == 0x202) ||
     ((param_2 == 0x100 && ((param_1 == 0xd || (local_6 = param_1, param_1 == 0x1b)))))) {
    func_0x000013ff(0x1000,*(undefined2 *)0x608);
    func_0x0000ffff(0);
    func_0x000017e1(0,0,0);
    func_0x0000ffff(0);
    func_0x0000ffff(0,0);
    if (local_6 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

