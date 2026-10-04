// Function: FUN_1000_23fc

undefined2
FUN_1000_23fc(code *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = param_5;
  uVar1 = FUN_1000_08b9(param_5);
  param_2 = FUN_1000_09e1(param_2,*(undefined2 *)0x10);
  uVar2 = FUN_1000_09e1(uVar1);
  iVar3 = (*param_1)();
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

