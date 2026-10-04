// Function: FUN_1000_4643

int __cdecl16near FUN_1000_4643(void)

{
  int iVar1;
  undefined2 uVar2;
  int local_6;
  char local_4 [2];
  
  uVar2 = 0x1000;
  do {
    iVar1 = func_0x00003dcf(uVar2,1,local_4);
    if (iVar1 != 1) break;
    uVar2 = 0;
  } while ((local_4[0] == '\r') || (local_4[0] == '\n'));
  if (iVar1 == 0) {
    local_6 = 7;
  }
  else if (((iVar1 == 1) && ('/' < local_4[0])) && (local_4[0] < '6')) {
    local_6 = local_4[0] + -0x30;
  }
  else {
    local_6 = 4;
  }
  return local_6;
}

