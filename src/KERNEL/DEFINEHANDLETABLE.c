// Function: DEFINEHANDLETABLE

undefined2 __stdcall16far DEFINEHANDLETABLE(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_ES;
  undefined4 uVar5;
  
  uVar5 = FUN_1000_09e1();
  uVar2 = 0;
  if (((int)uVar5 != 0) && (uVar2 = 0, (*(byte *)0x5 & 4) != 0)) {
    if (*(int *)0xc == 0) {
      LOCK();
      UNLOCK();
      uVar2 = (int)((ulong)uVar5 >> 0x10);
      *(undefined2 *)0xc = DAT_1000_000e;
      DAT_1000_000e = uVar2;
      puVar4 = (undefined2 *)(param_1 + 0x12);
      for (iVar3 = *(int *)(param_1 + 0x10); iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = 0;
      }
      uVar2 = 1;
    }
    *(int *)0xe = param_1;
  }
  return uVar2;
}

