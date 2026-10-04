// Function: FUN_1000_733b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_733b(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  long lVar4;
  
  if ((*(int *)0x7c == 0) || (*(int *)0x7c == *(int *)0x54)) {
    *(int *)0x7c = *(int *)0x54;
    if (_DAT_1000_26a0 == 0) {
      while( true ) {
        iVar2 = FUN_1000_793e(0,param_1,param_2,0,(undefined2 *)param_3,param_3._2_2_,DAT_1000_57d5)
        ;
        *(int *)0x80 = iVar2;
        lVar4 = CONCAT22(DAT_1000_54a6,DAT_1000_54a4);
        if (iVar2 != 0) break;
        bVar3 = DAT_1000_57d1 == 0;
        uVar1 = 0;
        if (bVar3) goto LAB_1000_73c4;
        uVar1 = FUN_1000_415b();
        lVar4 = CONCAT22(DAT_1000_54a6,DAT_1000_54a4);
        if (bVar3) goto LAB_1000_73c4;
        FUN_1000_72db();
      }
      LOCK();
      uVar1 = ((undefined2 *)param_3)[1];
      ((undefined2 *)param_3)[1] = *param_3;
      UNLOCK();
      *param_3 = uVar1;
    }
    else {
      lVar4 = (*(code *)*(undefined2 *)0x269e)
                        (0x1000,0,DAT_1000_537c,DAT_1000_537e,(undefined2 *)param_3,param_3._2_2_);
      DAT_1000_54a6 = (undefined2)((ulong)lVar4 >> 0x10);
      DAT_1000_54a4 = (undefined2)lVar4;
      uVar1 = 0;
      if (lVar4 == 0) {
        *(undefined2 *)0x80 = 1;
      }
      else {
LAB_1000_73c4:
        DAT_1000_54a6 = (undefined2)((ulong)lVar4 >> 0x10);
        DAT_1000_54a4 = (undefined2)lVar4;
        *(undefined2 *)0x7c = uVar1;
      }
    }
  }
  return;
}

