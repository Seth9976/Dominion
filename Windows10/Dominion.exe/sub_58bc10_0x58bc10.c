// 函数: sub_58bc10
// 地址: 0x58bc10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_cac
void* var_c = __security_cookie ^ &var_cac
void* ebx = arg1
int32_t var_ca4 = arg2
int32_t i = 0
void* var_c98 = ebx
void* result
result.b = *(ebx + 0x19d8)
char var_ca5 = result.b
int32_t var_ca0 = 0
*(ebx + 0x19d8) = 0

if (*(ebx + 0xd38) s> 0)
    void* var_c9c_1 = ebx + 0x17564
    
    do
        int32_t j_2 = *(ebx + 0x19a4)
        int32_t edi_1 = 6
        
        if (i != 0xffffffff)
            edi_1 = 0x3f1
        
        int32_t esi_1 = 0
        
        if (j_2 s> 0)
            void* eax_2 = ebx + 0x152cc
            int32_t j
            
            do
                if (*(eax_2 + 4) == edi_1 && *eax_2 == i && *(eax_2 - 4) == 0x601)
                    esi_1 += *(eax_2 + 0x10)
                
                eax_2 += 0x20
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        *(var_ca4 + (i << 2)) = esi_1
        int32_t edx_1 = *(var_c9c_1 + 0xc) + esi_1
        *(var_ca4 + (i << 2)) = edx_1
        
        if (*(ebx + 0x127e) == 0)
            arg2 = var_ca4
        else
            arg2 = var_ca4
            *(arg2 + (i << 2)) = *var_c9c_1 + edx_1
        
        i += 1
        var_c9c_1 += 0x5a30
    while (i s< *(ebx + 0xd38))
    
    result.b = var_ca5

void* i_1 = 1

if (*(ebx + 0x1520) s> 1)
    int32_t var_c94_1 = 0
    void* esi_2 = ebx + 0x1ad4
    void* var_c9c_2 = &data_1a816b0
    
    do
        result = *(esi_2 - 0x20) - 0x22
        
        if (result u<= 4)
            sub_58b9f0(result, *(esi_2 - 0x24), ebx, arg2)
            arg2 = var_ca4
        else if (*esi_2 != 0xffffffff)
            uint32_t ebx_1 = zx.d(i_1.w)
            
            if (ebx_1 u>= 0x320)
                sub_591930()
            
            int32_t ecx_1 = ebx_1 * 0x64
            ebx = var_c98
            result = *(ecx_1 + ebx + 0x1a78)
            
            if (result != *(ecx_1 + ebx + 0x1a70))
                arg2 = var_ca4
            else
                int32_t j_1 = *(esi_2 - 0x24)
                
                if (j_1 != 0xb13)
                    result = nullptr
                    int32_t var_c90[0x321]
                    int32_t ecx_4
                    
                    if (var_ca0 s<= 0)
                    label_58bdab:
                        ecx_4 = var_ca0
                    label_58bdaf:
                        int32_t edx_5 = *(esi_2 - 0x24)
                        var_c90[ecx_4] = edx_5
                        sub_58b880(result, edx_5, ebx, var_c9c_2)
                        int32_t eax_7 = *esi_2
                        var_ca0 += 1
                        var_c9c_2 += 0x18
                        void** ecx_7 = var_ca4 + (eax_7 << 2)
                        *ecx_7 += *(((eax_7 + var_c94_1) << 2) + &data_1a816b0)
                        var_c94_1 += 6
                    else
                        while (j_1 != var_c90[result])
                            result += 1
                            
                            if (result s>= var_ca0)
                                goto label_58bdab
                        
                        int32_t edx_8 = *esi_2
                        *(var_ca4 + (edx_8 << 2)) += *(((edx_8 + result * 6) << 2) + &data_1a816b0)
                        ecx_4 = var_ca0
                        ebx = var_c98
                        
                        if (result s>= ecx_4)
                            goto label_58bdaf
                    arg2 = var_ca4
                else
                    result = sub_58b790(result, *esi_2, ebx, i_1)
                    int32_t ecx_3 = *esi_2
                    arg2 = var_ca4
                    *(arg2 + (ecx_3 << 2)) += result
        
        i_1 += 1
        esi_2 += 0x64
    while (i_1 s< *(ebx + 0x1520))
    
    result.b = var_ca5

*(ebx + 0x19d8) = result.b
CookieCheckFunction(result)
return result
