// 函数: sub_73cc60
// 地址: 0x73cc60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t* esi = arg1
int32_t* var_184 = esi
uint32_t result

if (*(*(arg2 + 0x58) + 4) == 0x20)
    result = sub_742a80(arg1)

if (*(*(arg2 + 0x58) + 4) == 0x20 && result.b != 0)
    CookieCheckFunction(result)
    return result

if (*esi == 9)
    float xmm6_2 = float.s(esi[3]) * 0.00150000001f
    float xmm2_2 = *(arg2 + 0x2c) f- *(arg2 + 0x20)
    float xmm1_2 = *(arg2 + 0x30) f- *(arg2 + 0x24)
    *(arg2 + 0x1c) = (*(arg2 + 0x28) f- *(arg2 + 0x1c)) * xmm6_2 f+ *(arg2 + 0x1c)
    *(arg2 + 0x20) = xmm6_2 * xmm2_2 f+ *(arg2 + 0x20)
    *(arg2 + 0x24) = xmm6_2 * xmm1_2 f+ *(arg2 + 0x24)

int32_t* var_198

if (*esi != 3)
label_73d45b:
    result = sub_6db510(data_147df70)
    uint32_t result_1 = result
    
    if (result_1 == 0)
    label_73d4ce:
        
        if (*esi != 0)
            CookieCheckFunction(result)
            return result
        
        if (esi[1] == 0x74)
            data_147df18 = 0
            data_147df1c = 0
            data_147df20 = 0
            data_147df0c = 0
            data_147df10 = 0x41000000
            data_147df14 = 0x40800000
            _CIatan2(arg4, arg3)
            var_198.q = fconvert.d(fconvert.t(-4.0))
            data_147df24 = _mm_cvtpd_ps(zx.o(var_198.q)) ^ (data_8937c0.o).d
            result = _CIatan2()
            var_198.q = fconvert.d(fconvert.t(4.0))
            data_147df28 = _mm_cvtpd_ps(zx.o(var_198.q)) ^ (data_8937c0.o).d
        
        CookieCheckFunction(result)
        return result
    
    if (*esi != 0)
        CookieCheckFunction(result)
        return result
    
    if (esi[1] != 0x61)
        goto label_73d4ce
    
    int32_t* ecx_10 = *(result_1 + 4)
    
    if (ecx_10[1] == 2)
        result = sub_5af880(ecx_10)
        
        if (*(*result + 0x60) s> 0)
            int32_t ecx_13 = data_147df74 + 1
            data_147df74 = ecx_13
            result = *result
            
            if (ecx_13 s< *(result + 0x60))
                result = sub_6def90(result, *(result_1 + 4), result_1, ecx_13)
            else
                data_147df74 = 0xffffffff
                void* ecx_14 = *(result_1 + 0x2c)
                
                if (ecx_14 != 0)
                    result = sub_6dd740(ecx_14, 0)
        
        goto label_73d4ce
