// 函数: sub_4acd60
// 地址: 0x4acd60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_10
int32_t** result = sub_4ade00(&var_10)
int32_t* i_1

for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
    int32_t* i_2 = i
    int32_t j_1 = 0x96
    int32_t j
    
    do
        if (*i_2 != 0)
            sub_64e810(i_2)
        
        i_2 = &i_2[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t ecx_2 = data_8db528
    data_8db528 = zx.d(i[0x300].w)
    i[0x300] = ecx_2
    int32_t* ecx_3 = var_10
    data_8db52c -= 1
    result = sub_4ade60(ecx_3, &i_1)

int32_t** result_1 = data_8db51c

if (result_1 != 0)
    result = nullptr
    
    while (true)
        if (result != 0)
            result = &result[0x301]
        else
            result = result_1
        
        void* ecx_5 = data_8db520 * 0xc04 + result_1
        
        if (result u>= ecx_5)
            break
        
        while (true)
            int32_t esi_1 = result[0x300]
            
            if ((esi_1 & 0xffff0000) != 0)
                int32_t edx = data_8db528
                data_8db528 = zx.d(esi_1.w)
                result[0x300] = edx
                data_8db52c -= 1
                result_1 = data_8db51c
                break
            
            result = &result[0x301]
            
            if (result u>= ecx_5)
                goto label_4ace17
    
label_4ace17:
    data_8db520 = 0
    data_8db528 = 0
    
    if (result_1 != 0)
        result = _aligned_free(result_1)
    
    __builtin_memset(&data_8db51c, 0, 0x14)
    data_8db534 = 0

return result
