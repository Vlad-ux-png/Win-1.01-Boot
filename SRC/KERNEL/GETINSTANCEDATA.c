// Function: GETINSTANCEDATA

void __stdcall16far GETINSTANCEDATA(int param_1,undefined1 *param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  iVar2 = FUN_1000_09e1(param_3);
  if ((iVar2 != 0) && (puVar3 = param_2, param_1 != 0)) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar1 = param_2;
      param_2 = param_2 + 1;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

