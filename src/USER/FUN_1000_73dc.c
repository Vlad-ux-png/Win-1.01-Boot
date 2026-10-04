// Function: FUN_1000_73dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_73dc(uint *param_1)

{
  byte bVar1;
  undefined1 uVar3;
  uint uVar2;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  
  if (*(int *)0x80 != 0) {
    if (_DAT_1000_26a0 == 0) {
      if (s_fonts_1000_2699._3_2_ != 0) {
        (*(code *)*(undefined2 *)0x269a)(0x1000,(uint *)param_1,param_1._2_2_);
      }
      FUN_1000_79df();
    }
    else {
      (*(code *)*(undefined2 *)0x269e)(0x1000,1,0,0,0,0);
      if (*param_1 == 0x200) {
        FUN_1000_7796(((uint *)param_1)[1]);
      }
    }
    uVar2 = *param_1;
    if (uVar2 != 0x200) {
      cVar5 = (char)uVar2;
      if ((((uVar2 == 0x101) || (uVar2 == 0x100)) || (uVar2 == 0x105)) || (uVar2 == 0x104)) {
        uVar3 = 0;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0x80;
        }
        bVar1 = (byte)((uint *)param_1)[1];
      }
      else {
        bVar1 = 1;
        if (('\x03' < cVar5) && (bVar1 = 2, '\x06' < cVar5)) {
          bVar1 = 4;
        }
        uVar3 = 0;
        if (((cVar5 != '\x05') && (cVar5 != '\x02')) && (cVar5 != '\b')) {
          uVar3 = 0x80;
        }
      }
      pbVar6 = (byte *)(bVar1 + 0x82);
      uVar2 = CONCAT11(uVar3,*pbVar6) & 0xff01;
      bVar4 = (byte)(uVar2 >> 8);
      bVar1 = (byte)uVar2 | bVar4;
      if ((bVar4 != 0) && (-1 < (char)(bVar4 & *pbVar6))) {
        bVar1 = bVar1 ^ 1;
      }
      *pbVar6 = bVar1;
      bVar1 = *(byte *)0x18b;
      if ((char)((char)pbVar6 + '~') != *(char *)(bVar1 + 0x182)) {
        bVar1 = 0xff;
      }
      *(char *)0x18b = bVar1 + 1;
      if (('\b' < (char)(bVar1 + 1)) && (*(undefined1 *)0x18b = 0, *(int *)0x1fc == 0)) {
        func_0x0000ffff(0x1000);
      }
    }
    *(undefined2 *)0x80 = 0;
  }
  return;
}

