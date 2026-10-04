// Function: FUN_2000_b106

void FUN_2000_b106(undefined2 param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_2000_b642(param_2);
  *(undefined2 *)(param_2 + 10) = param_1;
  FUN_2000_b612(param_2);
  return;
}

