// 函数: sub_71fb30
// 地址: 0x71fb30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ecx
int32_t* var_34 = ecx
int32_t var_14
int32_t* var_38 = &var_14
uint32_t eax_3 = sub_71f5d0(arg4, arg2, ecx, arg3, arg4, ecx)
uint32_t edi = eax_3

if (edi == 0)
    CookieCheckFunction(eax_3)
    return eax_3

if (var_14 != 8)
    uint32_t _Size = *arg3 * *arg2 * *arg4
    int32_t* eax_5
    uint32_t ecx_3
    eax_5, ecx_3 = malloc(_Size)
    
    if (eax_5 != 0)
        char* i = nullptr
        
        if (_Size s> 0)
            if (_Size u>= 4 && (eax_5 u> edi + ((_Size - 1) << 1) || _Size - 1 + eax_5 u< edi))
                uint32_t xmm1_1[0x4] = data_893290
                
                if (_Size u>= 0x20)
                    int32_t ecx_6 = _Size & 0x8000001f
                    
                    if (ecx_6 s< 0)
                        ecx_6 = ((ecx_6 - 1) | 0xffffffe0) + 1
                    
                    void* ecx_9 = edi + 0x20
                    void* edx_5 = &eax_5[4]
                    
                    do
                        uint16_t xmm0_1[0x8] = *(ecx_9 - 0x20)
                        i = &i[0x20]
                        ecx_9 += 0x40
                        edx_5 += 0x20
                        uint32_t xmm0_3[0x4] = _mm_and_ps(_mm_srli_epi16(xmm0_1, 8), xmm1_1)
                        *(edx_5 - 0x30) = _mm_packus_epi16(xmm0_3, xmm0_3)
                        uint32_t xmm0_7[0x4] =
                            _mm_and_ps(_mm_srli_epi16(*(ecx_9 - 0x50), 8), xmm1_1)
                        *(edx_5 - 0x28) = _mm_packus_epi16(xmm0_7, xmm0_7)
                        uint32_t xmm0_11[0x4] =
                            _mm_and_ps(_mm_srli_epi16(*(ecx_9 - 0x40), 8), xmm1_1)
                        *(edx_5 - 0x20) = _mm_packus_epi16(xmm0_11, xmm0_11)
                        uint32_t xmm0_15[0x4] =
                            _mm_and_ps(_mm_srli_epi16(*(ecx_9 - 0x30), 8), xmm1_1)
                        *(edx_5 - 0x18) = _mm_packus_epi16(xmm0_15, xmm0_15)
                    while (i s< _Size - ecx_6)
                    
                    ecx_3.b = _Size.b & 0x1f
                
                if (_Size u< 0x20 || ecx_3.b u>= 4)
                    ecx_3 = _Size & 0x80000003
                    
                    if (ecx_3 s< 0)
                        ecx_3 = ((ecx_3 - 1) | 0xfffffffc) + 1
                    
                    do
                        uint32_t xmm0_19[0x4] =
                            _mm_and_ps(_mm_srli_epi16(zx.o(*(edi + (i << 1))), 8), xmm1_1)
                        *(eax_5 + i) = _mm_packus_epi16(xmm0_19, xmm0_19)
                        i = &i[4]
                    while (i s< _Size - ecx_3)
            
            if (_Size u< 4 || (eax_5 u<= edi + ((_Size - 1) << 1) && _Size - 1 + eax_5 u>= edi)
                    || i s< _Size)
                do
                    ecx_3.b = *(edi + (i << 1) + 1)
                    *(i + eax_5) = ecx_3.b
                    i = &i[1]
                while (i s< _Size)
        
        free(edi)
        edi = eax_5
    else
        edi = 0

if (data_147dee4 != 0)
    sub_71fa40(arg4, *arg2, edi, *arg3, *arg4)

CookieCheckFunction(edi)
return edi
