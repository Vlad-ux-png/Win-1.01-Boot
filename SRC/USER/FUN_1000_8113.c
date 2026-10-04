// Function: FUN_1000_8113

void __cdecl16near FUN_1000_8113(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 in_CX;
  undefined2 in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  cVar1 = FUN_1000_a2ac();
  cVar5 = SCARRY1(cVar1,*(char *)0x468b);
  cVar1 = cVar1 + *(char *)0x468b;
  cVar4 = cVar1 < '\0';
  uVar3 = cVar1 == '\0';
  uVar2 = func_0x00006688(0x1000,*(undefined2 *)(unaff_BP + 8),cVar1,cVar1);
  uVar6 = FUN_1000_80dd((int)*(undefined4 *)(unaff_BP + 10),uVar2);
  uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
  if (!(bool)uVar3 && cVar5 == cVar4) {
    *(undefined2 *)(unaff_BP + -2) = uVar2;
    *(undefined2 *)(unaff_BP + -4) = (int)uVar6;
    uVar8 = *(undefined2 *)(unaff_BP + 4);
    func_0x000066be(0,uVar8,*(undefined2 *)(unaff_BP + 6),1,uVar2,in_CX,in_BX,
                    *(undefined2 *)(unaff_BP + 0xe),in_BX);
    uVar2 = *(undefined2 *)(unaff_BP + 4);
    func_0x000066f8(0,uVar2,*(undefined2 *)(unaff_BP + 6),1,*(undefined2 *)(unaff_BP + -2),
                    *(int *)((int)*(undefined4 *)(unaff_BP + 10) + 6) + -1,uVar8,
                    *(undefined2 *)(unaff_BP + 0xe),uVar8);
    uVar8 = *(undefined2 *)((int)*(undefined4 *)(unaff_BP + 10) + 2);
    uVar7 = *(undefined2 *)(unaff_BP + 4);
    func_0x00006716(0,uVar7,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + -4),1,uVar8,
                    uVar2,*(undefined2 *)(unaff_BP + 0xe),uVar8);
    func_0x00006733(0,*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                    *(undefined2 *)(unaff_BP + -4),1,uVar7,
                    *(int *)((int)*(undefined4 *)(unaff_BP + 10) + 4) + -1,
                    *(undefined2 *)(unaff_BP + 0xe));
  }
  func_0x000066d1(0);
  return;
}

