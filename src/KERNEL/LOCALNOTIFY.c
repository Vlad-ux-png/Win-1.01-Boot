// Function: LOCALNOTIFY

undefined4 __stdcall16far LOCALNOTIFY(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x6;
  LOCK();
  puVar1 = (undefined2 *)(iVar4 + 0x16);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  UNLOCK();
  LOCK();
  puVar1 = (undefined2 *)(iVar4 + 0x18);
  uVar3 = *puVar1;
  *puVar1 = param_2;
  UNLOCK();
  return CONCAT22(uVar3,uVar2);
}

