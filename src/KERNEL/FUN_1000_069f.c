// Function: FUN_1000_069f

byte * FUN_1000_069f(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined2 unaff_SI;
  byte *pbVar4;
  undefined2 unaff_DI;
  undefined2 unaff_CS;
  
  if (param_1 != 0) {
    param_1 = param_1 + -1;
    pbVar4 = (byte *)*(undefined2 *)0x4;
    while( true ) {
      pbVar1 = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
      if (uVar3 == 0) break;
      if (param_1 < (int)uVar3) {
        bVar2 = *pbVar1;
        if (bVar2 != 0) {
          if (bVar2 == 0xff) {
            pbVar4 = pbVar4 + param_1 * 0xb + 3;
            goto LAB_1000_072f;
          }
          pbVar4 = *(byte **)(pbVar4 + param_1 * 3 + 3);
          param_2 = FUN_1000_0e71(0xffff,0xffff,bVar2,param_2);
          if (param_2 != 0) goto LAB_1000_072f;
        }
        break;
      }
      param_1 = param_1 - uVar3;
      pbVar4 = pbVar4 + 2;
      bVar2 = *pbVar1;
      if (bVar2 != 0) {
        if (bVar2 == 0xff) {
          pbVar4 = pbVar4 + uVar3 * 0xb;
        }
        else {
          pbVar4 = pbVar4 + uVar3 * 3;
        }
      }
    }
  }
  FATALEXIT(unaff_CS,0x403,unaff_DI,unaff_SI);
  param_2 = 0;
  pbVar4 = (byte *)0x0;
LAB_1000_072f:
  return (byte *)CONCAT22(param_2,pbVar4);
}

