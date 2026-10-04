// Function: FUN_2000_220f

void FUN_2000_220f(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x35c == 0) {
    iVar1 = func_0x0000061b(0x1000);
    *(int *)0x518 = *(int *)0x518 - iVar1;
    *(undefined2 *)0x1be = 0;
    if (*(int *)0x50 == 0) {
      func_0x00000582(0,0x35e);
    }
    else {
      FUN_2000_198d();
    }
    func_0x0000ffff(0,param_2);
    func_0x00000688(0);
    if (*(int *)0x51c == 0) {
      FUN_2000_2096(0x512);
    }
    func_0x000006b1(0,1,param_2,3);
  }
  else {
    func_0x0000ffff(0x1000,0,param_2);
    func_0x0000092d(0);
  }
  return;
}

