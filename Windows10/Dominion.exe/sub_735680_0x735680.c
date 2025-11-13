// 函数: sub_735680
// 地址: 0x735680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int32_t* i = esi[3]
int32_t* i_5 = nullptr
uint128_t var_30_1
__builtin_memset(&var_30_1, 0, 0x18)
int32_t var_5c = 0

if (i != 0)
    int32_t edi_1 = esi[0x10]
    int64_t var_20
    int32_t var_60_1 = var_20:4.d
    int32_t* i_4
    
    do
        int32_t* i_2 = i[2]
        int32_t ecx = *i
        int32_t edx_1 = arg3 + ecx
        arg1 = i[1]
        int32_t ecx_2 = arg1 + arg2
        int32_t var_54_1 = arg1
        
        if (edx_1 s> edi_1 || ecx_2 s> edi_1)
            i_4 = i_5
        else
            int32_t edi_2 = 0
            
            if (edx_1 s> esi[9] || ecx_2 s> esi[0xa])
                edi_2 = ecx_2 * edx_1
            
            if (i_5 == 0 || (var_5c s>= edi_2 && (var_5c != edi_2 || var_60_1 s> arg1)))
                arg1 = esi[0x14]
                int32_t var_3c_1 = var_54_1
                esi = arg4
                int32_t edx_3 = ecx_2 + arg1
                int32_t var_34_1 = edx_3
                int128_t* j = *esi
                
                while (j != 0)
                    int128_t xmm0_1 = *j
                    j = j[1].d
                    
                    if (xmm0_1 s< edx_1 + arg1 && xmm0_1:4.d s< edx_3 && xmm0_1:8.d s> ecx
                            && xmm0_1:0xc.d s> var_54_1)
                        goto label_7357c0
                
                uint128_t xmm0_2 = ecx.o
                i_4 = i
                var_5c = edi_2
                i_5 = i_4
                var_30_1 = xmm0_2
                var_60_1 = xmm0_2.q:4.d
            else
            label_7357c0:
                i_4 = i_5
            
            edi_1 = esi[0x10]
        
        i = i_2
    while (i != 0)
    
    if (i_4 != 0)
        void* ecx_3 = i_4[3]
        int32_t eax_2 = i_4[2]
        
        if (ecx_3 == 0)
            esi[3] = eax_2
        else
            *(ecx_3 + 8) = eax_2
        
        void* ecx_4 = i_4[2]
        int32_t eax_3 = i_4[3]
        
        if (ecx_4 == 0)
            esi[4] = eax_3
        else
            *(ecx_4 + 0xc) = eax_3
        
        esi[5] -= 1
        sub_64c080(i_5, 0x10)
        int32_t xmm0_4 = _mm_bsrli_si128(var_30_1, 8)
        int32_t* eax_4 = sub_64bfd0(0x10)
        eax_4[3] += 1
        
        if (*eax_4 == 0)
            sub_64be70(eax_4)
        
        int32_t* ecx_7 = *eax_4
        *eax_4 = *ecx_7
        ecx_7[3] = 0
        *ecx_7 = xmm0_4
        ecx_7[1] = var_60_1
        ecx_7[2] = 0
        ecx_7[3] = esi[4]
        void* eax_9 = esi[4]
        
        if (eax_9 == 0)
            esi[3] = ecx_7
        else
            *(eax_9 + 8) = ecx_7
        
        uint128_t xmm0_5 = var_30_1
        esi[5] += 1
        int32_t var_54_2 = xmm0_5
        esi[4] = ecx_7
        int32_t xmm0_6 = _mm_bsrli_si128(xmm0_5, 0xc)
        int32_t* eax_10 = sub_64bfd0(0x10)
        eax_10[3] += 1
        
        if (*eax_10 == 0)
            sub_64be70(eax_10)
        
        int32_t* ecx_9 = *eax_10
        *eax_10 = *ecx_9
        ecx_9[3] = 0
        *ecx_9 = var_54_2
        ecx_9[1] = xmm0_6
        ecx_9[2] = 0
        ecx_9[3] = esi[4]
        void* eax_15 = esi[4]
        
        if (eax_15 == 0)
            esi[3] = ecx_9
        else
            *(eax_15 + 8) = ecx_9
        
        esi[5] += 1
        esi[4] = ecx_9
        int32_t* eax_16 = sub_64bfd0(0x18)
        eax_16[3] += 1
        
        if (*eax_16 == 0)
            sub_64be70(eax_16)
        
        uint128_t* ecx_11 = *eax_16
        *eax_16 = *ecx_11
        *(ecx_11 + 0x14) = 0
        *ecx_11 = var_30_1
        ecx_11[1].d = 0
        *(ecx_11 + 0x14) = esi[1]
        void* eax_19 = esi[1]
        
        if (eax_19 == 0)
            *esi = ecx_11
        else
            *(eax_19 + 0x10) = ecx_11
        
        esi[2] += 1
        esi[1] = ecx_11
        int32_t eax_20 = esi[9]
        int32_t ecx_13 = arg3 + var_54_2
        
        if (eax_20 s<= ecx_13)
            eax_20 = ecx_13
        
        esi[9] = eax_20
        int32_t ecx_15 = arg2 + var_60_1
        int32_t eax_21 = esi[0xa]
        
        if (eax_21 s<= ecx_15)
            eax_21 = ecx_15
        
        esi[0xa] = eax_21
        *arg5 = var_54_2
        arg5[1] = var_60_1
        int128_t* j_1 = esi[2] & 0x8000003f
        bool cond:1 = j_1 != 0
        
        if (j_1 s< 0)
            cond:1 = ((j_1 - 1) | 0xffffffc0) != 0xffffffff
        
        if (not(cond:1))
            int32_t* i_3
            
            for (int32_t* i_1 = esi[3]; i_1 != 0; i_1 = i_3)
                int32_t edx_5 = *i_1
                int32_t edi_9 = i_1[1]
                int32_t eax_27 = esi[0x14]
                i_3 = i_1[2]
                j_1 = *esi
                
                while (j_1 != 0)
                    int128_t xmm0_7 = *j_1
                    j_1 = j_1[1].d
                    
                    if (xmm0_7 s< eax_27 + 1 + edx_5 && xmm0_7:4.d s< eax_27 + 1 + edi_9
                            && xmm0_7:8.d s> edx_5 && xmm0_7:0xc.d s> edi_9)
                        void* ecx_21 = i_1[3]
                        int32_t eax_30 = i_1[2]
                        
                        if (ecx_21 == 0)
                            esi[3] = eax_30
                        else
                            *(ecx_21 + 8) = eax_30
                        
                        void* ecx_22 = i_1[2]
                        int32_t eax_31 = i_1[3]
                        
                        if (ecx_22 == 0)
                            esi[4] = eax_31
                        else
                            *(ecx_22 + 0xc) = eax_31
                        
                        esi[5] -= 1
                        sub_64c080(i_1, 0x10)
                        break
        
        j_1.b = 1
        return j_1

arg1.b = 0
return arg1
