// Function: FUN_1000_0604

undefined2
FUN_1000_0604(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_14 [2];
  int local_12;
  undefined2 local_10;
  undefined2 local_e;
  
  iVar1 = func_0x0000ffff(0x1000,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
LAB_1000_067b:
    while( true ) {
      iVar1 = func_0x0000ffff(0,1,0,0,0,local_14);
      if (iVar1 != 0) break;
      if (((*(int *)0x1530 != 0) && (*(int *)0x168 == 0)) && (*(int *)0x16e != 0)) {
        FUN_1000_06bc(*(undefined2 *)0x136c,*(undefined2 *)0x1530);
      }
    }
    if (local_12 != 0x12) {
      if (*(int *)0x1530 != 0) {
        iVar1 = func_0x0000ffff(0,local_14);
        if (iVar1 == 0) {
          if (local_12 == 0x100) {
            iVar1 = func_0x0000ffff(0,*(undefined2 *)0x1530,local_10,local_e);
            if (iVar1 != 0) goto LAB_1000_067b;
          }
          func_0x0000ffff(0,local_14);
          func_0x0000ffff(0,local_14);
        }
      }
      goto LAB_1000_067b;
    }
  }
  return 0;
}

