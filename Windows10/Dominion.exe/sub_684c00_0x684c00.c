// 函数: sub_684c00
// 地址: 0x684c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76dd01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_204 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_128 = arg3
data_147b06c
int32_t* esi = arg13
int32_t* var_11c = esi
void var_1f8
int128_t* eax_6 = sub_642e30(&var_1f8)
int128_t var_178 = *eax_6
int128_t xmm0_1 = eax_6[1]
int128_t xmm0_2 = eax_6[2]
int128_t var_148 = eax_6[3]

if (esi == 0)
    esi = *(data_147b06c + 0x2dc)
    var_11c = esi
    
    if (esi == 0)
        if (data_1a9a050 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            sub_75970e(&data_1a9a050)
            
            if (data_1a9a050 == 0xffffffff)
                int32_t* var_14_1 = esi
                data_1a9a054 = sub_69f030("sys/sprite_3d.material", esi + 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_1a9a050)
        
        esi = data_1a9a054
        var_11c = esi

char const* const var_210_3
int32_t var_20c_3
char const* const var_208_3
int128_t* eax_15
char* ecx_10
int64_t var_1a8
float var_10c
void var_100
float var_a0
float var_9c
float var_70
float var_6c
float var_60
float var_34
float var_30
int32_t* i

if (arg6 != 0)
    float var_198
    
    if (arg6 != 6 && arg6 != 8 && arg6 != 7)
        float eax_23
        float edx_9
        eax_23, edx_9 = sub_5a0e40()
        float edx_10 = arg6
        int32_t* eax_25
        float xmm2_7[0x4]
        float xmm3_7[0x4]
        float xmm4_4
        
        if (edx_10 == 3 || edx_10 == 4 || edx_10 == 5)
            eax_25 = arg5
            xmm4_4 = eax_25[1]
            xmm2_7 = *eax_25 / eax_23
            xmm3_7 = xmm4_4 / edx_9
            
            if (edx_10 == 3)
                xmm2_7 = _mm_min_ss(xmm2_7, xmm3_7)
                xmm3_7 = xmm2_7
            else if (edx_10 == 4)
                xmm2_7 = xmm3_7
            else if (edx_10 == 5)
                xmm3_7 = xmm2_7
            else
                xmm2_7 = edx_9
                xmm3_7 = edx_9
        else
            xmm2_7 = *arg4
            xmm3_7 = *(arg4 + 4)
            eax_25 = arg5
            xmm4_4 = eax_25[1]
        
        float xmm6_4 = *eax_25
        float xmm2_9 = xmm2_7 f* eax_23
        int32_t var_188 = 0
        float xmm3_9 = xmm3_7 f* edx_9
        float var_17c_1 = xmm6_4
        float var_184
        int32_t var_80
        float var_7c
        float xmm6_5[0x4]
        
        if (xmm6_4 < xmm2_9)
            float xmm0_41 = xmm6_4 * 0.5f
            var_80 = 0
            int32_t var_74_1 = 0x3f800000
            var_184 = xmm0_41
            float xmm1_10 = xmm0_41 / xmm2_9
            float var_180_2 = xmm0_41
            var_7c = xmm1_10
            float var_78_1 = 1f - xmm1_10
            xmm6_5 = var_80.o
        else
            xmm6_5 = data_893560
            float xmm2_10 = xmm2_9 * 0.5f
            var_184 = xmm2_10
            float var_180_1 = xmm6_4 - xmm2_10
        
        var_34 = 0f
        float var_28_1 = xmm4_4
        float xmm0_44
        float xmm3_11[0x4]
        
        if (xmm4_4 < xmm3_9)
            xmm0_44 = xmm4_4 * 0.5f
            var_70 = 0f
            int32_t var_64_2 = 0x3f800000
            var_30 = xmm0_44
            float xmm1_12 = xmm0_44 / xmm3_9
            var_6c = xmm1_12
            float var_68_2 = 1f - xmm1_12
            xmm3_11 = var_70.o
        else
            float xmm3_10 = xmm3_9 * 0.5f
            var_30 = xmm3_10
            xmm0_44 = xmm4_4 - xmm3_10
            xmm3_11 = data_893560
        
        float var_2c_1 = xmm0_44
        float xmm1_13[0x4] = *arg12
        float xmm0_45[0x4] = arg12[2]
        float xmm2_11[0x4] = arg12[1]
        float xmm0_46[0x4] = _mm_shuffle_ps(xmm0_45, xmm0_45, 0)
        float xmm1_14[0x4] = _mm_shuffle_ps(xmm1_13, xmm1_13, 0)
        float xmm0_47[0x4] = _mm_sub_ps(xmm0_46, xmm1_14)
        float xmm2_12[0x4] = _mm_shuffle_ps(xmm2_11, xmm2_11, 0)
        var_80.o = _mm_add_ps(_mm_mul_ps(xmm0_47, xmm6_5), xmm1_14)
        float xmm0_50[0x4] = arg12[3]
        i = nullptr
        int32_t* i_2 = nullptr
        var_70.o = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(_mm_shuffle_ps(xmm0_50, xmm0_50, 0), xmm2_12), xmm3_11), xmm2_12)
        
        do
            int32_t j = 0
            int32_t j_1 = 0
            
            do
                if (edx_10 != 1 || j == 0 || j == 2 || i == 0 || i == 8)
                    int32_t xmm3_12 = *(&var_6c + i)
                    float xmm1_15 = (&var_80)[j]
                    int32_t xmm2_13 = (&var_7c)[j]
                    int32_t var_1b8 = (&var_188)[j]
                    int32_t var_1b4_1 = *(&var_34 + i)
                    int32_t var_1b0_1 = (&var_184)[j]
                    int32_t var_1ac_1 = *(&var_30 + i)
                    int32_t xmm0_59 = *(&var_70 + i)
                    var_60 = xmm1_15
                    int32_t var_5c_2 = xmm0_59
                    int32_t var_58_2 = xmm2_13
                    int32_t var_54_2 = xmm0_59
                    float var_50_2 = xmm1_15
                    int32_t var_4c_2 = xmm3_12
                    int32_t var_48_2 = xmm2_13
                    int32_t var_44_2 = xmm3_12
                    
                    if (sub_6842b0(&var_198, &var_60, &var_1b8, arg8, &var_198, &var_100) != 0)
                        int32_t edx_13 = sub_683de0(arg7, &var_100)
                        float* var_124_2 = arg10
                        
                        if (arg11 != 0)
                            float* eax_29 = &var_a0
                            int32_t k = 0
                            var_124_2 = &var_a0
                            int32_t k_1 = 0
                            
                            do
                                float* esi_1 = &var_100 + k
                                int32_t eax_30
                                int32_t edx_14
                                eax_30, edx_14 = sub_6845e0(eax_29, edx_13, esi_1, *arg10, 
                                    arg10[2], arg10[4], arg10[6])
                                int32_t var_218_2 = arg10[7]
                                uint32_t var_21c_2 = arg10[5]
                                uint32_t var_220_2 = arg10[3]
                                *(&var_a0 + k_1) = eax_30
                                eax_29, edx_13 = sub_6845e0(eax_30, edx_14, esi_1, arg10[1], 
                                    var_220_2, var_21c_2, var_218_2)
                                *(&var_9c + k_1) = eax_29
                                k = k_1 + 8
                                k_1 = k
                            while (k s< 0x20)
                            
                            j = j_1
                        
                        float xmm3_13 = var_198
                        float xmm0_61 = xmm3_13 f* var_178.d
                        float var_194
                        float xmm2_15 = var_194 f* var_178:4.d
                        float xmm1_17 = var_194 f* xmm0_1:4.d
                        float xmm7_6 = xmm3_13 f* xmm0_1.d
                        float xmm5_11 = var_194 f* xmm0_2:4.d
                        float xmm3_14 = xmm3_13 f* xmm0_2.d
                        float var_190
                        float xmm4_6 = var_190 f* xmm0_1.d
                        var_50_2.o = xmm0_61 + xmm2_15 f+ var_178:0xc.d
                        float xmm3_16 = var_190 f* var_178.d
                        float xmm6_7 = var_190 f* xmm0_2.d
                        float var_104_3 = xmm3_14 + xmm5_11 f+ xmm0_2:0xc.d
                        int32_t var_1a0_2 = 0x3f800000
                        float var_d4_1 = xmm3_16 + xmm2_15 f+ var_178:0xc.d
                        float var_18c
                        float xmm1_19 = var_18c f* xmm0_1:4.d
                        float var_d0_1 = xmm4_6 + xmm1_17 f+ xmm0_1:0xc.d
                        float var_c4_1 = xmm7_6 + xmm1_19 f+ xmm0_1:0xc.d
                        float var_b8_1 = xmm4_6 + xmm1_19 f+ xmm0_1:0xc.d
                        float var_cc_1 = xmm6_7 + xmm5_11 f+ xmm0_2:0xc.d
                        float xmm0_80 = var_18c f* var_178:4.d
                        float xmm2_17 = var_18c f* xmm0_2:4.d
                        int64_t xmm1_21 =
                            _mm_unpacklo_ps(var_50_2.o, xmm7_6 + xmm1_17 f+ xmm0_1:0xc.d)
                        int64_t var_e0 = xmm1_21
                        float xmm5_14 = xmm0_61 + xmm0_80 f+ var_178:0xc.d
                        float xmm3_18 = xmm3_16 + xmm0_80 f+ var_178:0xc.d
                        var_10c.q = xmm1_21
                        var_1a8 = 0
                        float var_c8_1 = xmm5_14
                        float var_bc_1 = xmm3_18
                        float var_b4_1 = xmm6_7 + xmm2_17 f+ xmm0_2:0xc.d
                        float var_c0_1 = xmm3_14 + xmm2_17 f+ xmm0_2:0xc.d
                        int32_t* var_114_2 = var_128
                        
                        if (var_128 == 0)
                            void* eax_34 = *(sub_5af880(var_11c) + 8)
                            int32_t* eax_35 =
                                sub_6dd280(eax_34, *(eax_34 + 8) + 8, &data_8ce7bc, 0x53)
                            
                            if (eax_35 == 0)
                                eax_35 = data_1724a58
                            
                            var_114_2 = eax_35
                        
                        void* eax_37 = *(sub_5af880(var_11c) + 8)
                        sub_646580(&var_10c, &var_100, &var_e0, var_124_2, arg11, &var_10c, 
                            &var_1a8, var_114_2, 
                            sub_6dd280(eax_37, *(eax_37 + 8) + 8, &data_8ce7bc, 0x54), var_11c)
                    
                    edx_10 = arg6
                    i = i_2
                
                j += 1
                j_1 = j
            while (j s< 3)
            
            i = &i[1]
            i_2 = i
        while (i s< 0xc)
        
        goto label_685a3e
    
    float edx_20
    eax_15, edx_20 = sub_5a0e40()
    float xmm6_10 = eax_15
    float xmm2_19
    float xmm4_9
    
    if (arg6 != 6)
        eax_15 = arg4
        xmm2_19 = *eax_15
        xmm4_9 = *(eax_15 + 4)
    else
        float xmm1_22 = *arg5
        xmm2_19 = arg5[1] f/ edx_20
        
        if (not(xmm1_22 f> arg5[1]))
            xmm2_19 = xmm1_22 / xmm6_10
        
        xmm4_9 = xmm2_19
    
    int32_t xmm3_21 = (zx.o(0)).d
    float xmm4_10 = xmm4_9 * 0f
    float xmm0_85 = 0f / xmm6_10
    float xmm2_20 = xmm2_19 * 0f
    float xmm0_88 = (xmm6_10 - 0f) / xmm6_10
    float xmm0_89 = 0f / edx_20
    float xmm0_92 = (edx_20 - 0f) / edx_20
    
    if (arg11 == 0)
        float xmm1_23 = *arg5
        float xmm5_20 = xmm2_20 + xmm2_20
        int32_t* i_1
        float var_110_2
        float xmm1_25
        
        if (xmm5_20 <= xmm1_23)
            float xmm0_94 = xmm1_23 - xmm5_20
            var_110_2 = xmm0_94
            float xmm0_97 = sub_4d5cb0(xmm0_94 / (xmm2_19 * xmm6_10 - xmm5_20) + 9.99999975e-06f)
            xmm3_21 = (zx.o(0)).d
            float xmm0_98
            
            if (0 f<= xmm0_97)
                xmm0_98 = xmm0_97 + 0.5f
            else
                xmm0_98 = xmm0_97 - 0.5f
            
            xmm1_25 = xmm2_20
            i_1 = int.d(xmm0_98)
        else
            i_1 = nullptr
            var_110_2 = 0f
            xmm1_25 = xmm1_23 / xmm5_20 * xmm2_20
        
        float xmm0_99 = arg5[1]
        int32_t esi_3
        
        if (xmm1_25 + xmm1_25 <= xmm0_99)
            float xmm4_11 = xmm4_10 + xmm4_10
            float xmm0_100 = xmm0_99 - xmm4_11
            float xmm0_103 = sub_4d5cb0(xmm0_100 / (xmm4_9 * edx_20 - xmm4_11) + 9.99999975e-06f)
            float xmm0_104
            
            if (0 f<= xmm0_103)
                xmm0_104 = xmm0_103 + 0.5f
            else
                xmm0_104 = xmm0_103 - 0.5f
            
            xmm3_21 = xmm0_100
            esi_3 = int.d(xmm0_104)
        else
            esi_3 = 0
        
        i = i_1
        float xmm1_30 = _mm_cvtepi32_ps(zx.o(esi_3))
        int32_t var_118_2 = esi_3
        float var_5c_3 = xmm0_89
        float var_54_3 = xmm0_89
        float xmm0_106 = _mm_cvtepi32_ps(zx.o(i))
        float xmm3_22 = xmm3_21 f/ xmm1_30
        var_60 = xmm0_85
        float var_50_3 = xmm0_85
        float var_114_4 = xmm3_22
        float var_4c_3 = xmm0_92
        float var_44_3 = xmm0_92
        float xmm4_13 = var_110_2 / xmm0_106
        float var_110_3 = xmm4_13
        float var_58_3 = xmm0_88
        float var_48_3 = xmm0_88
        
        if (arg6 == 8 || arg6 == 6)
            int32_t edx_21 = 0
            
            if (i s> 0)
                do
                    i = nullptr
                    int32_t ecx_27 = edx_21 + 1
                    int32_t var_124_4 = ecx_27
                    
                    if (esi_3 s<= 0)
                        edx_21 = ecx_27
                    else
                        var_198 = _mm_cvtepi32_ps(zx.o(edx_21)) * xmm4_13
                        
                        do
                            float var_190_1 = _mm_cvtepi32_ps(zx.o(ecx_27)) * xmm4_13
                            float var_18c_1 = _mm_cvtepi32_ps(zx.o(i + 1)) * xmm3_22
                            float var_194_1 = _mm_cvtepi32_ps(zx.o(i)) * xmm3_22
                            sub_6849b0(&var_60, &var_198, &var_178, &var_60, arg10, 0, var_128, 
                                var_11c)
                            xmm3_22 = var_114_4
                            i += 1
                            esi_3 = var_118_2
                            xmm4_13 = var_110_3
                            ecx_27 = var_124_4
                        while (i s< esi_3)
                        
                        edx_21 = ecx_27
                while (edx_21 s< i_1)
        
        goto label_685a3e
    
    var_208_3 = "DrawImageNew"
    var_20c_3 = 0xae2
    var_210_3 = "C:\x\ax2017\Engine\Sprite.cpp"
    ecx_10 = "has4color == false"
