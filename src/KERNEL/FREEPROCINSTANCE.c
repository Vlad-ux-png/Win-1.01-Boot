// Function: FREEPROCINSTANCE

undefined2 __stdcall16far FREEPROCINSTANCE(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = DAT_1000_000c;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == param_2) break;
    iVar2 = *(int *)0x0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  LOCK();
  uVar1 = *(undefined2 *)0x6;
  *(undefined2 *)0x6 = param_1 + 3;
  UNLOCK();
  param_1[3] = uVar1;
  return 0xffff;
}

