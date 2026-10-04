// Function: FUN_1000_793e

undefined2 * __stdcall16far FUN_1000_793e(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  bool bVar8;
  bool bVar9;
  undefined2 *in_stack_0000000c;
  undefined2 in_stack_00000010;
  
  puVar3 = (undefined2 *)in_stack_0000000c;
  uVar7 = (undefined2)((ulong)in_stack_0000000c >> 0x10);
  if ((char)*(undefined2 *)0x28 == '\0') {
    bVar8 = false;
    if (*(int *)0x6 == 0) {
      return (undefined2 *)0x0;
    }
LAB_1000_7980:
    puVar6 = (undefined2 *)*(undefined2 *)0x8;
    do {
      FUN_1000_4179();
      if ((!bVar8) && (puVar5 = puVar6, FUN_1000_415b(), !bVar8)) {
        for (iVar4 = *(int *)0x4; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar3;
          puVar3 = (undefined2 *)((int)puVar3 + 1);
          puVar1 = puVar6;
          puVar6 = (undefined2 *)((int)puVar6 + 1);
          *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
        }
        *(undefined2 *)0x10 = puVar6[-4];
        *(undefined2 *)0x12 = puVar6[-3];
        *(undefined2 *)0x14 = puVar6[-2];
        *(undefined2 *)0x16 = puVar6[-1];
        *(undefined2 *)0x18 = puVar5;
        if (param_1 == 0) {
          *(undefined2 *)0x18 = 1;
          return puVar5;
        }
        FUN_1000_79df();
        return puVar5;
      }
      bVar9 = true;
      FUN_1000_7a27();
      bVar8 = false;
    } while (!bVar9);
    puVar3 = (undefined2 *)0x0;
  }
  else {
    if ((char)*(undefined2 *)0x28 == '\x01') {
      bVar8 = *(int *)0x6 == 0;
      if (!bVar8) goto LAB_1000_7980;
      *(int *)0x28 = *(int *)0x28 + 1;
    }
    puVar3[1] = 0x12;
    *in_stack_0000000c = 0;
    puVar3[2] = *(undefined2 *)0x2a;
  }
  return puVar3;
}

