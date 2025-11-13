// 函数: sub_568f20
// 地址: 0x568f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ebx = arg1
int32_t* var_c98 = arg1
void* edi = sub_573400()
void* var_c90 = edi
void* result = &ebx[ebx[0x320]]
void* result_1 = result

if (ebx != result)
    while (true)
        int32_t eax_3 = *ebx
        void* ebx_1 = *(edi + 4)
        uint32_t esi_1 = zx.d(eax_3.w)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t edi_1 = *(esi_1 * 0x64 + ebx_1 + 0x1a4c)
        result = sub_57da30(ebx_1, edi_1)
        int32_t esi_2 = 7
        void* edx_2 = ebx_1 + 0x1594
        
        while (true)
            int32_t i = *edx_2
            
            if (i != edi_1 && *(edx_2 + 4) != edi_1 && i != result)
                esi_2 += 1
                edx_2 += 0x10
                
                if (esi_2 s< 0x48)
                    continue
            else if (i != 0)
                edi = var_c90
                int32_t* esi_3 = 7
                result = *(edi + 4) + 0x1594
                
                while (*result != i)
                    if (*(result + 4) == i)
                        break
                    
                    esi_3 += 1
                    result += 0x10
                    
                    if (esi_3 s>= 0x48)
                        goto label_569098
                
                result = esi_3 - 7
                
                if (result u> 0x1a)
                    break
                
                int32_t* edi_2 = *(edi + 4)
                result = sub_582de0(0, eax_3, edi_2, 0x3ea)
                
                if (result.b == 0)
                    uint32_t var_c8c
                    uint32_t eax_7 = sub_590990(&var_c8c, 0xffffffff, edi_2, 5, &var_c8c)
                    
                    if (eax_7 != 0)
                        if (eax_7 != 1)
                            sub_591930()
                        
                        eax_7 = var_c8c
                    
                    if (eax_3 == eax_7)
                        eax_7 = sub_591930()
                    
                    result = sub_5822e0(eax_7, 0xffffffff, edi_2, eax_3, 0x15, esi_3, nullptr, 0, 
                        0, 0, 0, 0, nullptr, 0, nullptr, nullptr)
            
            edi = var_c90
            break
        
    label_569098:
        ebx = &var_c98[1]
        var_c98 = ebx
        
        if (ebx == result_1)
            break

CookieCheckFunction(result)
return result
