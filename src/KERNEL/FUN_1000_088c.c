// Function: FUN_1000_088c

undefined2 FUN_1000_088c(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_CX;
  
  uVar2 = 0;
  if (*(int *)0x16 != 0) {
    uVar1 = *(undefined2 *)0x14;
    uVar2 = FUN_1000_0e71(param_1,param_1,*(int *)0x16,param_2);
    if (in_CX != 0) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

