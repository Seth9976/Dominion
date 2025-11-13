// 函数: sub_633d60
// 地址: 0x633d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_171e9a0
int32_t eax = *(arg1 + 0x68)
int128_t* eax_1 = eax - 1
float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x64))) * 30f
float xmm2_1 = _mm_cvtepi32_ps(zx.o(eax))
float xmm0_3 = 800f / (xmm2_1 * 800f / xmm0_2 + 1f)
float xmm1_7 = (800f - xmm0_3 - 20f - _mm_cvtepi32_ps(zx.o(eax_1)) * 10f) / xmm2_1
int32_t var_68_1
char* ecx_1
char const* const edx

if (ecx == 0)
    char const* const var_64 = "UI2DefGet"
    var_68_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_1 = &data_874470
else if (ecx[1] != 0x22)
label_63412f:
    char const* const var_64_3 = "UI2DefGet"
    var_68_1 = 0xc17
    edx = &data_801800
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
else
    eax_1 = sub_5af880(ecx)
    int128_t var_30
    int128_t xmm0_7
    
    if (*(eax_1 + 8) != 0)
        eax_1 = sub_64f140(eax_1, nullptr, *eax_1, &var_30, 0)
        xmm0_7 = *eax_1
    else
        xmm0_7 = data_7ff520
    
    int32_t* ecx_3 = data_171e998
    float xmm0_10 = xmm0_7:0xc.d f- xmm0_7:4.d - 20f
    int128_t var_40_1
    var_40_1.d = xmm0_7:8.d f- xmm0_7.d - 20f
    
    if (ecx_3 != 0)
        if (ecx_3[1] != 0x22)
            goto label_63412f
        
        eax_1 = sub_5af880(ecx_3)
        void var_20
        int128_t xmm0_11
        
        if (*(eax_1 + 8) != 0)
            eax_1 = sub_64f140(eax_1, nullptr, *eax_1, &var_20, 0)
            xmm0_11 = *eax_1
        else
            xmm0_11 = data_7ff520
        
        int32_t* ecx_5 = data_171e99c
        var_30 = xmm0_11
        float xmm0_13 = var_30:8.d f- var_30.d
        float xmm0_15 = var_30:0xc.d f- var_30:4.d
        
        if (ecx_5 != 0)
            if (ecx_5[1] != 0x22)
                goto label_63412f
            
            int32_t** eax_2 = sub_5af880(ecx_5)
            int128_t xmm0_16
            
            if (eax_2[2] != 0)
                xmm0_16 = *sub_64f140(eax_2, nullptr, *eax_2, &var_20, 0)
            else
                xmm0_16 = data_7ff520
            
            float xmm6_1 = xmm0_3 / xmm0_10
            int32_t eax_4 = *(arg1 + 0x64)
            int32_t ecx_7 = *(arg1 + 0x68)
            float xmm5_1 = xmm1_7 / xmm0_15
            var_30 = xmm0_16
            float xmm4_1 = xmm6_1 * 10f
            float xmm6_2 = xmm6_1 * 0f
            float xmm2_4 = var_30:8.d f- var_30.d + 10f
            float xmm3_3 = (var_30:0xc.d f- var_30:4.d + 10f) * xmm5_1
            *arg2 = xmm4_1
            float xmm1_13 = (xmm0_13 + 10f) * xmm5_1
            arg2[9] = xmm3_3
            arg2[1] = xmm4_1
            float xmm3_6 = _mm_cvtepi32_ps(zx.o(eax_4)) * xmm1_13
            arg2[5] = xmm1_13
            arg2[6] = (xmm0_15 + 10f) * xmm5_1
            arg2[8] = xmm2_4 * xmm5_1
            float xmm5_5 = (xmm3_6 + xmm4_1 + xmm6_2 + xmm6_2 + xmm4_1) / (var_40_1.d + 20f)
            float xmm1_18 = _mm_cvtepi32_ps(zx.o(ecx_7))
            float xmm2_8 = xmm4_1 + xmm0_10 * xmm5_5 + xmm4_1
            float xmm4_7 = xmm4_1 + xmm5_5 * 0f + xmm6_2
            arg2[4] = xmm2_8
            float xmm1_21 = xmm1_18 * arg2[6] + xmm2_8 + xmm4_1
            float xmm2_9 = 800f / xmm1_21
            var_40_1.d = (xmm4_7 + xmm3_6 + xmm4_1) * xmm2_9
            var_40_1:4.d = xmm1_21 * xmm2_9
            *arg2 = xmm4_1 * xmm2_9
            arg2[1] = xmm4_1 * xmm2_9
            arg2[2] = xmm5_5 * xmm2_9
            arg2[4] = xmm2_9 * arg2[4]
            float xmm0_31 = xmm2_9 * arg2[5]
            arg2[3] = xmm4_7 * xmm2_9
            arg2[5] = xmm0_31
            arg2[6] = xmm2_9 * arg2[6]
            float xmm0_35 = xmm2_9 * xmm5_1
            arg2[7] = xmm0_35
            arg2[0xa] = xmm0_35
            float xmm2_10 = xmm2_9 * arg2[9]
            arg2[8] = xmm2_9 * arg2[8]
            arg2[9] = xmm2_10
            return var_40_1.d
        
        char const* const var_64_2 = "UI2DefGet"
        var_68_1 = 0xc16
        edx = "UI2DefGet on null pointer"
        ecx_1 = &data_874470
    else
        char const* const var_64_1 = "UI2DefGet"
        var_68_1 = 0xc16
        edx = "UI2DefGet on null pointer"
        ecx_1 = &data_874470

sub_63b870(eax_1, edx, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_68_1, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
