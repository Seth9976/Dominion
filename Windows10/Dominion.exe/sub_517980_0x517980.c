// 函数: sub_517980
// 地址: 0x517980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax_1 = *(data_1597e00 + (((arg1 s>> 4 | arg1) & data_1597e04) << 2))
void* result

if (eax_1 == 0)
label_5179b0:
    result = nullptr
else
    while (arg1 != *eax_1)
        eax_1 = eax_1[4]
        
        if (eax_1 == 0)
            goto label_5179b0
    
    result = &eax_1[1]

int32_t ebx = *(result + 4)
int32_t edi = 0
int32_t ecx = *result
int32_t esi_4 = 0
int32_t var_8 = ecx

if (ebx s> 0)
    while (true)
        void* eax_2 = sub_571b30(*(ecx + (esi_4 << 2)), 0x18)
        
        if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0)
            int32_t ecx_5 = data_ccb414
            result = nullptr
            
            if (ecx_5 s> 0)
                do
                    if (*((result << 2) + &data_cca794) == *(var_8 + (esi_4 << 2)))
                        edi += 1
                        
                        if (edi s< arg2)
                            break
                        
                        result.b = 1
                        return result
                    
                    result += 1
                while (result s< ecx_5)
        
        esi_4 += 1
        
        if (esi_4 s>= ebx)
            break
        
        ecx = var_8

result.b = 0
return result
