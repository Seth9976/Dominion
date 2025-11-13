// 函数: sub_6b5090
// 地址: 0x6b5090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void* esi = arg2
void* var_4c = esi

if (*(esi + 8) == 0 && *(esi + 0x50) == 0)
    float xmm0_1 = *(esi + 0x20)
    xmm0_1 f- 0
    int32_t eax_1
    eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        *(arg1 + 0x28) = xmm0_1
    
    if (*(arg1 + 0x1c) != 0)
        if (*(esi + 0x17) != 0 && *(arg1 + 0xb8) == 0)
            *(arg1 + 0x48) = *(esi + 0x14)
        
        if (*(esi + 0x1b) != 0 && *(arg1 + 0xb8) == 0)
            *(arg1 + 0x4c) = *(esi + 0x18)

int32_t eax_4 = *(esi + 0x58)

if (eax_4 != 0)
    *(arg1 + 0xac) = eax_4

int32_t eax_5 = *(esi + 0x10)

if (eax_5 != 0)
    *(arg1 + 0x5c) = eax_5

int32_t* result = *(esi + 4)

if (result == 0)
    if (*(esi + 0x60) == result)
        goto label_6b519b
    
    goto label_6b512e

*(arg1 + 0x34) = *result
label_6b512e:
int32_t* eax_7 = *(esi + 0x60)
char const* const var_17c
int32_t var_178
char const* const var_174_1
char* ecx

if (eax_7 == 0)
    *(arg1 + 0x38) = 0
label_6b5180:
    *(arg1 + 0x44) = *(esi + 0xc)
    *(arg1 + 0x10) = *(esi + 0x24)
    *(arg1 + 0xa4) = *(esi + 0x2c)
    result = *(esi + 0x30)
    *(arg1 + 0xa8) = result
