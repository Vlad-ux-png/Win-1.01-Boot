// Function: FUN_1000_4c85

bool __stdcall16far FUN_1000_4c85(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_66a8(0xc4,0x304,0x240);
  if ((iVar1 == 0) && (param_1 != 0)) {
    FUN_1000_66c8(0xc4,0x240,unaff_DS,0x304,unaff_DS);
  }
  return iVar1 == 0;
}