else
    var_70 = arg6
    var_6c = arg6
    int32_t var_68_1 = *arg5
    int32_t var_64_1 = arg5[1]
    int32_t xmm0_6 = arg12[1]
    float xmm2 = *arg12
    int32_t xmm1_1 = arg12[2]
    int32_t var_5c_1 = xmm0_6
    int32_t var_54_1 = xmm0_6
    int32_t xmm0_7 = arg12[3]
    var_60 = xmm2
    int32_t var_58_1 = xmm1_1
    float var_50_1 = xmm2
    int32_t var_4c_1 = xmm0_7
    int32_t var_48_1 = xmm1_1
    int32_t var_44_1 = xmm0_7
    i = sub_6842b0(&var_34, &var_60, &var_70, arg8, &var_34, &var_100)
    
    if (i.b == 0)
    label_685a3e:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(i)
        return i
    
    eax_15 = sub_683de0(arg7, &var_100)
    float xmm5_1 = var_30
    float xmm0_9 = var_178.d * var_34
    float xmm7_2 = var_178:4.d * xmm5_1
    float xmm4_2 = xmm0_1:4.d * xmm5_1
    float xmm2_2 = xmm0_2:4.d * xmm5_1
    float xmm5_3 = xmm0_2.d * var_34
    float xmm0_11 = xmm0_9 + xmm7_2 f+ var_178:0xc.d
    float xmm0_13 = xmm0_1.d * var_34
    float xmm5_5 = xmm5_3 + xmm2_2 f+ xmm0_2:0xc.d
    float xmm0_15 = xmm0_13 + xmm4_2 f+ xmm0_1:0xc.d
    float var_b0 = xmm0_11
    float var_ac_1 = xmm0_15
    float var_a8_1 = xmm5_5
    float var_2c
    bool cond:1_1 = var_2c < var_34
    float xmm6_2 = var_2c f* var_178.d
    float xmm3_2 = var_2c f* xmm0_1.d
    float xmm1_3 = var_2c f* xmm0_2.d
    float xmm7_3 = var_178:0xc.d
    float xmm6_3 = xmm0_1:0xc.d
    float var_a4_1 = xmm6_2 + xmm7_2 + xmm7_3
    float var_28
    float xmm3_4 = var_28 f* xmm0_2:4.d
    var_a0 = xmm3_2 + xmm4_2 f+ xmm0_1:0xc.d
    float xmm1_5 = var_28 f* var_178:4.d
    float xmm2_4 = var_28 f* xmm0_1:4.d
    var_9c = xmm1_3 + xmm2_2 f+ xmm0_2:0xc.d
    float var_98_1 = xmm1_5 + xmm0_9 + xmm7_3
    float var_94_1 = xmm2_4 + xmm0_13 + xmm6_3
    float var_90_1 = xmm3_4 + xmm5_3 f+ xmm0_2:0xc.d
    
    if (not(cond:1_1) && not(var_28 < var_30))
        float var_8c_1 = xmm1_5 + xmm6_2 + xmm7_3
        float var_88_1 = xmm2_4 + xmm3_2 + xmm6_3
        float var_84_1 = xmm3_4 + xmm1_3 f+ xmm0_2:0xc.d
        int32_t ecx_6 = sub_5a0e40()
        var_10c = xmm0_11
        float var_108_1 = xmm0_15
        float var_104_1 = xmm5_5
        var_1a8 = 0
        int32_t var_1a0_1 = 0x3f800000
        
        if (var_128 == 0)
            void* eax_17 = *(sub_5af880(esi) + 8)
            int32_t* eax_18
            eax_18, ecx_6 = sub_6dd280(eax_17, *(eax_17 + 8) + 8, &data_8ce7bc, 0x53)
            
            if (eax_18 == 0)
                eax_18 = data_1724a58
            
            var_128 = eax_18
        
        int32_t eax_21 = arg2
        
        if (eax_21 == 0)
            void* eax_20 = *(sub_5af880(esi) + 8)
            eax_21, ecx_6 = sub_6dd280(eax_20, *(eax_20 + 8) + 8, &data_8ce7bc, 0x54)
        
        int32_t var_208_2 = ecx_6
        i = sub_646580(&var_10c, &var_100, &var_b0, arg10, arg11, &var_10c, &var_1a8, var_128, 
            eax_21, esi)
        goto label_685a3e
    
    var_208_3 = "RectBottomRight"
    var_20c_3 = 0x12d
    var_210_3 = "C:\x\ax2017\Engine\Rect.cpp"
    ecx_10 = "RectIsNormalized(r)"
sub_63b870(eax_15, &data_801800, ecx_10, var_210_3, var_20c_3, var_208_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
