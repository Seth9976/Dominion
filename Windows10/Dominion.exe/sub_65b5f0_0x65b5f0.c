// 函数: sub_65b5f0
// 地址: 0x65b5f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float result = arg5
float var_8 = arg6
int32_t var_14

if (arg3 == 0 || arg2 == 0)
    float xmm2_3 = (arg6 - arg5) * arg4
    
    if (arg3 == 0)
        goto label_65b6db
    
    if (arg3 == 1)
        float result_1 = (arg5 - arg7) * arg4 + arg9
        result = result_1
        var_8 = result_1 + xmm2_3
    label_65b6db:
        
        if (arg2 == 0)
            return result
        
        if (arg2 == 1)
            float xmm1_10 = arg10 - (arg8 - arg6) * arg4
            var_8 = xmm1_10
            return xmm1_10 - xmm2_3
        
        char const* const var_10_5 = "GroupAlignment"
        var_14 = 0x2495
    else
        char const* const var_10_4 = "GroupAlignment"
        var_14 = 0x2489
else if (arg3 == 0)
    char const* const var_10_3 = "GroupAlignment"
    var_14 = 0x249d
else if (arg3 != 1)
    char const* const var_10 = "GroupAlignment"
    var_14 = 0x24a3
else if (arg2 == 0)
    char const* const var_10_2 = "GroupAlignment"
    var_14 = 0x24a9
else
    if (arg2 == 1)
        float var_8_1 = arg10 - (arg8 - arg6) * arg4
        return arg5 - arg7 + arg9
    
    char const* const var_10_1 = "GroupAlignment"
    var_14 = 0x24af

sub_63b870(arg1, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", var_14, "GroupAlignment")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
