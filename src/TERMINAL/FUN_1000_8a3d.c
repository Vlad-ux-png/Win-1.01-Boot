// Function: FUN_1000_8a3d

void __cdecl16near FUN_1000_8a3d(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)0x256;
  if (*(int *)0x244 == 0) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x1f;
  }
  *(undefined2 *)(param_1 + 0x1b) = uVar1;
  *(int *)(param_1 + 3) = *(int *)(param_1 + 5) + *(int *)0x25a + -4;
  *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x23) + *(int *)0x258;
  if (*(int *)0x25c == 0) {
    uVar1 = 0xe;
  }
  else if (*(int *)0x25c == 1) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = 0x10;
  }
  *(undefined2 *)(param_1 + 9) = uVar1;
  if (*(int *)0x25e == 1) {
    uVar1 = 0x1a;
  }
  else if (*(int *)0x25e == 2) {
    uVar1 = 0x19;
  }
  else {
    uVar1 = 0x1b;
  }
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  if (*(int *)0x260 == 0) {
    uVar1 = 0x1c;
  }
  else if (*(int *)0x260 == 1) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 0x1e;
  }
  *(undefined2 *)(param_1 + 0x15) = uVar1;
  return;
}

