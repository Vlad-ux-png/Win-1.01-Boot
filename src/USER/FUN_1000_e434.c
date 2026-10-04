// Function: FUN_1000_e434

byte * FUN_1000_e434(int *param_1,byte *param_2,undefined2 param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  byte *pbVar5;
  undefined2 local_8;
  byte *local_6;
  undefined2 local_4;
  
  iVar3 = func_0x0000ffff(0x1000);
  if (iVar3 == 0) {
LAB_1000_e493:
    param_2 = (byte *)0x0;
    param_3 = 0;
  }
  else {
    do {
      bVar1 = *param_2;
      pbVar2 = param_2 + 1;
      if ((bVar1 & 0x10) == 0) {
        local_8 = *(undefined2 *)(param_2 + 1);
        pbVar2 = param_2 + 3;
      }
      param_2 = pbVar2;
      local_4 = param_3;
      local_6 = param_2;
      if (*param_2 == 0) {
        local_6 = (byte *)0x0;
        local_4 = 0;
      }
      do {
        pbVar5 = param_2;
        param_2 = param_2 + 1;
      } while (*pbVar5 != 0);
      if ((bVar1 & 0x10) != 0) {
        pbVar5 = (byte *)FUN_1000_e434(&local_8,param_2,param_3);
        param_2 = (byte *)pbVar5;
        if (pbVar5 == (byte *)0x0) goto LAB_1000_e493;
      }
      iVar4 = func_0x0000ffff(0,bVar1 & 0x7b | 0x100,local_8,local_6,local_4,0,iVar3);
      if (iVar4 == 0) goto LAB_1000_e493;
    } while ((bVar1 & 0x80) == 0);
    *param_1 = iVar3;
  }
  return (byte *)CONCAT22(param_3,param_2);
}

