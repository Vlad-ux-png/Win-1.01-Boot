// Function: FUN_1000_4244

void __cdecl16near FUN_1000_4244(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (*(int *)0x168 == 0) {
    if ((*(byte *)0xee & 8) == 0) {
      if (((*(byte *)0xed & 0x20) != 0) && (1 < param_3)) {
        param_3 = 1;
      }
      do {
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          return;
        }
        iVar1 = FUN_1000_50a4(1,&param_2,unaff_SS,param_1);
      } while (0 < iVar1);
      if (iVar1 == 0) {
        func_0x0000ffff(0x1000,0x30);
      }
    }
  }
  else {
    FUN_1000_42b1(param_1,*(undefined2 *)0x16e);
  }
  return;
}

