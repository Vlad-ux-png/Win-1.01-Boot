// Function: FUN_2000_d2b5

undefined2 __stdcall16far FUN_2000_d2b5(char param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (param_1 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  *param_2 = 0x5c;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)uVar3) {
    uVar2 = 0;
  }
  return uVar2;
}

