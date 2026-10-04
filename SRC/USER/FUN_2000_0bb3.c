// Function: FUN_2000_0bb3

void FUN_2000_0bb3(undefined2 param_1,int param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  
  FUN_2000_0c0a(param_1,&local_a,unaff_SS);
  *(int *)(param_2 + 0x20) = (*(int *)0x468 - *(int *)0x46c) / 2 + local_8;
  *(int *)(param_2 + 0x1e) = (*(int *)0x466 - *(int *)&SUB_0000_046a) / 2 + local_a;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x20) + *(int *)0x46c;
  *(int *)(param_2 + 0x22) = *(int *)(param_2 + 0x1e) + *(int *)&SUB_0000_046a;
  return;
}

