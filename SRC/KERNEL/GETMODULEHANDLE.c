// Function: GETMODULEHANDLE

void __stdcall16far GETMODULEHANDLE(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined1 local_44;
  undefined1 local_43 [63];
  
  if (param_2 == 0) {
    FUN_1000_08df(param_1);
  }
  else {
    uVar1 = FUN_1000_1515(0x4ba7,&local_44,param_1,param_2);
    FUN_1000_0669(uVar1,local_43,unaff_SS);
  }
  return;
}

