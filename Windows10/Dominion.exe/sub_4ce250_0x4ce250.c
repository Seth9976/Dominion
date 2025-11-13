// 函数: sub_4ce250
// 地址: 0x4ce250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cf65b8
float var_1c = 0f
int32_t ebx = arg1
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x18)))
void** esi = &data_8dc8a0
float xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax + 0x14))) - 0f

if (_mm_cvtepi32_ps(zx.o(data_8c40ac)) / _mm_cvtepi32_ps(zx.o(data_8c40b0)) - 0.00999999978f
        > xmm2_2 / (xmm0_1 - 0f))
    esi = &data_8dc8ac

uint32_t eax_1 = sub_64e7a0(ebx)
sub_665db0(eax_1, esi, eax_1, 0x3f800000, 0xffffffff, 0)
int32_t ecx_2 = data_1597cd4
int32_t eax_16
int32_t performanceCount

if (ecx_2 != 0)
    if (ecx_2 == 1)
        QueryPerformanceCounter(&performanceCount)
        
        if (data_1597ccc != 0)
            while (sub_6a0e80() s< 0xa)
                int32_t* ecx_5 = data_1597cc4
                void* eax_11 = ecx_5[1]
                data_1597cc4 = eax_11
                
                if (eax_11 == 0)
                    data_1597cc8 = 0
                else
                    *(eax_11 + 8) = 0
                
                int32_t* esi_3 = *ecx_5
                data_1597ccc -= 1
                sub_64c080(ecx_5, 0xc)
                sub_6a2bc0(esi_3)
                int32_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                int32_t performanceCount_2 = performanceCount_1
                int32_t var_14
                int32_t var_c
                
                if (sub_63c000(performanceCount_2 - performanceCount, 
                        sbb.d(var_c, var_14, performanceCount_2 u< performanceCount)) s> 0xa)
                    break
                
                if (data_1597ccc == 0)
                    goto label_4ce454
        
        if (data_1597ccc == 0 || data_1597ccc == 0)
        label_4ce454:
            int32_t eax_15 = sub_6a0e80()
            
            if (eax_15 == 0)
                data_1597cd4 = 3
                data_8db598 = 2
                sub_4d46e0(eax_15 + 1, 0)
                data_8db660 = 3
        
        ebx = arg1
        ecx_2 = 2
        data_1597cd4 = 2
    
    eax_16 = data_1597cd0
else
    if (sub_62b260(&data_1597cc4) == 0)
        int32_t* eax_3 = data_147ac2c
        int32_t i = 0
        int32_t* eax_4 = *eax_3
        
        do
            int32_t performanceCount_3 = *eax_4
            
            if (performanceCount_3 != 0)
                performanceCount = performanceCount_3
                
                do
                    void* edi_1 = sub_6a01a0(&performanceCount)[1]
                    
                    if (*(edi_1 + 4) != 4)
                        int32_t* eax_6 = sub_64bfd0(0xc)
                        eax_6[3] += 1
                        
                        if (*eax_6 == 0)
                            sub_64be70(eax_6)
                        
                        void** ecx_4 = *eax_6
                        *eax_6 = *ecx_4
                        ecx_4[2] = 0
                        *ecx_4 = edi_1
                        ecx_4[1] = 0
                        ecx_4[2] = data_1597cc8
                        void* eax_9 = data_1597cc8
                        
                        if (eax_9 == 0)
                            data_1597cc4 = ecx_4
                        else
                            *(eax_9 + 4) = ecx_4
                        
                        data_1597ccc += 1
                        data_1597cc8 = ecx_4
                while (performanceCount != 0)
                
                break
            
            i += 1
            eax_4 = &eax_4[1]
        while (i u<= eax_3[1])
    
    eax_16 = data_1597ccc
    ecx_2 = 1
    data_1597cd0 = eax_16
    data_1597cd4 = 1

if (eax_16 != 0)
    uint128_t xmm1_4 = zx.o(data_1597ccc)
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_16))
    var_1c = 1f - _mm_cvtepi32_ps(xmm1_4) / xmm0_6

if (ecx_2 == 3)
    var_1c = 1f

uint32_t eax_17 = sub_64e7a0(ebx)
return sub_665db0(eax_17, &data_8dc6ec, eax_17, var_1c, 0xffffffff, 0)
