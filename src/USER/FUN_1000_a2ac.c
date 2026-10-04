// Function: FUN_1000_a2ac

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_a2ac(code *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  uint *in_stack_00000000;
  
  uVar1 = *in_stack_00000000;
  puVar2 = (undefined1 *)((uVar1 & 0xff) * 2);
  if ((puVar2 < &stack0x0000) && (uVar3 = -((int)puVar2 - (int)&stack0x0000), *(uint *)0xa <= uVar3)
     ) {
    if (uVar3 < *(uint *)&SUB_0000_000c) {
      *(uint *)&SUB_0000_000c = uVar3;
    }
    *(undefined2 *)(uVar3 - 2) = unaff_SI;
    *(undefined2 *)(uVar3 - 4) = unaff_DI;
    *(int *)(uVar3 - 6) = (uVar1 >> 8) << 1;
    *(undefined2 *)(uVar3 - 8) = 0xa2e0;
    (*(code *)(in_stack_00000000 + 1))();
                    /* WARNING: Could not recover jumptable at 0x0001a2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1)();
    return;
  }
  FUN_1000_a29d();
  return;
}

