// 函数: sub_6de6f0
// 地址: 0x6de6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770fe5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3fc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_40 = arg2
int32_t* eax_3 = arg1
int32_t* var_3c = eax_3
int32_t* esi = *eax_3
int32_t* var_34

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_34, 2)
    int32_t* var_14_1 = esi
    char* eax_4 = var_34
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, esi + 2)
    esi = eax_3
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_34
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_34)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, eax_3[3] + 0x10)
                var_34 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (esi[1] != 2)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* var_50 = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

int32_t* eax_5 = *esi
esi[7] += 1
int32_t* eax_6 = *eax_5
int32_t var_14_4 = 2
void* edi_1 = *eax_6
void* var_4c = edi_1
char const* const var_408
int32_t var_404
char const* const var_400_1
char* ecx_5

if (var_3c[5] s<= 0)
    var_400_1 = "XArray<struct Mat4>::operator []"
    var_404 = 0xb5
    var_408 = "C:\x\ax2017\Engine\xArray.h"
    ecx_5 = "index >= 0 && index < mSize"
label_6debcf:
    sub_63b870(eax_6, &data_801800, ecx_5, var_408, var_404, var_400_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

void* result = *(edi_1 + 0x10)
void* result_3 = var_3c[4]
void* i = result
int32_t var_44_1 = 0

if (result s> 0)
    int32_t ecx_6 = 0
    void* result_1 = result_3
    void* edx_4 = var_40
    int32_t var_3c_1 = 0
    var_34 = edx_4
    int32_t edi_4
    
    do
        float xmm1_1 = *edx_4
        float xmm0_1 = *(edx_4 + 0xc)
        void* edi_3 = *(edi_1 + 0x18) + ecx_6
        float xmm1_3 = *(edx_4 + 4)
        float xmm1_5 = *(edx_4 + 8)
        float xmm0_6[0x4] = sub_4ac580(&__saved_ebp, 
            xmm0_1 * xmm0_1 + xmm1_1 * xmm1_1 + xmm1_3 * xmm1_3 + xmm1_5 * xmm1_5)
        int32_t* edx_5 = var_34
        float xmm0_7[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0)
        *edx_5 = _mm_div_ps(*edx_5, xmm0_7)
        eax_6 = *(edi_3 + 0x6c)
        edi_4 = var_44_1
        
        if (eax_6 s>= edi_4)
            var_400_1 = "AnimationCalcFinalPosition"
            var_404 = 0x2b0
            var_408 = "C:\x\ax2017\Engine\Animation.cpp"
            ecx_5 = "pStructBone->parentBoneIndex < i"
            goto label_6debcf
        
        float* eax_8
        int128_t var_f0
        
        if (eax_6 != 0xffffffff)
            edi_4 = var_44_1
            int32_t ecx_8 = eax_6 * 0x2c
            void* var_48_1 = (eax_6 << 6) + result_3
            int128_t* eax_14
            
            if (*(ecx_8 + var_40 + 0x28) == 0)
                void var_2b0
                int32_t* eax_16 = sub_6c3c80(&var_2b0, edx_5, &edx_5[7], &var_2b0)
                int128_t var_1f0_1 = *eax_16
                int128_t var_1e0_1 = *(eax_16 + 0x10)
                int128_t var_1d0_1 = *(eax_16 + 0x20)
                int128_t var_1c0_1 = *(eax_16 + 0x30)
                float var_2f0[0x10]
                float* eax_18 = sub_6875e0(&var_2f0, edx_5, edx_5, &var_2f0)
                int128_t var_170_1 = *eax_18
                int128_t var_160_1 = *(eax_18 + 0x10)
                int128_t var_150_1 = *(eax_18 + 0x20)
                int128_t var_140_1 = *(eax_18 + 0x30)
                float var_30 = 1f f/ *(ecx_8 + var_40 + 0x1c)
                float var_2c_1 = 1f f/ *(ecx_8 + var_40 + 0x20)
                float var_28_1 = 1f f/ *(ecx_8 + var_40 + 0x24)
                void var_330
                int32_t* eax_21 = sub_6c3c80(&var_330, edx_5, &var_30, &var_330)
                int128_t var_b0_2 = *eax_21
                int128_t var_a0_2 = *(eax_21 + 0x10)
                int128_t var_90_2 = *(eax_21 + 0x20)
                int128_t var_80_2 = *(eax_21 + 0x30)
                void var_370
                int32_t* eax_23 = sub_6b7c20(&var_370, edx_5, &edx_5[4], &var_370)
                int128_t var_130_1 = *eax_23
                int128_t var_120_1 = *(eax_23 + 0x10)
                int128_t var_110_1 = *(eax_23 + 0x20)
                int128_t var_100_1 = *(eax_23 + 0x30)
                void var_3b0
                int128_t* eax_24 = sub_642e30(&var_3b0)
                int128_t var_1b0_1 = *eax_24
                int128_t var_1a0_1 = eax_24[1]
                int128_t var_190_1 = eax_24[2]
                int128_t var_180_1 = eax_24[3]
                void var_3f0
                int128_t* eax_25 = sub_642e30(&var_3f0)
                int128_t var_230_1 = *eax_25
                int128_t var_220_1 = eax_25[1]
                int128_t var_210_1 = eax_25[2]
                int128_t var_200_1 = eax_25[3]
                void var_270
                int128_t* eax_26 = sub_642e30(&var_270)
                var_f0 = *eax_26
                int128_t var_e0_1 = eax_26[1]
                int128_t var_d0_1 = eax_26[2]
                eax_14 = &var_270
                int128_t var_c0_1 = eax_26[3]
            else
                float* eax_13 = sub_6db630(&var_f0, edx_5, edx_5, &var_f0)
                int128_t var_b0_1 = *eax_13
                int128_t var_a0_1 = *(eax_13 + 0x10)
                int128_t var_90_1 = *(eax_13 + 0x20)
                eax_14 = &var_f0
                int128_t var_80_1 = *(eax_13 + 0x30)
            
            eax_8 = sub_642e30(eax_14)
            edx_5 = var_34
        else
            eax_8 = sub_6db630(&var_f0, edx_5, edx_5, &var_f0)
        int128_t xmm0_44 = *eax_8
        int128_t xmm1_9 = *(eax_8 + 0x10)
        edx_4 = &edx_5[0xb]
        ecx_6 = var_3c_1 + 0xd8
        int128_t xmm2_1 = *(eax_8 + 0x20)
        var_44_1 = edi_4 + 1
        int128_t xmm3_1 = *(eax_8 + 0x30)
        int128_t* result_2 = result_1
        var_34 = edx_4
        var_3c_1 = ecx_6
        *result_2 = xmm0_44
        result_2[1] = xmm1_9
        result_2[2] = xmm2_1
        result_2[3] = xmm3_1
        result = &result_2[4]
        edi_1 = var_4c
        result_1 = result
    while (edi_4 + 1 s< i)

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
