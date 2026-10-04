// Function: SIZEOFRESOURCE

void __stdcall16far SIZEOFRESOURCE(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = FUN_1000_08df(param_2);
  iVar2 = *(int *)*(undefined2 *)0x24;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

