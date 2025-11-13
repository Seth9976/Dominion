// 函数: sub_5c6650
// 地址: 0x5c6650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t ecx = 0
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg4)
int32_t var_14 = 0
int32_t* esi = arg2
int32_t result = (eax_1 + (edx & 3)) & 0xfffffffc
int32_t edi = 0
int32_t result_1 = result

if (result s> 0)
    result = arg3
    
    do
        int32_t edx_2 = 0
        
        if (result s> 0)
            void* var_1c_1 = arg1 + (ecx << 2)
            esi = arg2
            var_14 = ecx + (result << 2)
            
            do
                int32_t ecx_3 = esi[1] * edx_2
                edx_2 += 1
                int128_t* eax_4 = var_1c_1
                *eax_4 = *(*esi + ((ecx_3 + edi) << 2))
                var_1c_1 = &eax_4[1]
                result = arg3
            while (edx_2 s< result)
            
            ecx = var_14
        
        edi += 4
    while (edi s< result_1)

if (edi s< arg4)
    result = arg3
    
    do
        int32_t i = 0
        
        if (result s>= 4)
            int32_t var_1c_2 = 2
            void* var_18_1 = arg1 + (ecx << 2) + 8
            var_14 = ecx + ((result - 4) u>> 2 << 2) + 4
            
            do
                int32_t ecx_8 = esi[1] * i
                i += 4
                *(var_18_1 - 8) = *(*esi + ((ecx_8 + edi) << 2))
                *(var_18_1 - 4) = *(*esi + (((var_1c_2 - 1) * esi[1] + edi) << 2))
                *var_18_1 = *(*esi + ((esi[1] * var_1c_2 + edi) << 2))
                int32_t ecx_22 = (var_1c_2 + 1) * esi[1]
                var_1c_2 += 4
                *(var_18_1 + 4) = *(*esi + ((ecx_22 + edi) << 2))
                var_18_1 += 0x10
            while (i s< result - 3)
            
            result = arg3
        
        if (i s>= result)
            ecx = var_14
        else
            do
                int32_t ecx_27 = esi[1] * i
                i += 1
                *(arg1 + (var_14 << 2)) = *(*esi + ((ecx_27 + edi) << 2))
                ecx = var_14 + 1
                result = arg3
                esi = arg2
                var_14 = ecx
            while (i s< result)
        
        edi += 1
    while (edi s< arg4)

return result
