// 函数: sub_661380
// 地址: 0x661380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d175
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_104 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_28 = arg3
char* esi = arg5
char* eax_3 = sub_6b33b0(esi)
char* var_24

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_24, 0x12)
    char* var_14_1 = esi
    char* eax_4 = var_24
    char* const ecx_2 = &data_801800
    
    if (eax_4 != 0)
        ecx_2 = eax_4
    
    eax_3 = sub_69f030(ecx_2, &esi[0x12])
    esi = eax_3
    arg5 = esi
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_24
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_24)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                var_24 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (*(esi + 4) != 0x12)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_40 = esi

if (*esi == 0)
    sub_69f4a0(eax_3, 0, esi, 1)

int32_t* eax_5 = *esi
*(esi + 0x1c) += 1
char* ecx_6 = *eax_5
int32_t var_14_4 = 2
char* eax_7 = *(data_147b06c + 0x2dc)
char* var_54 = eax_7
char const* const var_110_1
int32_t var_10c_1
char const* const var_108_1
char* ecx_7

if (eax_7 == 0)
    var_108_1 = "MyFontDrawMatrix"
    var_10c_1 = 0x2de9
    var_110_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx_7 = "material"
else if (*(ecx_6 + 0x1c) == 1)
    int32_t** edi_1 = *(ecx_6 + 0x20)
    float var_34_1 = 0f
    eax_7 = edi_1[2]
    int32_t* ecx_8 = *edi_1
    
    if (eax_7 != 0)
        ecx_8 = eax_7
    
    if (ecx_8[1] == 3)
        int32_t* result = sub_5af880(ecx_8)
        int32_t* ecx_9 = *result
        
        if (ecx_9 == 0)
            goto label_661894
        
        int32_t eax_8 = *ecx_9
        double xmm0_3[0x2] = _mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_893660)
        int32_t eax_10 = ecx_9[1]
        float xmm2 = 1f / _mm_cvtpd_ps(xmm0_3)
        double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_10))
        eax_7 = eax_10 u>> 0x1f
        bool cond:1_1 = edi_1[0xa].b == 0
        float xmm1_1 = 1f / _mm_cvtpd_ps(xmm0_6 f+ *((eax_7 << 3) + &data_893660))
        
        if (cond:1_1)
            int128_t* edi_3 = data_147b06c + 0x124
            int128_t xmm0_9 = *edi_3
            int128_t xmm0_10 = edi_3[1]
            int128_t xmm0_11 = edi_3[2]
            int128_t xmm0_12 = edi_3[3]
            void var_f8
            void* ecx_11
            eax_7, ecx_11 = sub_642e30(&var_f8)
            char* edx_5 = arg7
            int128_t xmm1_2 = *(eax_7 + 0x10)
            int128_t xmm2_1 = *(eax_7 + 0x20)
            int128_t xmm3_1 = *(eax_7 + 0x30)
            *edi_3 = *eax_7
            edi_3[1] = xmm1_2
            edi_3[2] = xmm2_1
            edi_3[3] = xmm3_1
            
            if (edx_5 == arg8)
            label_661858:
                result = data_147b06c
                *(result + 0x124) = xmm0_9
                *(result + 0x134) = xmm0_10
                *(result + 0x144) = xmm0_11
                *(result + 0x154) = xmm0_12
            label_661894:
                
                if (esi != 0)
                    *(esi + 0x1c) -= 1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            while (true)
                ecx_11.b = *edx_5
                
                if (ecx_11.b u< 0x80)
                label_66161c:
                    var_28 = edx_5
                    uint32_t _C_1 = sub_5a0d00(&var_28)
                    uint32_t _C = _C_1
                    var_28 = arg4
                    
                    if (not(arg9 <= 0f))
                        if (_C - 0xe0 u<= 0x1d)
                            _C -= 0x20
                            var_28 = arg4 * arg9
                        else if (_C == 0x171)
                            _C = 0x170
                            var_28 = arg4 * arg9
                        else if (_C == 0x151)
                            _C = 0x150
                            var_28 = arg4 * arg9
                        else if (_C s< 0xff)
                            _C_1 = islower(_C)
                            
                            if (_C_1 != 0 || _C == 0x20)
                                _C_1 = toupper(_C.b)
                                _C = _C_1
                                var_28 = arg4 * arg9
                    
                    int32_t* eax_11 = sub_6b3320(_C_1, edi_1, ecx_6, _C)
                    
                    if (eax_11 != 0)
                        float xmm3_2 = eax_11[3]
                        float xmm4_1 = eax_11[4]
                        float var_68_1 = eax_11[1] f* xmm2
                        float xmm7_1 = var_28
                        float var_64_1 = eax_11[2] f* xmm1_1
                        float xmm3_3 = xmm3_2 f- eax_11[1]
                        float var_60_1 = xmm3_2 * xmm2
                        float xmm4_2 = xmm4_1 f- eax_11[2]
                        float xmm2_5 = xmm7_1 f* eax_11[5] + var_34_1 + *arg2
                        float var_5c_1 = xmm4_1 * xmm1_1
                        float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(ecx_6 + 4)))
                        float var_78_1 = xmm2_5
                        float var_70_1 = xmm3_3 * xmm7_1 + xmm2_5
                        float xmm1_8 = xmm0_25 * arg4 - (xmm0_25 f- eax_11[6]) * xmm7_1 + arg2[1]
                        float var_74_1 = xmm1_8
                        float var_6c_1 = xmm4_2 * xmm7_1 + xmm1_8
                        sub_681fe0(arg6, ecx_8, var_54)
                        char* edx_8 = sub_5a0db0(arg7)
                        arg7 = edx_8
                        char ecx_18 = *edx_8
                        
                        if (ecx_18 u< 0x80)
                        label_6617c9:
                            var_24 = edx_8
                            eax_7 = sub_5a0d00(&var_24)
                            char* var_3c_1 = eax_7
                            var_24 = eax_11[7]
                            
                            if (eax_7 != 0)
                                int32_t edx_10 = eax_11[8]
                                
                                if (edx_10 != 0xffffffff && edx_10 s< *(ecx_6 + 0x28))
                                    eax_7 = *(ecx_6 + 0x30) + edx_10 * 0xc
                                    
                                    while (*eax_7 == _C)
                                        esi = arg5
                                        
                                        if (*(eax_7 + 4) == var_3c_1)
                                            var_24 = &var_24[*(eax_7 + 8)]
                                            break
                                        
                                        edx_10 += 1
                                        eax_7 = &eax_7[0xc]
                                        
                                        if (edx_10 s>= *(ecx_6 + 0x28))
                                            break
                            
                            edx_5 = arg7
                            var_34_1 =
                                (_mm_cvtepi32_ps(zx.o(var_24)) f+ *(ecx_6 + 0x10) + arg10) * var_28
                                + var_34_1
                            goto label_66184f
                        
                        eax_7.b = ecx_18
                        eax_7.b &= 0xe0
                        
                        if (eax_7.b == 0xc0)
                            goto label_6617c9
                        
                        eax_7.b = ecx_18
                        eax_7.b &= 0xf0
                        
                        if (eax_7.b == 0xe0 || (ecx_18 & 0xf8) == 0xf0)
                            goto label_6617c9
                    else
                        eax_7, ecx_11 = sub_5a0db0(arg7)
                        edx_5 = eax_7
                        arg7 = edx_5
                    label_66184f:
                        
                        if (edx_5 == arg8)
                            goto label_661858
                        
                        continue
                else
                    eax_7.b = ecx_11.b
                    eax_7.b &= 0xe0
                    
                    if (eax_7.b == 0xc0)
                        goto label_66161c
                    
                    eax_7.b = ecx_11.b
                    eax_7.b &= 0xf0
                    
                    if (eax_7.b == 0xe0)
                        goto label_66161c
                    
                    ecx_11.b &= 0xf8
                    
                    if (ecx_11.b == 0xf0)
                        goto label_66161c
                
                var_108_1 = "Xutf8_peek_next"
                var_10c_1 = 0x21c
                ecx_7 = "!Xutf8_is_invalid_lead_char(str)"
                var_110_1 = "C:\x\ax2017\Engine\Xutf8.cpp"
                break
        else
            var_108_1 = "MyFontDrawMatrix"
            var_10c_1 = 0x2e0d
            var_110_1 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_7 = "!pLayer->dontColorize"
    else
        var_108_1 = "TextureGetDef"
        var_10c_1 = 0x89
        var_110_1 = "C:\x\ax2017\Engine\Texture.h"
        ecx_7 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    var_108_1 = "MyFontDrawMatrix"
    var_10c_1 = 0x2df4
    var_110_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx_7 = "pDefFont->layerCount == 1"

sub_63b870(eax_7, &data_801800, ecx_7, var_110_1, var_10c_1, var_108_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
