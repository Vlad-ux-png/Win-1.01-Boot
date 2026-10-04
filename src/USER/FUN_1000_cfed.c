// Function: FUN_1000_cfed

void __cdecl16near FUN_1000_cfed(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_14;
  int local_12 [8];
  
  local_14 = 0;
  do {
    local_12[local_14] = 0x55 << ((byte)local_14 & 1);
    local_14 = local_14 + 1;
  } while (local_14 < 8);
  uVar1 = func_0x0000ffff(0x1000,local_12);
  uVar2 = func_0x0000ffff(0,uVar1);
  *(undefined2 *)0x550 = uVar2;
  func_0x0000ffff(0,uVar1);
  uVar1 = func_0x000001dd(0,0);
  *(undefined2 *)0x636 = uVar1;
  uVar1 = func_0x000001e9(0,1);
  *(undefined2 *)0x604 = uVar1;
  uVar1 = func_0x0000ffff(0,4);
  *(undefined2 *)0x41c = uVar1;
  return;
}

