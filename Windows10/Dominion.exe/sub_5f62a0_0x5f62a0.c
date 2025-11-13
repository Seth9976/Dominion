// 函数: sub_5f62a0
// 地址: 0x5f62a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg3
int32_t esi = arg2
int32_t i = 0
int32_t var_8 = esi
int32_t* result_3 = result
int32_t* result_2 = result

do
    int32_t edx = *result_3
    
    if (edx == 0)
        break
    
    result = nullptr
    
    if (arg4 s> 0)
        do
            if (edx == *(esi + (result << 2)))
                return result
            
            result += 1
        while (result s< arg4)
    
    i += 1
    result_3 = &result_3[4]
while (i s< 0x20)

int32_t edi = 0

if (arg4 s> 0)
    void* ebx_1 = &result_2[i * 4]
    
    do
        int32_t eax = *(esi + (edi << 2))
        
        if (eax == 2)
        label_5f633e:
            void* edx_3 = ebx_1
            ebx_1 += 0x10
            *edx_3 = *(esi + (edi << 2))
            *(edx_3 + 4) = 0xffffffff
            result = nullptr
            *(edx_3 + 8) = 0
            *(edx_3 + 0xc) = 0
        else
            void* var_18
            void* var_10
            result = sub_4daf40(&var_10, &var_18)
            int32_t esi_1 = 0
            int32_t* result_1 = result
            
            if (result s> 0)
                while (true)
                    result = sub_4db700(*(var_10 + (esi_1 << 2)), eax)
                    
                    if (result.b != 0)
                        esi = var_8
                        break
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= result_1)
                        goto label_5f6328
                
                goto label_5f633e
            
        label_5f6328:
            esi = var_8
        
        edi += 1
    while (edi s< arg4)

return result
