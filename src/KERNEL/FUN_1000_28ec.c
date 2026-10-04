// Function: FUN_1000_28ec

undefined2 * FUN_1000_28ec(undefined2 param_1,uint param_2)

{
  undefined2 *extraout_DX;
  
  FUN_1000_098a(0,0,param_2 | 7);
  if ((((uint)extraout_DX & 1) == 0) && ((*(byte *)(extraout_DX + 1) & 0x40) != 0)) {
    *extraout_DX = param_1;
  }
  return extraout_DX;
}

