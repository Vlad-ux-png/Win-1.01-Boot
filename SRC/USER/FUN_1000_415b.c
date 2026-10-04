// Function: FUN_1000_415b

uint __cdecl16near FUN_1000_415b(void)

{
  uint in_AX;
  uint in_CX;
  uint in_DX;
  
  if (in_DX < in_CX) {
    if ((in_DX <= in_AX) && (in_AX <= in_CX)) {
      return 0;
    }
  }
  else if ((in_AX < in_CX) || (in_DX < in_AX)) {
    return 0;
  }
  return in_AX | 1;
}

