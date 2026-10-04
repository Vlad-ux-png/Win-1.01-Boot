// Function: FUN_1000_789a

void __cdecl16near FUN_1000_789a(void)

{
  int iVar1;
  int iVar2;
  int in_DX;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x54;
  iVar2 = DAT_1000_5dad;
  do {
    iVar3 = in_DX;
    in_DX = iVar2;
    if (in_DX == 0) {
      return;
    }
    iVar2 = *(int *)0x0;
  } while (iVar1 != in_DX);
  if (iVar1 != DAT_1000_5dad) {
    *(int *)0x0 = iVar2;
    iVar2 = DAT_1000_5dad;
  }
  DAT_1000_5dad = iVar2;
  *(undefined2 *)0x7c = 0;
  DAT_1000_5daf = 0;
  func_0x0000ffff(0x1000,iVar1);
  FUN_1000_7a9a();
  return;
}

