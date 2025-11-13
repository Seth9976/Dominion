// 函数: sub_6ac5c0
// 地址: 0x6ac5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f29d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const result_5 = &data_801800
uint32_t result_1
uint32_t result_2 = result_1

if (result_2 != 0)
    result_5 = result_2

int32_t eax_3 = sub_6aa0d0(result_5)
arg4[3] = 1f f/ arg5[7]
uint32_t result

if (eax_3 == 4)
    eax_3 = *arg5
    
    if (eax_3 == 0 || eax_3 == 8)
        result = sub_6aa7e0(eax_3, arg4, arg5, result_5)
    else
    label_6ac671:
        FILE* result_6 = result_5
        
        if (*arg5 != 9)
            result = sub_6ac380(eax_3, arg4, arg5, result_6)
        else
            result = sub_6aa980(eax_3, arg5, arg3, arg4, result_6)
else if (eax_3 != 5)
    if (eax_3 != 0xa)
        goto label_6ac671
    
    eax_3 = *arg5
    
    if (eax_3 != 0 && eax_3 != 0xa)
        goto label_6ac671
    
    result = sub_6aa7e0(eax_3, arg4, arg5, result_5)
else
    if (arg5[6] != 0)
        goto label_6ac671
    
    eax_3 = *arg5
    
    if (eax_3 != 0 && eax_3 != 5)
        goto label_6ac671
    
    result = sub_6aa7e0(eax_3, arg4, arg5, result_5)

int32_t* ebx

if (result.b != 0)
    ebx.b = 1
else
    int32_t i = 0
    
    if (arg4[0xf] s> 0)
        int32_t* eax_4 = nullptr
        arg5 = nullptr
        
        do
            int32_t* esi_1 = arg4[0x12] + eax_4
            int32_t ecx_3 = esi_1[2]
            
            if (ecx_3 != 0)
                _aligned_free(ecx_3)
                eax_4 = arg5
                esi_1[2] = 0
            
            i += 1
            *esi_1 = 0
            eax_4 = &eax_4[4]
            arg5 = eax_4
        while (i s< arg4[0xf])
    
    uint32_t result_3 = result_1
    char* const result_4 = &data_801800
    
    if (result_3 != 0)
        result_4 = result_3
    
    char* const result_7 = result_4
    sub_63b5f0("texture reimport failed to read '%s'")
    ebx.b = 0

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
