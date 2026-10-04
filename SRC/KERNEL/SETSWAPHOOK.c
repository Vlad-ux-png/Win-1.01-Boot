// Function: SETSWAPHOOK

undefined4 __stdcall16far SETSWAPHOOK(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_1000_0006;
  uVar1 = DAT_1000_0004;
  LOCK();
  DAT_1000_0004 = param_1;
  UNLOCK();
  LOCK();
  DAT_1000_0006 = param_2;
  UNLOCK();
  return CONCAT22(uVar2,uVar1);
}

