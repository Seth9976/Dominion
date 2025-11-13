// 函数: sub_638820
// 地址: 0x638820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* ebx = arg2
int128_t* var_c = ebx
int32_t edi_1 = arg5
void* var_14 = arg4 - 0x38
int128_t* esi_6 = ebx + (((arg4 - ebx) s/ 0x38) s>> 1) * 0x38
int32_t eax_5 = (arg4 - 0x38 - ebx) s/ 0x38

if (eax_5 s> 0x28)
    int32_t eax_7 = (eax_5 + 1) s>> 3
    int32_t edi_4 = eax_7 * 0x38
    int128_t* eax_8 = &var_c[eax_7 * 7]
    int128_t* edx_6 = edi_4 + var_c
    sub_6396d0(eax_8, edx_6, var_c, eax_8, arg5)
    int128_t* eax_9 = edi_4 + esi_6
    sub_6396d0(eax_9, esi_6, esi_6 - edi_4, eax_9, arg5)
    int128_t* ecx_7 = var_14
    void* eax_11 = ecx_7 - edi_4
    edi_1 = arg5
    var_14 = eax_11
    sub_6396d0(eax_11, eax_11, ecx_7 - eax_7 * 0x70, ecx_7, edi_1)
    ebx = edx_6

sub_6396d0(var_14, esi_6, ebx, var_14, edi_1)
void* ebx_4 = esi_6 + 0x38
void* var_8 = ebx_4

if (var_c u< esi_6)
    do
        if (edi_1(esi_6 - 0x38, esi_6) != 0)
            break
        
        if (edi_1(esi_6, esi_6 - 0x38) != 0)
            break
        
        esi_6 -= 0x38
    while (var_c u< esi_6)
    
    ebx_4 = var_8

void* ecx_10 = arg4

if (ebx_4 u< ecx_10)
    do
        if (edi_1(ebx_4, esi_6) != 0)
            ecx_10 = arg4
            break
        
        ecx_10 = arg4
        
        if (edi_1(esi_6, ebx_4) != 0)
            break
        
        ebx_4 += 0x38
    while (ebx_4 u< ecx_10)
    
    var_8 = ebx_4

void* edi_5 = ebx_4
int128_t* eax_18 = esi_6
label_63895c:
int128_t* var_10_2 = eax_18

