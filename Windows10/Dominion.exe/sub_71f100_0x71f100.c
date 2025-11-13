// 函数: sub_71f100
// 地址: 0x71f100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg5
uint32_t ebx_1 = arg6 * arg4
uint32_t var_28 = arg2
char* var_1c = esi
int32_t var_c = 0x474e5089
int32_t var_8 = 0xa1a0a0d
uint32_t var_40 = ebx_1
int128_t var_6c
__builtin_memcpy(&var_6c, 
    "\xff\xff\xff\xff\x00\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00", 0x14)

if (arg2 != 0)
    var_40 = ebx_1
else
    var_28 = ebx_1

uint32_t _Size = esi * (ebx_1 + 1)
int32_t i_5 = malloc(_Size)

if (i_5 != 0)
    char* eax_2 = malloc(ebx_1)
    
    if (eax_2 != 0)
        void* edx_1 = nullptr
        void* var_10 = nullptr
        
        if (esi s> 0)
            int32_t i_3 = i_5
            char* i_4 = i_3
            
            do
                int32_t i = 0
                int32_t i_2 = 0
                int32_t var_4c_1 = 0x7fffffff
                int32_t i_1 = 0
                
                do
                    sub_71eda0(i_3, var_28, arg3, arg4, esi, edx_1, arg6, i, eax_2)
                    int32_t esi_1 = 0
                    void* j = nullptr
                    int32_t var_44_1 = 0
                    
                    if (ebx_1 s> 0 && ebx_1 u>= 8 && data_cc8d30 s>= 2)
                        int32_t eax_6 = ebx_1 & 0x80000007
                        
                        if (eax_6 s< 0)
                            eax_6 = ((eax_6 - 1) | 0xfffffff8) + 1
                        
                        int32_t xmm1_1[0x4] = zx.o(0)
                        int32_t xmm2_1[0x4] = zx.o(0)
                        
                        do
                            xmm1_1 = _mm_add_epi32(xmm1_1, 
                                _mm_abs_epi32(__pmovsxbd_xmmdq_memd(*(eax_2 + j))))
                            int32_t xmm0_3[0x4] = __pmovsxbd_xmmdq_memd(*(eax_2 + j + 4))
                            j += 8
                            xmm2_1 = _mm_add_epi32(xmm2_1, _mm_abs_epi32(xmm0_3))
                        while (j s< ebx_1 - eax_6)
                        
                        int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
                        int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
                        esi_1 = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
                        var_44_1 = esi_1
                    
                    int32_t var_20_1 = 0
                    int32_t var_24_1 = 0
                    
                    if (j s< ebx_1)
                        int32_t eax_21
                        int32_t edx_7
                        
                        if (ebx_1 - j s< 2)
                            edx_7:eax_21 = sx.q(*(j + eax_2))
                            esi_1 += (eax_21 ^ edx_7) - edx_7
                        else
                            int32_t ebx_2 = 0
                            int32_t esi_2 = 0
                            
                            do
                                int32_t eax_13
                                int32_t edx_5
                                edx_5:eax_13 = sx.q(*(eax_2 + j))
                                ebx_2 += (eax_13 ^ edx_5) - edx_5
                                int32_t eax_17
                                int32_t edx_6
                                edx_6:eax_17 = sx.q(*(eax_2 + j + 1))
                                j += 2
                                esi_2 += (eax_17 ^ edx_6) - edx_6
                            while (j s< ebx_1 - 1)
                            
                            var_20_1 = ebx_2
                            ebx_1 = var_40
                            var_24_1 = esi_2
                            esi_1 = var_44_1
                            
                            if (j s< ebx_1)
                                edx_7:eax_21 = sx.q(*(j + eax_2))
                                esi_1 += (eax_21 ^ edx_7) - edx_7
                        esi_1 += var_20_1 + var_24_1
                    
                    i_3 = i_1
                    
                    if (esi_1 s>= var_4c_1)
                        i_3 = i_2
                    
                    i = i_1 + 1
                    i_2 = i_3
                    i_1 = i
                    
                    if (esi_1 s>= var_4c_1)
                        esi_1 = var_4c_1
                    
                    edx_1 = var_10
                    var_4c_1 = esi_1
                    esi = var_1c
                while (i s< 5)
                
                if (i != i_3)
                    sub_71eda0(i_3, var_28, arg3, arg4, esi, edx_1, arg6, i_3, eax_2)
                    i = i_2
                
                *i_4 = i.b
                memcpy(&i_4[1], eax_2, ebx_1)
                i_3 = ebx_1 + 1
                i_4 = &i_4[i_3]
                edx_1 = var_10 + 1
                var_10 = edx_1
            while (edx_1 s< esi)
        
        free(eax_2)
        int32_t var_80_4 = 8
        uint32_t count
        void* eax_29 = sub_71df00(&count, _Size, i_5, &count)
        free(i_5)
        
        if (eax_29 != 0)
            int32_t* result = malloc(count + 0x39)
            
            if (result != 0)
                *arg7 = count + 0x39
                *result = var_c
                result[1] = var_8
                result[2] = 0xd000000
                __builtin_strncpy(&result[3], "IHDR", 4)
                result[4].b = (arg4 s>> 0x18).b
                *(result + 0x11) = (arg4 s>> 0x10).b
                *(result + 0x12) = (arg4 s>> 8).b
                *(result + 0x13) = arg4.b
                result[5].b = (var_1c s>> 0x18).b
                *(result + 0x15) = (var_1c s>> 0x10).b
                *(result + 0x16) = (var_1c s>> 8).b
                *(result + 0x17) = var_1c.b
                result[6].b = 8
                *(result + 0x19) = *(&var_6c + (arg6 << 2))
                *(result + 0x1a) = 0
                result[7].b = 0
                var_10 = result + 0x1d
                sub_71ed40(&var_10, 0xd)
                void* esi_4 = var_10
                *esi_4 = (count s>> 0x18).b
                *(esi_4 + 1) = (count s>> 0x10).b
                *(esi_4 + 2) = (count s>> 8).b
                *(esi_4 + 3) = count.b
                __builtin_strncpy(esi_4 + 4, "IDAT", 4)
                memmove(esi_4 + 8, eax_29, count)
                var_10 = count + esi_4 + 8
                free(eax_29)
                sub_71ed40(&var_10, count)
                void* ecx_14 = var_10
                *ecx_14 = 0
                __builtin_strncpy(ecx_14 + 4, "IEND", 4)
                var_10 = ecx_14 + 8
                sub_71ed40(&var_10, 0)
                return result
    else
        free(i_5)

return 0
