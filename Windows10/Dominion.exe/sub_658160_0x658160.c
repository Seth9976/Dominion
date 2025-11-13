// 函数: sub_658160
// 地址: 0x658160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = data_cf65b8
int32_t xmm4 = (zx.o(0)).d
uint128_t xmm0 = zx.o(eax[6])
float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax[5]))
float xmm0_1 = _mm_cvtepi32_ps(xmm0)
float xmm0_3
float xmm1_3
float xmm2_2
float xmm3_1
float xmm7_2

if (not(xmm1_1 f< 0) && not(xmm0_1 f< 0))
    eax = arg8
    xmm3_1 = *eax
    xmm2_2 = eax[3] f+ xmm0_1
    xmm7_2 = eax[2] f+ xmm1_1
    xmm0_3 = xmm3_1 + 0f
    xmm1_3 = eax[1] f+ 0f

char const* const var_6c
int32_t var_68
char const* const var_64
char* ecx

if (xmm1_1 f< 0 || xmm0_1 f< 0 || *(arg3 + 8) f< *arg3 || *(arg3 + 0xc) f< *(arg3 + 4))
    var_64 = "RectInflate"
    var_68 = 0xb3
    ecx = "RectIsNormalized(r)"
    var_6c = "C:\x\ax2017\Engine\Rect.cpp"
else
    float xmm6_1[0x4] = *arg3
    float xmm5_2 = xmm6_1[0] f+ eax[2]
    float xmm0_8 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa) + xmm3_1
    int128_t xmm3_4 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55) f+ eax[3]
    float xmm6_3 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff) f+ eax[1]
    float xmm1_6 = arg6
    xmm1_6 f- 0
    eax:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
        | (xmm1_6 < 0f ? 1 : 0)
    float xmm3_10 = (xmm0_8 + xmm5_2) * 0.5f
    float xmm5_5 = (xmm6_3 f+ xmm3_4.d) * 0.5f
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        xmm1_6 = 1f
    
    eax = arg7
    float xmm2_4 = arg4 * xmm1_6
    float xmm7_6 = (*eax - 0f) * xmm2_4 + 0f
    float xmm1_10 = (eax[2] f- 0f) * xmm2_4 + 0f
    float xmm2_8 = (eax[1] f- 0f) * xmm2_4 + 0f
    float xmm2_12 = (eax[3] f- 0f) * xmm2_4 + 0f
    
    if (arg2 u<= 5)
        int128_t var_30_1
        float xmm0_10
        float xmm0_14
        float xmm1_11
        float xmm2_13
        float xmm3_12
        float xmm6_4
        
        switch (arg2)
            case 0
                xmm1_11 = xmm1_10 - xmm7_6
                xmm6_4 = xmm6_3 f- xmm3_4.d
                xmm2_13 = xmm2_12 - xmm2_8
                
                if ((xmm1_3 + xmm2_2) * 0.5f > xmm5_5)
                    goto label_658405
                
                goto label_6583cf
            case 1
                xmm1_11 = xmm1_10 - xmm7_6
                xmm0_10 = xmm0_8 - xmm5_2
                xmm2_13 = xmm2_12 - xmm2_8
                
                if ((xmm7_2 + xmm0_3) * 0.5f > xmm3_10)
                    goto label_65838a
                
                goto label_65835c
            case 2
                xmm0_10 = xmm0_8 - xmm5_2
                xmm2_13 = xmm2_12 - xmm2_8
                xmm1_11 = xmm1_10 - xmm7_6
            label_65835c:
                float xmm5_6 = xmm5_5 - xmm2_13 * 0.5f
                xmm3_12 = xmm3_10 - xmm0_10 * 0.5f - xmm1_11
                xmm0_14 = xmm5_6
                var_30_1:4.d = xmm5_6
            case 3
                xmm0_10 = xmm0_8 - xmm5_2
                xmm2_13 = xmm2_12 - xmm2_8
                xmm1_11 = xmm1_10 - xmm7_6
            label_65838a:
                xmm3_12 = xmm3_10 + xmm0_10 * 0.5f
                float xmm5_7 = xmm5_5 - xmm2_13 * 0.5f
                xmm0_14 = xmm5_7
                var_30_1:4.d = xmm5_7
            case 4
                xmm6_4 = xmm6_3 f- xmm3_4.d
                xmm2_13 = xmm2_12 - xmm2_8
                xmm1_11 = xmm1_10 - xmm7_6
            label_6583cf:
                xmm3_12 = xmm3_10 - xmm1_11 * 0.5f
                float xmm5_9 = xmm5_5 - xmm6_4 * 0.5f - xmm2_13
                xmm0_14 = xmm5_9
                var_30_1:4.d = xmm5_9
            case 5
                xmm6_4 = xmm6_3 f- xmm3_4.d
                xmm2_13 = xmm2_12 - xmm2_8
                xmm1_11 = xmm1_10 - xmm7_6
            label_658405:
                float xmm6_8 = xmm6_4 * 0.5f + xmm5_5
                xmm3_12 = xmm3_10 - xmm1_11 * 0.5f
                xmm0_14 = xmm6_8
                var_30_1:4.d = xmm6_8
        
        var_30_1.d = xmm3_12
        float xmm7_8 = xmm3_12 + xmm1_11
        var_30_1:0xc.d = xmm0_14 + xmm2_13
        float xmm1_12 = (zx.o(0)).d
        var_30_1:8.d = xmm7_8
        
        if (not(xmm0_3 <= xmm3_12))
            xmm1_12 = xmm0_3 - xmm3_12 + 0f
        else if (not(xmm7_8 <= xmm7_2))
            xmm1_12 = xmm7_2 - xmm7_8 + 0f
        
        float xmm2_15 = var_30_1:4.d
        
        if (xmm1_3 <= xmm2_15)
            float xmm3_13 = var_30_1:0xc.d
            
            if (not(xmm3_13 <= xmm2_2))
                xmm4 = 0f + xmm2_2 - xmm3_13
        else
            xmm4 = 0f + xmm1_3 - xmm2_15
        
        int128_t var_30_2
        var_30_2.d = xmm2_4
        int32_t var_14 = 0
        float var_1c = xmm1_12 f+ var_30_1.d
        float var_18 = xmm4 f+ xmm2_15
        *arg5 = data_800248
        int128_t var_20
        arg5[1] = var_20
        return arg5
    
    var_64 = "ComputeTaptipAlignment"
    var_68 = 0x1ed5
    var_6c = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "Halt"

sub_63b870(eax, &data_801800, ecx, var_6c, var_68, var_64)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
