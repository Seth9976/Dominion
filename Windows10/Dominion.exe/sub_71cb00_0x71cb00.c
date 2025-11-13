// 函数: sub_71cb00
// 地址: 0x71cb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i_10 = *(arg1 + 0x14)
void* ecx = *(arg1 + 0x40)
void* eax = *(arg1 + 0x44)
int32_t esi = *(arg1 + 0x6c)
int32_t edi = *(arg1 + 0xa8)
int32_t eax_2 = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
int32_t eax_3 = *(arg1 + 0xb0)
uint32_t eax_5 = *(arg1 + 0xa0) u>> 2
int32_t ebx_1 = *(esi + (arg2 << 3))
int32_t eax_7 = *(arg1 + 0x84) * arg2
int32_t var_38 = ebx_1
int32_t eax_8 = *(esi + (arg2 << 3) + 4)
void* esi_1 = ecx
int32_t eax_10 = *(arg1 + 0x1c) * arg2
memset(*(arg1 + 0xb8), 0, (esi_1 * i_10) << 2)
int32_t edx = 0
void* i_11

if (esi_1 - 1 u> 3)
    if (ebx_1 s<= eax_8)
        int32_t eax_53 = eax_3 - edi
        int32_t var_10_5 = eax_53
        
        do
            void* edi_7 =
                *(arg1 + 0xb4) + ((mods.dp.d(sx.q(eax_53 + ebx_1), *(arg1 + 0xa4)) * eax_5) << 2)
            float xmm1_5 = *(*(arg1 + 0x70) + ((eax_7 + edx) << 2))
            
            if (i_10 s> 0)
                int32_t edx_34 = esi_1 << 2
                void* ebx_2 = nullptr
                int32_t var_3c_1 = edx_34
                void* ecx_20 = edi_7 + 0xc
                void* eax_60 = *(arg1 + 0xb8) + 4
                void* var_2c_1 = eax_60
                void* var_28_1 = ecx_20
                void* i_5 = i_10
                void* i
                
                do
                    int32_t edi_10 = 0
                    
                    if (esi_1 s>= 4)
                        void* edx_35 = ecx_20
                        float* esi_13 = edi_7 - *(arg1 + 0xb8)
                        int32_t j_2 = ((ecx - 4) u>> 2) + 1
                        edi_10 = j_2 << 2
                        int32_t j
                        
                        do
                            *(eax_60 - 4) = xmm1_5 f* *(edx_35 - 0xc) f+ *(eax_60 - 4)
                            *eax_60 = xmm1_5 f* *(esi_13 + eax_60) f+ *eax_60
                            *(eax_60 + 4) = xmm1_5 f* *(edx_35 - 4) f+ *(eax_60 + 4)
                            float xmm0_53 = xmm1_5 f* *edx_35
                            edx_35 += 0x10
                            *(eax_60 + 8) = xmm0_53 f+ *(eax_60 + 8)
                            eax_60 += 0x10
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        esi_1 = ecx
                        eax_60 = var_2c_1
                        ecx_20 = var_28_1
                        edx_34 = var_3c_1
                    
                    if (edi_10 s< esi_1)
                        int32_t ecx_24 = *(arg1 + 0xb8)
                        float* eax_62 = ecx_24 + ((ebx_2 + edi_10) << 2)
                        void* j_3 = esi_1 - edi_10
                        void* j_1
                        
                        do
                            *eax_62 = xmm1_5 f* *(edi_7 - ecx_24 + eax_62) + *eax_62
                            eax_62 = &eax_62[1]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        eax_60 = var_2c_1
                        edx_34 = esi_1 << 2
                        ecx_20 = var_28_1
                    
                    ecx_20 += edx_34
                    eax_60 += edx_34
                    ebx_2 += esi_1
                    var_28_1 = ecx_20
                    i = i_5
                    i_5 -= 1
                    var_2c_1 = eax_60
                while (i != 1)
                ebx_1 = var_38
            
            edx += 1
            ebx_1 += 1
            eax_53 = var_10_5
            var_38 = ebx_1
        while (ebx_1 s<= eax_8)
    
    i_11 = i_10
