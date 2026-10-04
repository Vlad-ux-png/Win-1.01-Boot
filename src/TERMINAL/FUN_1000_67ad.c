// Function: FUN_1000_67ad

char * __cdecl16near FUN_1000_67ad(void)

{
  int *piVar1;
  undefined2 uVar2;
  int in_CX;
  undefined2 *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined2 unaff_DS;
  
  piVar1 = (int *)*(undefined2 *)0x458;
  piVar6 = (int *)0x0;
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    puVar3 = (undefined2 *)*piVar4;
    if ((int)puVar3[2] < 0x19) goto LAB_1000_67fb;
    piVar6 = piVar4;
    piVar1 = (int *)*puVar3;
  }
  piVar1 = (int *)func_0x0000077d(0x1000,*(undefined2 *)0x45a,*(undefined2 *)0x456);
  if (in_CX != 0) {
    uVar2 = func_0x0000ffff(0,*(undefined2 *)0x45c,*(undefined2 *)0x45e,*(undefined2 *)0x454);
    if (in_CX != 0) {
      puVar3 = (undefined2 *)0x458;
      if (piVar6 != (int *)0x0) {
        puVar3 = (undefined2 *)*piVar6;
      }
      *puVar3 = piVar1;
      puVar3 = (undefined2 *)*piVar1;
      *(undefined2 *)((int)puVar3 + 2) = uVar2;
LAB_1000_67fb:
      uVar2 = *(undefined2 *)((int)puVar3 + 2);
      for (pcVar5 = (char *)0x0; *pcVar5 == '\x01'; pcVar5 = pcVar5 + 0x5f) {
      }
      *(int *)((int)puVar3 + 4) = *(int *)((int)puVar3 + 4) + 1;
      *pcVar5 = *pcVar5 + '\x01';
      pcVar5 = pcVar5 + 1;
      goto LAB_1000_6822;
    }
    func_0x000007e8(0,piVar1);
  }
  uVar2 = 0;
  pcVar5 = (char *)0x0;
LAB_1000_6822:
  return (char *)CONCAT22(uVar2,pcVar5);
}

