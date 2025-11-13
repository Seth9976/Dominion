// 函数: sub_659b10
// 地址: 0x659b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg3
int32_t ecx = *(ebx + 0x14bc)
int32_t eax_2 = *(ebx + 0x14f8)
int32_t edi_1 = *(ebx + 0x14c0) * ecx
void* var_1d8 = ebx
int32_t var_1c8 = edi_1

if (eax_2 != 0xffffffff)
    if (edi_1 s>= eax_2)
        edi_1 = eax_2
    
    var_1c8 = edi_1

int32_t eax_3 = *(ebx + 0x14c4)

if (eax_3 != 0)
    edi_1 += eax_3 - ecx
    var_1c8 = edi_1

void* result = *(ebx + 0x189c)
int32_t var_218_1
char const* const var_214_1
char* ecx_3

if (result s< 0)
label_65a5ff:
    var_214_1 = "UI2::countChildren"
    var_218_1 = 0xba8
    ecx_3 = "numChildren >= 0"
else
    if (edi_1 == result && arg5 == 0 && *(ebx + 0x136c) == 0 && *(ebx + 0x15f6) == 0)
        CookieCheckFunction(result)
        return result
    
    char var_1b5_1 = 0
    void* result_4
    int32_t var_1c4_1
    int32_t ecx_2
    int32_t edx_1
    void* result_2
    bool cond:1_1
    
    if (*(ebx + 0x14e8) == 0 || edi_1 == 1 || *(ebx + 0x1410) == 0)
        result_2 = nullptr
        var_1c4_1 = edi_1
        result_4 = nullptr
        ecx_2 = edi_1
        edx_1 = edi_1
        cond:1_1 = result_2 s>= 0
    else
        result, edx_1 = sub_66b600(ebx, edi_1)
        result_2 = result
        ecx_2 = edx_1
        result_4 = result_2
        var_1c4_1 = ecx_2
        cond:1_1 = result_2 s>= 0
        
        if (result_2 == 0)
            ecx_2 = edi_1
            
            if (edx_1 s< edi_1)
                ecx_2 = edx_1
            
            var_1c4_1 = ecx_2
            edx_1 = ecx_2
            cond:1_1 = result_2 s>= 0
    
    if (not(cond:1_1))
        var_214_1 = "UI2TableUpdate"
        var_218_1 = 0x2083
        ecx_3 = "range.x >= 0"
    else if (edx_1 s>= result_2)
        result = edx_1 - result_2
        
        if (result s< 0x40)
            void* result_5 = result_2
            void var_200
            int128_t var_b0
            int128_t var_a0
            float var_40[0x4]
            
            if (result_2 s< edx_1)
                result.b = arg5
                
                while (true)
                    int32_t* result_1
                    
                    if (result.b != 0)
                    label_659c8b:
                        result = *(ebx + 0x189c)
                        
                        if (result s< 0)
                            goto label_65a5ff
                        
                        if (result == 0x3f)
                            int32_t edi_2 = 0
                            void* esi_1 = ebx + 0x179c
                            
                            while (true)
                                result = *(ebx + 0x189c)
                                
                                if (result s< 0)
                                    goto label_65a5ff
                                
                                if (edi_2 s>= result)
                                    result_2 = result_5
                                    break
                                
                                int32_t eax_8 = *(sub_64e7a0(*esi_1) + 0x15e4)
                                
                                if (eax_8 s< result_4 || eax_8 s> var_1c4_1)
                                    sub_64e810(esi_1)
                                    *(ebx + 0x189c) -= 1
                                    edi_2 -= 1
                                    result = *(ebx + (*(ebx + 0x189c) << 2) + 0x179c)
                                    *esi_1 = result
                                    esi_1 -= 4
                                    
                                    if (*(ebx + 0x189c) s< 0)
                                        var_214_1 = "UI2TableUpdate"
                                        var_218_1 = 0x2099
                                        ecx_3 = "ui.numChildren >= 0"
                                        goto label_65a618
                                
                                edi_2 += 1
                                esi_1 += 4
                        
                        result = *(ebx + 0x14e0)
                        
                        if (result == 0)
                            int32_t ecx_11 = *(ebx + 0x18a0)
                            
                            if (ecx_11 == 0)
                                var_214_1 = "UI2GetTemplateChild"
                                var_218_1 = 0x1835
                                ecx_3 = "ui.templateChild != UI2_NULL"
                                goto label_65a618
                            
                            result = sub_64e7a0(ecx_11)
                            result_1 = result
                            
                            if (result == 0)
                                var_214_1 = "UI2TableUpdate"
                                var_218_1 = 0x20b1
                                ecx_3 = "&templ != NULL"
                                goto label_65a618
                            
                            if (*(result + 0x15f8) == 0)
                                var_214_1 = "UI2TableUpdate"
                                var_218_1 = 0x20b2
                                ecx_3 = "templ.type != UI_NONE"
                                goto label_65a618
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** eax_12 =
                                sub_64ece0(ebx, result_2)
                            uint32_t count = 0xd0
                            int32_t c = 0
                            eax_12[0x5c7].b = result_2 != 0
                            eax_12[0x4da] = 0
                            int32_t ebx_1 = eax_12[0x4db]
                            eax_12[0x5bb].b = *(ebx + 0x16ec)
                            int32_t eax_13
                            void* ecx_14
                            eax_13, ecx_14 = memset(&eax_12[0x588], c, count)
                            *(eax_12 + 0x1620) = data_bf21e8
                            int128_t xmm0_2 = data_bf21f8
                            eax_12[0x5ab] = 0
                            void** var_218_3 = arg2
                            *(eax_12 + 0x1630) = xmm0_2
                            int128_t xmm0_3 = data_7fefb0
                            eax_12[0x5a5] = 0
                            int32_t* result_3 = result_1
                            *(eax_12 + 0x1674) = xmm0_3
                            result_2 = result_5
                            eax_12[0x5ac] = result_2
                            sub_6579b0(eax_13, eax_12, ecx_14, result_3)
                            var_1b5_1 = 1
                            *(sub_6548e0(var_1d8, result_2) + 0x136c) = ebx_1
                            ebx = var_1d8
                            goto label_659e9f
                        
                        if (*(result + 4) == 0x22)
                            if (*(ebx + 0x15f8) != 2)
                                var_214_1 = "UI2TableUpdate"
                                var_218_1 = 0x20a2
                                ecx_3 = "ui.type == UI_TABLE"
                                goto label_65a618
                            
                            void** eax_10 = sub_64ece0(ebx, result_2)
                            int32_t var_214_3 = 0
                            result_1 = nullptr
                            eax_10[0x5ac] = result_2
                            int32_t esi_2 = eax_10[0x4db]
                            eax_10[0x5c7].b = 1
                            eax_10[0x5bb].b = *(ebx + 0x16ec)
                            int32_t* ecx_9
                            ecx_9.b = *(ebx + 0x16ec)
                            sub_657c80(eax_10, eax_10, ecx_9, *(ebx + 0x14e0), arg2, &result_1)
                            *(sub_6548e0(ebx, result_5) + 0x136c) = esi_2
                            result_2 = result_5
                            goto label_659e9f
                        
                        result.b = arg5
                    else
                        result = *(ebx + 0x189c)
                        
                        if (result s< 0)
                            goto label_65a5ff
                        
                        if (edi_1 != result)
                            goto label_659c8b
                        
                        if (sub_64c870(ebx, result_2) == 0)
                            goto label_659c8b
                        
                    label_659e9f:
                        result = sub_64c870(ebx, result_2)
                        
                        if (result == 0)
                            var_214_1 = "UI2TableUpdate"
                            var_218_1 = 0x20c4
                            ecx_3 = "ui.at(idx) != UI2_NULL"
                            goto label_65a618
                        
                        int32_t* result_7 = sub_6548e0(ebx, result_2)
                        result.b = arg5
                        result_1 = result_7
                        
                        if (result.b != 0 || var_1b5_1 != result.b || result_7[0x4db] != 0)
                            if (result_7[0x5c6] != ebx)
                                var_214_1 = "UI2TableUpdate"
                                var_218_1 = 0x20cb
                                ecx_3 = "child.parent == &ui"
                                goto label_65a618
                            
                            int128_t var_180
                            float xmm0_13
                            float xmm1_3
                            float xmm2_3
                            
                            if (*(ebx + 0x15f6) != 1)
                                float xmm0_17 = *(ebx + 0x1680)
                                xmm0_17 f- 0
                                result:1.b = (xmm0_17 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2
                                    | (xmm0_17 < 0f ? 1 : 0)
                                bool p_2 = unimplemented  {test ah, 0x44}
                                bool p_4
                                
                                if (not(p_2))
                                    float xmm0_18 = result_7[0x5a0]
                                    xmm0_18 f- 0
                                    result:1.b = (xmm0_18 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_18, 0f) ? 1 : 0) << 2
                                        | (xmm0_18 < 0f ? 1 : 0)
                                    p_4 = unimplemented  {test ah, 0x44}
                                
                                if (p_2 || p_4)
                                    int32_t eax_26 = result_7[0x4d9]
                                    float xmm0_31
                                    float xmm1_8
                                    float xmm2_10
                                    
                                    if (eax_26 == 0 || *(ebx + 0x1364) != eax_26)
                                        int32_t var_214_10 = 0
                                        float var_90
                                        int128_t* eax_32 = sub_656980(&var_200, result_5, ebx, 
                                            &var_200, &var_90, &var_40)
                                        int128_t xmm0_33 = *eax_32
                                        int128_t xmm1_9 = eax_32[1]
                                        __builtin_memcpy(&var_180, ebx + 0x1620, 0xd0)
                                        var_180 = xmm0_33
                                        float xmm0_34 = var_90
                                        float var_ec_2 = xmm0_34
                                        int128_t var_170_5 = xmm1_9
                                        float var_88
                                        float var_e4_2 = var_88 - xmm0_34
                                        float var_8c
                                        float var_e8_2 = var_8c
                                        xmm1_8 = var_40[1]
                                        float var_d8_2 = xmm1_8
                                        float var_84
                                        float var_e0_2 = var_84 - var_8c
                                        float xmm0_37 = var_40[0]
                                        float var_dc_2 = xmm0_37
                                        xmm2_10 = var_40[2] - xmm0_37
                                        xmm0_31 = var_40[3]
                                    else
                                        int32_t var_214_9 = 0
                                        float var_80
                                        float var_70
                                        int128_t* eax_28 = sub_656980(&var_200, result_5, ebx, 
                                            &var_200, &var_70, &var_80)
                                        int128_t xmm0_25 = *eax_28
                                        __builtin_memcpy(&var_180, ebx + 0x1620, 0xd0)
                                        var_180 = xmm0_25
                                        float var_6c
                                        float var_e8_1 = var_6c
                                        int128_t var_170_4 = eax_28[1]
                                        float xmm0_27 = var_70
                                        float var_ec_1 = xmm0_27
                                        float var_7c
                                        xmm1_8 = var_7c
                                        float var_d8_1 = xmm1_8
                                        float var_68
                                        float var_e4_1 = var_68 - xmm0_27
                                        float var_64
                                        float var_e0_1 = var_64 - var_6c
                                        float xmm0_30 = var_80
                                        float var_dc_1 = xmm0_30
                                        float var_78
                                        xmm2_10 = var_78 - xmm0_30
                                        float var_74
                                        xmm0_31 = var_74
                                    
                                    float var_d4_1 = xmm2_10
                                    float var_d0_1 = xmm0_31 - xmm1_8
                                label_65a304:
                                    void* result_11 = result_5
                                    int32_t var_224_1 = 0
                                    sub_65d0f0(&var_180, ebx, result_1, arg4, &var_180)
                                else
                                    int32_t var_214_8 = 0
                                    
                                    if (result_7[0x4db] s> 0)
                                        void var_1b0
                                        void var_190
                                        int128_t* eax_23 = sub_656980(&var_200, result_5, ebx, 
                                            &var_200, &var_190, &var_1b0)
                                        int128_t xmm0_19 = *eax_23
                                        int128_t xmm1_4 = eax_23[1]
                                        __builtin_memcpy(&var_180, ebx + 0x1620, 0xd0)
                                        var_180 = xmm0_19
                                        int128_t var_170_3 = xmm1_4
                                        goto label_65a304
                                    
                                    float var_60
                                    float var_50
                                    int128_t* eax_25 = sub_656980(&var_200, result_5, ebx, 
                                        &var_200, &var_50, &var_60)
                                    int128_t xmm1_5 = eax_25[1]
                                    *(result_7 + 0x1620) = *eax_25
                                    float xmm0_21 = var_50
                                    *(result_7 + 0x1630) = xmm1_5
                                    result = *(ebx + 0x1694)
                                    result_7[0x5ad] = xmm0_21
                                    float var_48
                                    result_7[0x5af] = var_48 - xmm0_21
                                    float var_4c
                                    result_7[0x5ae] = var_4c
                                    float var_5c
                                    xmm1_3 = var_5c
                                    float var_44
                                    result_7[0x5b0] = var_44 - var_4c
                                    float xmm0_24 = var_60
                                    result_7[0x5b1] = xmm0_24
                                    float var_58
                                    xmm2_3 = var_58 - xmm0_24
                                    float var_54
                                    xmm0_13 = var_54
                                label_65a05f:
                                    result_7[0x5b2] = xmm1_3
                                    result_7[0x5a5] = result
                                    result_7[0x5b3] = xmm2_3
                                    result_7[0x5b4] = xmm0_13 - xmm1_3
                            else
                                int32_t var_214_5 = 0
                                float var_2c
                                float var_1c
                                int128_t* eax_16 =
                                    sub_656980(&var_200, result_5, ebx, &var_200, &var_1c, &var_2c)
                                bool cond:5_1 = result_7[0x4da] != 0
                                int128_t xmm0_4 = *eax_16
                                int128_t xmm1_1 = eax_16[1]
                                var_a0 = xmm0_4
                                var_b0 = xmm1_1
                                
                                if (cond:5_1)
                                    int32_t ecx_20 = *(ebx + 0x1364)
                                    int32_t edx_11 = result_7[0x4d9]
                                    
                                    if (*(ebx + 0x14e0) == 0)
                                        if (ecx_20 == edx_11 && result_7[0x4db] == 0)
                                            *(result_7 + 0x1620) = xmm0_4
                                            *(result_7 + 0x1630) = xmm1_1
                                        label_659ff9:
                                            result = *(ebx + 0x1694)
                                            float xmm0_9 = var_1c
                                            result_7[0x5ad] = xmm0_9
                                            float var_18
                                            result_7[0x5ae] = var_18
                                            float var_28
                                            xmm1_3 = var_28
                                            float var_14
                                            result_7[0x5af] = var_14 - xmm0_9
                                            float var_10
                                            result_7[0x5b0] = var_10 - var_18
                                            float xmm0_12 = var_2c
                                            result_7[0x5b1] = xmm0_12
                                            float var_24
                                            xmm2_3 = var_24 - xmm0_12
                                            float var_20
                                            xmm0_13 = var_20
                                            goto label_65a05f
                                    else if (ecx_20 == edx_11 && result_7[0x4db] == 0)
                                        void* eax_19 = &result_7[0x588]
                                        __builtin_memcpy(eax_19, ebx + 0x1620, 0xd0)
                                        result_7 = result_1
                                        *eax_19 = xmm0_4
                                        *(eax_19 + 0x10) = xmm1_1
                                        goto label_659ff9
                                    
                                    int128_t xmm0_15 = *eax_16
                                    __builtin_memcpy(&var_180, ebx + 0x1620, 0xd0)
                                    int32_t* result_6 = result_1
                                    var_180 = xmm0_15
                                    int32_t var_214_7 = 0
                                    void* result_10 = result_5
                                    int128_t var_170_2 = eax_16[1]
                                    sub_65d0f0(&var_180, ebx, result_6, arg4, &var_180)
                                else
                                    int128_t xmm0_5 = *eax_16
                                    __builtin_memcpy(&var_180, ebx + 0x1620, 0xd0)
                                    int32_t* result_8 = result_1
                                    var_180 = xmm0_5
                                    int32_t var_214_6 = 0
                                    void* result_9 = result_5
                                    int128_t var_170_1 = eax_16[1]
                                    sub_65d0f0(&var_180, ebx, result_8, arg4, &var_180)
                                    *(result_8 + 0x1620) = var_a0
                                    *(result_8 + 0x1630) = var_b0
                            result_2 = result_5
                            result.b = arg5
                        else
                            result_2 = result_5
                    ecx_2 = var_1c4_1
                    result_2 += 1
                    result_5 = result_2
                    
                    if (result_2 s>= ecx_2)
                        break
                    
                    edi_1 = var_1c8
            
            sub_66b350(result, result_4, ebx, ecx_2)
            result = *(ebx + 0x14e8)
            
            if (result != 0)
                int32_t ecx_26 = *(ebx + 0x189c)
                int32_t var_218_11
                char const* const var_214_12
                char* ecx_27
                
                if (ecx_26 s< 0)
                    var_214_12 = "UI2::countChildren"
                    var_218_11 = 0xba8
                    ecx_27 = "numChildren >= 0"
                label_65a648:
                    sub_63b870(result, &data_801800, ecx_27, "C:\x\ax2017\Engine\UI2.cpp", 
                        var_218_11, var_214_12)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (ecx_26 != 0 && *(ebx + 0x14f0) != 0)
                    float xmm1_11 = *(ebx + 0x1620)
                    float var_1d0_1 = xmm1_11 f* *(ebx + 0x16d0)
                    float var_1d4 = xmm1_11 f* *(ebx + 0x16cc)
                    int32_t esi_10
                    
                    if (result != 1)
                        void* eax_34 = result - 2
                        
                        if (result == 2)
                            esi_10 = *(ebx + 0x14c0)
                            goto label_65a4a8
                        
                        result = eax_34 - 1
                        
                        if (eax_34 == 1)
                            goto label_65a4a2
                        
                        var_214_12 = "UI2TableUpdateScrollbar"
                        var_218_11 = 0x2013
                        ecx_27 = "Halt"
                        goto label_65a648
                    
                label_65a4a2:
                    esi_10 = *(ebx + 0x14bc)
                label_65a4a8:
                    int32_t var_214_13 = 0
                    int128_t* eax_36 = sub_656980(&var_200, 0, ebx, &var_200, &var_a0, &var_b0)
                    int32_t var_224_2 = 0
                    int128_t var_1a0_1 = *eax_36
                    int32_t* var_228_2 = &var_b0
                    int128_t* var_22c_1 = &var_a0
                    int128_t* var_230_1 = &var_200
                    var_40 = eax_36[1]
                    int128_t* eax_38 =
                        sub_656980(&var_200, esi_10, ebx, var_230_1, var_22c_1, var_228_2)
                    float xmm1_13[0x4] = var_40
                    float xmm3_4[0x4] = eax_38[1]
                    int128_t var_1a0_2 = *eax_38
                    float var_1dc
                    int32_t* var_234_1 = &var_1dc
                    float xmm0_44 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0x55)
                    float xmm2_15 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0x55)
                    float xmm1_14 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xaa)
                    uint128_t xmm0_45 = zx.o(*(ebx + 0x14bc))
                    float xmm3_6 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xaa) - xmm1_14
                    uint128_t xmm1_15 = zx.o(*(ebx + 0x14c0))
                    float xmm0_46 = _mm_cvtepi32_ps(xmm0_45)
                    float xmm1_17 = _mm_cvtepi32_ps(xmm1_15) * xmm3_6
                    var_1dc = xmm0_46 * (xmm2_15 - xmm0_44)
                    float var_1d8_1 = xmm1_17
                    result = sub_658da0(&var_1dc, &var_1d4, ebx, arg4, var_234_1)
            
            CookieCheckFunction(result)
            return result
        
        var_214_1 = "UI2TableUpdate"
        var_218_1 = 0x2087
        ecx_3 = "range.y - range.x < MAX_CHILDREN"
    else
        var_214_1 = "UI2TableUpdate"
        var_218_1 = 0x2084
        ecx_3 = "range.y >= range.x"

label_65a618:
sub_63b870(result, &data_801800, ecx_3, "C:\x\ax2017\Engine\UI2.cpp", var_218_1, var_214_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
