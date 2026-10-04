// Function: FUN_1000_78e9

void FUN_1000_78e9(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined1 *puVar7;
  undefined2 unaff_SS;
  undefined2 in_stack_00000014;
  
  uVar4 = in_stack_00000014;
  puVar3 = (undefined1 *)*(undefined2 *)0xa;
  if ((puVar3 != (undefined1 *)*(undefined2 *)0x8) || (*(int *)0x6 == 0)) {
    puVar6 = &stack0x0002;
    puVar7 = puVar3;
    for (iVar5 = *(int *)0x4; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar6 = puVar3;
    FUN_1000_7a27();
    *(undefined2 *)0xa = puVar6;
    *(int *)0x6 = *(int *)0x6 + 1;
    FUN_1000_7a65(uVar4);
    *(undefined2 *)0x38 = puVar3;
  }
  FUN_1000_7932(unaff_DI,unaff_SI,unaff_BP);
  return;
}

