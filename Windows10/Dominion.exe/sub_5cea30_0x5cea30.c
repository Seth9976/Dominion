// 函数: sub_5cea30
// 地址: 0x5cea30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (arg2 == arg4)
    *(*(arg7 + 0x810) * 0x408 + arg7 + 0x404) = 0xf
    void* ecx_1 = *(arg7 + 0x810) * 0x408 + arg7
    sub_5ce8e0(ecx_1 + 0x400, arg5, arg3, arg6, ecx_1, ecx_1 + 0x400)
    *(arg7 + 0x810) += 1

int32_t result = 0

if (arg6 s> 0)
    while (*(arg5 + (result << 2)) != arg2)
        result += 1
        
        if (result s>= arg6)
            return result
    
    *(*(arg7 + 0x810) * 0x408 + arg7 + 0x404) = 0
    int32_t ecx_4 = *(arg7 + 0x810)
    int32_t edx_1 = ecx_4 * 0x408
    result = ecx_4 * 0x102 + *(edx_1 + arg7 + 0x400)
    *(arg7 + (result << 2)) = arg4
    *(edx_1 + arg7 + 0x400) += 1
    *(arg7 + 0x810) += 1

return result
