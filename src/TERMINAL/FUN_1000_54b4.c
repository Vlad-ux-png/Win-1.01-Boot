// Function: FUN_1000_54b4

void FUN_1000_54b4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  long lVar4;
  int local_4;
  
  if (param_1 == 0) {
    local_4 = 0;
    while ((local_4 < 0x19 && (*(int *)0x428 != 0 || *(int *)0x42a != 0))) {
      uVar3 = (undefined2)((ulong)*(undefined4 *)0x428 >> 0x10);
      iVar2 = (int)*(undefined4 *)0x428;
      FUN_1000_5ce7(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
      local_4 = local_4 + 1;
    }
  }
  else {
    for (local_4 = 0; local_4 < 0x19; local_4 = local_4 + 1) {
      lVar4 = FUN_1000_5de9();
      uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
      if (lVar4 == 0) {
        return;
      }
      uVar1 = FUN_1000_19a1(0x50,(int)lVar4 + 0xc,uVar3,0,local_4);
      *(undefined2 *)((int)lVar4 + 10) = uVar1;
      FUN_1000_5d7b(lVar4);
    }
  }
  return;
}

