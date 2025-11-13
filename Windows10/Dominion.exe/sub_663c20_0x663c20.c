// 函数: sub_663c20
// 地址: 0x663c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d27d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_23c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *(arg1 + 0x1460)
int32_t result_1 = result

if (result != 0)
    char const* const var_248_1
    int32_t var_244_1
    char const* const var_240_1
    char* ecx
    
    if (result[1] != 2)
        var_240_1 = "StructureGetDef"
        var_244_1 = 0x559
        var_248_1 = "C:\x\ax2017\Engine\Structure.cpp"
        ecx = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
    label_6645d7:
        sub_63b870(result, &data_801800, ecx, var_248_1, var_244_1, var_240_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_5af880(result)
    void* eax_4 = *eax_3
    float xmm1_1[0x4] = *(eax_4 + 0x40)
    int64_t xmm0_1 = *(eax_4 + 0x50)
    float xmm2_2 = xmm0_1.d - _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
    float xmm4_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff) f- xmm1_1
    float xmm3_2 = xmm0_1:4.d - _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
    int128_t var_50 = data_bf21e8
    int128_t var_40_1 = data_bf21f8
    float xmm7_1
    
    xmm7_1 = xmm3_2 <= xmm2_2 ? xmm2_2 : xmm3_2
    
    float xmm6_1 = *(arg1 + 0x16cc)
    float xmm5_1 = *(arg1 + 0x16d0)
    float xmm0_9 = xmm6_1 / xmm4_3
    float xmm4_4 = *(data_147abe8 + 0x2c)
    float xmm1_3 = xmm5_1 / xmm7_1
    int128_t var_f0
    float var_94
    float result_2
    float var_2c
    float* eax_12
    int32_t* ecx_6
    int128_t* edx_3
    float var_1b0[0x10]
    float var_170[0x10]
    int128_t var_130
    int128_t var_70
    
    if (*(arg1 + 0x13fc) != 9)
        float var_30 = xmm0_9
        
        if (xmm3_2 <= xmm2_2)
            var_2c = xmm1_3
            int32_t var_28_3 = 0x3f800000
        else
            var_2c = 1f
            float var_28_2 = xmm1_3
        
        var_94 = xmm6_1 * 0.5f
        float var_90_1 = xmm5_1 * 0.5f
        int32_t var_8c_1 = 0
        float* eax_14 = sub_6818c0(&var_170, &data_800248, &var_94, &var_170, &var_30)
        var_130 = *eax_14
        int128_t var_120_1 = *(eax_14 + 0x10)
        int128_t var_110_1 = *(eax_14 + 0x20)
        int128_t var_100_1 = *(eax_14 + 0x30)
        float* eax_16 = sub_64b1b0(&var_1b0, &data_800248, &var_50, &var_1b0)
        var_f0 = *eax_16
        int128_t var_e0_3 = *(eax_16 + 0x10)
        int128_t var_d0_3 = *(eax_16 + 0x20)
        int128_t var_c0_3 = *(eax_16 + 0x30)
        float var_230[0x10]
        float* eax_18 = sub_64b1b0(&var_230, &data_800248, arg1 + 0x1620, &var_230)
        var_70 = *eax_18
        int128_t var_60_2 = *(eax_18 + 0x10)
        var_50 = *(eax_18 + 0x20)
        int128_t var_40_3 = *(eax_18 + 0x30)
        float var_1f0[0x10]
        float* eax_20 = sub_642ae0(&var_1f0, &var_f0, &var_70, &var_1f0)
        var_f0 = *eax_20
        int128_t var_e0_4 = *(eax_20 + 0x10)
        int128_t var_d0_4 = *(eax_20 + 0x20)
        int128_t var_c0_4 = *(eax_20 + 0x30)
        float* eax_22 = sub_642ae0(&var_1f0, &var_130, &var_f0, &var_1f0)
        edx_3 = &var_130
        ecx_6 = data_147b06c + 0x124
        var_130 = *eax_22
        int128_t var_120_2 = *(eax_22 + 0x10)
        int128_t var_110_2 = *(eax_22 + 0x20)
        eax_12 = &var_70
        int128_t var_100_2 = *(eax_22 + 0x30)
    else
        int32_t xmm0_10 = _mm_min_ss(xmm0_9, xmm1_3)
        float xmm1_4 = *(arg1 + 0x1620)
        float xmm7_2 = *(arg1 + 0x162c)
        var_50.d = xmm0_10
        float xmm6_3 = xmm6_1 * 0.5f * xmm1_4
        float xmm5_3 = xmm5_1 * 0.5f * xmm1_4
        float xmm1_5 = xmm1_4 * 0f
        float xmm0_11 = *(arg1 + 0x1628)
        float xmm2_4 = xmm0_11 * xmm0_11
        float xmm6_4 = *(arg1 + 0x1624)
        float xmm1_6 = *(arg1 + 0x1630)
        float xmm2_6 = xmm7_2 * xmm7_2
        float xmm4_6 = xmm6_4 * xmm6_4
        float xmm2_8 = xmm0_11 * xmm1_6
        float xmm5_5 = xmm1_6 * xmm1_6
        float xmm3_4 = xmm0_11 * xmm6_4
        float xmm2_10 = xmm5_5 - xmm4_6
        float xmm7_3 = xmm7_2 f* *(arg1 + 0x1624)
        float xmm6_6 = xmm7_2 * xmm1_6
        float xmm0_13 = *(arg1 + 0x1624) * xmm1_6
        result_2 = *(arg1 + 0x162c) * xmm0_11
        var_40_1:4.d = (xmm3_4 - xmm6_6) * (xmm5_3 + xmm5_3)
            + (xmm4_6 + xmm5_5 - xmm2_4 - xmm2_6) * xmm6_3
            + (xmm7_3 + xmm2_8) * (xmm1_5 + xmm1_5) f+ *(arg1 + 0x1634)
        int64_t var_38_1
        var_38_1.d = (xmm6_6 + xmm3_4) * (xmm6_3 + xmm6_3) + (xmm2_10 + xmm2_4 - xmm2_6) * xmm5_3
            + (result_2 - xmm0_13) * (xmm1_5 + xmm1_5) f+ *(arg1 + 0x1638)
        var_38_1:4.d = (xmm5_3 + xmm5_3) * (xmm0_13 + result_2)
            + (xmm6_3 + xmm6_3) * (xmm7_3 - xmm2_8)
            + (xmm2_10 - xmm2_4 + xmm2_6) * xmm1_5 f+ *(arg1 + 0x163c)
        float* eax_7 = sub_64b1b0(&var_130, edx_1, &var_50, &var_130)
        var_70 = *eax_7
        int128_t var_60_1 = *(eax_7 + 0x10)
        var_50 = *(eax_7 + 0x20)
        int128_t var_40_2 = *(eax_7 + 0x30)
        float* eax_9 = sub_64b1b0(&var_1b0, edx_1, arg1 + 0x1620, &var_1b0)
        int32_t* ecx_5 = data_147b06c + 0x124
        var_f0 = *eax_9
        int128_t var_e0_1 = *(eax_9 + 0x10)
        int128_t var_d0_1 = *(eax_9 + 0x20)
        int128_t var_c0_1 = *(eax_9 + 0x30)
        float* eax_11 = sub_642ae0(&var_170, &var_f0, ecx_5, &var_170)
        edx_3 = &var_70
        ecx_6 = &var_f0
        var_f0 = *eax_11
        int128_t var_e0_2 = *(eax_11 + 0x10)
        int128_t var_d0_2 = *(eax_11 + 0x20)
        eax_12 = &var_170
        int128_t var_c0_2 = *(eax_11 + 0x30)
    float* eax_23 = sub_642ae0(eax_12, edx_3, ecx_6, eax_12)
    bool cond:3_1 = *(arg1 + 0x14b8) == 0
    var_f0 = *eax_23
    int128_t var_e0_5 = *(eax_23 + 0x10)
    int128_t var_d0_5 = *(eax_23 + 0x20)
    int128_t var_c0_5 = *(eax_23 + 0x30)
    
    if (cond:3_1)
        data_cf6b18.d = 0
    else
        data_cf6b18.d = *(arg1 + 0x1344)
    
    uint32_t ecx_14 = *sub_67d3c0(arg1 + 0x674, xmm4_4, &result_2)
    float xmm0_70 = _mm_cvtepi32_ps(zx.o(ecx_14.b)) / 255f
    float xmm0_72 = _mm_cvtepi32_ps(zx.o((ecx_14 u>> 8).b))
    bool cond:5_1 = *(arg1 + 0x14b8) == 0
    var_94 = xmm0_72 / 255f
    float xmm0_75 = _mm_cvtepi32_ps(zx.o((ecx_14 u>> 0x10).b))
    result = data_147abe8
    float xmm1_21 = _mm_cvtepi32_ps(zx.o(ecx_14 u>> 0x18)) / 255f
    float var_90_2 = xmm0_75 / 255f
    float var_8c_2 = xmm1_21
    float var_98_1
    var_98_1.o = xmm0_70.o
    float xmm0_78 = result[0xb]
    float var_8c_3 = xmm1_21 f* *(arg1 + 0x1680)
    
    if (not(cond:5_1))
        xmm0_78 = xmm0_78 f- *(arg1 + 0x1344)
    
    bool cond:4_1 = data_147aba1 == 0
    data_cf6b18:4 = xmm0_78
    int128_t xmm0_79 = data_cf6a70
    
    if (cond:4_1)
    label_6645be:
        var_240_1 = "Draw3DSetMaterialColor"
        var_244_1 = 0x304
    label_6645c8:
        var_248_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
        ecx = "gDraw3DData.submittingRenderItems"
        goto label_6645d7
    
    int32_t* var_74_2 = nullptr
    data_cf6a70 = var_98_1.o
    int32_t* esi_1 = *(arg1 + 0x14b0)
    
    if (esi_1 != 0)
        if (esi_1[1] != 0x1d)
            var_74_2 = esi_1
        else
            int32_t* var_80_2 = esi_1
            
            if (*esi_1 == 0)
                sub_69f4a0(result, 0, esi_1, 1)
            
            esi_1[7] += 1
            int32_t var_14_1 = 2
            uint32_t eax_33 = sub_6edec0(**esi_1)
            int32_t var_14_2 = 0xffffffff
            esi_1[7] -= 1
            var_74_2 = eax_33
            int32_t var_80_3 = 0
    
    int32_t* esi_2 = *(arg1 + 0x1420)
    int32_t ecx_18 = *(arg1 + 0x1468)
    result = *(arg1 + 0x1470)
    var_2c = esi_2
    int32_t* result_4 = result
    int128_t xmm0_81
    
    if (esi_2 != 0)
        if (esi_2[1] != 3)
            var_240_1 = "TextureGetDef"
            var_244_1 = 0x89
            var_248_1 = "C:\x\ax2017\Engine\Texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            goto label_6645d7
        
        result = *sub_5af880(esi_2)
        
        if (result == 0)
            xmm0_81 = data_7ff520
            goto label_664493
        
        int32_t* ecx_20 = result[0xa]
        
        if (ecx_20 == 0)
            xmm0_81 = data_7ff520
            goto label_664493
        
        if (ecx_20[1] != 3)
            var_240_1 = "TextureGetDef"
            var_244_1 = 0x89
            var_248_1 = "C:\x\ax2017\Engine\Texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            goto label_6645d7
        
        int32_t* edx_7 = *sub_5af880(ecx_20)
        int32_t esi_3 = result[0xe]
        int32_t ecx_21 = result[0xd]
        int32_t eax_37 = *edx_7
        float xmm2_24 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_37)) f+ *((eax_37 u>> 0x1f << 3) + &data_893660))
        int32_t eax_40 = *result
        float xmm0_87 = _mm_cvtepi32_ps(zx.o(ecx_21)) / xmm2_24
        double xmm0_90[0x2] =
            _mm_cvtepi32_pd(zx.q(eax_40)) f+ *((eax_40 u>> 0x1f << 3) + &data_893660)
        int32_t eax_42 = edx_7[1]
        float var_90_3 = (_mm_cvtpd_ps(xmm0_90) + _mm_cvtepi32_ps(zx.o(ecx_21))) / xmm2_24
        float xmm2_25 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_42)) f+ *((eax_42 u>> 0x1f << 3) + &data_893660))
        int32_t eax_45 = result[1]
        var_94 = _mm_cvtepi32_ps(zx.o(esi_3)) / xmm2_25
        float var_8c_4 = (
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_45)) f+ *((eax_45 u>> 0x1f << 3) + &data_893660))
            + _mm_cvtepi32_ps(zx.o(esi_3))) / xmm2_25
        xmm0_81 = xmm0_87.o
        goto label_664493
    
    xmm0_81 = data_7ff520
