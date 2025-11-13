// 函数: sub_660a10
// 地址: 0x660a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* var_68 = arg3
char* const edx = &data_801800
char* eax_3 = *arg3
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

char* eax_4 = *arg2

if (eax_4 != 0)
    edx = eax_4

int32_t* result

while (true)
    eax_4.b = *edx
    char temp0_1 = *ecx_1
    bool c_1 = eax_4.b u< temp0_1
    
    if (eax_4.b == temp0_1)
        if (eax_4.b == 0)
            result = nullptr
            break
        
        eax_4.b = edx[1]
        char temp1_1 = ecx_1[1]
        c_1 = eax_4.b u< temp1_1
        
        if (eax_4.b == temp1_1)
            edx = &edx[2]
            ecx_1 = &ecx_1[2]
            
            if (eax_4.b != 0)
                continue
            
            result = nullptr
            break
    
    result = sbb.d(eax_4, eax_4, c_1) | 1
    break

float arg_c

if (result != 0)
label_660aab:
    int32_t edi_1 = 0
    char const* const var_168_2
    int32_t var_164_3
    char const* const var_160_7
    char* ecx_13
    
    if (arg2[6] s> 0)
        int32_t esi_1 = 0
        
        while (true)
            if (esi_1 s< 0 || edi_1 s>= arg2[6])
            label_660c81:
                var_160_7 = "XDynArray<struct TextEntry>::operator []"
                var_164_3 = 0xd4
                var_168_2 = "C:\x\ax2017\Engine\xDynArray.h"
                ecx_13 = "index >= 0 && index < mSize"
                break
            
            result = arg2[5]
            
            if (*(result + esi_1) == 2)
                result = sub_64e810(&result[8] + esi_1)
            
            edi_1 += 1
            esi_1 += 0x34
            
            if (edi_1 s>= arg2[6])
                goto label_660ae1
            
            continue
        
        goto label_6612d5
    
