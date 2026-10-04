// Function: FUN_1000_2624

void FUN_1000_2624(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(int *)0x1e = *(int *)0x1e + param_1;
  *(int *)0x22 = *(int *)0x22 + param_1;
  if (param_1 < 1) {
    if (*(int *)0x1e < 0) {
      *(undefined2 *)0x1e = 0;
      *(undefined2 *)0x1c = 0;
      if (*(int *)0x22 < 0) {
        uVar1 = *(undefined2 *)0x1e;
        *(undefined2 *)0x20 = *(undefined2 *)0x1c;
        *(undefined2 *)0x22 = uVar1;
      }
    }
  }
  else if (0x18 < *(int *)0x22) {
    *(undefined2 *)0x20 = 0x50;
    *(undefined2 *)0x22 = 0x18;
    if (0x18 < *(int *)0x1e) {
      uVar1 = *(undefined2 *)0x22;
      *(undefined2 *)0x1c = *(undefined2 *)0x20;
      *(undefined2 *)0x1e = uVar1;
    }
  }
  return;
}

