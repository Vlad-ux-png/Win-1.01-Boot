// Function: FUN_2000_951a

void FUN_2000_951a(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_2 + 0x40) & 4) == 0) {
    func_0x00000017(0x1000,0);
    *(byte *)(param_2 + 0x40) = *(byte *)(param_2 + 0x40) | 0x10;
    func_0x0000ffff(0,param_2);
    *(byte *)(param_2 + 0x40) = *(byte *)(param_2 + 0x40) & 0xef;
    FUN_2000_9348(4,param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x40) = *(byte *)(param_2 + 0x40) | 0x20;
      func_0x0000ffff(0,param_2);
    }
  }
  return;
}

