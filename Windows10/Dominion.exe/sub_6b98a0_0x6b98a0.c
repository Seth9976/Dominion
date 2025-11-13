// 函数: sub_6b98a0
// 地址: 0x6b98a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
void* esi = arg3
void* var_ec = esi
float xmm0 = *(esi + 0x2e8)
int32_t* ecx_1 = *(esi + 0x2e4)
*(esi + 0x2f0) = xmm0
float xmm1_2 = ecx_1[0x16] f* *(esi + 0x2ec) + xmm0
*(esi + 0x2e8) = xmm1_2

if (xmm1_2 < 1f)
    goto label_6b9948

int32_t* eax_2 = sub_5af880(*ecx_1)
int128_t* eax_3

if (*(*(esi + 0x2dc) * 0x168 + *eax_2 + 0xd9) != 0)
    float xmm0_2 = *(esi + 0x2e8) - 1f
    *(esi + 0x2f4) += 1
    *(esi + 0x2e8) = xmm0_2
label_6b9948:
    int32_t* eax_5
    int32_t edx
    eax_5, edx = sub_5af880(**(esi + 0x2e4))
    void* eax_7 = arg4
    
    if (*(*(esi + 0x2dc) * 0x168 + *eax_5 + 0xe3) != 0)
        int32_t ecx_6 = *(eax_7 + 0xfc)
        int32_t ebx_2 = *(eax_7 + 0xf8) * ecx_6
        
        if (ebx_2 s> 1)
            float xmm0_6 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(ebx_2)) f* *(esi + 0x2e8))
            float xmm0_7
            
            if (0 f<= xmm0_6)
                xmm0_7 = xmm0_6 + 0.5f
            else
                xmm0_7 = xmm0_6 - 0.5f
            
            int32_t ecx_7 = int.d(xmm0_7)
            int32_t esi_1 = ebx_2 - 1
            
            if (ecx_7 s< esi_1)
                esi_1 = ecx_7
            
            esi = var_ec
            arg2[0xe] = mods.dp.d(sx.q(esi_1), ecx_6)
            int32_t eax_11
            int32_t edx_3
            edx_3:eax_11 = sx.q(esi_1)
            edx = mods.dp.d(edx_3:eax_11, *(arg4 + 0xfc))
            arg2[0xd] = divs.dp.d(edx_3:eax_11, *(arg4 + 0xfc))
            eax_7 = arg4
    
    int32_t ebx_8 = 0
    int32_t var_f8_1 = 0xa
    int32_t var_e8_2 = 0x3f800000
    int32_t var_f4_1 = 0x3dcccccd
    float var_f0_1 = 0.100000001f
    int32_t var_fc_1 = 0
    void var_198
    float var_128
    
    if (*(eax_7 + 0x110) s<= 0)
    label_6baaad:
        float xmm1_91 = *(*(var_ec + 0x2e4) + 0x58)
        int128_t* eax_75
        int32_t edx_47
        eax_75, edx_47 = sub_6b9340(&var_128, _mm_unpacklo_ps(xmm1_91 * *arg2, xmm1_91 * arg2[1]), 
            xmm1_91 * arg2[2])
        float xmm6_12 = *(var_ec + 0x298)
        float xmm5_11 = *(var_ec + 0x290)
        float xmm4_12 = *(var_ec + 0x294)
        float xmm2_27[0x4] = *eax_75
        float xmm0_196 = xmm2_27[0] f* *(var_ec + 0x28c)
        float xmm7_14 = _mm_shuffle_ps(xmm2_27, xmm2_27, 0xff)
        float xmm3_20 = _mm_shuffle_ps(xmm2_27, xmm2_27, 0x55)
        float xmm2_28 = _mm_shuffle_ps(xmm2_27, *eax_75, 0xaa)
        float xmm1_107 =
            xmm7_14 * xmm5_11 + xmm3_20 * xmm6_12 + xmm2_28 f* *(var_ec + 0x28c) - *eax_75 * xmm4_12
        uint32_t eax_76 = *(var_ec + 0x2e4)
        float var_18 = xmm7_14 * xmm4_12 + xmm2_28 * xmm6_12 + (*eax_75).d f* xmm5_11
            - xmm3_20 f* *(var_ec + 0x28c)
        *(var_ec + 0x28c) = (xmm7_14 f* *(var_ec + 0x28c) + *eax_75 * xmm6_12 + xmm3_20 * xmm4_12
            - xmm2_28 * xmm5_11).o
        float xmm0_217 = *(eax_76 + 0x58)
        float xmm0_220 = xmm0_217 * arg2[3] * 100f f+ *(var_ec + 0x29c)
        float xmm2_33 = xmm0_217 * arg2[5] * 100f f+ *(var_ec + 0x2a4)
        *(var_ec + 0x2a0) = xmm0_217 * arg2[4] * 100f f+ *(var_ec + 0x2a0)
        *(var_ec + 0x29c) = xmm0_220
        *(var_ec + 0x2a4) = xmm2_33
        int64_t var_1b4
        
        if (*(arg4 + 0xea) != 0)
            int128_t* eax_78 = sub_6bcb90(&var_198, edx_47, var_ec, &var_198)
            int32_t ecx_70 = arg2[0xa1]
            int32_t ebx_9 = 0x10
            int128_t xmm0_221 = *eax_78
            
            if (var_f8_1 s< 0x10)
                ebx_9 = var_f8_1
            
            float var_20_1
            var_20_1.o = eax_78[1]
            
            if (ebx_9 s< 2)
                ebx_9 = 2
            
            float xmm7_19 = *(*(var_ec + 0x2e4) + 0x5c)
            
            if (ecx_70 s< 2 || not(xmm7_19 - var_f0_1 <= arg2[ecx_70 * 9 + 0x10]))
                if (ecx_70 - ebx_9 + 1 s> 0)
                    var_1b4:4.d = &arg2[(ecx_70 - ebx_9 + 1) * 9 + 0x11]
                    var_1b4.d = &arg2[0x11]
                    memmove(var_1b4, (ecx_70 - (ecx_70 - ebx_9 + 1)) * 0x24)
                    ecx_70 = arg2[0xa1] i- (ecx_70 - ebx_9 + 1)
                
                arg2[0xa1] = ecx_70 + 1
                arg2[ecx_70 * 9 + 0x19] = xmm7_19
            
            float xmm5_12 = xmm0_221:4.d
            float xmm6_13 = xmm0_221:0xc.d
            int32_t ecx_73 = arg2[0xa1] i* 9
            float xmm3_22 = xmm0_221:8.d
            *(arg2 + (ecx_73 << 2) + 0x20) = xmm1_107.q
            arg2[ecx_73 + 0xa] =
                xmm7_14 * xmm6_12 - xmm0_196 - xmm3_20 * xmm5_11 - xmm2_28 * xmm4_12
            float xmm2_36 = xmm5_12 * xmm6_13 + var_20_1 * xmm3_22
            float xmm1_114 = xmm6_13 * xmm3_22 - xmm5_12 * var_20_1
            arg2[ecx_73 + 0xb] = xmm2_36 + xmm2_36
            arg2[ecx_73 + 0xc] = xmm1_114 + xmm1_114
            arg2[ecx_73 + 0xd] =
                xmm6_13 * xmm6_13 - xmm3_22 * xmm3_22 - xmm5_12 * xmm5_12 + var_20_1 * var_20_1
            arg2[ecx_73 + 0xe] = var_f4_1
            arg2[ecx_73 + 0xf] = 0
            int32_t edx_48 = arg2[0xa1]
            
            if (edx_48 == ebx_9 - 1 && edx_48 s>= 2)
                eax_76.b = 1
                arg2[0x18] = (xmm7_19 - arg2[ecx_73 + 0x10]) / var_f0_1
                CookieCheckFunction(eax_76)
                return eax_76
        else if (*(arg4 + 0xeb) != 0)
            int32_t var_1ac_11 = var_e8_2
            var_1b4:4.d = var_f4_1
            var_1b4.d = var_f8_1
            sub_6b9630(eax_76, arg2, var_ec, arg4, var_1b4.d)
        eax_76.b = 1
        CookieCheckFunction(eax_76)
        return eax_76
    
    while (true)
        int32_t* ebx_4 = (ebx_8 << 4) + *(eax_7 + 0x118)
        int32_t ecx_9 = *ebx_4
        int128_t var_70
        int128_t var_50
        int32_t var_20
        TEB* fsbase
        
        if (ecx_9 - 9 u<= 0x62)
            switch (ecx_9 + &jump_table_6bae3c[0x1e]:3)
                case &lookup_table_6baec0
                    int32_t* ebx_6 = ebx_4[2]
                    int128_t xmm0_177
                    int128_t xmm1_81
                    
                    if (ebx_6 != 0)
                        void* eax_65 = arg2[0xc]
                        int128_t var_178
                        int128_t* eax_66
                        int32_t edx_43
                        eax_66, edx_43 = sub_6b9190(eax_65, edx, ebx_6, *(eax_65 + 0x2f0), &var_178)
                        var_50 = *eax_66
                        void* eax_67 = arg2[0xc]
                        int128_t var_40_3 = eax_66[1]
                        int128_t* eax_68
                        int32_t edx_44
                        eax_68, edx_44 =
                            sub_6b9190(eax_67, edx_43, ebx_6, *(eax_67 + 0x2e8), &var_178)
                        int128_t var_90 = *eax_68
                        int128_t var_80_1 = eax_68[1]
                        int128_t* eax_70 = sub_639a10(&var_198, edx_44, &var_50, &var_198)
                        int128_t var_b0 = *eax_70
                        int128_t var_a0_1 = eax_70[1]
                        sub_4eb600(&var_90, &var_b0, &var_178, &var_90)
                        xmm0_177 = var_178
                        int128_t var_168
                        xmm1_81 = var_168
                    else
                        xmm0_177 = data_bf21e8
                        xmm1_81 = data_bf21f8
                    
                    int128_t var_d0 = xmm0_177
                    int128_t var_c0_1 = xmm1_81
                    sub_4eb600(&var_d0, esi + 0x288, &var_70, &var_d0)
                    *(esi + 0x288) = var_70
                    int128_t var_60
                    *(esi + 0x298) = var_60
                    float xmm1_82 = *(esi + 0x28c)
                    float xmm2_23 = *(esi + 0x298)
                    float xmm3_18 = *(esi + 0x290)
                    float xmm4_11 = *(esi + 0x294)
                    float xmm0_191[0x4]
                    edx, xmm0_191 = sub_4ac580(ebp, 
                        xmm1_82 * xmm1_82 + xmm2_23 * xmm2_23 + xmm3_18 * xmm3_18
                            + xmm4_11 * xmm4_11)
                    var_20.o = _mm_div_ps(*(esi + 0x28c), _mm_shuffle_ps(xmm0_191, xmm0_191, 0))
                    *(esi + 0x28c) = var_20.o
                case &lookup_table_6baec0[0x1a]
                    float xmm0_8 = sub_6b8940(arg2, ebx_4)
                    
                    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_19e3ba0)
                        
                        if (data_19e3ba0 == 0xffffffff)
                            data_19e3b9c = 0x3c8efa35
                            __Init_thread_footer(&data_19e3ba0)
                    
                    float xmm0_10 = xmm0_8 f* data_19e3b9c * 0.5f
                    float xmm0_11 = sub_4ae0d0(ebp, xmm0_10)
                    float xmm0_13
                    edx, xmm0_13 = sub_4ae0f0(ebp, xmm0_10)
                    float xmm4_1 = *(esi + 0x28c)
                    float xmm2_2 = xmm0_13 * 0f
                    float xmm3_1 = *(esi + 0x290)
                    float xmm5_1 = *(esi + 0x294)
                    float xmm7_2 = xmm2_2 * xmm4_1
                    float xmm6_2 = xmm2_2 * xmm3_1
                    float xmm2_3 = xmm2_2 f* *(esi + 0x298)
                    float xmm0_17 = xmm2_2 * xmm5_1
                    float var_12c_1 = *(esi + 0x298) * xmm0_11 - xmm7_2 - xmm6_2 - xmm5_1 * xmm0_13
                    float var_134_1 = xmm3_1 * xmm0_11 + xmm2_3 + xmm4_1 * xmm0_13 - xmm0_17
                    float var_130_1 = xmm5_1 * xmm0_11 + *(esi + 0x298) * xmm0_13 + xmm6_2 - xmm7_2
                    *(esi + 0x28c) = (xmm4_1 * xmm0_11 + xmm2_3 + xmm0_17 - xmm3_1 * xmm0_13).o
                case &lookup_table_6baec0[0x1b]
                    float xmm0_23 = sub_6b8940(arg2, ebx_4)
                    
                    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_19e3ba0)
                        
                        if (data_19e3ba0 == 0xffffffff)
                            data_19e3b9c = 0x3c8efa35
                            __Init_thread_footer(&data_19e3ba0)
                    
                    float xmm0_25 = xmm0_23 f* data_19e3b9c * 0.5f
                    float xmm0_26 = sub_4ae0d0(ebp, xmm0_25)
                    float xmm0_28
                    edx, xmm0_28 = sub_4ae0f0(ebp, xmm0_25)
                    float xmm4_3 = *(esi + 0x298)
                    float xmm5_6 = *(esi + 0x28c)
                    float xmm7_3 = *(esi + 0x290)
                    float xmm6_3 = *(esi + 0x294)
                    float xmm0_29 = xmm0_28 * 0f
                    float xmm2_5 = xmm0_29 * xmm6_3
                    float xmm3_7 = xmm0_29 * xmm7_3
                    float var_13c_1 = xmm4_3 * xmm0_26 - xmm5_6 * xmm0_28 - xmm3_7 - xmm2_5
                    float xmm2_7 = xmm0_29 * xmm4_3
                    float xmm0_35 = xmm0_29 * xmm5_6
                    float var_144_1 = xmm7_3 * xmm0_26 + xmm2_7 + xmm0_35 - xmm6_3 * xmm0_28
                    float var_140_1 = xmm6_3 * xmm0_26 + xmm2_7 + xmm7_3 * xmm0_28 - xmm0_35
                    *(esi + 0x28c) = (xmm5_6 * xmm0_26 + xmm4_3 * xmm0_28 + xmm2_5 - xmm3_7).o
                case &lookup_table_6baec0[0x1c]
                    float xmm0_38 = sub_6b8940(arg2, ebx_4)
                    
                    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_19e3ba0)
                        
                        if (data_19e3ba0 == 0xffffffff)
                            data_19e3b9c = 0x3c8efa35
                            __Init_thread_footer(&data_19e3ba0)
                    
                    float xmm0_40 = xmm0_38 f* data_19e3b9c * 0.5f
                    float xmm0_41 = sub_4ae0d0(ebp, xmm0_40)
                    float xmm0_43
                    edx, xmm0_43 = sub_4ae0f0(ebp, xmm0_40)
                    float xmm6_8 = *(esi + 0x298)
                    float xmm2_9 = xmm0_43 * 0f
                    float xmm4_4 = *(esi + 0x290)
                    float xmm5_8 = xmm2_9 f* *(esi + 0x28c)
                    float xmm7_5 = *(esi + 0x294)
                    float xmm3_9 = xmm2_9 * xmm7_5
                    float xmm2_10 = xmm2_9 * xmm6_8
                    float xmm0_47 = xmm2_9 * xmm4_4
                    float var_14c_1 = xmm6_8 * xmm0_41 - xmm5_8 - xmm4_4 * xmm0_43 - xmm3_9
                    float var_154_1 = xmm4_4 * xmm0_41 + xmm6_8 * xmm0_43 + xmm5_8 - xmm3_9
                    float var_150_1 =
                        xmm7_5 * xmm0_41 + xmm2_10 + xmm0_47 - *(esi + 0x28c) * xmm0_43
                    *(esi + 0x28c) =
                        (*(esi + 0x28c) * xmm0_41 + xmm2_10 + xmm7_5 * xmm0_43 - xmm0_47).o
                case &lookup_table_6baec0[0x1d]
                    float xmm0_53 = *arg2
                    float xmm0_54
                    edx, xmm0_54 = sub_6b8940(arg2, ebx_4)
                    *arg2 = xmm0_54 + xmm0_53
                case &lookup_table_6baec0[0x1e]
                    float xmm0_56 = arg2[1]
                    float xmm0_57
                    edx, xmm0_57 = sub_6b8940(arg2, ebx_4)
                    arg2[1] = xmm0_57 + xmm0_56
                case &lookup_table_6baec0[0x1f]
                    float xmm0_59 = arg2[2]
                    float xmm0_60
                    edx, xmm0_60 = sub_6b8940(arg2, ebx_4)
                    arg2[2] = xmm0_60 + xmm0_59
                case &lookup_table_6baec0[0x20]
                    float xmm0_62 = *(esi + 0x29c)
                    float xmm0_63
                    edx, xmm0_63 = sub_6b8940(arg2, ebx_4)
                    *(esi + 0x29c) = xmm0_63 + xmm0_62
                case &lookup_table_6baec0[0x21]
                    float xmm0_65 = *(esi + 0x2a0)
                    float xmm0_66
                    edx, xmm0_66 = sub_6b8940(arg2, ebx_4)
                    *(esi + 0x2a0) = xmm0_66 + xmm0_65
                case &lookup_table_6baec0[0x22]
                    float xmm0_68 = *(esi + 0x2a4)
                    float xmm0_69
                    edx, xmm0_69 = sub_6b8940(arg2, ebx_4)
                    *(esi + 0x2a4) = xmm0_69 + xmm0_68
                case &lookup_table_6baec0[0x23]
                    float xmm0_71 = arg2[3]
                    float xmm0_72
                    edx, xmm0_72 = sub_6b8940(arg2, ebx_4)
                    arg2[3] = xmm0_72 + xmm0_71
                case &lookup_table_6baec0[0x24]
                    float xmm0_74 = arg2[4]
                    float xmm0_75
                    edx, xmm0_75 = sub_6b8940(arg2, ebx_4)
                    arg2[4] = xmm0_75 + xmm0_74
                case &lookup_table_6baec0[0x25]
                    float xmm0_77 = arg2[5]
                    float xmm0_78
                    edx, xmm0_78 = sub_6b8940(arg2, ebx_4)
                    arg2[5] = xmm0_78 + xmm0_77
                case &lookup_table_6baec0[0x26]
                    float xmm0_80
                    edx, xmm0_80 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[3] = xmm0_80 f* *(*(esi + 0x2e4) + 0x58) + arg2[3]
                case &lookup_table_6baec0[0x27]
                    float xmm0_83
                    edx, xmm0_83 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[4] = xmm0_83 f* *(*(esi + 0x2e4) + 0x58) + arg2[4]
                case &lookup_table_6baec0[0x28]
                    float xmm0_86
                    edx, xmm0_86 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[5] = xmm0_86 f* *(*(esi + 0x2e4) + 0x58) + arg2[5]
                case &lookup_table_6baec0[0x29]
                    float xmm0_96
                    edx, xmm0_96 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[3] = (1f - xmm0_96) f* *(*(esi + 0x2e4) + 0x58) * 100f * arg2[3]
                case &lookup_table_6baec0[0x2a]
                    float xmm0_97
                    edx, xmm0_97 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[4] = (1f - xmm0_97) f* *(*(esi + 0x2e4) + 0x58) * 100f * arg2[4]
                case &lookup_table_6baec0[0x2b]
                    float xmm0_98
                    edx, xmm0_98 = sub_6b8630(arg2[0xc], ebx_4)
                    arg2[5] = (1f - xmm0_98) f* *(*(esi + 0x2e4) + 0x58) * 100f * arg2[5]
                case &lookup_table_6baec0[0x2c]
                    float xmm0_106 = sub_6b88b0(arg2, ebx_4)
                    float xmm0_107 = arg2[3]
                    float xmm0_108 = arg2[4]
                    float xmm0_110 = arg2[5]
                    float xmm1_53 = xmm0_107 * xmm0_107 + xmm0_108 * xmm0_108 + xmm0_110 * xmm0_110
                    float xmm3_10 = _mm_min_ss(0x3f800000, 
                        xmm0_106 * xmm1_53 f* *(*(arg2[0xc] i+ 0x2e4) + 0x58))
                    float xmm0_113
                    edx, xmm0_113 = sub_4ac580(ebp, xmm1_53)
                    float xmm0_115
                    float xmm1_54
                    float xmm2_14
                    
                    if (9.99999975e-06f <= xmm0_113)
                        float xmm3_11 = 1f / (xmm0_113 + 9.99999975e-06f)
                        float xmm1_56 = xmm3_11 * arg2[4]
                        float xmm2_16 = xmm3_11 * xmm0_107
                        float xmm3_12 = xmm3_11 * arg2[5]
                        float xmm0_121
                        edx, xmm0_121 = sub_4ac580(ebp, 
                            xmm1_56 * xmm1_56 + xmm2_16 * xmm2_16 + xmm3_12 * xmm3_12)
                        float xmm1_61 = 1f / xmm0_121
                        xmm0_115 = xmm1_61 * xmm2_16
                        xmm2_14 = xmm1_61 * xmm1_56
                        xmm1_54 = xmm1_61 * xmm3_12
                    else
                        int64_t xmm0_114 = 0
                        xmm2_14 = xmm0_114:4.d
                        xmm0_115 = xmm0_114.d
                        xmm1_54 = 0f
                    
                    float xmm0_125 = arg2[4] - xmm2_14 * xmm3_10
                    arg2[3] = xmm0_107 - xmm0_115 * xmm3_10
                    arg2[4] = xmm0_125
                    arg2[5] = arg2[5] - xmm1_54 * xmm3_10
                case &lookup_table_6baec0[0x2d]
                    int32_t* eax_32
                    void* esi_3
                    
                    if (arg2[0x10].b != 0)
                        esi_3 = arg2[0xc]
                        eax_32, edx = sub_5af880(**(esi_3 + 0x2e4))
                    
                    if (arg2[0x10].b == 0 || *(*(esi_3 + 0x2dc) * 0x168 + *eax_32 + 0xe5) == 0)
                        float xmm0_93
                        edx, xmm0_93 = sub_6b8940(arg2, ebx_4)
                        
                        if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                            edx = sub_75970e(&data_19e3ba0)
                            
                            if (data_19e3ba0 == 0xffffffff)
                                data_19e3b9c = 0x3c8efa35
                                edx = __Init_thread_footer(&data_19e3ba0)
                        
                        arg2[9] = xmm0_93 f* data_19e3b9c + arg2[9]
                case &lookup_table_6baec0[0x2e]
                    int32_t* eax_25
                    void* esi_2
                    
                    if (arg2[0x10].b != 0)
                        esi_2 = arg2[0xc]
                        eax_25, edx = sub_5af880(**(esi_2 + 0x2e4))
                    
                    if (arg2[0x10].b == 0 || *(*(esi_2 + 0x2dc) * 0x168 + *eax_25 + 0xe5) == 0)
                        float xmm0_89
                        edx, xmm0_89 = sub_6b88b0(arg2, ebx_4)
                        
                        if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                            edx = sub_75970e(&data_19e3ba0)
                            
                            if (data_19e3ba0 == 0xffffffff)
                                data_19e3b9c = 0x3c8efa35
                                edx = __Init_thread_footer(&data_19e3ba0)
                        
                        arg2[9] =
                            xmm0_89 f* data_19e3b9c f* *(*(arg2[0xc] i+ 0x2e4) + 0x58) + arg2[9]
                case &lookup_table_6baec0[0x2f]
                    float xmm0_130 = sub_6b88b0(arg2, ebx_4)
                    
                    if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_19e3ba0)
                        
                        if (data_19e3ba0 == 0xffffffff)
                            data_19e3b9c = 0x3c8efa35
                            __Init_thread_footer(&data_19e3ba0)
                    
                    esi = arg2[0xc]
                    float xmm0_133 = xmm0_130 f* data_19e3b9c f* *(*(esi + 0x2e4) + 0x58) * 0.5f
                    float xmm0_134 = sub_4ae0d0(ebp, xmm0_133)
                    float xmm0_136
                    edx, xmm0_136 = sub_4ae0f0(ebp, xmm0_133)
                    float xmm4_10 = *(esi + 0x298)
                    float xmm7_11 = xmm0_136 * arg2[6]
                    float xmm0_137 = xmm0_136 * arg2[8]
                    float xmm5_9 = *(esi + 0x28c)
                    float xmm6_11 = xmm0_136 * arg2[7]
                    float xmm3_15 = *(esi + 0x290)
                    float xmm2_19 = *(esi + 0x294)
                    float var_11c_1 = xmm4_10 * xmm0_134 - xmm7_11 * xmm5_9 - xmm3_15 * xmm6_11
                        - xmm2_19 * xmm0_137
                    var_128 = xmm7_11 * xmm4_10 + xmm5_9 * xmm0_134 + xmm6_11 * xmm2_19
                        - xmm3_15 * xmm0_137
                    float var_124_1 = xmm6_11 * xmm4_10 + xmm3_15 * xmm0_134 + xmm5_9 * xmm0_137
                        - xmm7_11 * xmm2_19
                    float var_120_1 = xmm0_137 * xmm4_10 + xmm2_19 * xmm0_134 + xmm7_11 * xmm3_15
                        - xmm5_9 * xmm6_11
                    *(esi + 0x28c) = var_128.o
                case &lookup_table_6baec0[0x33]
                    int32_t xmm0_52
                    edx, xmm0_52 = sub_6b8630(arg2[0xc], ebx_4)
                    *(esi + 0x288) = xmm0_52
                case &lookup_table_6baec0[0x38]
                    int32_t* eax_42
                    void* esi_4
                    
                    if (arg2[0x10].b != 0)
                        esi_4 = arg2[0xc]
                        eax_42, edx = sub_5af880(**(esi_4 + 0x2e4))
                    
                    if (arg2[0x10].b == 0 || *(*(esi_4 + 0x2dc) * 0x168 + *eax_42 + 0xe5) == 0)
                        float xmm0_128
                        edx, xmm0_128 = sub_6b88b0(arg2, ebx_4)
                        arg2[0xa] = xmm0_128 + arg2[0xa]
                case &lookup_table_6baec0[0x42]
                    int32_t* ebx_5 = ebx_4[2]
                    void* edx_35 = arg2[0xc]
                    float var_d4_18
                    bool p_2
                    
                    if (ebx_5[2] == 1)
                        int32_t* eax_47 = *ebx_5
                        float xmm0_161 = *eax_47
                        float temp2_1 = eax_47[1]
                        xmm0_161 - temp2_1
                        var_d4_18 = xmm0_161
                        eax_47:1.b = (xmm0_161 == temp2_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_161, temp2_1) ? 1 : 0) << 2
                            | (xmm0_161 < temp2_1 ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (ebx_5[2] != 1 || p_2)
                        int32_t eax_50 = (*(edx_35 + 0x2c) + ecx_9) * ecx_9
                        int32_t ecx_53 = (eax_50 << 0xf) + not.d(eax_50)
                        int32_t ecx_54 = (ecx_53 u>> 0xc ^ ecx_53) * 5
                        int32_t eax_58 = (ecx_54 u>> 4 ^ ecx_54) * 0x809
                        void* eax_59 = arg2[0xc]
                        float xmm0_162
                        edx_35, xmm0_162 = sub_706bb0(ebx_5, *(eax_59 + 0x2f4), *(eax_59 + 0x2e8), 
                            (((eax_58 u>> 0x10 ^ eax_58) & 0x7fffff) | 0x3f800000) - 1f)
                        var_d4_18 = xmm0_162
                    
                    int128_t* eax_61
                    eax_61, edx = sub_6bcb90(&var_70, edx_35, esi, &var_70)
                    var_50 = *eax_61
                    int128_t xmm0_164 = eax_61[1]
                    
                    if (*(*(esi + 0x2e4) + 0x74) == 0)
                        float xmm1_80 = xmm0_164:8.d
                        
                        if (not(xmm1_80 < var_d4_18))
                            *(esi + 0x2a0) = var_d4_18 - xmm1_80 f+ *(esi + 0x2a0)
                        label_6ba859:
                            arg2[0x10].b = 1
                            *(arg2 + 0xc) = 0
                            arg2[5] = 0
                    else
                        float xmm1_79 = xmm0_164:0xc.d
                        
                        if (not(var_d4_18 < xmm1_79))
                            *(esi + 0x2a4) = var_d4_18 - xmm1_79 f+ *(esi + 0x2a4)
                            goto label_6ba859
                case &lookup_table_6baec0[0x43]
                    if (arg2[0x10].b != 0)
                        eax_3 = sub_6bcb90(&var_198, edx, esi, &var_198)
                        int32_t* ecx_58 = ebx_4[2]
                        var_50 = *eax_3
                        int128_t xmm0_172 = eax_3[1]
                        
                        if (ecx_58 != 0)
                            int128_t var_30
                            var_30.d = 0x3f800000
                            int32_t var_14_1 = xmm0_172:0xc.d
                            int32_t var_1c
                            var_1c.q = xmm0_172:4.q
                            var_70 = data_800248
                            int128_t var_60_1 = var_20.o
                            eax_3 = sub_6b80f0(ecx_58, &var_70)
                            
                            if (eax_3 != 0)
                                eax_3[2].d = 1
                                *(eax_3 + 0x1c) = *(*(esi + 0x2e4) + 0x1c)
                        
                        break
                case &lookup_table_6baec0[0x47]
                    edx = sub_6b8de0(arg2, ebx_4)
                case &lookup_table_6baec0[0x5e]
                    int32_t xmm0_105
                    edx, xmm0_105 = sub_6b8630(arg2[0xc], ebx_4)
                    var_f4_1 = xmm0_105
                case &lookup_table_6baec0[0x5f]
                    int32_t xmm0_104
                    edx, xmm0_104 = sub_6b8630(arg2[0xc], ebx_4)
                    var_e8_2 = xmm0_104
                case &lookup_table_6baec0[0x60]
                    float xmm0_101 = sub_4d5cb0(sub_6b8630(arg2[0xc], ebx_4))
                    
                    if (0 f<= xmm0_101)
                        edx = int.d(xmm0_101 + 0.5f) + 1
                        var_f8_1 = edx
                    else
                        edx = int.d(xmm0_101 - 0.5f) + 1
                        var_f8_1 = edx
                case &lookup_table_6baec0[0x62]
                    float xmm0_99
                    edx, xmm0_99 = sub_6b8630(arg2[0xc], ebx_4)
                    var_f0_1 = xmm0_99
        eax_7 = arg4
        ebx_8 = var_fc_1 + 1
        var_fc_1 = ebx_8
        
        if (ebx_8 s>= *(eax_7 + 0x110))
            goto label_6baaad
        
        esi = var_ec

eax_3.b = 0
CookieCheckFunction(eax_3)
return eax_3
