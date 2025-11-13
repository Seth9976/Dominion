// 函数: sub_71fa40
// 地址: 0x71fa40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t count_2 = arg2 * arg5
uint32_t result = arg4
int32_t var_810 = arg3
int32_t i_1 = result s>> 1
uint32_t count_4 = count_2
int32_t i_2 = i_1

if (i_1 s> 0)
    result = (result - 1) * count_2 + arg3
    uint32_t result_1 = result
    int32_t i
    
    do
        uint32_t result_2 = result
        int32_t ebx_1 = arg3
        uint32_t count_1 = count_2
        
        if (count_2 != 0)
            uint32_t count
            uint32_t count_3
            
            do
                count = 0x800
                
                if (count_1 u< 0x800)
                    count = count_1
                
                void var_808
                memcpy(&var_808, ebx_1, count)
                memcpy(ebx_1, result_2, count)
                memcpy(result_2, &var_808, count)
                result_2 += count
                ebx_1 += count
                count_3 = count_1
                count_1 -= count
            while (count_3 != count)
            result = result_1
            count_2 = count_4
            arg3 = var_810
            i_1 = i_2
        
        arg3 += count_2
        result -= count_2
        i = i_1
        i_1 -= 1
        var_810 = arg3
        result_1 = result
        i_2 = i_1
    while (i != 1)

CookieCheckFunction(result)
return result
