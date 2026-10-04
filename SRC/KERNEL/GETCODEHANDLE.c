// Function: GETCODEHANDLE

undefined2 __stdcall16far GETCODEHANDLE(int *param_1)

{
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if (*(int *)0x0 == 0x454e) {
    if (piVar1 < (int *)*(uint *)0x4) {
      if ((int)piVar1 - 1U < *(uint *)0x1c) {
LAB_1000_14e9:
        FUN_1000_0e71(0xffff,0xffff,piVar1,uVar2);
        return extraout_DX;
      }
    }
    else if (*param_1 == -0x2fd2) {
      if (*(char *)((int)piVar1 + 5) != -0x16) {
        piVar1 = (int *)(uint)*(byte *)((int)piVar1 + 7);
        goto LAB_1000_14e9;
      }
      uVar2 = (undefined2)((ulong)*(undefined4 *)(piVar1 + 3) >> 0x10);
    }
  }
  FUN_1000_09e1(uVar2);
  FUN_1000_5f78();
  FUN_1000_57b1();
  FUN_1000_5f83();
  return extraout_DX_00;
}

