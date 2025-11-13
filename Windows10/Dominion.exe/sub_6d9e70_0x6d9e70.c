// 函数: sub_6d9e70
// 地址: 0x6d9e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770e55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_ec = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = arg2
int32_t* eax_3 = arg3
int32_t* var_94 = eax_3
int32_t* esi = eax_3[1]
int32_t* var_8c

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_8c, 2)
    int32_t* var_14_1 = esi
    char* eax_4 = var_8c
    char* const ecx_2 = &data_801800
    
    if (eax_4 != 0)
        ecx_2 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_2, esi + 2)
    esi = eax_3
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_8c
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_8c)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, eax_3[3] + 0x10)
                var_8c = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (esi[1] != 2)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

var_8c = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

int32_t* eax_5 = *esi
esi[7] += 1
int32_t var_14_4 = 2
void* edi_1 = **eax_5
int128_t* result

if (edi_1 == 0)
label_6d9f9d:
    result = arg4
    *result = data_bf21e8
    result[1] = data_bf21f8
else
    int32_t ecx_6 = 0
    
    if (*(edi_1 + 0x20) s<= 0)
        goto label_6d9f9d
    
    int32_t eax_8 = *(edi_1 + 0x28) + 0x2c
    
    while (*eax_8 != i)
        ecx_6 += 1
        eax_8 += 0x40
        
        if (ecx_6 s>= *(edi_1 + 0x20))
            goto label_6d9f9d
    
    if (ecx_6 == 0xffffffff)
        goto label_6d9f9d
    
    int32_t* ecx_11 = (ecx_6 << 6) + *(edi_1 + 0x28)
    void* eax_10 = var_94[0xb]
    int32_t edx_6
    
    if (eax_10 != 0)
        edx_6 = ecx_11[0xe]
    
    int128_t var_68
    int128_t var_44
    
    if (eax_10 == 0 || edx_6 s< 0 || edx_6 s>= *(edi_1 + 0x10))
        int64_t var_34_1 = *(ecx_11 + 0x10)
        int32_t var_2c_2 = ecx_11[6]
        var_44 = *ecx_11
    else
        if (edx_6 s>= *(eax_10 + 0x80))
            sub_63b870(eax_10, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void var_e0
        float* eax_12 = sub_6db630(&var_e0, edx_6, ecx_11, &var_e0)
        int128_t var_88 = *eax_12
        int128_t var_78 = *(eax_12 + 0x10)
        var_68 = *(eax_12 + 0x20)
        int128_t var_58_1 = *(eax_12 + 0x30)
        int32_t var_90_1 = (edx_6 << 6) + *(eax_10 + 0x7c)
        int128_t* eax_14 = sub_642e30(&var_e0)
        float xmm1_1[0x4] = *eax_14
        float xmm2_1[0x4] = eax_14[1]
        float xmm3_1[0x4] = eax_14[2]
        int128_t var_58_2 = eax_14[3]
        var_78:0xc.d = xmm1_1
        var_68.d = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
        var_68:4.d = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
        var_68:0xc.d = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
        var_58_2.d = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
        var_58_2:8.d = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        int32_t xmm0_18 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        var_68:8.d = xmm2_1
        var_58_2:4.d = xmm3_1
        var_58_2:0xc.d = xmm0_18
        var_44 = *sub_4ac5b0(&var_44:0xc, &var_88, &var_78:0xc, esi, &var_44:0xc)
        int64_t var_34
        var_34.d = *(eax_14 + 0xc)
        var_34:4.d = *(eax_14 + 0x1c)
        int32_t var_2c_1 = *(eax_14 + 0x2c)
    float var_48 = 1f
    int64_t var_ac_1 = *(var_94 + 8)
    int128_t xmm0_26 = *(var_94 + 0x14)
    int32_t var_a4_1 = var_94[4]
    var_68 = var_94[9].o
    int128_t var_58_3 = xmm0_26
    result = sub_4eb600(&var_68, &var_48, arg4, &var_68)

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
