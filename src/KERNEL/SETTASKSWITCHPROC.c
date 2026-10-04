// Function: SETTASKSWITCHPROC

undefined4 __stdcall16far SETTASKSWITCHPROC(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  bVar5 = 0x18;
  FUN_1000_367e();
  uVar4 = *(undefined2 *)((int)register0x00000010 + 6);
  LOCK();
  puVar1 = (undefined2 *)(uint)bVar5;
  uVar2 = *puVar1;
  *puVar1 = *(undefined2 *)((int)register0x00000010 + 4);
  UNLOCK();
  LOCK();
  puVar1 = (undefined2 *)(uint)bVar5 + 1;
  uVar3 = *puVar1;
  *puVar1 = uVar4;
  UNLOCK();
  return CONCAT22(uVar3,uVar2);
}