label_664493:
    bool cond:7_1 = data_147aba1 != 0
    result = data_cf6a6c
    data_cf6b28 = xmm0_81
    result_2 = result
    
    if (not(cond:7_1))
        var_240_1 = "Draw3DSetSortOverride"
        var_244_1 = 0x2fc
        goto label_6645c8
    
    data_cf6a6c = 1
    
    if (ecx_18 != 0)
        result = sub_6db510(*(arg1 + 0x13bc))
        
        if (result != 0)
            result = sub_648470(result, &var_f0, result_1, var_74_2, esi_2, result)
        
        goto label_66457a
    
    result = result_1
    
    if (result[1] != 2)
        var_240_1 = "StructureDefGet"
        var_244_1 = 0x313
        var_248_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
        ecx = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
        goto label_6645d7
    
    result = sub_5af880(result)
    int32_t* result_3 = result
    int32_t* ecx_25 = *result
    
    if (ecx_25 != 0)
        int32_t i = 0
        
        if (*ecx_25 s> 0)
            int32_t edi_1 = 0
            
            do
                sub_647050(&var_2c, &var_f0, ecx_25[2] + edi_1, var_74_2, &var_2c, 2, 0)
                result = result_3
                i += 1
                edi_1 += 0x150
                ecx_25 = *result
            while (i s< *ecx_25)
        
        result = sub_647d70(result, &var_f0, result_1, 0)
    
label_66457a:
    
    if (data_147aba1 == 0)
        goto label_6645be
    
    result = result_2
    data_cf6a6c = result
    data_cf6a70 = xmm0_79
    data_cf6b18.d = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
