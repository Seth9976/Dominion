// 函数: sub_758e30
// 地址: 0x758e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg7
int32_t edi = *(arg2 + 0x24)
int32_t eax_2 = esi + (arg5 s>> 1 << 1)
void* eax_3 = *(arg2 + 4)
int32_t edx = *(arg2 + 0x28)
void* ebx = *(eax_3 + 4)
int32_t ebx_1 = *(arg3 + 0x20)
int32_t ebx_2 = *(arg3 + 0x18)
int32_t var_18 = ebx_2

if (ebx_2 != 0)
    eax_3 = nullptr
    int32_t edx_1 = 0
    int32_t edi_2 = 0
    int32_t var_c_1 = 0
    void* ecx_2 = nullptr
    arg5 = nullptr
    
    if (arg4 s> 0)
        int32_t eax_6
        
        if (arg4 + 1 s>= 4)
            int32_t i_1 = ((arg4 - 3) u>> 2) + 1
            eax_6 = i_1 << 2
            int32_t i
            
            do
                int32_t eax_7 = *(ebx_2 + (ecx_2 << 2))
                void* ecx_3 = ecx_2 + eax_7
                edi_2 += eax_7
                int32_t eax_8 = *(ebx_2 + (ecx_3 << 2) + 4)
                var_c_1 += eax_8
                ecx_2 = ecx_3 + 2 + eax_8
                i = i_1
                i_1 -= 1
            while (i != 1)
            edx_1 = var_c_1
        
        if (arg4 + 1 s< 4 || eax_6 s< arg4)
            void* eax_10 = *(ebx_2 + (ecx_2 << 2))
            arg5 = eax_10
            ecx_2 = ecx_2 + 1 + eax_10
        
        eax_3 = arg5 + edx_1 + edi_2
    
    int32_t edx_6 = *(ebx + 8)
    void* edx_7 = eax_3 * 3
    arg5 = edx_7
    
    if (edi != 0)
        eax_3 *= 2
        void* var_c_3 = eax_3
        
        if (esi s< eax_2)
            eax_3 = arg6
            
            do
                void* edi_5 = *(ebx_2 + (ecx_2 << 2))
                int32_t xmm5_3 = (zx.o(0)).d
                ecx_2 += 1
                void* edi_6 = edi_5 + ecx_2
                int32_t xmm6_2 = (zx.o(0)).d
                
                if (ecx_2 s< edi_6)
                    float* edx_9 = ebx_1 + 8 + (edx_7 << 2)
                    void* esi_3 = var_c_3
                    arg5 += edi_5 * 3
                    
                    do
                        int32_t eax_25 = *(ebx_2 + (ecx_2 << 2))
                        ecx_2 += 1
                        void* eax_26 = *(edx_6 + (eax_25 << 2))
                        float xmm4_8 = *(edx + (esi_3 << 2) + 4) + edx_9[-1]
                        float xmm3_8 = edx_9[-2] f+ *(edx + (esi_3 << 2))
                        ebx_2 = var_18
                        esi_3 += 2
                        float xmm1_14 = (xmm4_8 f* *(eax_26 + 0x54)
                            + xmm3_8 f* *(eax_26 + 0x50) f+ *(eax_26 + 0x58)) * *edx_9
                        float xmm4_12 = (xmm4_8 f* *(eax_26 + 0x60)
                            + xmm3_8 f* *(eax_26 + 0x5c) f+ *(eax_26 + 0x64)) * *edx_9
                        edx_9 = &edx_9[3]
                        xmm5_3 = xmm5_3 f+ xmm1_14
                        xmm6_2 = xmm6_2 f+ xmm4_12
                    while (ecx_2 s< edi_6)
                    
                    eax_3 = arg6
                    edx_7 = arg5
                    var_c_3 = esi_3
                    esi = arg7
                
                *(eax_3 + (esi << 2)) = xmm5_3
                *(eax_3 + (esi << 2) + 4) = xmm6_2
                esi += 2
                arg7 = esi
            while (esi s< eax_2)
    else if (esi s< eax_2)
        void* eax_12 = arg6
        
        do
            void* edi_3 = *(ebx_2 + (ecx_2 << 2))
            int32_t xmm5_2 = (zx.o(0)).d
            ecx_2 += 1
            void* edi_4 = edi_3 + ecx_2
            int32_t xmm6_1 = (zx.o(0)).d
            
            if (ecx_2 s< edi_4)
                float* edx_8 = ebx_1 + 8 + (edx_7 << 2)
                ebx_2 = var_18
                arg5 += edi_3 * 3
                
                do
                    int32_t eax_18 = *(ebx_2 + (ecx_2 << 2))
                    ecx_2 += 1
                    float xmm3_5 = edx_8[-2]
                    float xmm4_2 = edx_8[-1]
                    void* eax_19 = *(edx_6 + (eax_18 << 2))
                    float xmm1_9 = (xmm4_2 f* *(eax_19 + 0x54)
                        + xmm3_5 f* *(eax_19 + 0x50) f+ *(eax_19 + 0x58)) * *edx_8
                    float xmm4_6 = (xmm4_2 f* *(eax_19 + 0x60)
                        + xmm3_5 f* *(eax_19 + 0x5c) f+ *(eax_19 + 0x64)) * *edx_8
                    edx_8 = &edx_8[3]
                    xmm5_2 = xmm5_2 f+ xmm1_9
                    xmm6_1 = xmm6_1 f+ xmm4_6
                while (ecx_2 s< edi_4)
                
                esi = arg7
                eax_12 = arg6
                edx_7 = arg5
            
            *(eax_12 + (esi << 2)) = xmm5_2
            *(eax_12 + (esi << 2) + 4) = xmm6_1
            esi += 2
            arg7 = esi
        while (esi s< eax_2)
        
        return eax_12
else
    float xmm4_1 = *(eax_3 + 0x58)
    
    if (edi s<= 0)
        edx = *(arg3 + 0x20)
    
    float xmm5_1 = *(eax_3 + 0x64)
    
    if (esi s< eax_2)
        int32_t ecx_1 = arg4 << 2
        
        do
            float xmm2_1 = *(ecx_1 + edx)
            float xmm3_1 = *(ecx_1 + edx + 4)
            ecx_1 += 8
            *(arg6 + (esi << 2)) = xmm3_1 f* *(eax_3 + 0x54) + xmm2_1 f* *(eax_3 + 0x50) + xmm4_1
            *(arg6 + (esi << 2) + 4) =
                xmm3_1 f* *(eax_3 + 0x60) + xmm2_1 f* *(eax_3 + 0x5c) + xmm5_1
            esi += 2
        while (esi s< eax_2)

return eax_3
