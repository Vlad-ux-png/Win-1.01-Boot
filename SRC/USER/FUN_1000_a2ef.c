// Function: FUN_1000_a2ef

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_a2ef(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  uint *in_stack_00000000;
  undefined2 in_stack_00000002;
  
  uVar1 = *in_stack_00000000;
  puVar3 = (undefined1 *)((uVar1 & 0xff) * 2);
  if ((puVar3 < &stack0xfffe) && (uVar4 = -((int)puVar3 - (int)&stack0xfffe), *(uint *)0xa <= uVar4)
     ) {
    if (uVar4 < *(uint *)&SUB_0000_000c) {
      *(uint *)&SUB_0000_000c = uVar4;
    }
    *(undefined2 *)(uVar4 - 2) = unaff_SI;
    *(undefined2 *)(uVar4 - 4) = unaff_DI;
    *(int *)(uVar4 - 6) = (uVar1 >> 8) << 1;
    piVar5 = (int *)(uVar4 - 8);
    *(undefined2 *)(uVar4 - 8) = 0xa32a;
    (*(code *)(in_stack_00000000 + 1))();
    iVar2 = *piVar5;
    *(undefined2 *)((int)&param_1 + iVar2) = param_1;
    *(undefined2 *)(&stack0x0002 + iVar2) = in_stack_00000002;
    return;
  }
  FUN_1000_a29d();
  return;
}

