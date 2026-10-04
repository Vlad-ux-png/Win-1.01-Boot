// Function: FUN_1000_0ebd

uint __cdecl16near FUN_1000_0ebd(undefined2 param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 7;
    param_2 = func_0x0000ffff(0x1000,7,8);
  }
  else {
    param_2 = (uint)(param_2 == 0);
    uVar2 = 0xeed;
    func_0x0000ffff(0x1000);
  }
  uVar2 = func_0x0000ffff(0,param_1,uVar2);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
  }
  func_0x0000ffff(0,uVar1,9,uVar2);
  return param_2;
}

