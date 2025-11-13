// 函数: sub_6b7790
// 地址: 0x6b7790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float result = arg7
int32_t*** result_2 = arg5
int32_t*** result_1 = result_2

if (result != 0)
    result_1 = result

int32_t*** result_3 = result_2
char const* const var_68_1
int32_t var_64_1
char const* const var_60_1
char* ecx

if (result_1[2] == 0)
    int32_t esi_1 = result_1[4]
    
    if (esi_1 == 0)
        esi_1 = *(result i+ 0x10)
    
    float xmm2_1[0x4] = *arg4
    void* ecx_1 = data_cf65b8
    float xmm0_1 = *(arg2 i+ 4)
    xmm0_1 f- 0
    float xmm1_1 = xmm2_1[2]
    float xmm3_1 = xmm2_1[0]
    result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    float var_4c_1[0x4] = xmm2_1
    bool p_2 = unimplemented  {test ah, 0x44}
    float var_10
    
    if (p_2)
    label_6b7935:
        
        if (esi_1 == 4 || esi_1 == 0xa || esi_1 == 5 || esi_1 == 6)
            int128_t xmm0_17 = *(arg4 + 8) f- *arg4
            float var_1c_2 = xmm0_17
            
            if (not(9.99999975e-06f f> xmm0_17))
                float xmm1_9 = *(arg4 + 0xc) f- *(arg4 + 4)
                
                if (not(9.99999975e-06f > xmm1_9))
                    int32_t var_60_2 = 0
                    float xmm0_18
                    result, xmm0_18 = sub_6b73c0(&var_10, result_2, arg3, result_1, &var_10)
                    
                    if (not(xmm1_9 <= xmm0_18))
                        float xmm0_22
                        result, xmm0_22 = sub_4d5cb0((xmm1_9 - xmm0_18) * 0.5f)
                        xmm2_1[1] = xmm0_22 + xmm2_1[1]
                    
                    float xmm3_2 = xmm3_1
                    float xmm2_10
                    
                    if (esi_1 != 0xa)
                        xmm2_10 = xmm1_1
                    else
                        float xmm1_14 = (var_1c_2 - var_10) * 0.5f
                        xmm2_10 = xmm1_1 - xmm1_14
                        xmm3_2 = xmm3_2 + xmm1_14
                    
                    result_2 = result_3
                    xmm2_1[0] = xmm3_2 - 0.00100000005f
                    xmm2_1[2] = xmm2_10 + 0.00100000005f
                    var_4c_1 = xmm2_1
        
        float xmm0_32[0x4]
        
        if (esi_1 != 7 && esi_1 != 8)
            if (esi_1 == 9 && not(9.99999975e-06f > *(arg4 + 8) f- *arg4))
                goto label_6b7a39
            
            xmm0_32 = var_4c_1
        else if (9.99999975e-06f > *(arg4 + 8) f- *arg4)
            xmm0_32 = var_4c_1
        else
        label_6b7a39:
            float xmm0_27 = *(arg4 + 0xc) f- *(arg4 + 4)
            
            if (9.99999975e-06f > xmm0_27)
                xmm0_32 = var_4c_1
            else
                int32_t var_60_3 = 0
                float xmm0_28 = sub_6b73c0(result, result_2, arg3, result_1, 0)
                
                if (xmm0_27 <= xmm0_28)
                    xmm0_32 = var_4c_1
                else
                    xmm2_1[1] = xmm0_27 - xmm0_28 + xmm2_1[1]
                    xmm0_32 = xmm2_1
        
        int32_t var_60_4 = 0
        int32_t var_64_4 = 0
        float var_70_1 = 1.40129846e-45f
        float var_84[0x4] = xmm0_32
        return sub_6b6c50(&var_84, arg2, arg3, var_84, result_3, var_70_1, arg6, result_1, 
            var_64_4, var_60_4)
    
    result = arg2
    float xmm5_1 = *result
    float xmm6_1 = xmm2_1[1]
    float xmm2_3 = *(result i+ 8) * 0f
    var_10 = *(result i+ 0x18) * 0f
    float xmm4_5 = xmm5_1 * xmm3_1 + xmm0_1 * xmm6_1 + xmm2_3 f+ *(result i+ 0xc)
    float xmm4_6 = *(result i+ 0x10)
    float xmm0_11 = xmm4_6 * xmm3_1 + *(result i+ 0x14) * xmm6_1 + var_10 f+ *(result i+ 0x1c)
    float xmm0_13
    
    if (not(xmm1_1 < xmm3_1))
        xmm0_13 = _mm_shuffle_ps(var_4c_1, var_4c_1, 0xff)
    
    if (not(xmm1_1 < xmm3_1) && not(xmm0_13 < xmm6_1))
        if (0 f> xmm5_1 * xmm1_1 + *(result i+ 4) * xmm0_13 + xmm2_3 f+ *(result i+ 0xc))
            return result
        
        if (xmm4_5 f> _mm_cvtepi32_ps(zx.o(*(ecx_1 + 0x14))) || 0 f> xmm4_6 * xmm1_1
                + *(result i+ 0x14) * xmm0_13 + var_10 f+ *(result i+ 0x1c))
            return result
        
        if (xmm0_11 f> _mm_cvtepi32_ps(zx.o(*(ecx_1 + 0x18))))
            return result
        
        goto label_6b7935
    
    var_60_1 = "RectBottomRight"
    var_64_1 = 0x12d
    var_68_1 = "C:\x\ax2017\Engine\Rect.cpp"
    ecx = "RectIsNormalized(r)"
else
    var_60_1 = "DrawParentedStringFancy4"
    var_64_1 = 0x7db
    var_68_1 = "C:\x\ax2017\Engine\Font.cpp"
    ecx = "defaultFancy->mImage == NULL"

sub_63b870(result, &data_801800, ecx, var_68_1, var_64_1, var_60_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
