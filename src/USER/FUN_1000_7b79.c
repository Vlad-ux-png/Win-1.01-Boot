// Function: FUN_1000_7b79

void __cdecl16near FUN_1000_7b79(void)

{
  int iVar1;
  int in_CX;
  int unaff_BP;
  int *piVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined2 uVar3;
  undefined2 uVar4;
  
  iVar1 = *(int *)(unaff_BP + 10);
  FUN_1000_7ae2(iVar1);
  if (!(bool)in_ZF) {
    piVar2 = (int *)(iVar1 + in_CX);
    uVar4 = *(undefined2 *)(unaff_BP + 8);
    uVar3 = *(undefined2 *)(unaff_BP + 6);
    FUN_1000_7eda(piVar2,unaff_DS,uVar3,uVar4);
    FUN_1000_7f65(-piVar2[1],-*piVar2,uVar3,uVar4);
  }
  return;
}

