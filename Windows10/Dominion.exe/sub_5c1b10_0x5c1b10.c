// 函数: sub_5c1b10
// 地址: 0x5c1b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7696ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg2
int32_t* edi = *arg3
float xmm0 = *arg5
int32_t eax_4 = esi[1]

if (eax_4 u<= 0x3fffffff)
    int32_t* edx = *esi
    
    if (edx != 0)
        goto label_5c1bb8
    
    int32_t eax_5 = eax_4 << 2
    
    if (eax_5 u<= 0x20000)
        __alloca_probe_16(eax_5 + 0xf)
        int32_t __saved_edi
        edx = &__saved_edi
    label_5c1bb8:
        int32_t ecx = esi[1]
        int32_t var_40 = ecx
        int32_t eax_9 = ecx << 2
        int32_t var_30 = eax_9
        eax_9.b = eax_9 u> 0x20000
        int32_t* esi_1 = nullptr
        
        if (*esi == 0)
            esi_1 = edx
        
        char var_3c = eax_9.b
        int32_t* var_44 = esi_1
        int32_t var_14_1 = 0
        float* ecx_1 = **arg4
        float* var_58_2 = ecx_1
        int32_t var_38 = *edi
        int32_t ecx_2 = edi[2]
        int32_t* var_2c = edx
        int32_t edx_3 = edi[1]
        int32_t var_28_1 = 1
        int32_t var_34 = edx_3
        int32_t result = sub_5c3d60(&var_38, edx_3, ecx_2, &var_38, &var_2c, ecx_1, 1, xmm0)
        
        if (var_30 u> 0x20000 && esi_1 != 0)
            result = free(esi_1[-1])
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t eax_8 = malloc(eax_5 + 0x10)
    
    if (eax_8 != 0)
        void* edx_2 = eax_8 & 0xfffffff0
        edx = edx_2 + 0x10
        edx[-1] = eax_8
        
        if (edx_2 != 0xfffffff0)
            goto label_5c1bb8

sub_5b0890()
noreturn
