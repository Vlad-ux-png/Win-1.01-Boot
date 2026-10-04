// Function: FUN_2000_958e

void FUN_2000_958e(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  func_0x0000ffff(0x1000);
  FUN_2000_9348(0,param_1);
  if ((*(char *)(param_1 + 0x30) == '\x03') || (*(char *)(param_1 + 0x30) == '\x06')) {
    bVar2 = (*(byte *)(param_1 + 0x40) & 3) + 1;
    if (*(char *)(param_1 + 0x30) == '\x06') {
      bVar1 = 2;
    }
    else {
      bVar1 = 1;
    }
    if (bVar1 < bVar2) {
      bVar2 = 0;
    }
    func_0x0000034a(0,0,0,bVar2,0x401,param_1);
  }
  FUN_2000_9824(0,param_1);
  func_0x0000006a(0,0);
  return;
}

