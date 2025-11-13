// 函数: sub_6b6c50
// 地址: 0x6b6c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76ff9d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_134 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t*** result_5 = arg8
int32_t*** result_3 = result_5

if (arg11 != 0)
    result_3 = arg11

if (arg12 != 0)
    *arg12 = 0

if (arg13 != 0)
    *arg13 = 0

char* eax_6 = *arg3
char* const var_120
float result_2

if (eax_6 != 0)
    bool cond:1_1 = *eax_6 != 0
    var_120 = eax_6
    
    if (cond:1_1)
        result_5 = arg8
        result_2 = *(sub_63d4e0(arg3) + 8)
    else
        result_2 = 0f
else
    var_120 = &data_801800
    result_2 = 0f

char* esi = nullptr
float xmm2 = arg4
float xmm0_1 = arg6 - xmm2
char* var_118 = nullptr
int32_t*** result_11 = *result_3[1]
float xmm0_2 = result_3[8]
float var_4c = xmm0_2
float var_f8 = xmm0_2
int32_t var_f4 = result_3[0x12]
int32_t var_f0 = result_3[0x13]
float xmm0_5 = result_3[9]
float var_40 = xmm0_5
float var_110 = xmm0_5
int32_t*** result_8 = result_11
int32_t*** result_6 = result_11
int32_t* eax_9 = result_3[0x18]
float var_fc = arg5
float var_54 = 0f
float var_10c = 0f
int32_t* eax_10

if (eax_9 == 0)
    eax_10 = nullptr
else
    eax_10 = *eax_9

float xmm0_6 = result_3[0x19]
int32_t* var_e8 = eax_10
int32_t* var_48 = eax_10
int32_t eax_11 = result_3[3]
int32_t var_34 = eax_11
int32_t var_dc = eax_11
int32_t var_d8 = result_3[5]
int32_t var_d4 = result_3[6]
int32_t var_d0 = result_3[7]
int32_t var_cc = *(result_3 + 0x41)
int32_t eax_15
eax_15.b = result_3[0x1c].b
char var_68 = eax_15.b
int32_t edi = result_3[4]
int32_t var_c8 = arg10
int32_t var_e0 = result_3[0x1a]
int32_t*** result_7 = result_5
int32_t var_28 = edi
int32_t var_c4 = edi
int128_t var_bc = *arg2
int128_t var_ac = arg2[1]
int128_t var_9c = arg2[2]
int32_t eax_18 = result_3[0x16]
int32_t var_44_1 = eax_18
int32_t var_74 = eax_18
eax_18.b = result_3[0x17].b
char var_70 = eax_18.b
float result = result_3[0x1b]
int32_t edx_1 = 0xffffffff
float result_1 = result
int128_t var_8c = arg2[3]
float var_30 = 0f
float var_7c = 0f
float var_2c = 0f
float var_78 = 0f

