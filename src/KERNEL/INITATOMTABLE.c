// Function: INITATOMTABLE

void __stdcall16far INITATOMTABLE(int param_1)

{
  int *piVar1;
  int in_CX;
  undefined2 unaff_DS;
  
  if (*(int *)0x8 == 0) {
    if (param_1 == 0) {
      param_1 = 0x25;
    }
    piVar1 = (int *)LOCALALLOC((param_1 + 1) * 2,0x40);
    if (in_CX != 0) {
      *(undefined2 *)0x8 = piVar1;
      *piVar1 = param_1;
    }
  }
  return;
}

