// 函数: sub_6e3510
// 地址: 0x6e3510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7713fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_8
char** edi = arg_8
int32_t* var_38 = edi
int32_t var_14 = 0
int32_t* esi = &edi[1]
int32_t ebx = *esi
int32_t var_24
int32_t* ecx = sub_6e31b0(&var_24, var_38)
int32_t var_8_1 = 1
int32_t eax_3 = var_24
int32_t* var_20

if (eax_3 != 2 && eax_3 != 3)
    if (eax_3 != 4 || *var_20 != 1)
        goto label_6e368f
    
    goto label_6e357d

int32_t* result

if (*var_20 != 1)
label_6e368f:
    *esi = ebx
    result = arg1
    *result = data_cb2f14
    result[1] = data_cb2f18
    void* eax_17 = data_cb2f1c
    result[2] = eax_17
    
    if (eax_17 != 0 && *eax_17 != 0)
        char* eax_18 = sub_63d4e0(&result[2])
        *(eax_18 + 4) += 1
    
    int32_t var_14_2 = 1
    int32_t var_8_3 = 6
else
label_6e357d:
    uint32_t edx_1 = var_20[2]
    char* eax_5 = var_20[1]
    var_38 = ecx
    
    if (eax_5 == 0)
        sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_38 = &data_801800
    sub_63db30(&var_38, eax_5, edx_1)
    sub_6a17e0(&arg_8)
    var_8_1.b = 2
    char* const esi_1 = &data_801800
    char* eax_6 = arg_8
    char* const ecx_3 = &data_801800
    
    if (eax_6 != 0)
        ecx_3 = eax_6
    
    if (sub_6b7ef0(ecx_3) == 0)
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* eax_13 = arg_8
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_63d4e0(&arg_8)
                int32_t temp1_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        
        var_8_1.b = 1
        esi = &edi[1]
        goto label_6e368f
    
    char* eax_8 = arg_8
    int32_t* ecx_5
    
    if (eax_8 == 0 || *eax_8 == 0)
        ecx_5 = nullptr
    else
        ecx_5 = *(sub_63d4e0(&arg_8) + 8)
        eax_8 = arg_8
    
    var_38 = ecx_5
    
    if (eax_8 != 0)
        esi_1 = eax_8
    
    void* eax_10 = sub_6e1820(eax_8, esi_1, *edi, var_38)
    result = arg1
    result[2] = &data_801800
    *result = 3
    result[1] = eax_10
    int32_t var_14_1 = 1
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* eax_11 = arg_8
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&arg_8)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                arg_8 = &data_801800
    
    int32_t var_8_2 = 4

if (data_cf65bc != 0)
    char* var_1c
    char* eax_19 = var_1c
    
    if (eax_19 != 0 && *eax_19 != 0)
        char* eax_20 = sub_63d4e0(&var_1c)
        int32_t temp0_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
