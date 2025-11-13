// 函数: sub_72fa50
// 地址: 0x72fa50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 u> 5)
    sub_63b870(arg1, &data_801800, "Halt", "C:\x\ax2017\Engine\IBLImport.cpp", 0xf0, "FaceToDirs")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

switch (arg3)
    case 0
        *arg2 = 0xbf800000
        arg2[1] = 0x80000000
        arg2[2] = 0x80000000
    label_72fa86:
        *arg4 = 0x3f80000000000000
        arg4[1].d = 0
        return 0
    case 1
        *arg2 = 0x3f800000
        arg2[2] = 0
        goto label_72fa86
    case 2
        *arg2 = 0x3f80000000000000
        arg2[2] = 0
        *arg4 = 0x80000000
        *(arg4 + 4) = 0x80000000
        arg4[1].d = 0xbf800000
        return arg4
    case 3
        *arg2 = 0x80000000
        arg2[1] = 0xbf800000
        arg2[2] = 0x80000000
        *arg4 = 0
        arg4[1].d = 0x3f800000
        return 0x3f800000
    case 4
        *arg2 = 0
        arg2[2] = 0x3f800000
        goto label_72fa86
    case 5
        *arg2 = 0x80000000
        arg2[1] = 0x80000000
        arg2[2] = 0xbf800000
        goto label_72fa86
