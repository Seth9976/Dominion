// 函数: sub_6d9a30
// 地址: 0x6d9a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770e08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_124 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2
int32_t esi = *(arg3 + 4)
char* const var_8c

if (esi == 0)
    sub_69fd50(arg3, "!Null\Null", &var_8c, 2)
    int32_t var_14_1 = esi
    char* const eax_4 = var_8c
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    int32_t eax_5
    eax_5, arg2 = sub_69f030(ecx_1, esi + 2)
    esi = eax_5
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_8c
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_8c)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_8c = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (*(esi + 4) != 2)
    sub_63b870(arg3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_8 = esi
int32_t var_94 = esi

if (*eax_8 == 0)
    arg2.b = 0
    sub_69f4a0(eax_8, arg2.b, eax_8, 1)
    eax_8 = esi

*(eax_8 + 0x1c) += 1
char* const eax_10 = **eax_8
int32_t var_14_4 = 2

if (edi s>= 0)
    eax_10 = *eax_10

char const* const var_130
int32_t var_12c
char const* const var_128_8
char* ecx_10

if (edi s< 0 || edi s>= *(eax_10 + 0x20))
    var_128_8 = "StructureGetHardpointTransform"
    var_12c = 0x269
    var_130 = "C:\x\ax2017\Engine\Structure.cpp"
    ecx_10 = "
        hardpointIndex >= 0 && hardpointIndex < pDefStructure->pStructureImportData->hardpointCount"
else
    int128_t* edi_2 = (edi << 6) + *(eax_10 + 0x28)
    char* ecx_6 = *(arg3 + 0x2c)
    var_8c = ecx_6
    int32_t edx_3
    
    if (ecx_6 != 0)
        edx_3 = *(edi_2 + 0x38)
    
    float var_b8
    int128_t var_68
    int128_t var_44
    int128_t xmm0_14
    
    if (ecx_6 == 0 || edx_3 s< 0 || edx_3 s>= *(eax_10 + 0x10))
        int64_t var_a4_1 = edi_2[1].q
        int128_t xmm0_25 = *edi_2
        int32_t var_9c_1 = *(edi_2 + 0x18)
        var_b8 = (edi_2[2].d f+ *(edi_2 + 0x1c) f+ *(edi_2 + 0x24)) * 0.333333343f
        var_44 = var_b8.o
        xmm0_14 = xmm0_25
    label_6d9d75:
        int128_t var_34_1 = xmm0_14
        int64_t var_a4_2 = *(arg3 + 8)
        int128_t xmm0_32 = *(arg3 + 0x14)
        int32_t var_9c_2 = *(arg3 + 0x10)
        var_b8 = *(arg3 + 0x24)
        var_68 = var_b8.o
        int128_t var_58_3 = xmm0_32
        sub_4eb600(&var_68, &var_44, &var_b8, &var_68)
        *arg4 = var_b8.o
        arg4[1] = xmm0_32
        
        if (esi != 0)
            *(esi + 0x1c) -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(arg4)
        return arg4
    
    float xmm1_1 = edi_2[2].d
    float xmm2_1 = *(edi_2 + 0x1c)
    float xmm0_1 = *(edi_2 + 0x24)
    void var_118
    int128_t var_d8
    int128_t var_b4
    int128_t var_88
    
    if (not(9.99999944e-11f <= xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1 + xmm0_1 * xmm0_1))
        int128_t var_34
        var_34:0xc.d = *(edi_2 + 0x18)
        var_44 = *edi_2
        var_34:4.q = edi_2[1].q
        var_44.d = 0x3f800000
        float* eax_13 = sub_64b1b0(&var_d8, edx_3, &var_44, &var_d8)
        var_88 = *eax_13
        int128_t var_78_1 = *(eax_13 + 0x10)
        var_68 = *(eax_13 + 0x20)
        eax_10 = var_8c
        int128_t var_58_1 = *(eax_13 + 0x30)
        
        if (edx_3 s>= *(eax_10 + 0x14))
            goto label_6d9c62
        
        var_8c = (edx_3 << 6) + *(eax_10 + 0x10)
        int128_t* eax_14 = sub_642e30(&var_118)
        var_d8 = *eax_14
        int128_t var_c8_1 = eax_14[1]
        var_b8.o = eax_14[2]
        var_b4 = eax_14[3]
        float* eax_16 = sub_6b7ae0(&var_68, &var_88, &var_d8, esi.w, edi_2, &var_68)
        var_44 = *eax_16
        var_44.d = 0
        xmm0_14 = *(eax_16 + 0x10)
        goto label_6d9d75
    
    float* eax_18 = sub_6db630(&var_118, edx_3, edi_2, &var_118)
    var_88 = *eax_18
    int128_t var_78_2 = *(eax_18 + 0x10)
    var_68 = *(eax_18 + 0x20)
    eax_10 = var_8c
    int128_t var_58_2 = *(eax_18 + 0x30)
    
    if (edx_3 s< *(eax_10 + 0x14))
        var_8c = (edx_3 << 6) + *(eax_10 + 0x10)
        int128_t* eax_19 = sub_642e30(&var_118)
        var_d8 = *eax_19
        int128_t var_c8_2 = eax_19[1]
        var_b8.o = eax_19[2]
        var_b4 = eax_19[3]
        float* eax_21 = sub_6b7ae0(&var_68, &var_88, &var_d8, esi.w, edi_2, &var_68)
        var_44 = *eax_21
        xmm0_14 = *(eax_21 + 0x10)
        goto label_6d9d75
    
label_6d9c62:
    var_128_8 = "XArray<struct Mat4>::operator []"
    var_12c = 0xb5
    var_130 = "C:\x\ax2017\Engine\xArray.h"
    ecx_10 = "index >= 0 && index < mSize"

sub_63b870(eax_10, &data_801800, ecx_10, var_130, var_12c, var_128_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
