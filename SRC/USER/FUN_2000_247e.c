// Function: FUN_2000_247e

void FUN_2000_247e(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 *puVar3;
  code *local_6;
  
  cVar1 = *(char *)(param_4 + 0x1c);
  iVar2 = *(int *)0x4dc;
  if (param_3 != 0 || param_2 != 0) {
    if ((param_3 < 0) || (0 < param_2)) {
      local_6 = (code *)0x1ff9;
    }
    else {
      local_6 = (code *)0x1fd8;
    }
    puVar3 = param_1;
    if (param_3 != 0) {
      puVar3 = (undefined2 *)*param_4;
      param_4 = param_1;
    }
    (*local_6)(puVar3,param_4);
  }
  FUN_2000_3908(0,*(undefined2 *)(cVar1 * 0xe + iVar2 + 0xc));
  return;
}

