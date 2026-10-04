// Function: FUN_1000_4342

undefined2 __cdecl16near FUN_1000_4342(void)

{
  int iVar1;
  undefined1 local_a6 [40];
  undefined1 local_7e [40];
  undefined2 local_56;
  undefined1 local_54 [40];
  undefined1 local_2c [40];
  undefined2 local_4;
  
  iVar1 = FUN_1000_431c(local_2c,0x28);
  if (iVar1 == 0) {
    local_56 = 0;
  }
  else {
    local_4 = FUN_1000_42e3(local_2c,local_54,0x28);
    local_4 = FUN_1000_42e3(local_4,local_a6,0x28);
    FUN_1000_42e3(local_4,local_7e,0x28);
    local_56 = func_0x0000ffff(0x1000,0,0,local_7e);
  }
  return local_56;
}

