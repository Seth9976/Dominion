// 函数: sub_6bce70
// 地址: 0x6bce70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
__builtin_memcpy(arg6, arg2, 0x68)
int32_t eax_4 = sub_5af880(**(arg3 + 0x2e4))
void* ecx_2 = *(arg3 + 0x2dc) * 0x168 + *eax_4
int32_t* eax_6 = sub_5af880(**(arg3 + 0x2e4))
void* eax_8

if (*(*(arg3 + 0x2dc) * 0x168 + *eax_6 + 0xe1) == 0)
    eax_8 = arg2 + 0x68
else
    eax_8 = arg3 + 0x2a8

int128_t var_40
sub_4eb600(eax_8, arg3 + 0x288, &var_40, eax_8)
uint32_t i = 0
void* ecx_6 = ecx_2
*(arg6 + 0x68) = var_40
uint32_t i_1 = 0
int128_t var_30
*(arg6 + 0x78) = var_30

if (*(ecx_6 + 0x130) s> 0)
    do
        int16_t top
        int16_t top_2 = top - 1
        unimplemented  {fld st0, qword [0x890f30]}
        int32_t* esi_4 = (i << 4) + *(ecx_6 + 0x138)
        int32_t ecx_7 = *esi_4
        double var_50
        
        if (ecx_7 - 0x1f u> 0x34)
        label_6bdd43:
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top = top_2 + 1
        else
            switch (ecx_7 + &jump_table_6bddb0[0x10]:1)
                case &lookup_table_6bde10
                    int32_t* eax_206 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_54
                    bool p_28
                    
                    if (eax_206[2] == 1)
                        int32_t* eax_207 = *eax_206
                        xmm0_54 = *eax_207
                        float temp14_1 = eax_207[1]
                        xmm0_54 - temp14_1
                        eax_207:1.b = (xmm0_54 == temp14_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_54, temp14_1) ? 1 : 0) << 2
                            | (xmm0_54 < temp14_1 ? 1 : 0)
                        p_28 = unimplemented  {test ah, 0x44}
                    
                    if (eax_206[2] != 1 || p_28)
                        int32_t eax_210 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_103 = (eax_210 << 0xf) + not.d(eax_210)
                        int32_t ecx_104 = (ecx_103 u>> 0xc ^ ecx_103) * 5
                        int32_t eax_218 = (ecx_104 u>> 4 ^ ecx_104) * 0x809
                        var_50.d = ((eax_218 u>> 0x10 ^ eax_218) & 0x7fffff) | 0x3f800000
                        xmm0_54 =
                            sub_706bb0(eax_206, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                    
                    arg6[4] = xmm0_54 + arg6[4]
                case &lookup_table_6bde10[1]
                    int32_t* eax_219 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_56
                    bool p_30
                    
                    if (eax_219[2] == 1)
                        int32_t* eax_220 = *eax_219
                        xmm0_56 = *eax_220
                        float temp15_1 = eax_220[1]
                        xmm0_56 - temp15_1
                        eax_220:1.b = (xmm0_56 == temp15_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_56, temp15_1) ? 1 : 0) << 2
                            | (xmm0_56 < temp15_1 ? 1 : 0)
                        p_30 = unimplemented  {test ah, 0x44}
                    
                    if (eax_219[2] != 1 || p_30)
                        int32_t eax_223 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_108 = (eax_223 << 0xf) + not.d(eax_223)
                        int32_t ecx_109 = (ecx_108 u>> 0xc ^ ecx_108) * 5
                        int32_t eax_231 = (ecx_109 u>> 4 ^ ecx_109) * 0x809
                        var_50.d = ((eax_231 u>> 0x10 ^ eax_231) & 0x7fffff) | 0x3f800000
                        xmm0_56 =
                            sub_706bb0(eax_219, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                    
                    arg6[5] = xmm0_56 + arg6[5]
                case &lookup_table_6bde10[2]
                    int32_t* eax_232 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_58
                    bool p_32
                    
                    if (eax_232[2] == 1)
                        int32_t* eax_233 = *eax_232
                        xmm0_58 = *eax_233
                        float temp16_1 = eax_233[1]
                        xmm0_58 - temp16_1
                        eax_233:1.b = (xmm0_58 == temp16_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_58, temp16_1) ? 1 : 0) << 2
                            | (xmm0_58 < temp16_1 ? 1 : 0)
                        p_32 = unimplemented  {test ah, 0x44}
                    
                    if (eax_232[2] != 1 || p_32)
                        int32_t eax_236 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_113 = (eax_236 << 0xf) + not.d(eax_236)
                        int32_t ecx_114 = (ecx_113 u>> 0xc ^ ecx_113) * 5
                        int32_t eax_244 = (ecx_114 u>> 4 ^ ecx_114) * 0x809
                        var_50.d = ((eax_244 u>> 0x10 ^ eax_244) & 0x7fffff) | 0x3f800000
                        xmm0_58 =
                            sub_706bb0(eax_232, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                    
                    arg6[6] = xmm0_58 + arg6[6]
                case &lookup_table_6bde10[3], &lookup_table_6bde10[4], &lookup_table_6bde10[5], 
                        &lookup_table_6bde10[6], &lookup_table_6bde10[7], &lookup_table_6bde10[8], 
                        &lookup_table_6bde10[9], &lookup_table_6bde10[0xa], 
                        &lookup_table_6bde10[0xb], &lookup_table_6bde10[0xc], 
                        &lookup_table_6bde10[0xd], &lookup_table_6bde10[0xe], 
                        &lookup_table_6bde10[0xf], &lookup_table_6bde10[0x10], 
                        &lookup_table_6bde10[0x11], &lookup_table_6bde10[0x12], 
                        &lookup_table_6bde10[0x13], &lookup_table_6bde10[0x14], 
                        &lookup_table_6bde10[0x15], &lookup_table_6bde10[0x16], 
                        &lookup_table_6bde10[0x17], &lookup_table_6bde10[0x18], 
                        &lookup_table_6bde10[0x19], &lookup_table_6bde10[0x1d], 
                        &lookup_table_6bde10[0x2c], &lookup_table_6bde10[0x2d], 
                        &lookup_table_6bde10[0x2e], &lookup_table_6bde10[0x2f], 
                        &lookup_table_6bde10[0x30], &lookup_table_6bde10[0x31]
                    goto label_6bdd43
                case &lookup_table_6bde10[0x1a]
                    int32_t* esi_23 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    var_50.d = sub_706bb0(esi_23, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                    int32_t xmm0_64 = sub_706bb0(esi_23, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                    arg6[0x11] = var_50.d
                    arg6[0x12] = xmm0_64
                case &lookup_table_6bde10[0x1b]
                    int32_t* esi_24 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    var_50.d = sub_706bb0(esi_24, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                    int32_t xmm0_66 = sub_706bb0(esi_24, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                    arg6[0x13] = var_50.d
                    arg6[0x14] = xmm0_66
                case &lookup_table_6bde10[0x1c]
                    int32_t* esi_25 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    var_50.d = sub_706bb0(esi_25, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                    int32_t xmm0_68 = sub_706bb0(esi_25, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                    arg6[0x15] = var_50.d
                    arg6[0x16] = xmm0_68
                case &lookup_table_6bde10[0x1e]
                    int32_t* eax_12 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_1
                    bool p_2
                    
                    if (eax_12[2] == 1)
                        int32_t* eax_13 = *eax_12
                        xmm0_1 = *eax_13
                        float temp1_1 = eax_13[1]
                        xmm0_1 - temp1_1
                        eax_13:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
                            | (xmm0_1 < temp1_1 ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (eax_12[2] != 1 || p_2)
                        int32_t eax_16 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_10 = (eax_16 << 0xf) + not.d(eax_16)
                        int32_t ecx_11 = (ecx_10 u>> 0xc ^ ecx_10) * 5
                        int32_t eax_24 = (ecx_11 u>> 4 ^ ecx_11) * 0x809
                        xmm0_1 = sub_706bb0(eax_12, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_24 u>> 0x10 ^ eax_24) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    *arg6 = xmm0_1 * *arg6
                    float xmm0_2 = xmm0_1 * arg6[2]
                    arg6[1] = xmm0_1 * arg6[1]
                    arg6[2] = xmm0_2
                case &lookup_table_6bde10[0x1f]
                    int32_t* eax_25 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_3
                    bool p_4
                    
                    if (eax_25[2] == 1)
                        int32_t* eax_26 = *eax_25
                        xmm0_3 = *eax_26
                        float temp2_1 = eax_26[1]
                        xmm0_3 - temp2_1
                        eax_26:1.b = (xmm0_3 == temp2_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_3, temp2_1) ? 1 : 0) << 2
                            | (xmm0_3 < temp2_1 ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (eax_25[2] != 1 || p_4)
                        int32_t eax_29 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_15 = (eax_29 << 0xf) + not.d(eax_29)
                        int32_t ecx_16 = (ecx_15 u>> 0xc ^ ecx_15) * 5
                        int32_t eax_37 = (ecx_16 u>> 4 ^ ecx_16) * 0x809
                        xmm0_3 = sub_706bb0(eax_25, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_37 u>> 0x10 ^ eax_37) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    *arg6 = xmm0_3 * *arg6
                case &lookup_table_6bde10[0x20]
                    int32_t* eax_38 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_5
                    bool p_6
                    
                    if (eax_38[2] == 1)
                        int32_t* eax_39 = *eax_38
                        xmm0_5 = *eax_39
                        float temp3_1 = eax_39[1]
                        xmm0_5 - temp3_1
                        eax_39:1.b = (xmm0_5 == temp3_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_5, temp3_1) ? 1 : 0) << 2
                            | (xmm0_5 < temp3_1 ? 1 : 0)
                        p_6 = unimplemented  {test ah, 0x44}
                    
                    if (eax_38[2] != 1 || p_6)
                        int32_t eax_42 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_20 = (eax_42 << 0xf) + not.d(eax_42)
                        int32_t ecx_21 = (ecx_20 u>> 0xc ^ ecx_20) * 5
                        int32_t eax_50 = (ecx_21 u>> 4 ^ ecx_21) * 0x809
                        xmm0_5 = sub_706bb0(eax_38, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_50 u>> 0x10 ^ eax_50) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[1] = xmm0_5 * arg6[1]
                case &lookup_table_6bde10[0x21]
                    int32_t* eax_51 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_7
                    bool p_8
                    
                    if (eax_51[2] == 1)
                        int32_t* eax_52 = *eax_51
                        xmm0_7 = *eax_52
                        float temp4_1 = eax_52[1]
                        xmm0_7 - temp4_1
                        eax_52:1.b = (xmm0_7 == temp4_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_7, temp4_1) ? 1 : 0) << 2
                            | (xmm0_7 < temp4_1 ? 1 : 0)
                        p_8 = unimplemented  {test ah, 0x44}
                    
                    if (eax_51[2] != 1 || p_8)
                        int32_t eax_55 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_25 = (eax_55 << 0xf) + not.d(eax_55)
                        int32_t ecx_26 = (ecx_25 u>> 0xc ^ ecx_25) * 5
                        int32_t eax_63 = (ecx_26 u>> 4 ^ ecx_26) * 0x809
                        xmm0_7 = sub_706bb0(eax_51, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_63 u>> 0x10 ^ eax_63) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[2] = xmm0_7 * arg6[2]
                case &lookup_table_6bde10[0x22]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    int32_t eax_65 = *(arg3 + 0x2c) + 1
                    int32_t ecx_30 = (eax_65 << 0xf) + not.d(eax_65)
                    int32_t ecx_31 = (ecx_30 u>> 0xc ^ ecx_30) * 5
                    int32_t eax_73 = (ecx_31 u>> 4 ^ ecx_31) * 0x809
                    double xmm0_13 = _mm_cvtps_pd(((((eax_73 u>> 0x10 ^ eax_73) & 0x7fffff)
                        | 0x3f800000) - 1f) * 6.28318548f f+ *(arg3 + 0x28))
                    void var_68
                    _libm_sse2_sin_precise(arg5, arg4.w, var_68)
                    double xmm0_16 = fconvert.d(fconvert.s(xmm0_13) + 1.75691366f)
                    _libm_sse2_sin_precise()
                    *arg6 = fconvert.s(xmm0_16) * *arg6
                    _libm_sse2_cos_precise()
                    arg6[1] = fconvert.s(xmm0_16) * arg6[1]
                case &lookup_table_6bde10[0x23]
                    int32_t* eax_87 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_22
                    bool p_12
                    
                    if (eax_87[2] == 1)
                        int32_t* eax_88 = *eax_87
                        xmm0_22 = *eax_88
                        float temp6_1 = eax_88[1]
                        xmm0_22 - temp6_1
                        eax_88:1.b = (xmm0_22 == temp6_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_22, temp6_1) ? 1 : 0) << 2
                            | (xmm0_22 < temp6_1 ? 1 : 0)
                        p_12 = unimplemented  {test ah, 0x44}
                    
                    if (eax_87[2] != 1 || p_12)
                        int32_t eax_91 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_44 = (eax_91 << 0xf) + not.d(eax_91)
                        int32_t ecx_45 = (ecx_44 u>> 0xc ^ ecx_44) * 5
                        int32_t eax_99 = (ecx_45 u>> 4 ^ ecx_45) * 0x809
                        xmm0_22 = sub_706bb0(eax_87, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_99 u>> 0x10 ^ eax_99) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[9] = xmm0_22 * arg6[9]
                case &lookup_table_6bde10[0x24]
                    int32_t* eax_100 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_24
                    bool p_14
                    
                    if (eax_100[2] == 1)
                        int32_t* eax_101 = *eax_100
                        xmm0_24 = *eax_101
                        float temp7_1 = eax_101[1]
                        xmm0_24 - temp7_1
                        eax_101:1.b = (xmm0_24 == temp7_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_24, temp7_1) ? 1 : 0) << 2
                            | (xmm0_24 < temp7_1 ? 1 : 0)
                        p_14 = unimplemented  {test ah, 0x44}
                    
                    if (eax_100[2] != 1 || p_14)
                        int32_t eax_104 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_49 = (eax_104 << 0xf) + not.d(eax_104)
                        int32_t ecx_50 = (ecx_49 u>> 0xc ^ ecx_49) * 5
                        int32_t eax_112 = (ecx_50 u>> 4 ^ ecx_50) * 0x809
                        xmm0_24 = sub_706bb0(eax_100, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_112 u>> 0x10 ^ eax_112) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[0xa] = xmm0_24 * arg6[0xa]
                case &lookup_table_6bde10[0x25]
                    int32_t* eax_113 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_26
                    bool p_16
                    
                    if (eax_113[2] == 1)
                        int32_t* eax_114 = *eax_113
                        xmm0_26 = *eax_114
                        float temp8_1 = eax_114[1]
                        xmm0_26 - temp8_1
                        eax_114:1.b = (xmm0_26 == temp8_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_26, temp8_1) ? 1 : 0) << 2
                            | (xmm0_26 < temp8_1 ? 1 : 0)
                        p_16 = unimplemented  {test ah, 0x44}
                    
                    if (eax_113[2] != 1 || p_16)
                        int32_t eax_117 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_54 = (eax_117 << 0xf) + not.d(eax_117)
                        int32_t ecx_55 = (ecx_54 u>> 0xc ^ ecx_54) * 5
                        int32_t eax_125 = (ecx_55 u>> 4 ^ ecx_55) * 0x809
                        xmm0_26 = sub_706bb0(eax_113, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_125 u>> 0x10 ^ eax_125) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[0xb] = xmm0_26 * arg6[0xb]
                case &lookup_table_6bde10[0x26]
                    int32_t* eax_126 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_28
                    bool p_18
                    
                    if (eax_126[2] == 1)
                        int32_t* eax_127 = *eax_126
                        xmm0_28 = *eax_127
                        float temp9_1 = eax_127[1]
                        xmm0_28 - temp9_1
                        eax_127:1.b = (xmm0_28 == temp9_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_28, temp9_1) ? 1 : 0) << 2
                            | (xmm0_28 < temp9_1 ? 1 : 0)
                        p_18 = unimplemented  {test ah, 0x44}
                    
                    if (eax_126[2] != 1 || p_18)
                        int32_t eax_130 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_59 = (eax_130 << 0xf) + not.d(eax_130)
                        int32_t ecx_60 = (ecx_59 u>> 0xc ^ ecx_59) * 5
                        int32_t eax_138 = (ecx_60 u>> 4 ^ ecx_60) * 0x809
                        xmm0_28 = sub_706bb0(eax_126, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_138 u>> 0x10 ^ eax_138) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[0xc] = xmm0_28 * arg6[0xc]
                case &lookup_table_6bde10[0x27]
                    int32_t* eax_139 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_30
                    bool p_20
                    
                    if (eax_139[2] == 1)
                        int32_t* eax_140 = *eax_139
                        xmm0_30 = *eax_140
                        float temp10_1 = eax_140[1]
                        xmm0_30 - temp10_1
                        eax_140:1.b = (xmm0_30 == temp10_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_30, temp10_1) ? 1 : 0) << 2
                            | (xmm0_30 < temp10_1 ? 1 : 0)
                        p_20 = unimplemented  {test ah, 0x44}
                    
                    if (eax_139[2] != 1 || p_20)
                        int32_t eax_143 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_64 = (eax_143 << 0xf) + not.d(eax_143)
                        int32_t ecx_65 = (ecx_64 u>> 0xc ^ ecx_64) * 5
                        int32_t eax_151 = (ecx_65 u>> 4 ^ ecx_65) * 0x809
                        xmm0_30 = sub_706bb0(eax_139, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_151 u>> 0x10 ^ eax_151) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[0x10] = xmm0_30 * arg6[0x10]
                case &lookup_table_6bde10[0x28]
                    int32_t* eax_167 = esi_4[2]
                    float xmm0_46
                    bool p_22
                    
                    if (eax_167[2] == 1)
                        int32_t* eax_168 = *eax_167
                        xmm0_46 = *eax_168
                        float temp11_1 = eax_168[1]
                        xmm0_46 - temp11_1
                        eax_168:1.b = (xmm0_46 == temp11_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_46, temp11_1) ? 1 : 0) << 2
                            | (xmm0_46 < temp11_1 ? 1 : 0)
                        p_22 = unimplemented  {test ah, 0x44}
                    
                    if (eax_167[2] != 1 || p_22)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        int32_t eax_171 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_88 = (eax_171 << 0xf) + not.d(eax_171)
                        int32_t ecx_89 = (ecx_88 u>> 0xc ^ ecx_88) * 5
                        int32_t eax_179 = (ecx_89 u>> 4 ^ ecx_89) * 0x809
                        var_50.d = ((eax_179 u>> 0x10 ^ eax_179) & 0x7fffff) | 0x3f800000
                        xmm0_46 =
                            sub_706bb0(eax_167, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                        unimplemented  {fld st0, qword [0x890f30]}
                    
                    float xmm0_47 = xmm0_46 + arg6[0xd]
                    var_50.d = xmm0_47
                    int32_t* var_58_14
                    var_58_14.q = fconvert.d(xmm0_47)
                    unimplemented  {fld st0, qword [esp+0x18]}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    _CIfmod(arg5, arg4)
                    float var_5c_12 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    top = top_2
                    float xmm0_49 = var_5c_12
                    
                    if (not(0f f<= var_50.d))
                        xmm0_49 = xmm0_49 + 360f
                    
                    arg6[0xd] = xmm0_49
                    arg6[0x19].b = 1
                case &lookup_table_6bde10[0x29]
                    int32_t* eax_180 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_50
                    bool p_24
                    
                    if (eax_180[2] == 1)
                        int32_t* eax_181 = *eax_180
                        xmm0_50 = *eax_181
                        float temp12_1 = eax_181[1]
                        xmm0_50 - temp12_1
                        eax_181:1.b = (xmm0_50 == temp12_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_50, temp12_1) ? 1 : 0) << 2
                            | (xmm0_50 < temp12_1 ? 1 : 0)
                        p_24 = unimplemented  {test ah, 0x44}
                    
                    if (eax_180[2] != 1 || p_24)
                        int32_t eax_184 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_93 = (eax_184 << 0xf) + not.d(eax_184)
                        int32_t ecx_94 = (ecx_93 u>> 0xc ^ ecx_93) * 5
                        int32_t eax_192 = (ecx_94 u>> 4 ^ ecx_94) * 0x809
                        var_50.d = ((eax_192 u>> 0x10 ^ eax_192) & 0x7fffff) | 0x3f800000
                        xmm0_50 =
                            sub_706bb0(eax_180, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                    
                    arg6[0x19].b = 1
                    arg6[0xe] = xmm0_50 + arg6[0xe]
                case &lookup_table_6bde10[0x2a]
                    int32_t* eax_193 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_52
                    bool p_26
                    
                    if (eax_193[2] == 1)
                        int32_t* eax_194 = *eax_193
                        xmm0_52 = *eax_194
                        float temp13_1 = eax_194[1]
                        xmm0_52 - temp13_1
                        eax_194:1.b = (xmm0_52 == temp13_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_52, temp13_1) ? 1 : 0) << 2
                            | (xmm0_52 < temp13_1 ? 1 : 0)
                        p_26 = unimplemented  {test ah, 0x44}
                    
                    if (eax_193[2] != 1 || p_26)
                        int32_t eax_197 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_98 = (eax_197 << 0xf) + not.d(eax_197)
                        int32_t ecx_99 = (ecx_98 u>> 0xc ^ ecx_98) * 5
                        int32_t eax_205 = (ecx_99 u>> 4 ^ ecx_99) * 0x809
                        var_50.d = ((eax_205 u>> 0x10 ^ eax_205) & 0x7fffff) | 0x3f800000
                        xmm0_52 =
                            sub_706bb0(eax_193, *(arg3 + 0x2f4), *(arg3 + 0x2e8), var_50.d - 1f)
                    
                    arg6[0x19].b = 1
                    arg6[0xf] = xmm0_52 * arg6[0xf]
                case &lookup_table_6bde10[0x2b]
                    int32_t ecx_67 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    
                    if (ecx_67 != 0)
                        sub_6a02a0(ecx_67, &var_40)
                        int32_t eax_152 = *esi_4
                        float xmm2_1 = *(arg3 + 0x2e8)
                        int32_t ecx_70 = (*(arg3 + 0x2c) + eax_152) * eax_152
                        int32_t edx_65 = (ecx_70 << 0xf) + not.d(ecx_70)
                        int32_t ecx_72 = (edx_65 u>> 0xc ^ edx_65) * 5
                        int32_t eax_159 = (ecx_72 u>> 4 ^ ecx_72) * 0x809
                        float xmm1_18 =
                            (((eax_159 u>> 0x10 ^ eax_159) & 0x7fffff) | 0x3f800000) - 1f
                        int32_t var_78
                        char const* const ecx_128
                        
                        if (xmm2_1 < 0f || 1f <= xmm2_1)
                            char const* const var_74_2 = "ImageSampleNearestAt"
                            var_78 = 0x684
                            ecx_128 = "uv.x >= 0.0 && uv.x < 1.0f"
                        label_6bdd99:
                            sub_63b870(eax_159, &data_801800, ecx_128, 
                                "C:\x\ax2017\Engine\Particle.cpp", var_78, "ImageSampleNearestAt")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        if (xmm1_18 f< 0 || 1f <= xmm1_18)
                            char const* const var_74_1 = "ImageSampleNearestAt"
                            var_78 = 0x685
                            ecx_128 = "uv.y >= 0.0 && uv.y < 1.0f"
                            goto label_6bdd99
                        
                        float xmm0_35 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(var_40:4.d)) * xmm2_1)
                        float xmm0_36
                        
                        if (0 f<= xmm0_35)
                            xmm0_36 = xmm0_35 + 0.5f
                        else
                            xmm0_36 = xmm0_35 - 0.5f
                        
                        var_50.d = int.d(xmm0_36)
                        float xmm0_40 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(var_40:8.d)) * xmm1_18)
                        float xmm0_41
                        
                        if (0 f<= xmm0_40)
                            xmm0_41 = xmm0_40 + 0.5f
                        else
                            xmm0_41 = xmm0_40 - 0.5f
                        
                        int32_t eax_162 = sub_6a9450(var_30.d) * var_50.d
                        uint32_t eax_164 = sub_6a97a0(
                            int.d(fconvert.t(xmm0_41)) * var_40:0xc.d + eax_162 + var_40.d, 
                            var_30.d)
                        float xmm3_22 = _mm_cvtepi32_ps(zx.o(eax_164.b))
                        float xmm2_3 = _mm_cvtepi32_ps(zx.o((eax_164 u>> 8).b))
                        float xmm3_24 = xmm3_22 / 255f * arg6[9]
                        float xmm0_43 = _mm_cvtepi32_ps(zx.o((eax_164 u>> 0x10).b))
                        float xmm1_21 = _mm_cvtepi32_ps(zx.o(eax_164 u>> 0x18)) / 255f
                        arg6[9] = xmm3_24
                        arg6[0xa] = xmm2_3 / 255f * arg6[0xa]
                        arg6[0xb] = xmm0_43 / 255f * arg6[0xb]
                        arg6[0xc] = xmm1_21 * arg6[0xc]
                case &lookup_table_6bde10[0x32]
                    int32_t* esi_22 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    var_50.d = sub_706bb0(esi_22, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                    float xmm0_62 =
                        sub_706bb0(esi_22, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f) + arg6[8]
                    arg6[7] = var_50.d + arg6[7]
                    arg6[8] = xmm0_62
                case &lookup_table_6bde10[0x33]
                    int32_t* eax_74 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    float xmm0_20
                    bool p_10
                    
                    if (eax_74[2] == 1)
                        int32_t* eax_75 = *eax_74
                        xmm0_20 = *eax_75
                        float temp5_1 = eax_75[1]
                        xmm0_20 - temp5_1
                        eax_75:1.b = (xmm0_20 == temp5_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_20, temp5_1) ? 1 : 0) << 2
                            | (xmm0_20 < temp5_1 ? 1 : 0)
                        p_10 = unimplemented  {test ah, 0x44}
                    
                    if (eax_74[2] != 1 || p_10)
                        int32_t eax_78 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                        int32_t ecx_39 = (eax_78 << 0xf) + not.d(eax_78)
                        int32_t ecx_40 = (ecx_39 u>> 0xc ^ ecx_39) * 5
                        int32_t eax_86 = (ecx_40 u>> 4 ^ ecx_40) * 0x809
                        xmm0_20 = sub_706bb0(eax_74, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                            (((eax_86 u>> 0x10 ^ eax_86) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    arg6[3] = xmm0_20 + arg6[3]
                case &lookup_table_6bde10[0x34]
                    int32_t* esi_26 = esi_4[2]
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 1
                    var_50.d = sub_706bb0(esi_26, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                    int32_t xmm0_70 = sub_706bb0(esi_26, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                    arg6[0x17] = var_50.d
                    arg6[0x18] = xmm0_70
        ecx_6 = ecx_2
        i = i_1 + 1
        i_1 = i
    while (i s< *(ecx_6 + 0x130))

CookieCheckFunction(i)
return i
