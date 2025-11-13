// 函数: sub_595ce0
// 地址: 0x595ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* esi_6 = arg2 + (((arg4 - arg2) s/ 0x1c) s>> 1) * 0x1c
int32_t edi_1 = arg5
int128_t* ecx_4 = arg2
int32_t eax_4 = (arg4 - 0x1c - arg2) s/ 0x1c
void* eax_11

if (eax_4 s<= 0x28)
    eax_11 = arg4 - 0x1c
else
    int32_t eax_6 = (eax_4 + 1) s>> 3
    int32_t ebx_4 = eax_6 * 0x38
    int32_t edi_4 = eax_6 * 0x1c
    int128_t* eax_7 = ebx_4 + ecx_4
    int128_t* edx_6 = edi_4 + ecx_4
    sub_597600(eax_7, edx_6, ecx_4, eax_7, arg5)
    int128_t* eax_8 = edi_4 + esi_6
    sub_597600(eax_8, esi_6, esi_6 - edi_4, eax_8, arg5)
    void* eax_10 = arg4 - 0x1c - edi_4
    edi_1 = arg5
    sub_597600(eax_10, eax_10, arg4 - 0x1c - ebx_4, arg4 - 0x1c, edi_1)
    eax_11 = eax_10
    ecx_4 = edx_6

sub_597600(eax_11, esi_6, ecx_4, eax_11, edi_1)
void* ebx_5 = esi_6 + 0x1c
void* var_c = ebx_5

if (arg2 u< esi_6)
    do
        if (edi_1(esi_6 - 0x1c, esi_6) != 0)
            break
        
        if (edi_1(esi_6, esi_6 - 0x1c) != 0)
            break
        
        esi_6 -= 0x1c
    while (arg2 u< esi_6)
    
    ebx_5 = var_c

void* eax_17 = arg4

if (ebx_5 u< eax_17)
    do
        if (edi_1(ebx_5, esi_6) != 0)
            eax_17 = arg4
            break
        
        eax_17 = arg4
        
        if (edi_1(esi_6, ebx_5) != 0)
            break
        
        ebx_5 += 0x1c
    while (ebx_5 u< eax_17)
    
    var_c = ebx_5

void* edi_5 = ebx_5
int128_t* edx_10 = esi_6
label_595e1c:
int128_t* var_10_2 = edx_10