while (true)
    void* var_14_2 = edi_5
    
    while (true)
        if (edi_5 u< ecx_10)
            do
                if (arg5(esi_6, edi_5) == 0)
                    if (arg5(edi_5, esi_6) != 0)
                        break
                    
                    if (ebx_4 != edi_5)
                        int128_t xmm1_1 = *ebx_4
                        int128_t xmm2_1 = *(ebx_4 + 0x10)
                        int128_t xmm3_1 = *(ebx_4 + 0x20)
                        int64_t xmm4_1 = *(ebx_4 + 0x30)
                        *ebx_4 = *edi_5
                        *(ebx_4 + 0x10) = *(edi_5 + 0x10)
                        *(ebx_4 + 0x20) = *(edi_5 + 0x20)
                        *(ebx_4 + 0x30) = *(edi_5 + 0x30)
                        *edi_5 = xmm1_1
                        *(edi_5 + 0x10) = xmm2_1
                        *(edi_5 + 0x20) = xmm3_1
                        *(edi_5 + 0x30) = xmm4_1
                    
                    ebx_4 += 0x38
                
                edi_5 += 0x38
            while (edi_5 u< arg4)
            
            eax_18 = var_10_2
            var_8 = ebx_4
            var_14_2 = edi_5
        
        bool cond:0_1 = eax_18 != var_c
        
        if (eax_18 u> var_c)
            int128_t* ebx_6 = var_10_2
            void* edi_6 = ebx_6 - 0x38
            
            do
                if (arg5(edi_6, esi_6) == 0)
                    if (arg5(esi_6, edi_6) != 0)
                        break
                    
                    esi_6 -= 0x38
                    
                    if (esi_6 != edi_6)
                        int128_t xmm1_2 = *esi_6
                        int128_t xmm2_2 = esi_6[1]
                        int128_t xmm3_2 = esi_6[2]
                        int64_t xmm4_2 = esi_6[3].q
                        *esi_6 = *edi_6
                        esi_6[1] = *(edi_6 + 0x10)
                        esi_6[2] = *(edi_6 + 0x20)
                        esi_6[3].q = *(edi_6 + 0x30)
                        *edi_6 = xmm1_2
                        *(edi_6 + 0x10) = xmm2_2
                        *(edi_6 + 0x20) = xmm3_2
                        *(edi_6 + 0x30) = xmm4_2
                
                ebx_6 -= 0x38
                edi_6 -= 0x38
            while (var_c u< ebx_6)
            
            edi_5 = var_14_2
            var_10_2 = ebx_6
            eax_18 = var_10_2
            cond:0_1 = eax_18 != var_c
            ebx_4 = var_8
        
        ecx_10 = arg4
        
        if (not(cond:0_1))
            if (edi_5 == ecx_10)
                *arg3 = esi_6
                arg3[1] = ebx_4
                return arg3
            
            if (ebx_4 != edi_5)
                int128_t xmm1_3 = *esi_6
                int128_t xmm2_3 = esi_6[1]
                int128_t xmm3_3 = esi_6[2]
                int64_t xmm4_3 = esi_6[3].q
                *esi_6 = *ebx_4
                esi_6[1] = *(ebx_4 + 0x10)
                esi_6[2] = *(ebx_4 + 0x20)
                esi_6[3].q = *(ebx_4 + 0x30)
                *ebx_4 = xmm1_3
                *(ebx_4 + 0x10) = xmm2_3
                *(ebx_4 + 0x20) = xmm3_3
                *(ebx_4 + 0x30) = xmm4_3
            
            ebx_4 += 0x38
            int128_t xmm1_4 = *esi_6
            var_8 = ebx_4
            int128_t xmm2_4 = esi_6[1]
            int128_t xmm3_4 = esi_6[2]
            int64_t xmm4_4 = esi_6[3].q
            *esi_6 = *edi_5
            esi_6[1] = *(edi_5 + 0x10)
            esi_6[2] = *(edi_5 + 0x20)
            esi_6[3].q = *(edi_5 + 0x30)
            esi_6 += 0x38
            *edi_5 = xmm1_4
            *(edi_5 + 0x10) = xmm2_4
            *(edi_5 + 0x20) = xmm3_4
            *(edi_5 + 0x30) = xmm4_4
            edi_5 += 0x38
            break
        
        eax_18 -= 0x38
        var_10_2 = eax_18
        
        if (edi_5 != ecx_10)
            int128_t xmm1_7 = *edi_5
            int128_t xmm2_7 = *(edi_5 + 0x10)
            int128_t xmm3_7 = *(edi_5 + 0x20)
            int64_t xmm4_7 = *(edi_5 + 0x30)
            *edi_5 = *eax_18
            *(edi_5 + 0x10) = eax_18[1]
            *(edi_5 + 0x20) = eax_18[2]
            *(edi_5 + 0x30) = eax_18[3].q
            edi_5 += 0x38
            *eax_18 = xmm1_7
            eax_18[1] = xmm2_7
            eax_18[2] = xmm3_7
            eax_18[3].q = xmm4_7
            goto label_63895c
        
        esi_6 -= 0x38
        
        if (eax_18 != esi_6)
            int128_t xmm1_5 = *eax_18
            int128_t xmm2_5 = eax_18[1]
            int128_t xmm3_5 = eax_18[2]
            int64_t xmm4_5 = eax_18[3].q
            *eax_18 = *esi_6
            eax_18[1] = esi_6[1]
            eax_18[2] = esi_6[2]
            eax_18[3].q = esi_6[3].q
            *esi_6 = xmm1_5
            esi_6[1] = xmm2_5
            esi_6[2] = xmm3_5
            esi_6[3].q = xmm4_5
        
        int128_t xmm0_21 = *(ebx_4 - 0x38)
        ebx_4 -= 0x38
        int128_t xmm1_6 = *esi_6
        var_8 = ebx_4
        int128_t xmm2_6 = esi_6[1]
        int128_t xmm3_6 = esi_6[2]
        int64_t xmm4_6 = esi_6[3].q
        *esi_6 = xmm0_21
        esi_6[1] = *(ebx_4 + 0x10)
        esi_6[2] = *(ebx_4 + 0x20)
        esi_6[3].q = *(ebx_4 + 0x30)
        *ebx_4 = xmm1_6
        *(ebx_4 + 0x10) = xmm2_6
        *(ebx_4 + 0x20) = xmm3_6
        *(ebx_4 + 0x30) = xmm4_6
