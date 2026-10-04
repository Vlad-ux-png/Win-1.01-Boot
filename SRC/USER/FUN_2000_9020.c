// Function: FUN_2000_9020

undefined2 FUN_2000_9020(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = func_0x0000ffff(0x1000,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0000ffff(0,param_1);
    uVar2 = func_0x00000122(0,param_1);
    FUN_2000_9056(uVar2,param_1);
  }
  return uVar2;
}