else
    switch (esi_1)
        case 1
            if (ebx_1 s> eax_8)
                i_11 = i_10
            else
                int32_t eax_17 = eax_3 - edi
                i_11 = i_10
                int32_t var_10_1 = eax_17
                
                do
                    void* esi_3 = *(arg1 + 0xb4)
                        + ((mods.dp.d(sx.q(eax_17 + ebx_1), *(arg1 + 0xa4)) * eax_5) << 2)
                    int32_t edx_6 = 0
                    float xmm1_1 = *(*(arg1 + 0x70) + ((eax_7 + edx) << 2))
                    
                    if (i_11 s>= 4)
                        void* ecx_5 = esi_3 + 0xc
                        void* edx_7 = *(arg1 + 0xb8)
                        void* eax_24 = edx_7 + 4
                        int32_t i_8 = ((i_10 - 4) u>> 2) + 1
                        int32_t edi_3 = i_8 << 2
                        int32_t i_1
                        
                        do
                            *(eax_24 - 4) = xmm1_1 f* *(ecx_5 - 0xc) f+ *(eax_24 - 4)
                            *eax_24 = xmm1_1 f* *(esi_3 - edx_7 + eax_24) f+ *eax_24
                            *(eax_24 + 4) = xmm1_1 f* *(ecx_5 - 4) f+ *(eax_24 + 4)
                            float xmm0_11 = xmm1_1 f* *ecx_5
                            ecx_5 += 0x10
                            *(eax_24 + 8) = xmm0_11 f+ *(eax_24 + 8)
                            eax_24 += 0x10
                            i_1 = i_8
                            i_8 -= 1
                        while (i_1 != 1)
                        edx_6 = edi_3
                        i_11 = i_10
                    
                    if (edx_6 s< i_11)
                        int32_t ecx_6 = *(arg1 + 0xb8)
                        float* eax_26 = ecx_6 + (edx_6 << 2)
                        void* i_6 = i_11 - edx_6
                        void* i_2
                        
                        do
                            *eax_26 = xmm1_1 f* *(esi_3 - ecx_6 + eax_26) + *eax_26
                            eax_26 = &eax_26[1]
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    edx += 1
                    ebx_1 += 1
                    eax_17 = var_10_1
                while (ebx_1 s<= eax_8)
                
                esi_1 = ecx
        case 2
            if (ebx_1 s> eax_8)
                i_11 = i_10
            else
                int32_t eax_28 = eax_3 - edi
                i_11 = i_10
                int32_t var_10_2 = eax_28
                
                do
                    int32_t esi_6 = *(arg1 + 0xb4)
                        + ((mods.dp.d(sx.q(eax_28 + ebx_1), *(arg1 + 0xa4)) * eax_5) << 2)
                    float xmm1_2 = *(*(arg1 + 0x70) + ((eax_7 + edx) << 2))
                    int32_t ecx_10 = 0
                    
                    if (i_11 s> 0)
                        void* edi_5 = *(arg1 + 0xb8)
                        void* eax_34 = edi_5 + 4
                        i_11 = i_10
                        
                        do
                            float xmm0_17 = xmm1_2 f* *(esi_6 + (ecx_10 << 3))
                            ecx_10 += 1
                            *(eax_34 - 4) = xmm0_17 f+ *(eax_34 - 4)
                            *eax_34 = xmm1_2 f* *(esi_6 - edi_5 + eax_34) f+ *eax_34
                            eax_34 += 8
                        while (ecx_10 s< i_11)
                    
                    edx += 1
                    ebx_1 += 1
                    eax_28 = var_10_2
                while (ebx_1 s<= eax_8)
                
                esi_1 = ecx
        case 3
            if (ebx_1 s> eax_8)
                i_11 = i_10
            else
                void* esi_7 = arg1
                int32_t eax_36 = eax_3 - edi
                i_11 = i_10
                int32_t var_10_3 = eax_36
                
                do
                    float* edx_22 = *(esi_7 + 0xb4)
                        + ((mods.dp.d(sx.q(eax_36 + ebx_1), *(esi_7 + 0xa4)) * eax_5) << 2)
                    float xmm1_3 = *(*(esi_7 + 0x70) + ((eax_7 + edx) << 2))
                    
                    if (i_11 s> 0)
                        void* ecx_13 = *(esi_7 + 0xb8)
                        float* esi_9 = edx_22 - ecx_13
                        void* eax_42 = ecx_13 + 4
                        void* i_7 = i_11
                        void* i_3
                        
                        do
                            *(eax_42 - 4) = xmm1_3 * *edx_22 f+ *(eax_42 - 4)
                            *eax_42 = xmm1_3 f* *(esi_9 + eax_42) f+ *eax_42
                            float xmm0_29 = xmm1_3 * edx_22[2]
                            edx_22 = &edx_22[3]
                            *(eax_42 + 4) = xmm0_29 f+ *(eax_42 + 4)
                            eax_42 += 0xc
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                        esi_7 = arg1
                    
                    edx += 1
                    ebx_1 += 1
                    eax_36 = var_10_3
                while (ebx_1 s<= eax_8)
                
                esi_1 = ecx
        case 4
            if (ebx_1 s> eax_8)
                i_11 = i_10
            else
                void* esi_10 = arg1
                int32_t eax_44 = eax_3 - edi
                i_11 = i_10
                int32_t var_10_4 = eax_44
                
                do
                    void* edx_27 = *(esi_10 + 0xb4)
                        + ((mods.dp.d(sx.q(eax_44 + ebx_1), *(esi_10 + 0xa4)) * eax_5) << 2)
                    float xmm1_4 = *(*(esi_10 + 0x70) + ((eax_7 + edx) << 2))
                    
                    if (i_11 s> 0)
                        void* ecx_16 = edx_27 + 0xc
                        void* esi_11 = *(arg1 + 0xb8)
                        void* eax_51 = esi_11 + 4
                        void* i_9 = i_11
                        void* i_4
                        
                        do
                            *(eax_51 - 4) = xmm1_4 f* *(ecx_16 - 0xc) f+ *(eax_51 - 4)
                            *eax_51 = xmm1_4 f* *(edx_27 - esi_11 + eax_51) f+ *eax_51
                            *(eax_51 + 4) = xmm1_4 f* *(ecx_16 - 4) f+ *(eax_51 + 4)
                            float xmm0_41 = xmm1_4 f* *ecx_16
                            ecx_16 += 0x10
                            *(eax_51 + 8) = xmm0_41 f+ *(eax_51 + 8)
                            eax_51 += 0x10
                            i_4 = i_9
                            i_9 -= 1
                        while (i_4 != 1)
                        esi_10 = arg1
                    
                    edx += 1
                    ebx_1 += 1
                    eax_44 = var_10_4
                while (ebx_1 s<= eax_8)
                
                esi_1 = ecx

int32_t* eax_65 = eax_10 + *(arg1 + 0x10)
return sub_71bc80(eax_65, i_11, arg1, esi_1, i_11, eax_65, *(arg1 + 0xb8), esi_1, eax, eax_2)
