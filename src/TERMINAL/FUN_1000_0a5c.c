// Function: FUN_1000_0a5c

void FUN_1000_0a5c(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 in_stack_00000000;
  
  FUN_1000_0aca();
  FUN_1000_07a1();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0x4b4 != 0) {
    (*(code *)*(undefined2 *)0x4b2)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  for (puVar2 = (undefined2 *)&SUB_0000_04c4; puVar2 < (undefined2 *)&SUB_0000_04c4;
      puVar2 = puVar2 + 1) {
    (*(code *)*puVar2)();
  }
  return;
}

