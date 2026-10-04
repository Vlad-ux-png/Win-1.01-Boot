// Function: FUN_2000_2baa

undefined2 FUN_2000_2baa(char param_1)

{
  int iVar1;
  undefined2 uVar2;
  char extraout_DL;
  undefined2 unaff_DS;
  
  iVar1 = FUN_2000_2c14();
  if (extraout_DL == '\0') {
    uVar2 = *(undefined2 *)(iVar1 + 0xe);
    if ((char)(param_1 + '\x01') == *(char *)0x51c) {
      uVar2 = *(undefined2 *)0x516;
    }
  }
  else {
    uVar2 = *(undefined2 *)(iVar1 + -10);
    if (param_1 == '\0') {
      uVar2 = *(undefined2 *)0x512;
    }
  }
  return uVar2;
}

