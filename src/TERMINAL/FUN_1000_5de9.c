// Function: FUN_1000_5de9

int * __cdecl16near FUN_1000_5de9(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  if (*(int *)0x42c == 0 && *(int *)0x42e == 0) {
    FUN_1000_5ce7(*(undefined2 *)0x428,*(undefined2 *)0x42a);
  }
  piVar1 = (int *)*(undefined2 *)0x42c;
  iVar2 = *(int *)0x42e;
  local_6 = (int *)CONCAT22(iVar2,piVar1);
  if (piVar1 != (int *)0x0 || iVar2 != 0) {
    puVar4 = (undefined2 *)*(undefined4 *)0x42c;
    uVar3 = ((undefined2 *)puVar4)[1];
    *(undefined2 *)0x42c = *puVar4;
    *(undefined2 *)0x42e = uVar3;
  }
  *local_6 = (int)piVar1;
  piVar1[1] = iVar2;
  piVar1[2] = (int)piVar1;
  piVar1[3] = iVar2;
  FUN_1000_66e8(piVar1[5],piVar1 + 6,iVar2);
  return (int *)CONCAT22(iVar2,piVar1);
}

