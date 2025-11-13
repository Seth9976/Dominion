// 函数: sub_4af4f0
// 地址: 0x4af4f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg4 u> 9)
    sub_63b870(arg4, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 
        0x283, "UIHitAction")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_33c
void* result

switch (arg4)
    case 0, 7, 8
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffb70, 9), *(arg2 + 4), 
            &var_33c, 2, *(arg2 + 8))
        
        if (result.b != 0)
            sub_4af430()
            data_19e3c20 = 7
            CookieCheckFunction(&data_19e3c20)
            return &data_19e3c20
    case 1
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffb54, 7), *(arg2 + 4), 
            &var_33c, 4, *(arg2 + 8))
    case 2
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffb24, 8), *(arg2 + 4), 
            &var_33c, 0x10, *(arg2 + 8))
    case 3
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffba4, 4), *(arg2 + 4), 
            &var_33c, 0x40, *(arg2 + 8))
    case 4
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffb94, 4), *(arg2 + 4), 
            &var_33c, 0x80, *(arg2 + 8))
    case 5
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffbb4, 4), *(arg2 + 4), 
            &var_33c, 0x20, *(arg2 + 8))
    case 6
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ffb44, 4), *(arg2 + 4), 
            &var_33c, 0x100, *(arg2 + 8))
    case 9
        result = sub_67b3b0(sub_694540(arg4, arg3, &var_33c, &data_7ff594, 1), *(arg2 + 4), 
            &var_33c, 0x200, *(arg2 + 8))

CookieCheckFunction(result)
return result
