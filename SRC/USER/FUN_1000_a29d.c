// Function: FUN_1000_a29d

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_a29d(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  code *in_stack_00000000;
  
  func_0x000063a2(0x1000);
  uVar1 = ram0x0001ffff;
  puVar2 = (undefined1 *)((ram0x0001ffff & 0xff) * 2);
  if ((puVar2 < &stack0xfffe) && (uVar3 = -((int)puVar2 - (int)&stack0xfffe), *(uint *)0xa <= uVar3)
     ) {
    if (uVar3 < *(uint *)&SUB_0000_000c) {
      *(uint *)&SUB_0000_000c = uVar3;
    }
    *(undefined2 *)(uVar3 - 2) = unaff_SI;
    *(undefined2 *)(uVar3 - 4) = unaff_DI;
    *(int *)(uVar3 - 6) = (uVar1 >> 8) << 1;
    *(undefined2 *)(uVar3 - 8) = 0xa2e0;
    entry();
                    /* WARNING: Could not recover jumptable at 0x0001a2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_a29d();
  return;
}

