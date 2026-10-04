// Function: FUN_1000_d0a3

void __cdecl16near FUN_1000_d0a3(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  int local_30;
  undefined2 *local_2a;
  undefined2 local_28 [5];
  undefined2 local_1e;
  undefined4 local_6;
  
  uVar1 = func_0x0000ffff(0x1000,0xc15,0xffff);
  *(undefined2 *)0x614 = uVar1;
  func_0x00000272(0,0x26a,0x26d,1,0,uVar1);
  func_0x0000ffff(0,0xffff,0xffff,3,0,*(undefined2 *)0x614);
  uVar1 = func_0x0000ffff(0,0xc1d,0xffff,1,0,*(undefined2 *)0x614);
  uVar1 = func_0x0000ffff(0,uVar1,*(undefined2 *)0x614);
  puVar6 = (undefined2 *)func_0x0000ffff(0,uVar1);
  uVar4 = (undefined2)((ulong)puVar6 >> 0x10);
  puVar2 = (undefined2 *)puVar6;
  *(undefined2 *)0x460 = *puVar6;
  *(undefined2 *)0x45e = puVar2[1];
  iVar3 = puVar2[2];
  *(int *)0x46e = iVar3;
  *(undefined2 *)&SUB_0000_046a = (int)(0x40 / (long)iVar3);
  iVar3 = puVar2[3];
  *(int *)0x470 = iVar3;
  iVar3 = (int)(0x40 / (long)iVar3);
  *(int *)0x46c = iVar3;
  *(int *)0x468 = iVar3 + 2;
  *(int *)0x466 = *(int *)&SUB_0000_046a + 8;
  iVar3 = puVar2[4];
  *(int *)0x476 = iVar3;
  *(undefined2 *)&SUB_0000_0472 = (int)(0x20 / (long)iVar3);
  iVar3 = puVar2[5];
  *(int *)0x478 = iVar3;
  *(undefined2 *)0x474 = (int)(0x20 / (long)iVar3);
  *(undefined2 *)0x47a = puVar2[6];
  *(undefined2 *)0x47e = puVar2[7];
  local_6 = (undefined2 *)CONCAT22(uVar4,puVar2 + 9);
  *(undefined2 *)0x480 = puVar2[8];
  local_2a = (undefined2 *)0x3de;
  local_30 = 10;
  while (local_30 != 0) {
    uVar5 = (undefined2)((ulong)local_6 >> 0x10);
    uVar4 = ((undefined2 *)local_6)[1];
    *local_2a = *local_6;
    local_2a[1] = uVar4;
    local_6 = (undefined2 *)CONCAT22(uVar5,(undefined2 *)local_6 + 2);
    local_30 = local_30 + -1;
    local_2a = local_2a + 2;
  }
  func_0x0000ffff(0,uVar1);
  func_0x0000ffff(0,uVar1);
  FUN_1000_d728();
  func_0x0000ffff(0,*(undefined2 *)0x3be,0x546);
  uVar1 = func_0x000001d1(0,0xd);
  *(undefined2 *)0x484 = uVar1;
  func_0x0000ffff(0,local_28);
  *(undefined2 *)0x5ec = local_28[0];
  *(undefined2 *)0x422 = local_1e;
  FUN_1000_d065(0x424,0x7fff);
  FUN_1000_d065(0x42a,0x7ffe);
  FUN_1000_d065(0x430,0x7ffd);
  FUN_1000_d065(0x436,0x7ffc);
  FUN_1000_d065(0x43c,0x7ffb);
  FUN_1000_d065(0x442,0x7ffa);
  FUN_1000_d065(0x448,0x7ff9);
  FUN_1000_d065(0x44e,0x7ff8);
  FUN_1000_d065(0x454,0x7ff7);
  FUN_1000_d065(0x538,0x7ff6);
  uVar1 = func_0x0000ffff(0,*(undefined2 *)0x5ec,*(int *)0x480 * 2 + *(int *)0x428);
  *(undefined2 *)0x506 = uVar1;
  *(int *)0x45a = *(int *)0x456 >> 2;
  *(int *)0x45c = *(int *)0x458 / 3;
  *(int *)0x426 = *(int *)0x426 >> 1;
  func_0x000004b3(0,*(int *)0x506 - *(int *)0x480,*(int *)0x426 + *(int *)0x47e,
                  (*(int *)0x506 - *(int *)0x428) - *(int *)0x480,*(undefined2 *)0x47e,0x4f0);
  func_0x00000147(0,*(undefined2 *)0x506,*(int *)0x426 + *(int *)0x47e,0,0,0x398);
  *(int *)&SUB_0000_0464 = *(int *)0x506 + *(int *)0x480;
  *(int *)&SUB_0000_0462 = (*(int *)0x426 + *(int *)0x42c) * 3;
  return;
}

