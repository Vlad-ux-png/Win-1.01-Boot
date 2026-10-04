// Function: FUN_2000_d155

undefined2 FUN_2000_d155(undefined4 param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (((param_2 & 0x8000) == 0) || ((param_2 & *(byte *)((int)param_1 + 0x15)) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

