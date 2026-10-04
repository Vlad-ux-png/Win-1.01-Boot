// Function: FUN_1000_08b9

undefined2 FUN_1000_08b9(undefined2 param_1)

{
  if (((*(uint *)0xc & 3) != 0) && (*(int *)0x8 != 0)) {
    param_1 = *(undefined2 *)(*(int *)0x8 + 8);
  }
  return param_1;
}

