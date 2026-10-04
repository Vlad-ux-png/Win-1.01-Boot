// Function: FUN_1000_6149

undefined2 FUN_1000_6149(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 *puVar3;
  long lVar4;
  
  if (*(int *)0x434 < param_1) {
    while (*(int *)0x434 < param_1) {
      puVar3 = (undefined2 *)FUN_1000_5531();
      uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
      if (puVar3 == (undefined2 *)0x0) break;
      uVar1 = *(undefined2 *)0x42e;
      *puVar3 = *(undefined2 *)0x42c;
      ((undefined2 *)puVar3)[1] = uVar1;
      *(undefined2 *)0x42c = (undefined2 *)puVar3;
      *(undefined2 *)0x42e = uVar2;
      *(int *)0x434 = *(int *)0x434 + 1;
    }
  }
  else if (0x18 < param_1) {
    while ((param_1 < *(int *)0x434 &&
           ((*(int *)0x42c != 0 || *(int *)0x42e != 0 || (*(int *)0x422 == 0))))) {
      lVar4 = FUN_1000_5de9();
      if (lVar4 != 0) {
        FUN_1000_5565(lVar4);
      }
      *(int *)0x434 = *(int *)0x434 + -1;
    }
  }
  return *(undefined2 *)0x434;
}

