// Function: LOCALHANDLE

int * __stdcall16far LOCALHANDLE(int *param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  piVar1 = param_1;
  if ((((uint)param_1 & 2) != 0) && (piVar1 = (int *)param_1[-1], (int *)*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

