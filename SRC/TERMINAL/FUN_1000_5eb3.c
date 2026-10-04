// Function: FUN_1000_5eb3

void FUN_1000_5eb3(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_8;
  undefined4 local_6;
  
  if (*(int *)0x424 != 0 || *(int *)0x426 != 0) {
    if (param_1 < 0) {
      param_1 = -param_1;
      if (*(int *)0x430 < param_1) {
        param_1 = *(int *)0x430;
      }
      for (; 0x19 < param_1; param_1 = param_1 + -1) {
        uVar4 = (undefined2)((ulong)*(undefined4 *)0x424 >> 0x10);
        iVar3 = (int)*(undefined4 *)0x424;
        uVar2 = *(undefined2 *)(iVar3 + 6);
        *(undefined2 *)0x424 = *(undefined2 *)(iVar3 + 4);
        *(undefined2 *)0x426 = uVar2;
        *(int *)0x430 = *(int *)0x430 + -1;
      }
      while (param_1 = param_1 + -1, -1 < param_1) {
        uVar4 = (undefined2)((ulong)*(undefined4 *)0x424 >> 0x10);
        iVar3 = (int)*(undefined4 *)0x424;
        uVar2 = *(undefined2 *)(iVar3 + 6);
        *(undefined2 *)0x424 = *(undefined2 *)(iVar3 + 4);
        *(undefined2 *)0x426 = uVar2;
        *(int *)0x430 = *(int *)0x430 + -1;
        FUN_1000_1ebb(1,0x18,0);
        FUN_1000_1a09(*(undefined2 *)((int)*(undefined4 *)0x424 + 10),*(int *)0x424 + 0xc,
                      *(undefined2 *)0x426,0,0);
      }
    }
    else if (0 < param_1) {
      while ((0x19 < param_1 &&
             ((*(int *)0x426 != *(int *)0x42a || (*(int *)0x424 != *(int *)0x428))))) {
        *(int *)0x430 = *(int *)0x430 + 1;
        param_1 = param_1 + -1;
        puVar1 = (undefined2 *)*(undefined4 *)0x424;
        uVar2 = ((undefined2 *)puVar1)[1];
        *(undefined2 *)0x424 = *puVar1;
        *(undefined2 *)0x426 = uVar2;
      }
      while (param_1 = param_1 + -1, -1 < param_1) {
        *(int *)0x430 = *(int *)0x430 + 1;
        puVar1 = (undefined2 *)*(undefined4 *)0x424;
        uVar2 = ((undefined2 *)puVar1)[1];
        *(undefined2 *)0x424 = *puVar1;
        *(undefined2 *)0x426 = uVar2;
        FUN_1000_1ebb(0xffff,0x18,0);
        local_6 = (undefined2 *)CONCAT22(*(undefined2 *)0x426,(undefined2 *)*(undefined2 *)0x424);
        local_8 = 0;
        while( true ) {
          if (0x16 < local_8) break;
          local_6 = (undefined2 *)CONCAT22(((undefined2 *)local_6)[1],(undefined2 *)*local_6);
          local_8 = local_8 + 1;
        }
        FUN_1000_1a09(((undefined2 *)local_6)[5],(undefined2 *)local_6 + 6,local_6._2_2_,0,0x17);
      }
    }
    uVar2 = FUN_1000_28f3();
    FUN_1000_2252(uVar2);
    func_0x00004e70(0x1000,uVar2,*(undefined2 *)0x1530);
  }
  FUN_1000_5aac(*(undefined2 *)0x124e,*(undefined2 *)0x1250,*(undefined2 *)0x1254,
                *(undefined2 *)0x1256);
  return;
}

