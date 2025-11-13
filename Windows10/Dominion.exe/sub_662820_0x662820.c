// 函数: sub_662820
// 地址: 0x662820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_21c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm1 = *(arg1 + 0x1680)
xmm1 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** result
result:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    char const* const ecx
    
    if (not(xmm1 f>= 0))
        char const* const var_220_1 = "UI2DrawText"
        int32_t var_224_1 = 0x2f37
        ecx = "el.worldInfo.color.a >= 0.0f"
    label_663534:
        char const* const var_228_6 = "C:\x\ax2017\Engine\UI2.cpp"
        sub_63b870(result, &data_801800, ecx)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (1f < xmm1)
        char const* const var_220_17 = "UI2DrawText"
        int32_t var_224_8 = 0x2f38
        ecx = "el.worldInfo.color.a <= 1.0f"
        goto label_663534
    
    float xmm0_1 = *(data_147abe8 + 0x2c)
    char* result_2
    result = sub_65db40(&result_2, arg1)
    int32_t var_14_1 = 0
    char* result_3 = result_2
    bool cond:3_1
    
    if (result_3 == 0 || *result_3 == 0)
        int32_t var_14_5 = 1
    label_6634da:
        
        if (data_cf65bc != 0 && result_3 != 0)
            cond:3_1 = *result_3 == 0
        label_6634ea:
            
            if (not(cond:3_1))
                result = sub_63d4e0(&result_2)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, &result[3][2])
    else
        char* const result_4 = &data_801800
        char* const result_1 = &data_801800
        var_14_1.b = 2
        
        if (*(arg1 + 0x1544) != 0)
            sub_63d850(&result_1, &result_2)
            sub_63e4d0(&result_1)
            sub_63d850(&result_2, &result_1)
            result_3 = result_2
            result_4 = result_1
        
        float xmm3_1 = xmm0_1
        float xmm0_3 = *(arg1 + 0x360) f+ *(arg1 + 0x35c)
        void* var_a8 = arg1 + 0x35c
        float xmm1_2 = xmm3_1 f- *(arg1 + 0x370)
        int32_t* var_8c
        float xmm2_1
        
        if (xmm0_3 > xmm1_2 || *(arg1 + 0x350) s> 1)
            var_8c = sub_67f6b0(arg1 + 0x2e4, xmm3_1 f- *(arg1 + 0x36c))
            float xmm0_5 = sub_67f6b0(arg1 + 0x320, xmm1_2)
            float xmm0_6
            result, xmm0_6 = sub_64c3c0(var_a8, xmm1_2)
            result_3 = result_2
            xmm3_1 = xmm0_1
            xmm2_1 = (xmm0_5 f- var_8c) * xmm0_6 f+ var_8c
        else
            xmm2_1 = *(arg1 + 0x320)
        
        float var_90_2 = xmm2_1
        float xmm2_5 = xmm2_1 f* *(arg1 + 0x1620)
        xmm2_5 f- 0
        result:1.b = (xmm2_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_5, 0f) ? 1 : 0) << 2
            | (xmm2_5 < 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_3))
            var_14_1.b = 3
            
            if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp1_1 = result[1]
                result[1] -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, &result[3][2])
                
                result_3 = result_2
            
            int32_t var_14_2 = 4
            goto label_6634da
        
        sub_67d3c0(arg1 + 0x9d4, xmm3_1, &var_a8)
        float var_98
        sub_67d3c0(arg1 + 0xa64, xmm0_1, &var_98)
        float var_228
        float var_224
        var_8c = sub_64b360((*(arg1 + 0x1674)).d, var_228, var_224)
        uint32_t edi_1 = sub_6398e0(&var_8c, &var_a8)
        var_a8 = edi_1
        var_8c = sub_64b360((*(arg1 + 0x1674)).d)
        uint32_t eax_7 = sub_6398e0(&var_8c, &var_98)
        sub_67d3c0(arg1 + 0x944, xmm0_1, &var_98)
        var_8c = sub_64b360((*(arg1 + 0x1684)).d)
        var_8c = sub_65d8b0(&var_98, &var_8c)
        float xmm0_10 = *(arg1 + 0x16cc)
        xmm0_10 f- 0
        result:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
            | (xmm0_10 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        bool p_7
        
        if (p_5)
            float xmm0_11 = *(arg1 + 0x16d0)
            xmm0_11 f- 0
            result:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
                | (xmm0_11 < 0f ? 1 : 0)
            p_7 = unimplemented  {test ah, 0x44}
        
        if (not(p_5) || not(p_7))
            var_14_1.b = 5
            
            if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp2_1 = result[1]
                result[1] -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, &result[3][2])
            
            int32_t var_14_4 = 6
        else
            float performanceCount
            BOOL eax_9
            int32_t edx_8
            eax_9, edx_8 = QueryPerformanceCounter(&performanceCount)
            float xmm2_9[0x4] = *(arg1 + 0x1554)
            float xmm3_2 = *(arg1 + 0x1428)
            float xmm7_1 = *(arg1 + 0x16cc)
            float xmm5_3 = xmm3_2 * _mm_shuffle_ps(xmm2_9, xmm2_9, 0x55) + 0f
            float xmm0_17 = xmm7_1 - xmm3_2 * _mm_shuffle_ps(xmm2_9, xmm2_9, 0xaa)
            float xmm3_3 = xmm3_2 * _mm_shuffle_ps(xmm2_9, xmm2_9, 0xff)
            float xmm2_11 = *(arg1 + 0x16d0)
            float xmm6_3 = xmm3_2 f* xmm2_9 + 0f
            float var_ac_1 = xmm5_3
            float xmm1_10 = xmm2_11 - xmm3_3
            float var_b0_1 = xmm6_3
            
            if (xmm6_3 >= xmm0_17 || not(xmm5_3 < xmm1_10))
                xmm5_3 = (zx.o(0)).d
                xmm6_3 = (zx.o(0)).d
                xmm1_10 = xmm2_11
                var_ac_1 = 0f
                xmm0_17 = xmm7_1
                var_b0_1 = 0f
            
            float xmm0_18 = xmm0_17 - xmm6_3
            float xmm1_11 = xmm1_10 - xmm5_3
            float var_94_2 = xmm0_18
            float var_a4_2 = xmm1_11
            float var_c4_1 = xmm0_18
            float var_c0_1 = xmm1_11
            
            if (*(arg1 + 0x14f0) != 0)
                int32_t ecx_20 = *(arg1 + 0x18a4)
                
                if (ecx_20 != 0)
                    eax_9, edx_8 = sub_64e7a0(ecx_20)
                    xmm5_3 = var_ac_1
                    xmm6_3 = var_b0_1
                    xmm0_18 = var_94_2 f- *(eax_9 + 0x16cc)
                    xmm1_11 = var_a4_2
                    var_94_2 = xmm0_18
                    var_c4_1 = xmm0_18
            
            char const* const ecx_21
            
            if (not(xmm0_18 f> 0))
                char const* const var_220_8 = "UI2DrawText"
                int32_t var_224_2 = 0x2f77
                ecx_21 = "rectSize.x > 0"
            label_663564:
                char const* const var_228_7 = "C:\x\ax2017\Engine\UI2.cpp"
                sub_63b870(eax_9, &data_801800, ecx_21)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (xmm1_11 f<= 0)
                char const* const var_220_18 = "UI2DrawText"
                int32_t var_224_9 = 0x2f78
                ecx_21 = "rectSize.y > 0"
                goto label_663564
            
            float xmm5_4 = xmm5_3 f+ *(arg1 + 0x1520)
            int32_t var_7c_1 = 0x80000000
            float var_74_1 = xmm6_3 f+ *(arg1 + 0x151c)
            int32_t var_78_1 = 0
            char* const var_70 = nullptr
            float var_64_1 = xmm5_4
            int128_t var_190 = 0x3f800000.o
            int32_t var_6c_1 = 0x3f800000
            int32_t var_68_1 = 0
            int128_t xmm0_21 = var_70.o
            int128_t var_1d0
            float* var_220_9 = &var_1d0
            int128_t var_170_1
            __builtin_memcpy(&var_170_1, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            int128_t var_180_1 = xmm0_21
            float* eax_11 = sub_64b1b0(&var_1d0, edx_8, arg1 + 0x1620, var_220_9)
            int32_t var_80_1
            var_80_1.o = *eax_11
            var_70.o = *(eax_11 + 0x10)
            int128_t var_60_1 = *(eax_11 + 0x20)
            int128_t xmm0_25 = *(eax_11 + 0x30)
            void var_210
            int128_t* eax_12 = sub_642e30(&var_210)
            var_190 = *eax_12
            int128_t var_180_2 = eax_12[1]
            int128_t var_170_2 = eax_12[2]
            int128_t xmm0_29 = eax_12[3]
            float eax_13 = *(arg1 + 0x1564)
            var_98 = eax_13
            int128_t var_160_1 = xmm0_29
            void var_150
            float var_bc
            uint32_t var_b8
            float var_88
            uint32_t esi_1
            
            if (eax_13 == 0)
                esi_1 = eax_7
            else
                int32_t var_220_11 = 0x78
                int32_t var_224_3 = 0
                void* var_228_1 = &var_150
                memset()
                int32_t xmm0_30 = *(arg1 + 0x1518)
                int32_t var_d4 = *(arg1 + 0x1508)
                int32_t* var_14c_1 = &var_d4
                var_b8 = *(arg1 + 0x1510)
                int32_t var_ec_1 = xmm0_30
                uint32_t* var_f0_1 = &var_b8
                int32_t var_108_1 = *(arg1 + 0x1540)
                int32_t var_140_1 = *(arg1 + 0x1404)
                int32_t eax_17 = *(arg1 + 0x1524)
                int32_t var_104_1 = *(arg1 + 0x1548)
                int32_t var_130_1 = 0x3f800000
                int32_t var_12c_1 = *(arg1 + 0x154c)
                int32_t eax_21
                
                if (eax_17 == 0)
                    eax_21 = 1
                else if (eax_17 == 1)
                    eax_21 = 3
                else
                    if (eax_17 != 2)
                        char const* const var_220_19 = "CalcWordWrapStyle"
                        int32_t var_224_10 = 0x27f9
                        char const* const var_228_8 = "C:\x\ax2017\Engine\UI2.cpp"
                        sub_63b870(eax_17 - 2, &data_801800, "Halt")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_21 = 5
                
                float xmm1_12 = var_90_2
                int32_t var_f8_1 = eax_21
                eax_21.b = *(arg1 + 0x1528)
                esi_1 = eax_7
                char var_f4_1 = eax_21.b
                int32_t var_10f_1 = 0xffffffff
                uint32_t var_13c_1 = edi_1
                int32_t* var_134_1 = var_8c
                uint32_t var_138_1 = esi_1
                float var_dc_1 = xmm1_12
                
                if (var_98 != 3)
                    int32_t var_220_13 = 0
                    float* var_224_5 = &var_88
                    void* var_228_3 = &var_150
                    float xmm0_42 = sub_6b73c0(&var_150, data_c23bf4)
                    bool cond:4_1 = var_98 != 1
                    float xmm1_19 = _mm_min_ss(var_94_2 / var_88, var_a4_2 / xmm0_42) * 0.999989986f
                    
                    if (cond:4_1)
                        var_90_2 = xmm1_19
                    else if (not(var_90_2 <= xmm1_19))
                        var_90_2 = xmm1_19
                        
                        if (*(arg1 + 0x10) != 0 && data_cadde8 == 0)
                            edi_1 = 0xffff00ff
                            var_a8 = 0xffff00ff
                else
                    int128_t var_3c
                    __builtin_memcpy(&var_3c, 
                        "\x00\x00\x80\x3f\xcd\xcc\x8c\x3f\x00\x00\xa0\x3f\x00\x00\xc0\x3f\x00\x00\xe0\x"
                    "3f\x00\x00\x00\x40", 
                        0x18)
                    var_98 = xmm1_12
                    float xmm2_12 = 1f
                    int128_t* var_b4_2 = &var_3c
                    
                    while (true)
                        var_70 = &data_801800
                        var_60_1:4.d = 0
                        var_60_1:8.d = 0
                        var_60_1:0xc.d = 0
                        var_88 = xmm2_12 * xmm1_12
                        float xmm0_37 = 1f / xmm2_12
                        float xmm2_14 = var_a4_2 * xmm0_37
                        var_bc = xmm2_14
                        performanceCount = xmm0_37 * var_94_2
                        var_14_1.b = 7
                        float var_220_12 = xmm2_14
                        int32_t var_64_2 = 0
                        sub_660a10(&var_150, &var_70, &result_2, &var_150, data_c23bf4, 
                            performanceCount)
                        int32_t edx_10 = var_60_1:8.d
                        int32_t ecx_24 = 0
                        int32_t var_b0_2 = 0
                        
                        if (edx_10 s> 0)
                            int32_t eax_24 = 0
                            int32_t var_ac_2 = 0
                            
                            while (true)
                                if (eax_24 s< 0 || ecx_24 s>= edx_10)
                                    char const* const var_220_20 =
                                        "XDynArray<struct TextEntry>::operator []"
                                    int32_t var_224_11 = 0xd4
                                    char const* const var_228_9 = "C:\x\ax2017\Engine\xDynArray.h"
                                    sub_63b870(eax_24, &data_801800, "index >= 0 && index < mSize")
                                    
                                    if (sub_63bc30() == 0)
                                        sub_63bb00()
                                        noreturn
                                    
                                    breakpoint
                                
                                int32_t* edx_11 = var_60_1:4.d
                                
                                if (*(edx_11 + eax_24) == 2)
                                    sub_64e810(&edx_11[8] + eax_24)
                                    eax_24 = var_ac_2
                                    ecx_24 = var_b0_2
                                
                                edx_10 = var_60_1:8.d
                                ecx_24 += 1
                                eax_24 += 0x34
                                var_b0_2 = ecx_24
                                var_ac_2 = eax_24
                                
                                if (ecx_24 s>= edx_10)
                                    break
                                
                                continue
                        
                        if (xmm0_25:0xc.d f- xmm0_25:4.d >= var_bc)
                            var_14_1.b = 8
                            int32_t eax_30 = data_cf65bc
                            
                            if (eax_30 != 0)
                                int32_t* ecx_30 = var_60_1:4.d
                                
                                if (ecx_30 != 0)
                                    int32_t edx_15 = var_60_1:0xc.d * 0x34
                                    var_60_1:8.d = 0
                                    sub_64c080(ecx_30, edx_15)
                                    eax_30 = data_cf65bc
                                    var_60_1:0xc.d = 0
                            
                            var_14_1.b = 9
                            
                            if (eax_30 != 0)
                                char* const eax_31 = var_70
                                
                                if (eax_31 != 0 && *eax_31 != 0)
                                    char* eax_32 = sub_63d4e0(&var_70)
                                    int32_t temp10_1 = *(eax_32 + 4)
                                    *(eax_32 + 4) -= 1
                                    
                                    if (temp10_1 == 1)
                                        sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                                        var_70 = &data_801800
                            
                            var_14_1.b = 2
                            break
                        
                        var_98 = var_88
                        var_14_1.b = 0xa
                        int32_t eax_25 = data_cf65bc
                        
                        if (eax_25 != 0)
                            int32_t* ecx_27 = var_60_1:4.d
                            
                            if (ecx_27 != 0)
                                int32_t edx_12 = var_60_1:0xc.d * 0x34
                                var_60_1:8.d = 0
                                sub_64c080(ecx_27, edx_12)
                                eax_25 = data_cf65bc
                                var_60_1:0xc.d = 0
                        
                        var_14_1.b = 0xb
                        
                        if (eax_25 != 0)
                            char* const eax_26 = var_70
                            
                            if (eax_26 != 0 && *eax_26 != 0)
                                char* eax_27 = sub_63d4e0(&var_70)
                                int32_t temp11_1 = *(eax_27 + 4)
                                *(eax_27 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                                    var_70 = &data_801800
                        
                        void* eax_29 = var_b4_2 + 4
                        var_14_1.b = 2
                        var_b4_2 = eax_29
                        
                        if (eax_29 == &var_24)
                            break
                        
                        xmm2_12 = *eax_29
                        xmm1_12 = var_90_2
                    
                    var_90_2 = var_98
            
            int32_t var_220_14 = 0x78
            int32_t var_224_6 = 0
            void* var_228_4 = &var_150
            memset()
            float var_130_2 = var_90_2
            int32_t xmm0_44 = *(arg1 + 0x1518)
            var_88 = *(arg1 + 0x1508)
            float* var_14c_2 = &var_88
            var_bc = *(arg1 + 0x1510)
            int32_t var_ec_2 = xmm0_44
            float* var_f0_2 = &var_bc
            int32_t var_108_2 = *(arg1 + 0x1540)
            int32_t var_140_2 = *(arg1 + 0x1404)
            int32_t eax_38 = *(arg1 + 0x1524)
            int32_t var_104_2 = *(arg1 + 0x1548)
            int32_t var_12c_2 = *(arg1 + 0x154c)
            int32_t edx_19
            
            if (eax_38 == 0)
                edx_19 = 1
            else if (eax_38 == 1)
                edx_19 = 3
            else
                if (eax_38 != 2)
                    char const* const var_220_21 = "CalcWordWrapStyle"
                    int32_t var_224_12 = 0x27f9
                    char const* const var_228_10 = "C:\x\ax2017\Engine\UI2.cpp"
                    sub_63b870(eax_38 - 2, &data_801800, "Halt")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                edx_19 = eax_38 + 3
            
            int32_t eax_39
            eax_39.b = *(arg1 + 0x1528)
            float var_220_15 = var_c0_1
            char var_f4_2 = eax_39.b
            int32_t var_10f_2 = 0xffffffff
            int32_t* var_228_5 = data_c23bf4
            int32_t* var_134_2 = var_8c
            bool cond:5_1 = *(arg1 + 0x1564) != 0
            var_b8 = esi_1 u>> 0x18
            
            if (cond:5_1)
                edx_19 = 2
            
            uint32_t var_13c_2 = edi_1
            int32_t var_f8_2 = edx_19
            uint32_t var_138_2 = esi_1
            int32_t var_22c_3 = &var_150
            float var_dc_2 = var_90_2
            var_8c = arg1 + 0x13c4
            sub_660a10(arg1 + 0x13c4, arg1 + 0x13c4, &result_2, var_22c_3, var_228_5, var_c4_1)
            void* const eax_44 = arg1
            void var_294
            
            if (*(eax_44 + 0x1534) == 1 && var_b8.b != 0)
                int32_t var_7c_2 = 0
                float xmm1_22 = var_90_2 f* *(eax_44 + 0x153c)
                int32_t var_78_2 = 0
                float var_74_2 = var_90_2 f* *(eax_44 + 0x1538)
                var_70 = nullptr
                float var_64_3 = xmm1_22
                var_1d0 = 0x3f800000.o
                int32_t var_6c_2 = 0x3f800000
                int32_t var_68_2 = 0
                int128_t xmm0_51 = var_70.o
                void* var_220_16 = &var_210
                int128_t var_1b0_1
                __builtin_memcpy(&var_1b0_1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
                int128_t var_1c0_1 = xmm0_51
                int128_t* eax_45 = sub_642e30(var_220_16)
                int32_t* edx_21 = var_8c
                var_1d0 = *eax_45
                int128_t var_1c0_2 = eax_45[1]
                int128_t var_1b0_2 = eax_45[2]
                int128_t xmm0_55 = eax_45[3]
                uint32_t var_13c_3 = esi_1
                char var_e0_1 = 1
                int32_t var_10f_3 = 0
                __builtin_memcpy(&var_294, &var_150, 0x78)
                int128_t var_1a0_1 = xmm0_55
                sub_662420(0, edx_21, &var_1d0)
                void* var_13c_4 = var_a8
                eax_44 = 0xffffffff
                char var_e0_2 = 0
                int32_t var_10f_4 = 0xffffffff
            
            int32_t* edx_22 = var_8c
            __builtin_memcpy(&var_294, &var_150, 0x78)
            result = sub_662420(eax_44, edx_22, &var_190)
            var_14_1.b = 0xc
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp9_1 = result[1]
                    result[1] -= 1
                    
                    if (temp9_1 == 1)
                        result = sub_64c080(result, &result[3][2])
            
            int32_t var_14_3 = 0xd
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0)
                cond:3_1 = *result == 0
                goto label_6634ea

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
