// 函数: sub_6b3460
// 地址: 0x6b3460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76fdf4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_12c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg2
char* eax_4 = sub_6b33b0(esi)

if (esi == 0)
    char* var_90
    sub_69fd50(eax_4, "!Null\Null", &var_90, 0x12)
    char* var_14_1 = esi
    char* eax_5 = var_90
    char* const ecx_2 = &data_801800
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    eax_4 = sub_69f030(ecx_2, &esi[0x12])
    esi = eax_4
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_4 = var_90
        
        if (eax_4 != 0 && *eax_4 != 0)
            eax_4 = sub_63d4e0(&var_90)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_4 = sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
                var_90 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (*(esi + 4) != 0x12)
    sub_63b870(eax_4, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_b4 = esi

if (*esi == 0)
    sub_69f4a0(eax_4, 0, esi, 1)

int32_t* eax_6 = *esi
*(esi + 0x1c) += 1
void* result_8 = *eax_6
void* result_3 = result_8
int32_t var_14_4 = 2
void* eax_7 = data_147abe4
float xmm0 = *(eax_7 + 0x20)
float xmm0_1 = *(eax_7 + 0x24)
int128_t xmm0_2 = *arg3
int128_t xmm0_3 = arg3[1]
int128_t xmm0_4 = arg3[2]
int128_t var_f0 = arg3[3]
void* result = *(data_147b06c + 0x2dc)
void* result_1 = result

if (result == 0)
    if (data_1a9a2b0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a9a2b0)
        
        if (data_1a9a2b0 == 0xffffffff)
            var_14_4.b = 3
            data_1a9a2b4 = sub_69f030("sys/sprite_3d.material", 5)
            var_14_4.b = 2
            __Init_thread_footer(&data_1a9a2b0)
        
        result_8 = result_3
    
    result = data_1a9a2b4
    result_1 = result

int32_t ecx_7 = 0
int32_t var_a0 = 0

if (*(result_8 + 0x1c) s> 0)
    int32_t edi_1 = arg5
    
    while (true)
        int32_t* eax_15 = ecx_7 * 0x30 + *(result_8 + 0x20)
        float var_9c_1 = 0f
        int32_t* ecx_8 = *eax_15
        int32_t* eax_16 = eax_15[2]
        
        if (eax_16 != 0)
            ecx_8 = eax_16
        
        if (ecx_8[1] != 3)
            sub_63b870(eax_16, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result = sub_5af880(ecx_8)
        int32_t* ecx_9 = *result
        
        if (ecx_9 == 0)
            break
        
        int32_t eax_17 = *ecx_9
        double xmm0_8[0x2] =
            _mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_893660)
        int32_t eax_19 = ecx_9[1]
        float xmm2_1 = 1f / _mm_cvtpd_ps(xmm0_8)
        double xmm0_11 = _mm_cvtepi32_pd(zx.q(eax_19))
        bool cond:0_1 = *(result_3 + 0x1c) != 2
        int32_t eax_21 = arg4
        float xmm2_2 = 1f / _mm_cvtpd_ps(xmm0_11 f+ *((eax_19 u>> 0x1f << 3) + &data_893660))
        
        if (not(cond:0_1) && var_a0 == 0)
            eax_21 = edi_1
        
        int32_t edx_4 = data_bf23b0
        int32_t var_b0 = data_bf23ac
        int32_t var_ac_1 = edx_4
        
        if (eax_15[0xa].b == 0)
            var_b0 = eax_21
            int32_t var_ac_2 = arg6
        
        result = arg7
        void* result_4 = result
        void* result_6 = result_4
        int32_t* ecx_12
        ecx_12.b = *result
        
        if (ecx_12.b != 0)
            while (true)
                int32_t var_134_2
                char const* const var_130_4
                
                if (ecx_12.b u>= 0x80)
                    result.b = ecx_12.b
                    result.b &= 0xe0
                    
                    if (result.b == 0xc0)
                        goto label_6b3764
                    
                    result.b = ecx_12.b
                    result.b &= 0xf0
                    
                    if (result.b == 0xe0)
                        goto label_6b3764
                    
                    ecx_12.b &= 0xf8
                    
                    if (ecx_12.b != 0xf0)
                    label_6b3cdf:
                        var_130_4 = "Xutf8_peek_next"
                        var_134_2 = 0x21c
                    label_6b3cf8:
                        sub_63b870(result, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                            "C:\x\ax2017\Engine\Xutf8.cpp", var_134_2, var_130_4)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    goto label_6b3764
                
            label_6b3764:
                void* result_7 = result_4
                uint32_t _C = sub_5a0d00(&result_7)
                uint32_t i = _C
                result_7 = 0x3f800000
                
                if (not(arg8 <= 0f))
                    if (_C - 0xe0 u<= 0x1d)
                        _C -= 0x20
                        i = _C
                        result_7 = arg8
                    else if (_C == 0x171)
                        _C = 0x170
                        i = _C
                        result_7 = arg8
                    else if (_C == 0x151)
                        _C = 0x150
                        i = _C
                        result_7 = arg8
                    else if (_C s< 0xff)
                        bool cond:2_1 = islower(_C) != 0
                        _C = i
                        
                        if (cond:2_1 || _C == 0x20)
                            _C = toupper(_C.b)
                            i = _C
                            result_7 = arg8
                
                int32_t* eax_24 = sub_6b3320(_C, eax_15, result_3, _C)
                
                if (eax_24 != 0)
                    float xmm1_2 = xmm2_2 f* eax_24[4]
                    float xmm3_2 = xmm2_1 f* eax_24[1]
                    float xmm0_16 = xmm2_2 f* eax_24[2]
                    float xmm2_4 = xmm2_1 f* eax_24[3]
                    float var_40_1 = xmm0_16
                    float var_38_1 = xmm0_16
                    float var_30_1 = xmm1_2
                    float var_28_1 = xmm1_2
                    float var_3c_1 = xmm2_4
                    float var_2c_1 = xmm2_4
                    float result_12 = result_7
                    float xmm1_4 = _mm_cvtepi32_ps(zx.o(*(result_3 + 4)))
                    float var_44 = xmm3_2
                    float var_34_1 = xmm3_2
                    float xmm4_3 = var_9c_1 f+ eax_24[5] + xmm0
                    float xmm1_6 = xmm1_4 - (xmm1_4 f- eax_24[6]) * result_12 + xmm0_1
                    float xmm2_6 = xmm0_2:8.d * 0f
                    float xmm7_2 = xmm0_2:4.d * xmm1_6
                    float xmm0_24 = (eax_24[4] f- eax_24[2]) * result_12 + xmm1_6 + xmm0_1
                    float xmm5_2 = xmm0_3.d * xmm4_3
                    float xmm3_4 = xmm0_3:4.d * xmm1_6
                    float xmm0_26 = xmm0_2.d * xmm4_3
                    float xmm6_5 = (eax_24[3] f- eax_24[1]) * result_12 + xmm4_3 + xmm0
                    int32_t* result_11 = xmm0_3:8.d * 0f
                    float xmm2_10 = xmm0_4:4.d * xmm1_6
                    float result_10 = xmm0_4.d * xmm4_3
                    float xmm4_5 = xmm0_4:8.d * 0f
                    void* result_2 = result_10
                    float var_74 = xmm0_26 + xmm7_2 + xmm2_6 f+ xmm0_2:0xc.d
                    float var_70_1 = xmm5_2 + xmm3_4 f+ result_11 f+ xmm0_3:0xc.d
                    float xmm4_7 = xmm0_2.d * xmm6_5
                    float var_6c_1 = result_10 + xmm2_10 + xmm4_5 f+ xmm0_4:0xc.d
                    float xmm5_4 = xmm0_3.d * xmm6_5
                    float xmm6_7 = xmm0_4.d * xmm6_5
                    void* result_5 = result_1
                    float var_68_1 = xmm4_7 + xmm7_2 + xmm2_6 f+ xmm0_2:0xc.d
                    float var_64_1 = xmm5_4 + xmm3_4 f+ result_11 f+ xmm0_3:0xc.d
                    float var_60_1 = xmm6_7 + xmm2_10 + xmm4_5 f+ xmm0_4:0xc.d
                    float xmm1_9 = xmm0_2:4.d * xmm0_24
                    float xmm2_12 = xmm0_3:4.d * xmm0_24
                    float xmm3_6 = xmm0_4:4.d * xmm0_24
                    float var_5c_1 = xmm1_9 + xmm0_26 + xmm2_6 f+ xmm0_2:0xc.d
                    float var_50_1 = xmm1_9 + xmm4_7 + xmm2_6 f+ xmm0_2:0xc.d
                    float var_58_1 = xmm2_12 + xmm5_2 f+ result_11 f+ xmm0_3:0xc.d
                    float var_4c_1 = xmm2_12 + xmm5_4 f+ result_11 f+ xmm0_3:0xc.d
                    float var_54_1 = xmm3_6 f+ result_2 + xmm4_5 f+ xmm0_4:0xc.d
                    float var_48_1 = xmm3_6 + xmm6_7 + xmm4_5 f+ xmm0_4:0xc.d
                    sub_685e20(&var_b0, &var_44, &var_74, &var_b0, nullptr, ecx_8)
                    result_11 = result_6
                    char ecx_20 = *result_6
                    
                    if (ecx_20 u< 0x80)
                    label_6b3b95:
                        sub_5a0d00(&result_11)
                        int32_t* result_9 = result_11
                        result_6 = result_9
                        char ecx_22 = *result_9
                        
                        if (ecx_22 u>= 0x80)
                            result.b = ecx_22
                            result.b &= 0xe0
                            
                            if (result.b != 0xc0)
                                result.b = ecx_22
                                result.b &= 0xf0
                                
                                if (result.b != 0xe0 && (ecx_22 & 0xf8) != 0xf0)
                                    goto label_6b3cdf
                        
                        result_2 = result_9
                        result = sub_5a0d00(&result_2)
                        result_2 = result
                        result_11 = eax_24[7]
                        
                        if (result != 0)
                            int32_t edx_8 = eax_24[8]
                            
                            if (edx_8 != 0xffffffff)
                                result = result_3
                                
                                if (edx_8 s< *(result + 0x28))
                                    result = *(result + 0x30) + edx_8 * 0xc
                                    
                                    while (*result == i)
                                        edi_1 = arg5
                                        
                                        if (*(result + 4) == result_2)
                                            result_11 += *(result + 8)
                                            break
                                        
                                        edx_8 += 1
                                        result += 0xc
                                        edi_1 = arg5
                                        
                                        if (edx_8 s>= *(result_3 + 0x28))
                                            break
                        
                        result_4 = result_6
                        var_9c_1 = (_mm_cvtepi32_ps(zx.o(result_11)) f+ *(result_3 + 0x10) + arg9)
                            f* result_7 + var_9c_1
                        goto label_6b3c56
                    
                    result.b = ecx_20
                    result.b &= 0xe0
                    
                    if (result.b == 0xc0)
                        goto label_6b3b95
                    
                    result.b = ecx_20
                    result.b &= 0xf0
                    
                    if (result.b == 0xe0 || (ecx_20 & 0xf8) == 0xf0)
                        goto label_6b3b95
                else
                    result_7 = result_6
                    char ecx_16 = *result_6
                    
                    if (ecx_16 u< 0x80)
                    label_6b382a:
                        result, ecx_12 = sub_5a0d00(&result_7)
                        result_4 = result_7
                        result_6 = result_4
                    label_6b3c56:
                        ecx_12.b = *result_4
                        
                        if (ecx_12.b == 0)
                            break
                        
                        continue
                    else
                        result.b = ecx_16
                        result.b &= 0xe0
                        
                        if (result.b == 0xc0)
                            goto label_6b382a
                        
                        result.b = ecx_16
                        result.b &= 0xf0
                        
                        if (result.b == 0xe0 || (ecx_16 & 0xf8) == 0xf0)
                            goto label_6b382a
                
                var_130_4 = "Xutf8_next"
                var_134_2 = 0x222
                goto label_6b3cf8
        
        result_8 = result_3
        ecx_7 = var_a0 + 1
        var_a0 = ecx_7
        
        if (ecx_7 s>= *(result_8 + 0x1c))
            break

if (esi != 0)
    *(esi + 0x1c) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
