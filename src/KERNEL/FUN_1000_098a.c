// Function: FUN_1000_098a

void FUN_1000_098a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = param_3 & 0xf000;
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar2 = uVar1 >> 4, (param_3 & 7) == 0)) {
    uVar2 = CONCAT11((byte)(uVar1 >> 0xc),8);
  }
  if (((byte)param_3 & 7) == 1) {
    uVar2 = uVar2 | 4;
  }
  if ((param_3 & 0x10) != 0) {
    uVar2 = uVar2 | 2;
  }
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    bVar3 = param_2 < 0;
    param_2 = param_2 << 1;
    uVar1 = uVar1 << 1 | (uint)bVar3;
  }
  uVar2 = GLOBALALLOC(param_2,uVar1,uVar2);
  if ((uVar2 & 1) == 0) {
    FUN_1000_09e1(uVar2,uVar2);
  }
  return;
}

