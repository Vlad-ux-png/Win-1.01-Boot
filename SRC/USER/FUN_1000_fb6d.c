// Function: FUN_1000_fb6d

void FUN_1000_fb6d(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  if (*(int *)0x5ea < *(int *)0x638) {
    puVar3 = (undefined2 *)0x4fa;
    piVar4 = (int *)0x4fc;
    if (*(int *)0x3a4 != 0) {
      piVar4 = (int *)0x4fa;
      puVar3 = (undefined2 *)0x4fc;
    }
    iVar1 = *(int *)0x5b8;
    *piVar4 = *(int *)(iVar1 + 0xe) + *(int *)0x3d0;
    piVar4[2] = *(int *)&SUB_0000_0616 - *(int *)(iVar1 + 0xe);
    *puVar3 = *(undefined2 *)0x4a6;
    puVar3[2] = *(undefined2 *)0x622;
    FUN_1000_fcba(param_1,0x4fa,unaff_DS,param_2);
    iVar1 = *(int *)0x5b8;
    iVar2 = *(int *)(iVar1 + 0xe);
    *piVar4 = *piVar4 - iVar2;
    piVar4[2] = piVar4[2] + iVar2;
    *puVar3 = *(undefined2 *)0x5b4;
    puVar3[2] = *(undefined2 *)0x544;
    if (*(int *)(iVar1 + 6) < *(int *)0x622 - *(int *)0x4a6) {
      FUN_1000_fcba(*(undefined2 *)0x3c6,0x4fa,unaff_DS,param_2);
      func_0x0000031f(0x1000,0,0x4fa);
    }
    if ((param_3 == *(int *)0x540) && (*(int *)0x3a4 == *(int *)0x620)) {
      puVar3 = (undefined2 *)0x40e;
      if (*(int *)0x3a4 != 0) {
        puVar3 = (undefined2 *)0x410;
      }
      if (*(int *)0x628 == 2) {
        puVar3[2] = *(undefined2 *)0x5b4;
      }
      else {
        if (*(int *)0x628 != 3) {
          return;
        }
        *puVar3 = *(undefined2 *)0x544;
      }
      FUN_1000_fc85(0x40e,unaff_DS,param_2);
    }
  }
  return;
}