label_660ae1:
    int32_t* edi_2 = var_68
    char* const edx_1 = &data_801800
    arg2[6] = 0
    char* const ecx_4 = &data_801800
    char* esi_2 = *arg2
    char* eax_6 = *edi_2
    
    if (esi_2 != 0)
        edx_1 = esi_2
    
    if (eax_6 != 0)
        ecx_4 = eax_6
    
    if (edx_1 != ecx_4)
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_7 = sub_63d4e0(arg2)
            int32_t temp5_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                *arg2 = &data_801800
        
        char* eax_8 = *edi_2
        *arg2 = eax_8
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(arg2)
            *(eax_9 + 4) += 1
    
    arg2[1] = arg_c
    arg2[2] = arg6
    arg2[3] = *(arg4 + 0x20)
    arg2[4] = arg4
    result = *edi_2
    
    if (result != 0 && *result != 0)
        int128_t xmm0_6 = data_893940
        int32_t var_54
        __builtin_memset(&var_54, 0, 0x2c)
        void var_12c
        __builtin_memcpy(&var_12c, arg4, 0x78)
        int128_t var_64 = xmm0_6
        char* result_1 = result
        result.b = *result_1
        int128_t var_4c
        
        if (result.b != 0)
            while (true)
                char var_d0
                void* edx_4
                
                if (result.b != 0x7b || var_d0 != 0)
                    edx_4.b = *result_1
                    
                    if (edx_4.b != 0xd)
                        int32_t esi_5 = var_64:8.d
                        
                        if (esi_5 == 0xffffffff)
                            int128_t* var_160_12 = &var_64
                            void* eax_40 = sub_65e9d0(&var_12c, 0, arg2, &var_12c)
                            *(eax_40 + 0x24) = result_1
                            int32_t xmm0_44
                            result, xmm0_44 = sub_65e4e0(&var_12c)
                            *(eax_40 + 0x20) = xmm0_44
                            int32_t ecx_46 = sx.d(*result_1) - 0x22
                            
                            if (ecx_46 u> 0x3b)
                                *(eax_40 + 0x30) = 0
                            else
                                result = zx.d(lookup_table_6612f4[ecx_46])
                                
                                switch (result)
                                    case nullptr
                                        *(eax_40 + 4) |= 1
                                        *(eax_40 + 0x30) = 1
                                    case 1
                                        *(eax_40 + 0x30) = 0
                            
                            esi_5 = var_64:8.d
                            goto label_661135
                        
                        if (esi_5 s< 0)
                            goto label_660c81
                        
                        if (esi_5 s>= arg2[6])
                            goto label_660c81
                        
                        result = arg2[5]
                        
                        if (result[esi_5 * 0xd + 0xc].b == 0)
                        label_661135:
                            
                            if (esi_5 s< 0)
                                goto label_660c81
                            
                            if (esi_5 s>= arg2[6])
                                goto label_660c81
                            
                            result = esi_5 * 0x34
                            
                            if (*(result + arg2[5]) != 0)
                                var_160_7 = "ToLayout"
                                var_164_3 = 0x2cce
                                ecx_13 = "layout.entries[lineParams.currentEntryIdx].type == TEXTLAYOUT_LINE"
                                break
                            
                            int32_t ecx_47
                            ecx_47.b = *result_1
                            var_68 = result_1
                            
                            if (ecx_47.b u>= 0x80)
                                result.b = ecx_47.b
                                result.b &= 0xe0
                                
                                if (result.b != 0xc0)
                                    result.b = ecx_47.b
                                    result.b &= 0xf0
                                    
                                    if (result.b != 0xe0)
                                        ecx_47.b &= 0xf8
                                        
                                        if (ecx_47.b != 0xf0)
                                            var_160_7 = "Xutf8_next"
                                            var_164_3 = 0x222
                                            var_168_2 = "C:\x\ax2017\Engine\Xutf8.cpp"
                                            ecx_13 = "!Xutf8_is_invalid_lead_char(str)"
                                            goto label_6612d5
                            
                            result, edx_4 = sub_5a0d00(&var_68)
                            result_1 = var_68
                            
                            if (esi_5 s>= arg2[6])
                                goto label_660c81
                            
                            *(esi_5 * 0x34 + arg2[5] + 0x28) = result_1
                        else if (sx.d(edx_4.b) - 0x22 u> 0x3b)
                            result, edx_4 = sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                        else
                            result = zx.d(lookup_table_6612f4[0x22 + sx.d(edx_4.b)])
                            
                            switch (result)
                                case nullptr
                                    goto label_661135
                                case 1
                                    result, edx_4 =
                                        sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                    else
                        sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                        result, edx_4 = sub_65ed50(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                        result_1 = &result_1[1]
                        
                        if (*result_1 == 0xa)
                            result_1 = &result_1[1]
                else
                    result = sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                    
                    if (result.b != 0)
                        goto label_66104b
                    
                    if (var_64:8.d != 0xffffffff)
                        var_160_7 = "ToLayout"
                        var_164_3 = 0x2c6b
                        ecx_13 = "lineParams.currentEntryIdx == -1"
                        break
                    
                    var_68 = &result_1[1]
                    result = sub_69dd70(result_1, U"}")
                    
                    if (result == 0)
                        var_160_7 = "ParseEscape"
                        var_164_3 = 0x2947
                        ecx_13 = "Halt"
                        break
                    
                    int32_t* _Str2 = var_68
                    result_1 = result + 1
                    int32_t* esi_4 = arg5
                    void* _MaxCount = result - _Str2
                    void* _MaxCount_1 = _MaxCount
                    result = nullptr
                    
                    while (true)
                        if (result s>= 0x3e8)
                            var_160_7 = "ParseEscape"
                            var_164_3 = 0x295d
                            ecx_13 = "Halt"
                            goto label_6612cb
                        
                        char* _Str1 = *esi_4
                        
                        if (_Str1 == 0)
                            esi_4 = arg5
                            break
                        
                        if (_strnicmp(_Str1, _Str2, _MaxCount) == 0)
                            char* ecx_11 = *esi_4
                            int32_t eax_13
                            
                            do
                                eax_13.b = *ecx_11
                                ecx_11 = &ecx_11[1]
                            while (eax_13.b != 0)
                            
                            if (ecx_11 - &ecx_11[1] == _MaxCount_1)
                                break
                        
                        _MaxCount = _MaxCount_1
                        result += 1
                        _Str2 = var_68
                        esi_4 = &esi_4[0x1e]
                    
                    float var_10c
                    
                    if (esi_4[0xd].b != 0)
                        sub_65ed50(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                        float var_2c_1 = var_10c f* esi_4[9]
                    else if (esi_4[0x14] != 0)
                        int128_t* var_160_4 = &var_64
                        void* eax_17 = sub_65e9d0(&var_12c, 2, arg2, &var_12c)
                        *(eax_17 + 0x28) = *esi_4[0x14]
                        *(eax_17 + 0x20) = 0
                        *(eax_17 + 0x2c) = esi_4
                        int32_t xmm0_9 = sub_65e4e0(&var_12c)
                        void* eax_18 = data_cf65b8
                        char var_168_3 = 1
                        void* const var_16c_1 = nullptr
                        *(eax_17 + 4) |= 1
                        *(eax_17 + 0x24) = xmm0_9
                        uint128_t xmm1_1 = zx.o(*(eax_18 + 0x18))
                        int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_18 + 0x14)))
                        int32_t var_170_1 = 0
                        int32_t var_94_1 = 0
                        int32_t var_90_1 = 0
                        int128_t var_13c
                        float* var_174_1 = &var_13c
                        int32_t xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
                        int32_t var_a4_1 = 0
                        int32_t var_a0_1 = 0
                        int128_t var_14c
                        float* var_178_1 = &var_14c
                        int32_t var_8c_1 = xmm2_2
                        int32_t* var_17c_1 = *(eax_17 + 0x28)
                        int32_t var_88_1 = xmm1_2
                        int32_t var_9c_1 = xmm2_2
                        var_14c = var_94_1.o
                        int32_t var_98_1 = xmm1_2
                        var_13c = var_a4_1.o
                        sub_654ce0(&var_14c, eax_17 + 0x20, "font", var_17c_1, var_178_1, 
                            var_174_1, var_170_1, var_16c_1, var_168_3)
                        result = esi_4[0x15]
                        var_68 = result
                        
                        if (result != 0)
                            uint32_t eax_21 = sub_64e7a0(*(eax_17 + 0x20))
                            sub_665db0(eax_21, var_68, eax_21, 0x3f800000, 0xffffffff, 1)
                        
                        float xmm0_13 = var_10c f* esi_4[8]
                        xmm0_13 f- 0
                        result:1.b = (xmm0_13 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2 | (xmm0_13 < 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8))
                            var_160_7 = "ToLayout"
                            var_164_3 = 0x2c83
                            ecx_13 = "scale != 0"
                            break
                        
                        var_68 = *(eax_17 + 0x14)
                        float xmm0_15 = sub_65e4e0(&var_12c)
                        int32_t var_c_1 = 0
                        *(eax_17 + 0x14) = var_68 f- xmm0_15
                        int128_t var_24_1 = data_800248
                        float xmm0_18 = _mm_cvtepi32_ps(zx.o(esi_4[0xe]))
                        int32_t ecx_24 = *(eax_17 + 0x20)
                        float var_28 = xmm0_13
                        float var_14_1 = xmm0_18 * xmm0_13 + 0f
                        float var_10_1 = _mm_cvtepi32_ps(zx.o(esi_4[3])) * xmm0_13
                        sub_666060(ecx_24, &var_28)
                        void var_eb
                        uint32_t eax_25 = sub_6398e0(&esi_4[5], &var_eb)
                        float xmm0_26 = _mm_cvtepi32_ps(zx.o(eax_25.b)) / 255f
                        float xmm0_29 = _mm_cvtepi32_ps(zx.o((eax_25 u>> 8).b)) / 255f
                        var_68 = xmm0_29
                        float var_b0_1 = xmm0_29
                        float xmm0_31 = _mm_cvtepi32_ps(zx.o((eax_25 u>> 0x10).b))
                        int32_t ecx_30 = *(eax_17 + 0x20)
                        float xmm0_32 = xmm0_31 / 255f
                        float var_ac_1 = xmm0_32
                        float xmm0_35 = _mm_cvtepi32_ps(zx.o(eax_25 u>> 0x18)) / 255f
                        float var_a8_1 = xmm0_35
                        uint32_t eax_29
                        int32_t edx_14
                        eax_29, edx_14 = sub_64e7a0(ecx_30)
                        uint32_t ecx_31 = eax_29
                        float xmm0_36 = *(ecx_31 + 0x1674)
                        xmm0_36 - xmm0_26
                        eax_29:1.b = (xmm0_36 == xmm0_26 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_36, xmm0_26) ? 1 : 0) << 2
                            | (xmm0_36 < xmm0_26 ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10)
                            *(ecx_31 + 0x1674) = xmm0_26.o
                            sub_65bf00(ecx_31)
                        else
                            float xmm0_37 = *(ecx_31 + 0x1678)
                            int32_t* temp7_1 = var_68
                            xmm0_37 f- temp7_1
                            eax_29:1.b = (xmm0_37 f== temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_37, temp7_1) ? 1 : 0) << 2
                                | (xmm0_37 f< temp7_1 ? 1 : 0)
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (p_12)
                                *(ecx_31 + 0x1674) = xmm0_26.o
                                sub_65bf00(ecx_31)
                            else
                                float xmm0_38 = *(ecx_31 + 0x167c)
                                xmm0_38 - xmm0_32
                                eax_29:1.b = (xmm0_38 == xmm0_32 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_38, xmm0_32) ? 1 : 0) << 2
                                    | (xmm0_38 < xmm0_32 ? 1 : 0)
                                bool p_14 = unimplemented  {test ah, 0x44}
                                
                                if (p_14)
                                    *(ecx_31 + 0x1674) = xmm0_26.o
                                    sub_65bf00(ecx_31)
                                else
                                    float xmm0_39 = *(ecx_31 + 0x1680)
                                    xmm0_39 - xmm0_35
                                    eax_29:1.b = (xmm0_39 == xmm0_35 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_39, xmm0_35) ? 1 : 0) << 2
                                        | (xmm0_39 < xmm0_35 ? 1 : 0)
                                    bool p_16 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_16)
                                        *(ecx_31 + 0x1674) = xmm0_26.o
                                        sub_65bf00(ecx_31)
                        
                        edx_14.b = 0
                        sub_65d6e0(*(eax_17 + 0x20), (zx.o(0)).d)
                    else if (esi_4[2] == 0)
                        sub_65e640(&var_12c, esi_4)
                        int128_t* var_160_8 = &var_64
                        *(sub_65e9d0(&var_12c, 1, arg2, &var_12c) + 0x20) = esi_4
                    else
                        int128_t* var_160_6 = &var_64
                        result = sub_65e9d0(&var_12c, 3, arg2, &var_12c)
                        result[8] = *esi_4[2]
                        result[1] |= 1
                        result[9] = var_4c:8.d
                        result[0xa] = esi_4
                        float xmm0_42 = var_4c:0xc.d
                        xmm0_42 f- 0
                        result:1.b = (xmm0_42 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_42, 0f) ? 1 : 0) << 2 | (xmm0_42 < 0f ? 1 : 0)
                        bool p_18 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_18))
                            var_160_7 = "ToLayout"
                            var_164_3 = 0x2c9e
                            ecx_13 = "lineParams.ascent != 0"
                            break
                    result, edx_4 = sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
                    
                    if (result.b != 0)
                        goto label_66104b
                result.b = *result_1
                
                if (result.b == 0)
                    goto label_66104b
            
            goto label_6612cb
        
    label_66104b:
        sub_65f3d0(&arg_c, &var_12c, arg2, &arg_c, &var_64)
        sub_65ed50(&arg_c, &var_12c, arg2, &arg_c, &var_64)
        float xmm0_43 = var_4c.d
        xmm0_43 f- 0
        result:1.b = (xmm0_43 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_43, 0f) ? 1 : 0) << 2
            | (xmm0_43 < 0f ? 1 : 0)
        bool p_20 = unimplemented  {test ah, 0x44}
        
        if (p_20)
            var_160_7 = "ToLayout"
            var_164_3 = 0x2cd8
            ecx_13 = "lineParams.baselineY == 0"
        label_6612cb:
            var_168_2 = "C:\x\ax2017\Engine\UI2.cpp"
        label_6612d5:
            sub_63b870(result, &data_801800, ecx_13, var_168_2, var_164_3, var_160_7)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int128_t var_3c
        float xmm3_1 = var_3c.d
        xmm3_1 f- 0
        result:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
            | (xmm3_1 < 0f ? 1 : 0)
        bool p_22 = unimplemented  {test ah, 0x44}
        
        if (not(p_22))
            var_160_7 = "ToLayout"
            var_164_3 = 0x2cd9
            ecx_13 = "lineParams.prevBaselineY != 0"
            goto label_6612cb
        
        result = sub_65e740(&var_12c, &arg_c, arg2, xmm3_1 f- var_3c:8.d f+ var_3c:0xc.d, &var_12c)
        arg2[4] = 0
else
    float xmm0_1 = arg2[1]
    float temp2_1 = arg_c
    xmm0_1 - temp2_1
    result:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2
        | (xmm0_1 < temp2_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_660aab
    
    float xmm0_2 = arg2[2]
    xmm0_2 - arg6
    result:1.b = (xmm0_2 == arg6 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg6) ? 1 : 0) << 2
        | (xmm0_2 < arg6 ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_660aab
    
    float xmm0_3 = arg2[3]
    float temp4_1 = *(arg4 + 0x20)
    xmm0_3 - temp4_1
    result:1.b = (xmm0_3 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp4_1) ? 1 : 0) << 2
        | (xmm0_3 < temp4_1 ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        goto label_660aab
CookieCheckFunction(result)
return result
