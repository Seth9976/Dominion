// 函数: sub_6339d0
// 地址: 0x6339d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg4

if ((result & 0x100) == 0 && arg3 != 0 && arg5 == 1 && (result & 0x10000) == 0)
    if ((result.b & 1) == 0)
        if (arg3 == 2 && (result.b & 4) != 0)
            int32_t var_14_3 = 0
            int32_t var_18_3 = arg3
            return sub_5af930(result, data_171e768, arg3.b)
        
        void* eax_4
        int32_t ecx_5
        eax_4, ecx_5 = sub_571b30(*(arg2 + 0xc), sub_5cf7e0())
        int32_t eax_6 = *(eax_4 + 0x98) & 0x4000000
        
        if (eax_6 == 0)
            int32_t var_14_4 = eax_6
            int32_t var_18_4 = ecx_5
            return sub_5af930(eax_6, data_171e714, ecx_5.b)
    else
        int32_t var_14_1 = 0
        int32_t var_18_1 = arg3
        sub_5af930(result, data_171e720, arg3.b)
    
    int32_t ecx_3
    result, ecx_3 = sub_571b30(*(arg2 + 0xc), sub_5cf7e0())
    int32_t** edx_2 = *(result + 0x64)
    
    if (edx_2 != 0)
        int32_t var_14_2 = 0
        int32_t var_18_2 = ecx_3
        return sub_5af930(result, *edx_2, ecx_3.b)

return result
