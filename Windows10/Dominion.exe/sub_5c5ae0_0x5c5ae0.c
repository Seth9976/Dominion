// 函数: sub_5c5ae0
// 地址: 0x5c5ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg4)
int32_t result = (eax_1 + (edx & 3)) & 0xfffffffc
int32_t edi = 0
int32_t result_1 = result
int32_t var_1c = 0

if (result s> 0)
    int32_t ecx_1 = arg3
    int32_t edx_4
    
    do
        int32_t edx_2 = 0
        
        if (ecx_1 s> 0)
            void* var_18_1 = arg1 + (edi << 2)
            
            do
                int32_t ecx_3 = arg2[1] * edx_2
                edx_2 += 1
                int128_t* eax_6 = var_18_1
                *eax_6 = *(*arg2 + ((ecx_3 + var_1c) << 2))
                var_18_1 = &eax_6[1]
            while (edx_2 s< arg3)
            
            edi += ecx_1 << 2
            result = result_1
            ecx_1 = arg3
        
        edx_4 = var_1c + 4
        var_1c = edx_4
    while (edx_4 s< result)

if (result s< arg4)
    int32_t ecx_5 = arg3
    
    do
        int32_t i = 0
        
        if (ecx_5 s>= 4)
            int32_t var_1c_1 = 2
            void* var_18_2 = arg1 + (edi << 2) + 8
            
            do
                int32_t ecx_8 = arg2[1] * i
                i += 4
                *(var_18_2 - 8) = *(*arg2 + ((ecx_8 + result_1) << 2))
                *(var_18_2 - 4) = *(*arg2 + (((var_1c_1 - 1) * arg2[1] + result_1) << 2))
                *var_18_2 = *(*arg2 + ((arg2[1] * var_1c_1 + result_1) << 2))
                int32_t ecx_22 = (var_1c_1 + 1) * arg2[1]
                var_1c_1 += 4
                *(var_18_2 + 4) = *(*arg2 + ((ecx_22 + result_1) << 2))
                var_18_2 += 0x10
            while (i s< ecx_5 - 3)
            
            edi = edi + ((ecx_5 - 4) u>> 2 << 2) + 4
            result = result_1
            ecx_5 = arg3
        
        while (i s< ecx_5)
            int32_t ecx_27 = arg2[1] * i
            i += 1
            *(arg1 + (edi << 2)) = *(*arg2 + ((ecx_27 + result) << 2))
            edi += 1
            ecx_5 = arg3
            result = result_1
        
        result += 1
        result_1 = result
    while (result s< arg4)

return result
