// Function: FUN_1000_45de

/* WARNING: Removing unreachable block (ram,0x00014631) */

void FUN_1000_45de(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar2 = func_0x0000ffff(0x1000);
  lVar3 = func_0x00003a98(0);
  uVar4 = func_0x00003cb2(0,1000,0,param_1,param_1 >> 0xf);
  iVar1 = func_0x00003cbf(0,uVar2,uVar4);
  while (lVar5 = func_0x0000ffff(0), (ulong)(lVar5 - lVar3) < (ulong)(long)iVar1) {
    func_0x0000ffff(0);
  }
  return;
}