if (result_2 s> 0)
    while (true)
        char var_21 = 0
        float var_114_1 = 0f
        char var_104_1 = 0
        float var_50 = 0f
        float var_124
        int32_t edx_3
        result, edx_3 = sub_6b6570(&var_21, edx_1 + 1, &var_120, &var_21, &var_50, &var_124)
        
        if (arg12 != 0)
            *arg12 = __maxss_xmmss_memss(*arg12, var_124)
        
        if (arg13 != 0)
            *arg13 += 1
        
        if (result.b != 0)
            break
        
        if (arg9 != result.b)
            float xmm1_1 = var_30
            float xmm2_1 = var_2c
            result_6 = result_8
            var_f8 = var_4c
            var_e8 = var_48
            var_110 = var_40
            var_dc = var_34
            var_7c = xmm1_1
            var_78 = xmm2_1
            var_10c = var_54
            var_118 = esi
            var_c4 = edi
            var_74 = var_44_1
            char var_104_2 = 1
            
            if (var_70 == 0 && *(esi + var_120) == 0x7b)
                while (true)
                    int32_t var_128
                    int32_t* eax_25
                    eax_25, edx_3 = sub_6b59e0(&var_120, &var_128)
                    
                    if (eax_25 != 0)
                        if (eax_25[4] != 0)
                            if (eax_25[0xd].b == 0)
                                int32_t eax_27
                                int32_t ecx_5
                                float xmm0_18
                                eax_27, ecx_5, edx_3, xmm0_18 = sub_6b4f30(&var_120, eax_25)
                                
                                if (xmm0_1 >= xmm0_18 + var_114_1)
                                label_6b702e:
                                    int32_t var_138_2 = ecx_5
                                    edx_3 = sub_6b5090(&var_120, eax_25, xmm0_18)
                                    var_118 = &var_118[var_128]
                                    xmm2_1 = var_78
                                    xmm1_1 = var_7c
                                    edi = var_c4
                                else
                                    var_114_1 f- 0
                                    eax_27:1.b = (var_114_1 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(var_114_1, 0f) ? 1 : 0) << 2
                                        | (var_114_1 < 0f ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_2))
                                        goto label_6b702e
                                    
                                    xmm1_1 = var_30
                                    xmm2_1 = var_2c
                                    edi = var_28
                                
                                break
                            
                            var_21 = 1
                    else if (*(esi + var_120) == 0x7b)
                        continue
                    
                    xmm1_1 = var_30
                    xmm2_1 = var_2c
                    edi = var_28
                    break
            
            float xmm0_25
            
            if (edi == 2 || edi == 5 || edi == 8)
                xmm0_25 = _mm_max_ss(xmm0_1 - var_114_1, 0) * 0.5f + xmm2
            else if (edi == 3 || edi == 6 || edi == 9)
                xmm0_25 = xmm0_1 - var_114_1 + xmm2
            else
                float xmm0_17 = xmm2
                
                if (edx_1 + 1 s>= 1)
                    xmm0_17 = xmm0_17 + xmm1_1
                
                xmm0_25 = xmm0_17 + xmm2_1
            
            float var_100_2 = xmm0_25
            int32_t var_114_2 = 0
            sub_6b6570(&var_21, edx_3, &var_120, &var_21, &var_50, nullptr)
        
        int32_t*** result_4 = result_6
        var_54 = var_10c
        var_40 = var_110
        var_48 = var_e8
        result_8 = result_4
        char const* const var_140_3
        int32_t var_13c_3
        char const* const var_138_3
        char* ecx_21
        int128_t xmm1_7
        int128_t xmm2_6
        
        if (var_e8 == 0)
            int32_t*** result_10
            
            if (result_4 != 0)
                if (result_4[1] != 0x12)
                    var_138_3 = "DefAutoLock::DefAutoLock"
                    var_13c_3 = 0x19
                    var_140_3 = "C:\x\ax2017\Engine\DefLoad.h"
                    ecx_21 = "assetPtr && assetPtr->assetType == assetType"
                    goto label_6b739f
                
                result_10 = result_4
            else
                char* result_9
                sub_69fd50(result_4, "!Null\Null", &result_9, 0x12)
                int32_t var_14_1 = 0
                char* const result_13 = &data_801800
                char* result_12 = result_9
                
                if (result_12 != 0)
                    result_13 = result_12
                
                result_4, edx_3 = sub_69f030(result_13, 0x12)
                result_10 = result_4
                int32_t var_14_2 = 1
                
                if (data_cf65bc != 0)
                    result_4 = result_9
                    
                    if (result_4 != 0 && *result_4 != 0)
                        result_4 = sub_63d4e0(&result_9)
                        int32_t temp0_1 = result_4[1]
                        result_4[1] -= 1
                        
                        if (temp0_1 == 1)
                            result_4, edx_3 = sub_64c080(result_4, &result_4[3][4])
                            result_9 = &data_801800
                
                int32_t var_14_3 = 0xffffffff
            
            if (*result_10 == 0)
                edx_3.b = 0
                sub_69f4a0(result_4, edx_3.b, result_10, 1)
            
            int32_t edi_3 = result_10[7]
            var_4c = var_f8
            result_10[7] = edi_3 + 1
            int32_t* ecx_17 = **result_10
            result = result_3
            int32_t edx_11 = ecx_17[3]
            
            if (edx_11 == 0)
                xmm1_7 = _mm_cvtepi32_ps(zx.o(*ecx_17)) f* *(result i+ 0x20)
                xmm2_6 = xmm1_7
            else
                float xmm0_33 = *(result i+ 0x20)
                xmm0_33 - var_f8
                result:1.b = (xmm0_33 == var_f8 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_33, var_f8) ? 1 : 0) << 2 | (xmm0_33 < var_f8 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                float xmm0_34
                
                if (not(p_4))
                    xmm0_34 = var_f8
                else if (0.5f < var_f8)
                    xmm0_34 = _mm_max_ss(xmm0_33, var_f8)
                else
                    xmm0_34 = xmm0_33 * var_f8
                
                xmm1_7 = _mm_cvtepi32_ps(zx.o(ecx_17[2])) * xmm0_34
                xmm2_6 = _mm_cvtepi32_ps(zx.o(edx_11)) * xmm0_34
            
            result_10[7] = edi_3
            goto label_6b729e
        
        bool cond:3_1 = var_e8[1] != 0x25
        result_4 = result_3
        var_4c = var_f8
        float xmm1_6 = _mm_max_ss(result_4[8], var_f8)
        
        if (cond:3_1)
            var_138_3 = "TTFontGet"
            var_13c_3 = 0x1ef
            var_140_3 = "C:\x\ax2017\Engine\TTFont.cpp"
            ecx_21 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
        label_6b739f:
            sub_63b870(result_4, &data_801800, ecx_21, var_140_3, var_13c_3, var_138_3)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax_30 = sub_5af880(var_e8)
        void* ecx_9 = *(eax_30 + 0x38)
        int32_t esi_1 = *(ecx_9 + 0x14)
        int32_t ecx_10 = *(ecx_9 + 4)
        result = *(eax_30 + 0x40) - *(eax_30 + 0x14) + *(eax_30 + 0x18) + *(eax_30 + 0x10)
        xmm2_6 = xmm0_6 / _mm_cvtepi32_ps(zx.o(zx.d(*(esi_1 + ecx_10 + 0x13))
            + (zx.d(*(esi_1 + ecx_10 + 0x12)) << 8))) * _mm_cvtepi32_ps(zx.o(result)) * xmm1_6
        xmm1_7 = xmm2_6
    label_6b729e:
        esi = var_118
        char* const ecx_18 = var_120
        float xmm2_9 = xmm2_6 f+ var_10c + var_110
        float xmm1_13 = xmm1_7 f+ var_40
        
        if (*(esi + ecx_18) != 0xd)
            edx_1 += 1
            xmm1_13 = xmm2_9 + var_50
        else
            esi = &esi[1]
            edx_1 = 0xffffffff
            var_118 = esi
        
        int128_t xmm1 = xmm1_13 + var_fc
        var_fc = xmm1
        
        if (xmm2_9 f+ xmm1 > arg7 + 0.00999999978f)
            break
        
        result = result_2
        
        if (var_21 == 0)
            if (esi s>= result)
                break
            
            while (*(esi + ecx_18) == 0x20)
                esi = &esi[1]
                var_118 = esi
                
                if (esi s>= result)
                    goto label_6b7362
        
        if (esi s>= result)
            break
        
        edi = var_c4
        xmm2 = arg4
        var_2c = var_78
        var_44_1 = var_74
        var_30 = var_7c
        var_28 = edi
        var_34 = var_dc

label_6b7362:
fsbase->NtTib.ExceptionList = ExceptionList
return result
