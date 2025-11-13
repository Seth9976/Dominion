// 函数: sub_5531a0
// 地址: 0x5531a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi = 0
int32_t i = 7
int32_t* result = *(sub_573400() + 4) + 0x1594
int32_t var_c90[0x321]

do
    int32_t edx_1 = *result
    
    if (edx_1 != 0)
        var_c90[edi] = edx_1
        edi += 1
    
    i += 1
    result = &result[4]
while (i s< 0x21)

int32_t ebx = 0

if (edi s> 0)
    do
        int32_t i_1 = var_c90[ebx]
        result = sub_573400()
        
        if (i_1 != 0)
            result = sub_5754f0(result, i_1, result[1], 8, 0)
            
            if (result.b != 0)
                void* eax_4 = sub_573400()
                void* edx_3 = 7
                int32_t* ecx_2 = *(eax_4 + 4) + 0x1594
                
                while (*ecx_2 != i_1)
                    if (ecx_2[1] == i_1)
                        break
                    
                    edx_3 += 1
                    ecx_2 = &ecx_2[4]
                    
                    if (edx_3 s>= 0x48)
                        edx_3 = nullptr
                        break
                
                int32_t var_ca4_1 = 0
                int32_t var_ca8_1 = *(eax_4 + 0xc)
                int32_t var_cac_1 = 0
                result = sub_571fa0(eax_4, 0xffffffff, *(eax_4 + 4), 0x600, 1, edx_3, nullptr)
        
        ebx += 1
    while (ebx s< edi)

CookieCheckFunction(result)
return result
