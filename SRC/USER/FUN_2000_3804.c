// Function: FUN_2000_3804

void FUN_2000_3804(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = func_0x0000185e(0x1000);
  iVar2 = 0;
  if ((*(byte *)(param_1 + 0x33) & 0x40) != 0) {
    iVar2 = func_0x0000ffff(0,param_1);
    func_0x00000781(0,uVar1);
    func_0x00000797(0,*(undefined2 *)(iVar2 + 0x2c),*(undefined2 *)(iVar2 + 0x2a),
                    *(undefined2 *)(iVar2 + 0x28),*(undefined2 *)(iVar2 + 0x26),uVar1);
  }
  func_0x00001870(0,4,0x37c);
  if (iVar2 != 0) {
    func_0x000007d0(0,uVar1);
  }
  func_0x000018d5(0,uVar1);
  return;
}

