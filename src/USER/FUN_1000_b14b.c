// Function: FUN_1000_b14b

void FUN_1000_b14b(undefined2 param_1,undefined2 param_2,uint param_3,undefined2 param_4,int param_5
                  )

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  uVar1 = *(uint *)0x3c;
  *(undefined2 *)0x3e = 0;
  func_0x0000ffff(0x1000,0);
  func_0x0000ffff(0);
  *(undefined2 *)0x36 = 0;
  iVar3 = func_0x00000b54(0,param_4);
  uVar2 = *(undefined2 *)(iVar3 + 2);
  func_0x00000b8b(0,param_4);
  uVar4 = FUN_1000_b222(0,param_4,param_5);
  iVar3 = *(int *)0x3a;
  if (iVar3 != 0) {
    FUN_1000_bc31(0,uVar2,param_4,param_5);
  }
  *(undefined2 *)0x3a = 0;
  *(undefined2 *)0x32 = 0;
  if ((param_3 & uVar1) != 0) {
    if (iVar3 == 0) {
      uVar5 = 0x111;
      param_2 = 0;
      param_1 = 0;
    }
    else {
      uVar5 = 0x112;
    }
    func_0x00000901(0,param_1,param_2,uVar4,uVar5,param_5);
  }
  iVar3 = func_0x0000ffff(0,param_5);
  if (((iVar3 != 0) && ((*(byte *)(param_5 + 0x33) & 0xc0) != 0x40)) &&
     (*(int *)(param_5 + 0x34) != 0)) {
    FUN_1000_bc31(0,uVar2,*(undefined2 *)(param_5 + 0x34),param_5);
  }
  return;
}

