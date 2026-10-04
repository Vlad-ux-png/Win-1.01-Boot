// Function: FUN_1000_8ad2

void __cdecl16near FUN_1000_8ad2(int param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x256 = *(undefined2 *)(param_1 + 1);
  *(uint *)0x244 = (uint)(*(int *)(param_1 + 0x1b) == 0x1f);
  *(int *)0x258 = *(int *)(param_1 + 0x21) - *(int *)(param_1 + 0x23);
  *(int *)0x25a = (*(int *)(param_1 + 3) - *(int *)(param_1 + 5)) + 4;
  *(int *)0x260 = *(int *)(param_1 + 0x15) - *(int *)(param_1 + 0x17);
  *(undefined2 *)0x25c =
       *(undefined2 *)((*(int *)(param_1 + 9) - *(int *)(param_1 + 0xb)) * 2 + 0x92);
  *(undefined2 *)0x25e =
       *(undefined2 *)((*(int *)(param_1 + 0xf) - *(int *)(param_1 + 0x11)) * 2 + 0x98);
  *(undefined2 *)0x260 = *(undefined2 *)(*(int *)0x260 * 2 + 0x9e);
  return;
}

