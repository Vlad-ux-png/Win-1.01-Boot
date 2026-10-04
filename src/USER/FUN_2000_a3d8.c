// Function: FUN_2000_a3d8

undefined2 FUN_2000_a3d8(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined2 local_28 [17];
  uint local_6;
  
  iVar1 = func_0x0000ffff(0x1000,0x38,0x40);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0000ffff(0,iVar1,0,param_1);
    puVar3 = (undefined2 *)func_0x00000576(0,0,param_1);
    uVar2 = func_0x00000585(0,0xfff8,param_1);
    *puVar3 = uVar2;
    puVar3[1] = param_1;
    uVar2 = func_0x00000592(0,0xfff4,param_1);
    puVar3[2] = uVar2;
    local_6 = func_0x0000009a(0,0xfff0,param_1);
    *(bool *)((int)puVar3 + 0x31) = (local_6 & 4) == 0;
    *(byte *)(puVar3 + 0x19) = (byte)local_6 & 2;
    *(byte *)(puVar3 + 0x1a) = (byte)local_6 & 1;
    *(byte *)((int)puVar3 + 0x33) = (byte)local_6 & 8;
    puVar3[0xe] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 0x1b) = 0;
    *(undefined1 *)((int)puVar3 + 0x35) = 0;
    puVar3[4] = 0xffff;
    FUN_2000_a4c9(puVar3);
    uVar2 = func_0x0000ffff(0,param_1);
    func_0x0000ffff(0,local_28);
    func_0x0000ffff(0,uVar2,param_1);
    puVar3[0x12] = local_28[0];
    uVar2 = FUN_2000_b2db(0,puVar3);
    puVar3[7] = uVar2;
    func_0x0000ffff(0,1,0,1,puVar3[1]);
    uVar2 = puVar3[0x12];
  }
  return uVar2;
}

