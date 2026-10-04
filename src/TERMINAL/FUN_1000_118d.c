// Function: FUN_1000_118d

undefined2 __cdecl16near FUN_1000_118d(int param_1,int param_2)

{
  uint uVar1;
  undefined1 local_9a [50];
  int local_68;
  int local_66;
  int local_64;
  undefined1 local_62 [2];
  int local_60;
  undefined2 local_5e;
  undefined1 local_5c [50];
  int local_2a;
  int local_28 [4];
  int local_20;
  undefined2 local_8;
  
  local_8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (local_68 = func_0x0000ffff(0x1000,param_1), local_68 != 0)) {
    func_0x0000ffff(0,local_9a);
    func_0x0000ffff(0,param_2,local_68);
    func_0x0000ffff(0,local_28);
    local_66 = local_28[0] + local_20;
    FUN_1000_1016(&local_64,local_62);
    uVar1 = local_66 * 3 >> 0xf;
    local_2a = ((int)((local_66 * 3 ^ uVar1) - uVar1) >> 2 ^ uVar1) - uVar1;
    if (local_2a < local_64) {
      local_64 = local_2a;
    }
    local_60 = 0;
    local_5e = 0;
    func_0x0000ffff(0,&local_68);
    if (local_60 != 0) {
      local_8 = func_0x0000ffff(0,local_5c);
    }
    func_0x0000ffff(0,local_68,param_1);
  }
  return local_8;
}

