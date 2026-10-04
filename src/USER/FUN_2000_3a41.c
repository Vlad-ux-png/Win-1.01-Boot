// Function: FUN_2000_3a41

void FUN_2000_3a41(char param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  for (puVar1 = (undefined2 *)*(undefined2 *)(param_2 + 0xc); puVar1 != (undefined2 *)0x0;
      puVar1 = (undefined2 *)*puVar1) {
    *(char *)(puVar1 + 0x1c) = *(char *)(puVar1 + 0x1c) + param_1;
  }
  return;
}

