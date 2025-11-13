// 函数: sub_5c3cd0
// 地址: 0x5c3cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg3

if (arg2 s> 0)
    if (*arg4 == 0)
        memset(result, 0, arg2 << 2)
        return &result[arg2]
    
    if (arg2 s< 4)
    label_5c3d4b:
        
        do
            arg2 -= 1
            *result = *arg4
            result = &result[1]
        while (arg2 s> 0)
    else
        int32_t i_1 = ((arg2 - 4) u>> 2) + 1
        arg2 -= i_1 << 2
        int32_t i
        
        do
            *result = *arg4
            result[1] = *arg4
            result[2] = *arg4
            result[3] = *arg4
            result = &result[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (arg2 s> 0)
            goto label_5c3d4b

return result
