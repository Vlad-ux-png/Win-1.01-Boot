// Function: FUN_1000_0928

int FUN_1000_0928(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*(uint *)0xc & 0x8000) == 0) && (*(int *)0x1a != 0)) && (*(int *)0x18 == 0)) {
    uVar2 = *(uint *)0x12;
    if (*(int *)0x8 != 0) {
      uVar2 = uVar2 + *(int *)(*(int *)0x8 + 6);
    }
    *(uint *)0x18 = uVar2 & 0xfffe;
  }
  iVar1 = *(int *)0x18;
  if (iVar1 == 0 && *(int *)0x1a == 0) {
    iVar1 = 0x1000;
  }
  else {
    FUN_1000_0e71(0xffff,0xffff,*(int *)0x1a,param_1);
  }
  return iVar1;
}

