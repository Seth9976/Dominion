// 函数: sub_5cc540
// 地址: 0x5cc540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_18

if (arg3 != 6)
    if (arg3 != 8 || arg2 != 0)
    label_5cc573:
        memset(&arg4[7], 0, 0x40)
        arg4[3] = arg8
        arg4[1] = arg2
        arg4[4] = arg5
        arg4[2] = arg7
        *arg4 = arg3
        arg4[5] = arg6
        arg4[6] = 0
        arg4[0x17] = arg9
        return arg4
    
    char const* const var_14_1 = "DomLocSet"
    var_18 = 0xa6f
else
    if (arg2 != 0)
        goto label_5cc573
    
    char const* const var_14 = "DomLocSet"
    var_18 = 0xa6d

sub_63b870(arg1, &data_801800, "where != CW_NONE", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
    var_18, "DomLocSet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
