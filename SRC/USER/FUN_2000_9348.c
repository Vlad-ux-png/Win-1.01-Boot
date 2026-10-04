// Function: FUN_2000_9348

void FUN_2000_9348(uint param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_2 + 0x40) & 4) != param_1) {
    func_0x0000ffff(0x1000,0,0,param_1,0x403,param_2);
  }
  return;
}

