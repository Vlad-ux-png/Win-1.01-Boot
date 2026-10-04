// Function: FUN_2000_35e5

void FUN_2000_35e5(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00001d8b(0x1000,1);
  if (param_3 != 0xa1) {
    if ((*(byte *)(param_4 + 0x33) & 0x20) == 0) {
      *(int *)0x38a = *(int *)(param_4 + 0x22) + *(int *)(param_4 + 0x1e) >> 1;
      iVar1 = *(int *)(param_4 + 0x24) + *(int *)(param_4 + 0x20) >> 1;
    }
    else {
      *(int *)0x38a =
           *(int *)(param_4 + 0x1e) + (*(int *)&SUB_0000_046a >> 1) + (*(int *)&SUB_0000_046a >> 2);
      iVar1 = *(int *)(*(int *)0x634 + 0x20) - *(int *)0x46c;
    }
    *(int *)0x38c = iVar1;
    func_0x000015c8(0,iVar1,*(undefined2 *)0x38a);
  }
  func_0x0000ffff(0,0,0,0,param_3,param_1,param_2,7,4,param_4);
  return;
}

