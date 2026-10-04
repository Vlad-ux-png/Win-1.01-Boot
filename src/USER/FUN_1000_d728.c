// Function: FUN_1000_d728

void __cdecl16near FUN_1000_d728(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 *local_22;
  char local_1e [28];
  
  uVar4 = 0x1000;
  puVar3 = (undefined2 *)0x3bc;
  local_22 = (undefined2 *)0x3de;
  iVar2 = 0;
  do {
    func_0x00000743(uVar4,0x19,local_1e);
    uVar5 = CONCAT22(local_22[1],*local_22);
    if (local_1e[0] != '\0') {
      uVar5 = FUN_1000_d6b8(local_1e,unaff_SS);
    }
    local_24 = (undefined2)((ulong)uVar5 >> 0x10);
    local_26 = (undefined2)uVar5;
    uVar4 = 0;
    uVar1 = func_0x0000ffff(0,uVar5);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    *local_22 = local_26;
    local_22[1] = local_24;
    iVar2 = iVar2 + 1;
    local_22 = local_22 + 2;
  } while (iVar2 < 10);
  return;
}

