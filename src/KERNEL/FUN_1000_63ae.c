// Function: FUN_1000_63ae

void FUN_1000_63ae(undefined2 param_1,uint param_2,undefined2 param_3,undefined2 param_4,
                  undefined4 param_5)

{
  undefined2 unaff_DS;
  
  if ((DAT_1000_636c != 0) && ((param_2 & 0xfffc) == 0)) {
    (*(code *)*(undefined2 *)0x636a)
              (0x1000,0,(int)param_5,(int)((ulong)param_5 >> 0x10),param_4,param_3,param_2,param_1);
  }
  return;
}

