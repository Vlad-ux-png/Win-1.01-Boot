// Function: FUN_1000_2d31

void FUN_1000_2d31(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint unaff_SS;
  int iStack_8;
  
  iStack_8 = DAT_1000_0016;
  DAT_1000_2d2c = (undefined1 *)0x0;
  do {
    if (iStack_8 == 0) {
      if (DAT_1000_2d2c != (undefined1 *)0x0) {
        return;
      }
      iStack_8 = 0;
      uVar3 = unaff_SS;
LAB_1000_2d6d:
      puVar4 = (uint *)&stack0xfffe;
      DAT_1000_2d2c = &stack0xfffe;
    }
    else {
      iVar1 = *(int *)0x0;
      uVar3 = *(uint *)0x4;
      if (uVar3 == param_2) {
        *(uint *)0x4 = param_1;
      }
      puVar4 = (uint *)(*(int *)0x2 + 0x10);
      iStack_8 = iVar1;
      if (unaff_SS == uVar3) goto LAB_1000_2d6d;
    }
    do {
      uVar5 = 0;
      if ((*puVar4 & 1) != 0) {
        if ((puVar4[2] == param_2) && (**(int **)(puVar4 + 1) != 0x3fcd)) {
          puVar4[2] = param_1;
        }
        if ((puVar4[-1] == param_2) && (**(int **)(puVar4 + 1) != 0x3fcd)) {
          puVar4[-1] = param_1;
        }
        uVar5 = 1;
      }
      puVar6 = (uint *)(uVar5 ^ *puVar4);
    } while ((puVar6 != (uint *)0x0) && (bVar2 = puVar4 < puVar6, puVar4 = puVar6, bVar2));
  } while( true );
}

