// Function: FUN_1000_61ea

void FUN_1000_61ea(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (((*(int *)0x125c != 0) && (param_1 == 0)) || ((*(int *)0x125c == 0 && (param_1 != 0)))) {
    iVar1 = FUN_1000_28f3();
    if (iVar1 != 0) {
      if (param_1 == 0) {
        FUN_1000_268e(0x44a,0x446);
        uVar5 = *(undefined2 *)0x444;
        uVar4 = *(undefined2 *)0x442;
        uVar3 = *(undefined2 *)0x444;
        uVar2 = *(undefined2 *)0x442;
      }
      else {
        uVar5 = *(undefined2 *)0x448;
        uVar4 = *(undefined2 *)0x446;
        uVar3 = *(undefined2 *)0x44c;
        uVar2 = *(undefined2 *)0x44a;
      }
      FUN_1000_26b3(uVar2,uVar3,uVar4,uVar5,iVar1);
      func_0x000054a5(0x1000,iVar1,*(undefined2 *)0x1530);
    }
    *(int *)0x125c = param_1;
  }
  return;
}

