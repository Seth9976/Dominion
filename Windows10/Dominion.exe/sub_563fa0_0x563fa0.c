// 函数: sub_563fa0
// 地址: 0x563fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* edi = sub_573400()
int32_t i = 1
int32_t esi = 0
void* ecx = *(edi + 4)
void* var_c90 = ecx
int32_t var_c8c[0x321]

if (*(ecx + 0x1520) s> 1)
    do
        uint32_t edi_1 = zx.d(i.w)
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx = var_c90
        
        int32_t edi_2 = *(edi_1 * 0x64 + ecx + 0x1a4c)
        void* eax_4 = sub_571b30(edi_2, *(ecx + 0xd48))
        
        if (((*(eax_4 + 0x98) & 0x7f000400) | (*(eax_4 + 0x9c) & 0x940)) == 0)
            void* eax_7 = sub_571b30(edi_2, *(var_c90 + 0xd48))
            
            if (((*(eax_7 + 0x98) & 0x3000000) | (*(eax_7 + 0x9c) & 0x10000)) == 0)
                int32_t eax_10 = 0
                
                if (esi s> 0)
                    do
                        if (var_c8c[eax_10] == edi_2)
                            goto label_564086
                        
                        eax_10 += 1
                    while (eax_10 s< esi)
                
                var_c8c[esi] = edi_2
                esi += 1
        
    label_564086:
        ecx = var_c90
        i += 1
    while (i s< *(ecx + 0x1520))

int32_t* ecx_9 = *(edi + 4)
int32_t var_c98 = *edi
int32_t var_c94_1 = *(edi + 0x10)
int32_t eax_13 = *(edi + 0xc)

if (esi != 0)
    int32_t edx_3
    
    if (eax_13 != ecx_9[0x673])
        edx_3 = eax_13
    else
        edx_3 = ecx_9[0x674]
    
    int32_t* var_cb0_1 = ecx_9
    int32_t var_cb4_1 = arg1
    int32_t eax_14 =
        sub_623b70(eax_13, &var_c98, ecx_9, 7, eax_13, edx_3, &var_c8c, esi, ecx_9, nullptr, arg2)
    ecx_9 = *(edi + 4)
    
    if (eax_14 != 0)
        int32_t eax_17 = ecx_9[0x541]
        int32_t result = var_c8c[0]
        
        if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx_9[0x540].b == 0)
            int32_t edx_6 = *(edi + 0xc)
            int32_t eax_18 = edx_6
            
            if (edx_6 == ecx_9[0x673])
                eax_18 = ecx_9[0x674]
            
            sub_59f9b0(eax_18, edx_6, ecx_9, eax_18, 0x1c, 0, nullptr, 0, result, 0, 0, 0)
        
        CookieCheckFunction(result)
        return result

int32_t eax_15 = ecx_9[0x541]

if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6 && ecx_9[0x540].b == 0)
    int32_t edx_5 = *(edi + 0xc)
    int32_t eax_16 = edx_5
    
    if (edx_5 == ecx_9[0x673])
        eax_16 = ecx_9[0x674]
    
    sub_59f9b0(eax_16, edx_5, ecx_9, eax_16, 0x1c, 0, nullptr, 0, 0, 0, 0, 0)

CookieCheckFunction(0)
return 0
