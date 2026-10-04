// Function: FUN_1000_ee95

undefined2 * FUN_1000_ee95(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_DX;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined1 local_102 [256];
  
  uVar1 = 0x1000;
  puVar3 = (undefined2 *)*(undefined2 *)(param_1 + 0xc);
  do {
    if (puVar3 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    if ((param_4 == 0) || (*(int *)(puVar3[2] + 4) == param_4)) {
      if (param_2 == 0 && param_3 == 0) {
        return puVar3;
      }
      uVar1 = func_0x00000161(uVar1,param_3);
      func_0x0000ffff(0,0xff,local_102);
      func_0x0000ffff(0,uVar1);
      uVar1 = 0;
      iVar2 = func_0x0000ffff(0,local_102);
      param_3 = extraout_DX;
      if (iVar2 == 0) {
        return puVar3;
      }
    }
    puVar3 = (undefined2 *)*puVar3;
  } while( true );
}

