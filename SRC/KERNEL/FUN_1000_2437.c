// Function: FUN_1000_2437

undefined2 FUN_1000_2437(undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = 0;
  if (param_4 != 0) {
    uVar4 = FUN_1000_08b9(param_2);
    *(undefined2 *)0x10 = uVar4;
    iVar1 = FUN_1000_09e1(param_1._2_2_);
    if (iVar1 == 0) {
      *(undefined2 *)0x7e = 0;
      FUN_1000_31ec(param_4);
      GLOBALFREE(param_4);
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_1000_09e1(uVar4);
      uVar5 = (undefined2)((ulong)*(undefined4 *)0x2 >> 0x10);
      iVar3 = (int)*(undefined4 *)0x2;
      *(undefined2 *)(iVar3 + 10) = uVar4;
      *(undefined2 *)(iVar3 + 0xe) = uVar2;
      *(undefined2 *)(iVar3 + 0xc) = param_3;
      *(undefined2 *)(iVar3 + 2) = *(undefined2 *)0x12;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)0x10;
      *(int *)(iVar3 + 0x14) = iVar1;
      *(undefined2 *)(iVar3 + 0x12) = (undefined2)param_1;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (DAT_1000_008e == '\0') {
        FUN_1000_23d8(param_2);
        YIELD();
      }
    }
  }
  return uVar4;
}