while (true)
    void* var_14_3 = edi_5
    
    while (true)
        if (edi_5 u< eax_17)
            do
                if (arg5(esi_6, edi_5) == 0)
                    if (arg5(edi_5, esi_6) != 0)
                        break
                    
                    if (ebx_5 != edi_5)
                        int32_t ecx_9 = *(ebx_5 + 0x18)
                        int128_t xmm1_1 = *ebx_5
                        int64_t xmm2_1 = *(ebx_5 + 0x10)
                        *ebx_5 = *edi_5
                        *(ebx_5 + 0x10) = *(edi_5 + 0x10)
                        *(ebx_5 + 0x18) = *(edi_5 + 0x18)
                        *edi_5 = xmm1_1
                        *(edi_5 + 0x10) = xmm2_1
                        *(edi_5 + 0x18) = ecx_9
                    
                    ebx_5 += 0x1c
                
                edi_5 += 0x1c
            while (edi_5 u< arg4)
            
            edx_10 = var_10_2
            var_c = ebx_5
            var_14_3 = edi_5
        
        bool cond:1_1 = edx_10 != arg2
        
        if (edx_10 u> arg2)
            int128_t* ebx_7 = var_10_2
            void* edi_6 = ebx_7 - 0x1c
            int128_t* eax_25
            
            do
                if (arg5(edi_6, esi_6) == 0)
                    if (arg5(esi_6, edi_6) != 0)
                        eax_25 = arg2
                        break
                    
                    esi_6 -= 0x1c
                    
                    if (esi_6 != edi_6)
                        int32_t ecx_10 = *(esi_6 + 0x18)
                        int128_t xmm1_2 = *esi_6
                        int64_t xmm2_2 = esi_6[1].q
                        *esi_6 = *edi_6
                        esi_6[1].q = *(edi_6 + 0x10)
                        *(esi_6 + 0x18) = *(edi_6 + 0x18)
                        *edi_6 = xmm1_2
                        *(edi_6 + 0x10) = xmm2_2
                        *(edi_6 + 0x18) = ecx_10
                
                eax_25 = arg2
                ebx_7 -= 0x1c
                edi_6 -= 0x1c
            while (eax_25 u< ebx_7)
            
            edi_5 = var_14_3
            var_10_2 = ebx_7
            edx_10 = var_10_2
            cond:1_1 = edx_10 != eax_25
            ebx_5 = var_c
        
        if (not(cond:1_1))
            if (edi_5 == arg4)
                *arg3 = esi_6
                arg3[1] = ebx_5
                return arg3
            
            if (ebx_5 != edi_5)
                int32_t ecx_11 = *(esi_6 + 0x18)
                int128_t xmm1_3 = *esi_6
                int64_t xmm2_3 = esi_6[1].q
                *esi_6 = *ebx_5
                esi_6[1].q = *(ebx_5 + 0x10)
                *(esi_6 + 0x18) = *(ebx_5 + 0x18)
                *ebx_5 = xmm1_3
                *(ebx_5 + 0x10) = xmm2_3
                *(ebx_5 + 0x18) = ecx_11
            
            int32_t ecx_12 = *(esi_6 + 0x18)
            ebx_5 += 0x1c
            int128_t xmm1_4 = *esi_6
            var_c = ebx_5
            int64_t xmm2_4 = esi_6[1].q
            *esi_6 = *edi_5
            esi_6[1].q = *(edi_5 + 0x10)
            *(esi_6 + 0x18) = *(edi_5 + 0x18)
            esi_6 += 0x1c
            eax_17 = arg4
            *edi_5 = xmm1_4
            *(edi_5 + 0x10) = xmm2_4
            *(edi_5 + 0x18) = ecx_12
            edi_5 += 0x1c
            break
        
        edx_10 -= 0x1c
        var_10_2 = edx_10
        
        if (edi_5 != arg4)
            int32_t ecx_15 = *(edi_5 + 0x18)
            int128_t xmm1_7 = *edi_5
            int64_t xmm2_7 = *(edi_5 + 0x10)
            *edi_5 = *edx_10
            *(edi_5 + 0x10) = edx_10[1].q
            *(edi_5 + 0x18) = *(edx_10 + 0x18)
            edi_5 += 0x1c
            eax_17 = arg4
            *edx_10 = xmm1_7
            edx_10[1].q = xmm2_7
            *(edx_10 + 0x18) = ecx_15
            goto label_595e1c
        
        esi_6 -= 0x1c
        
        if (edx_10 != esi_6)
            int32_t ecx_13 = *(edx_10 + 0x18)
            int128_t xmm1_5 = *edx_10
            int64_t xmm2_5 = edx_10[1].q
            *edx_10 = *esi_6
            edx_10[1].q = esi_6[1].q
            *(edx_10 + 0x18) = *(esi_6 + 0x18)
            *esi_6 = xmm1_5
            esi_6[1].q = xmm2_5
            *(esi_6 + 0x18) = ecx_13
        
        int128_t xmm0_11 = *(ebx_5 - 0x1c)
        int32_t ecx_14 = *(esi_6 + 0x18)
        ebx_5 -= 0x1c
        int128_t xmm1_6 = *esi_6
        var_c = ebx_5
        int64_t xmm2_6 = esi_6[1].q
        *esi_6 = xmm0_11
        esi_6[1].q = *(ebx_5 + 0x10)
        *(esi_6 + 0x18) = *(ebx_5 + 0x18)
        eax_17 = arg4
        *ebx_5 = xmm1_6
        *(ebx_5 + 0x10) = xmm2_6
        *(ebx_5 + 0x18) = ecx_14
