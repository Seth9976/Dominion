// 函数: sub_5462b0
// 地址: 0x5462b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi = *(sub_573400() + 0xc)
int32_t ecx_1 = 0
void* eax_2 = *(sub_573400() + 4)
int32_t edx = *(eax_2 + 0x1520)

if (edx s> 0)
    void* result = eax_2 + 0x1a70
    
    do
        if (*(result - 0x24) == 0xd4e && *result == esi)
            if (ecx_1 != 0)
                return result
            
            break
        
        ecx_1 += 1
        result += 0x64
    while (ecx_1 s< edx)

int32_t esi_1 = *(sub_573400() + 0xc)
int32_t ecx_2 = 0
void* eax_5 = *(sub_573400() + 4)
int32_t edx_1 = *(eax_5 + 0x1520)

if (edx_1 s> 0)
    void* eax_6 = eax_5 + 0x1a70
    
    do
        if (*(eax_6 - 0x24) == 0xd4d && *eax_6 == esi_1)
            if (ecx_2 == 0)
                break
            
            int32_t esi_2 = *(sub_573400() + 0xc)
            int32_t ecx_3 = 0
            int32_t* eax_9 = *(sub_573400() + 4)
            int32_t edx_2 = eax_9[0x548]
            
            if (edx_2 s> 0)
                eax_9 = &eax_9[0x69c]
                
                do
                    if (eax_9[-9] == 0xd4d && *eax_9 == esi_2)
                        goto label_5463a2
                    
                    ecx_3 += 1
                    eax_9 = &eax_9[0x19]
                while (ecx_3 s< edx_2)
            
            ecx_3 = 0
        label_5463a2:
            sub_565ff0(eax_9, 0x3f1, ecx_3, 0xffffffff, 6, nullptr, nullptr, 0xb, nullptr, nullptr)
            return sub_56e060(0xd4e)
        
        ecx_2 += 1
        eax_6 += 0x64
    while (ecx_2 s< edx_1)

return sub_56e060(0xd4d)
