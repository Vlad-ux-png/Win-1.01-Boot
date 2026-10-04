// Function: DELETEATOM

undefined2 __stdcall16far DELETEATOM(uint param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0xc000) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000_4284();
  }
  return uVar1;
}