label_6b519b:
    
    if (*(arg1 + 0x1c) == 0)
    label_6b56f4:
        *(arg1 + 0xc) = arg3 f+ *(arg1 + 0xc)
        CookieCheckFunction(result)
        return result
    
    int128_t var_80
    int128_t var_5c
    float var_44
    float var_28
    float var_1c
    
    if (*(esi + 8) != 0)
        int32_t* ecx_1 = *(arg1 + 0x34)
        float var_48_1 = 0f
        
        if (ecx_1 == 0 || *(arg1 + 0x38) != 0)
            int32_t* ecx_2 = *(arg1 + 0x38)
            
            if (ecx_2 != 0)
                var_48_1 = sub_6419c0(ecx_2, *(arg1 + 0x3c))
        else
            if (ecx_1[1] != 0x12)
                sub_63b870(result, &data_801800, "assetPtr->assetType == ASSET_TYPE_FONT", 
                    "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2e6, "FontGetDef")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            var_48_1 = _mm_cvtepi32_ps(zx.o(*(sub_5af880(ecx_1) + 4)))
        
        **(esi + 8)
        float eax_14
        float edx
        eax_14, edx = sub_5a0e40()
        var_44 = sub_6398e0(esi + 0x14, arg1 + 0x54)
        uint32_t eax_16 = sub_6398e0(&var_44, arg1 + 0x58)
        var_44 = sub_6398e0(var_4c + 0x1c, arg1 + 0x50)
        uint32_t eax_18
        int32_t edx_5
        eax_18, edx_5 = sub_6398e0(&var_44, arg1 + 0x58)
        float xmm3_1 = *(arg1 + 0x28)
        uint32_t var_54_1 = eax_16
        float xmm4_1 = xmm3_1
        esi = var_4c
        uint32_t var_50_1 = eax_18
        float xmm1_2 = *(esi + 0x20)
        xmm1_2 f- 0
        eax_18:1.b = (xmm1_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2
            | (xmm1_2 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            xmm4_1 = xmm4_1 * xmm1_2
        
        float xmm2_1 = *(arg1 + 0x20) f+ *(arg1 + 0xc)
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(esi + 0x38)))
        int32_t var_14_2 = 0
        float xmm3_3 = xmm3_1 * var_48_1 f+ *(arg1 + 0x24)
        float xmm1_4 = edx * xmm4_1
        float var_24_1 = xmm1_4
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(*(esi + 0xc))) * xmm4_1
        var_1c = xmm2_1 + xmm0_6 * xmm4_1
        var_28 = eax_14 * xmm4_1
        float var_18_2 = xmm3_3 - xmm1_4 + xmm0_10
        void var_120
        int32_t* eax_20 = sub_6b7c20(&var_120, edx_5, &var_1c, &var_120)
        int128_t var_a0_1 = *eax_20
        int128_t var_90_1 = *(eax_20 + 0x10)
        var_80 = *(eax_20 + 0x20)
        int128_t var_70_1 = *(eax_20 + 0x30)
        void var_160
        int128_t* eax_21 = sub_642e30(&var_160)
        int32_t** ecx_12 = *(esi + 8)
        int32_t var_174_4 = 0
        int128_t var_e0 = *eax_21
        int128_t var_d0_1 = eax_21[1]
        int128_t var_c0_1 = eax_21[2]
        int128_t var_b0_1 = eax_21[3]
        result = sub_684c00(&var_28, 0, *ecx_12, &data_7ffb1c, &var_28, 0f, &data_7ff530, 0f, 
            0x19e2758, &var_e0, &var_5c:8, nullptr, &data_7ff520)
    
    if (*(esi + 0x50) == 0)
        goto label_6b56f4
    
    int32_t* ecx_14 = *(arg1 + 0x34)
    
    if (ecx_14 == 0 || *(arg1 + 0x38) != 0)
        int32_t* ecx_15 = *(arg1 + 0x38)
        
        if (ecx_15 != 0)
            sub_6419c0(ecx_15, *(arg1 + 0x3c))
        
        goto label_6b53af
    
    if (ecx_14[1] == 0x12)
        sub_5af880(ecx_14)
    label_6b53af:
        void* eax_23 = data_cf65b8
        int32_t var_20_1 = 0
        var_1c = 0f
        uint128_t xmm1_6 = zx.o(*(eax_23 + 0x18))
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(*(eax_23 + 0x14)))
        float var_30 = 0f
        int32_t var_2c_1 = 0
        int32_t xmm1_7 = _mm_cvtepi32_ps(xmm1_6)
        float var_18_3 = xmm2_4
        int32_t var_14_3 = xmm1_7
        var_28 = xmm2_4
        int32_t var_24_2 = xmm1_7
        var_5c = var_20_1.o
        var_30.o = var_30.o
        var_44 = sub_6398e0(esi + 0x14, arg1 + 0x54)
        uint32_t eax_25 = sub_6398e0(&var_44, arg1 + 0x58)
        int32_t** eax_26 = *(esi + 0x50)
        int32_t edx_9 =
            sub_654ce0(eax_26, &var_4c, "font", *eax_26, &var_5c, &var_30, 0, nullptr, 1)
        void* eax_27 = *(esi + 0x54)
        void* edi_1 = var_4c
        var_44 = eax_27
        
        if (eax_27 != 0)
            uint32_t eax_28 = sub_64e7a0(edi_1)
            eax_27, edx_9 = sub_665db0(eax_28, var_44, eax_28, 0x3f800000, 0xffffffff, 1)
        
        float xmm2_5 = *(esi + 0x20)
        float xmm0_23 = *(arg1 + 0x28)
        xmm2_5 f- 0
        float var_48_2 = xmm0_23
        eax_27:1.b = (xmm2_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_5, 0f) ? 1 : 0) << 2
            | (xmm2_5 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            var_48_2 = xmm0_23 * xmm2_5
        
        if (*(esi + 0x10) != 0)
            var_48_2 = 1f
        
        int128_t* eax_30
        int32_t edx_11
        eax_30, edx_11 = sub_64f350(&var_30, edx_9, **(esi + 0x50), &var_30)
        float xmm1_8 = *(arg1 + 0x20)
        float xmm2_7 = xmm1_8 f+ *(arg1 + 0xc)
        int32_t eax_31 = *(esi + 0x10)
        var_30.o = *eax_30
        
        if (eax_31 != 0 && eax_31 == 5)
            xmm2_7 = (*(arg1 + 0x18) - (var_28 - var_30) * var_48_2) * 0.5f + xmm1_8
        
        float xmm1_12 = _mm_cvtepi32_ps(zx.o(*(esi + 0x38))) f* *(arg1 + 0x28) + xmm2_7
        var_44 = _mm_cvtepi32_ps(zx.o(*(esi + 0xc))) f* *(arg1 + 0x28) f+ *(arg1 + 0x24)
        float* eax_33 = sub_6b7ae0(&var_80, edx_11, arg1 + 0x64, esi.w, edi_1, &var_80)
        float xmm4_2 = var_44
        float xmm1_18 = xmm4_2 f* *(arg1 + 0x68)
        int128_t xmm2_11 = *eax_33
        var_30.o = *(eax_33 + 0x10)
        float xmm0_31 = xmm1_12 f* *(arg1 + 0x64)
        int128_t var_40 = xmm2_11
        var_40.d = xmm2_11 f* var_48_2
        float var_2c_2 = xmm1_18 + xmm0_31 + *(arg1 + 0x6c) * 0f f+ *(arg1 + 0x70)
        float xmm4_5 = xmm4_2 f* *(arg1 + 0x88) + xmm1_12 f* *(arg1 + 0x84) + *(arg1 + 0x8c) * 0f
        var_28 = xmm4_2 f* *(arg1 + 0x78) + xmm1_12 f* *(arg1 + 0x74)
            + *(arg1 + 0x7c) * 0f f+ *(arg1 + 0x80)
        float var_24_3 = xmm4_5 f+ *(arg1 + 0x90)
        sub_666060(edi_1, &var_40)
        float xmm1_29 = _mm_cvtepi32_ps(zx.o(eax_25.b)) / 255f
        var_30 = xmm1_29
        float xmm1_32 = _mm_cvtepi32_ps(zx.o((eax_25 u>> 8).b)) / 255f
        float var_2c_3 = xmm1_32
        float xmm1_35 = _mm_cvtepi32_ps(zx.o((eax_25 u>> 0x10).b)) / 255f
        var_44 = xmm1_35
        var_28 = xmm1_35
        float xmm1_38 = _mm_cvtepi32_ps(zx.o(eax_25 u>> 0x18)) / 255f
        float var_24_4 = xmm1_38
        uint32_t eax_36
        int32_t edx_13
        eax_36, edx_13 = sub_64e7a0(edi_1)
        uint32_t ecx_32 = eax_36
        float xmm0_40 = *(ecx_32 + 0x1674)
        xmm0_40 - xmm1_29
        eax_36:1.b = (xmm0_40 == xmm1_29 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_40, xmm1_29) ? 1 : 0) << 2 | (xmm0_40 < xmm1_29 ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (p_10)
            *(ecx_32 + 0x1674) = var_30.o
            sub_65bf00(ecx_32)
        else
            float xmm0_41 = *(ecx_32 + 0x1678)
            xmm0_41 - xmm1_32
            eax_36:1.b = (xmm0_41 == xmm1_32 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_41, xmm1_32) ? 1 : 0) << 2 | (xmm0_41 < xmm1_32 ? 1 : 0)
            bool p_12 = unimplemented  {test ah, 0x44}
            
            if (p_12)
                *(ecx_32 + 0x1674) = var_30.o
                sub_65bf00(ecx_32)
            else
                float xmm0_42 = *(ecx_32 + 0x167c)
                float temp2_1 = var_44
                xmm0_42 - temp2_1
                eax_36:1.b = (xmm0_42 == temp2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_42, temp2_1) ? 1 : 0) << 2 | (xmm0_42 < temp2_1 ? 1 : 0)
                bool p_14 = unimplemented  {test ah, 0x44}
                
                if (p_14)
                    *(ecx_32 + 0x1674) = var_30.o
                    sub_65bf00(ecx_32)
                else
                    float xmm0_43 = *(ecx_32 + 0x1680)
                    xmm0_43 - xmm1_38
                    eax_36:1.b = (xmm0_43 == xmm1_38 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_43, xmm1_38) ? 1 : 0) << 2
                        | (xmm0_43 < xmm1_38 ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (p_16)
                        *(ecx_32 + 0x1674) = var_30.o
                        sub_65bf00(ecx_32)
        
        edx_13.b = 0
        sub_65d6e0(edi_1, (zx.o(0)).d)
        sub_6651e0(edi_1)
        result = sub_64e810(&var_4c)
        goto label_6b56f4
    
    var_174_1 = "FontGetDef"
    var_178 = 0x2e6
    var_17c = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx = "assetPtr->assetType == ASSET_TYPE_FONT"
else
    *(arg1 + 0x38) = *eax_7
    *(arg1 + 0x3c) = *(esi + 0x64)
    *(arg1 + 0x40) = *(esi + 0x68)
    float xmm0_2 = *(esi + 0x64)
    xmm0_2 f- 0
    result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
        | (xmm0_2 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        *(arg1 + 0x34) = 0
        goto label_6b5180
    
    var_174_1 = "WrapperDoEscape"
    var_178 = 0x405
    var_17c = "C:\x\ax2017\Engine\Font.cpp"
    ecx = "escapeData->ttfontPixelHeight != 0"

sub_63b870(result, &data_801800, ecx, var_17c, var_178, var_174_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
