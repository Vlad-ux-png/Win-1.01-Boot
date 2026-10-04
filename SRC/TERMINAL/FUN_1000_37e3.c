// Function: FUN_1000_37e3

undefined2 * __stdcall16far FUN_1000_37e3(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0xfc0;
  *param_1 = *(undefined2 *)0xfbe;
  param_1[1] = uVar1;
  return param_1;
}

