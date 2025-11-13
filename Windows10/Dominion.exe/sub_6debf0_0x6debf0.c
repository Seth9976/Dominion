// 函数: sub_6debf0
// 地址: 0x6debf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_771025
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg1
char* const var_24

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_24, 2)
    int32_t var_14_1 = esi
    char* const eax_4 = var_24
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    esi = sub_69f030(ecx_1, esi + 2)
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_24
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_24)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_24 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (*(esi + 4) != 2)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_8 = esi
int32_t var_30 = esi

if (*eax_8 == 0)
    sub_69f4a0(eax_8, 0, eax_8, 1)
    eax_8 = esi

*(eax_8 + 0x1c) += 1
int32_t* result = **eax_8
int32_t var_14_4 = 2
void* edx_4 = *result
void* var_3c = edx_4
int32_t ecx_5 = *(edx_4 + 0x10)

if (arg1[5] s<= 0)
label_6dedda:
    sub_63b870(result, &data_801800, "index >= 0 && index < mSize", "C:\x\ax2017\Engine\xArray.h", 
        0xb5, "XArray<struct Mat4>::operator []")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

arg1[4]
result = nullptr
int32_t* result_1 = nullptr

if (ecx_5 s> 0)
    int32_t ecx_6 = 0
    var_24 = nullptr
    int32_t var_2c_1 = 0
    
    do
        if (ecx_6 s< 0)
            goto label_6dedda
        
        if (result s>= arg1[0x20])
            goto label_6dedda
        
        *(edx_4 + 0x18)
        void var_80
        int128_t* eax_11 = sub_642e30(&var_80)
        char* const edx_7 = var_24
        ecx_6 = var_2c_1 + 0xd8
        int128_t xmm0_1 = *eax_11
        var_2c_1 = ecx_6
        int128_t xmm1_1 = eax_11[1]
        int128_t xmm2_1 = eax_11[2]
        int128_t xmm3_1 = eax_11[3]
        void* eax_13 = &edx_7[arg1[0x1f]]
        var_24 = &edx_7[0x40]
        edx_4 = var_3c
        *eax_13 = xmm0_1
        *(eax_13 + 0x10) = xmm1_1
        *(eax_13 + 0x20) = xmm2_1
        *(eax_13 + 0x30) = xmm3_1
        result = result_1 + 1
        result_1 = result
    while (result s< ecx_5)

if (esi != 0)
    *(esi + 0x1c) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