else
    int32_t* eax_3 = *(arg2 + 0x58)
    void var_1b8
    float var_180[0x4]
    float xmm1_24
    float xmm3_6
    
    if (eax_3 == 0 || eax_3[1] != 0x19)
    label_73d0dd:
        xmm3_6 = data_147df10
        xmm1_24 = data_147df0c
        var_180 = zx.o(data_147df0c.q)
    else
        float xmm0_8 = data_147df0c
        float xmm1_3 = data_147df10
        float xmm3_2 = data_147df18 - xmm0_8
        float xmm2_4 = data_147df20 f- data_147df14
        float xmm0_10 = data_147df1c - xmm1_3
        float xmm1_7 = 1f / sub_4ac580(ebp, xmm2_4 * xmm2_4 + xmm0_10 * xmm0_10 + xmm3_2 * xmm3_2)
        float var_a0 = xmm3_2 * xmm1_7
        float var_9c_1 = xmm0_10 * xmm1_7
        float var_98_1 = xmm2_4 * xmm1_7
        void var_c0
        int128_t* eax_5 = sub_4ac9c0(&var_c0, &data_7fef8c, &var_a0, &var_c0)
        int32_t var_128_1 = 0
        void* eax_6 = data_cf65b8
        int32_t var_124_1 = 0
        uint128_t xmm1_8 = zx.o(*(eax_6 + 0x14))
        int32_t var_11c_1 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x18)))
        int32_t var_120_1 = _mm_cvtepi32_ps(xmm1_8)
        _libm_sse2_tan_precise(arg4, arg3.w, var_1b8)
        void* eax_7 = data_cf65b8
        float xmm1_10 = fconvert.s(0.52359879016876221)
        uint128_t xmm2_5 = zx.o(*(eax_7 + 0x14))
        float xmm0_27 = _mm_cvtepi32_ps(zx.o(*(eax_7 + 0x18)))
        int32_t var_100_1 = data_147df14
        float var_94_1 = xmm1_10
        float xmm2_8 = _mm_cvtepi32_ps(xmm2_5) / xmm0_27 * xmm1_10
        float var_98_2 = xmm2_8
        var_a0 = xmm2_8 ^ (data_8937c0.o).d
        float xmm0_31 = xmm1_10 ^ (data_8937c0.o).d
        int128_t var_138 = var_a0.o
        float xmm1_12[0x4] = _mm_unpacklo_ps(xmm0_8, xmm1_3)
        data_147df0c.q = xmm1_12
        int128_t xmm0_34 = *eax_5
        esi = var_184
        var_180 = xmm1_12
        int128_t var_118_1 = xmm0_34
        int64_t var_108_1 = xmm1_12
        int32_t var_160
        int64_t* eax_10 = sub_6dc460(&var_160, &esi[4], &var_138, &var_160)
        float xmm2_9[0x4] = *eax_10
        int64_t xmm0_35 = eax_10[2]
        float xmm3_3 = xmm0_35.d
        float xmm4_1 = xmm0_35:4.d
        var_a0.q = 0
        int96_t var_60_1 = xmm2_9[0].12
        float xmm2_10 = _mm_shuffle_ps(xmm2_9, xmm2_9, 0xff)
        uint32_t xmm1_16[0x4] = xmm3_3 * 0f + xmm2_10 * 0f + xmm4_1
        float var_190_2 = xmm1_16
        int32_t xmm0_40 = __andps_xmmxud_memxud(xmm1_16, data_8937a0.o)
        float xmm1_21
        float xmm6_5
        float xmm7_1
        
        if (not(9.99999975e-06f f> xmm0_40))
            xmm6_5 = var_60_1:4.d
            xmm7_1 = var_60_1.d
            xmm1_21 = xmm0_31 * xmm6_5 + var_a0 * xmm7_1 + 1f f* var_60_1:8.d + -0f
        
        if (not(9.99999975e-06f f> xmm0_40) && not(0 f< xmm1_21 * var_190_2))
            float xmm1_23 = (xmm1_21 ^ (data_8937c0.o).d) / var_190_2
            var_160 = 0x3f800000
            int128_t xmm0_46 = data_800248
            float xmm2_12[0x4] = xmm2_10 * xmm1_23 + xmm7_1
            float xmm3_5 = xmm3_3 * xmm1_23 + xmm6_5
            float xmm4_3 = xmm4_1 * xmm1_23 f+ var_60_1:8.d
            int32_t var_14c_1 = xmm2_12
            float var_148_1 = xmm3_5
            int128_t var_40 = var_160.o
            float var_144_1 = xmm4_3
            var_180 = xmm2_12
            int128_t var_30_1 = xmm0_46
            int32_t* eax_11 = sub_6b80f0(eax_3, &var_40)
            
            if (GetKeyState(0x10) s< 0 && *(data_cf65b4 + 0x18) != 0)
                HWND eax_13 = GetFocus()
                
                if (eax_13 == data_147b084 || eax_13 == 0)
                    int32_t xmm0_49 = var_180.d
                    *(arg2 + 0x64) = eax_11[0x1e]
                    *(arg2 + 0x74) = xmm0_49
                    *(arg2 + 0x78) = xmm3_5
                    *(arg2 + 0x7c) = xmm4_3
                    *(arg2 + 0x68) = 0
            
            goto label_73d0dd
        
        xmm3_6 = xmm1_3
        xmm1_24 = xmm0_8
    
    if (*esi != 3)
        goto label_73d45b
    
    void* eax_16 = *(arg2 + 0x58)
    
    if (eax_16 == 0 || *(eax_16 + 4) != 2)
        goto label_73d45b
    
    float xmm0_54 = data_147df1c - xmm3_6
    float xmm2_14 = data_147df18 - xmm1_24
    float xmm3_8 = data_147df20 f- data_147df14
    var_198 = xmm2_14
    float xmm1_28 = 1f / sub_4ac580(ebp, xmm3_8 * xmm3_8 + xmm0_54 * xmm0_54 + xmm2_14 * xmm2_14)
    float var_90 = var_198 f* xmm1_28
    float var_8c_1 = xmm0_54 * xmm1_28
    float var_88_1 = xmm3_8 * xmm1_28
    void var_b0
    int128_t* eax_18 = sub_4ac9c0(&var_b0, &data_7fef8c, &var_90, &var_b0)
    void* edi_1 = data_cf65b8
    int32_t var_ec_1 = 0
    int32_t var_e8_1 = 0
    uint128_t xmm1_29 = zx.o(*(edi_1 + 0x14))
    int32_t var_e0_1 = _mm_cvtepi32_ps(zx.o(*(edi_1 + 0x18)))
    int32_t var_e4_1 = _mm_cvtepi32_ps(xmm1_29)
    _libm_sse2_tan_precise(arg4, arg3.w, var_1b8)
    uint128_t xmm2_15 = zx.o(*(edi_1 + 0x14))
    float xmm1_31 = fconvert.s(0.52359879016876221)
    int32_t var_c4_1 = data_147df14
    float xmm0_71 = _mm_cvtepi32_ps(zx.o(*(edi_1 + 0x18)))
    float var_84_1 = xmm1_31
    float xmm2_18 = _mm_cvtepi32_ps(xmm2_15) / xmm0_71 * xmm1_31
    float var_88_2 = xmm2_18
    var_90 = xmm2_18 ^ (data_8937c0.o).d
    float xmm0_75 = xmm1_31 ^ (data_8937c0.o).d
    int128_t var_fc = var_90.o
    esi = var_184
    int128_t var_dc_1 = *eax_18
    int64_t var_cc_1 = var_180.q
    int64_t* eax_21 = sub_6dc460(&var_180, &esi[4], &var_fc, &var_180)
    float xmm1_32[0x4] = *eax_21
    int64_t xmm0_79 = eax_21[2]
    int96_t var_80_1 = xmm1_32[0].12
    var_90.q = 0
    float xmm1_33[0x4] = _mm_shuffle_ps(xmm1_32, xmm1_32, 0xff)
    float var_88_3 = 1f
    float xmm0_82 = xmm1_33[0] * 0f
    var_180 = xmm1_33
    uint32_t xmm3_12[0x4] = xmm0_79.d * 0f + xmm0_82 f+ xmm0_79:4.d
    
    if (9.99999975e-06f f> __andps_xmmxud_memxud(xmm3_12, data_8937a0.o))
        goto label_73d45b
    
    float xmm1_38 = xmm0_75 f* var_80_1:4.d + var_90 f* var_80_1.d + var_88_3 f* var_80_1:8.d + -0f
    
    if (0 f< xmm1_38 f* xmm3_12)
        goto label_73d45b
    
    var_198 = (xmm1_38 ^ (data_8937c0.o).d) f/ xmm3_12
    char** eax_22 = sub_6da310(data_147df48)
    eax_22[2] = var_180.d f* var_198 f+ var_80_1.d
    eax_22[3] = xmm0_79.d f* var_198 f+ var_80_1:4.d
    eax_22[4] = xmm0_79:4.d f* var_198 f+ var_80_1:8.d
    result = eax_22[0x1a]
    data_147df70 = result
    int32_t* ecx_7 = eax_22[1]
    
    if (ecx_7[1] == 2)
        void* eax_24 = *sub_5af880(ecx_7)
        
        if (eax_24 != 0 && *(eax_24 + 0x60) s> 0)
            int32_t eax_25 = data_147df74
            
            if (eax_25 != 0xffffffff)
                sub_6def90(eax_25, eax_22[1], eax_22, eax_25)
        
        goto label_73d45b
sub_63b870(result, &data_801800, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
    "C:\x\ax2017\Engine\AssetUtils.cpp", 0x313, "StructureDefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
