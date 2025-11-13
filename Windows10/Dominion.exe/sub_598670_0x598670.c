// 函数: sub_598670
// 地址: 0x598670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_8 = arg3

if (arg2 - 0x10 u> 3)
    if (*arg4 == 0)
    label_5986b4:
        int32_t var_14_1 = arg6
        sub_63df30(arg3, "[color_start]%s[color_end]")
        return arg3
    
    if (arg2 == 8 && arg5 == 3)
        goto label_5986d7
    
    int32_t var_14_3 = arg6
    char* var_18_2 = arg4
    sub_63df30(arg3, "[color_start]%s %s[color_end]")
    return arg3

switch (arg2)
    case 0x10, 0x12, 0x13
    label_5986d7:
        int32_t var_14_2 = arg6
        char* var_18_1 = arg4
        sub_63df30(arg3, "[color_start]%s%s[color_end]")
        return arg3
    case 0x11
        if (*arg4 == 0)
            goto label_5986b4
        
        int32_t var_14 = arg7
        char* var_18 = arg4
        int32_t var_1c = arg6
        sub_63df30(arg3, "[color_start]%s %s%s[color_end]")
        return arg3
