// 函数: sub_6e9b50
// 地址: 0x6e9b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = arg2

if (result != 8 && result s>= 0)
    sub_6e9790(arg1)
    int32_t eax_3 = arg1[0x18]
    char* const ebx_1 = &data_801800
    bool cond:0_1 = eax_3 != 0
    
    if (eax_3 s<= 0)
        goto label_6e9bd6
    
    char* eax_4 = *arg1
    char* const ecx = &data_801800
    
    if (eax_4 != 0)
        ecx = eax_4
    
    int32_t esi_1 = 0
    char* const var_14 = ecx
    
    if (sub_5a0d00(&var_14) == 0)
        goto label_6e9bdc
    
    uint32_t i
    
    do
        esi_1 += 1
        i = sub_5a0d00(&var_14)
    while (i != 0)
    int32_t eax_6 = arg1[0x18]
    
    if (esi_1 s< eax_6)
        goto label_6e9bdc
    
    cond:0_1 = eax_6 != 0
label_6e9bd6:
    
    if (not(cond:0_1))
    label_6e9bdc:
        var_14 = &data_801800
        int32_t var_8_1 = 0
        char* const ecx_3 = &data_801800
        char* eax_7 = *arg1
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        sub_63db30(&var_14, ecx_3, arg1[1])
        sub_63dcd0(&var_14, arg2)
        char* eax_8 = *arg1
        int32_t edx_1
        
        if (eax_8 == 0 || *eax_8 == 0)
            edx_1 = 0
        else
            edx_1 = *(sub_63d4e0(arg1) + 8)
        
        char* eax_10 = *arg1
        char* const ecx_7 = &data_801800
        
        if (eax_10 != 0)
            ecx_7 = eax_10
        
        void* eax_11 = arg1[1]
        sub_63db30(&var_14, eax_11 + ecx_7, edx_1 - eax_11)
        float xmm0_1 = arg1[0x19]
        char* const esi_2 = var_14
        xmm0_1 f- 0
        int32_t eax_13
        eax_13:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm0_2
        
        if (p_2)
            int32_t* ecx_9 = arg1[0xf]
            float xmm2_1 = arg1[0x13]
            
            if (esi_2 != 0)
                ebx_1 = esi_2
            
            if (ecx_9 == 0)
                xmm0_2 = sub_6b43a0(arg1[0xe], ebx_1, xmm2_1, arg1[0x14])
            else
                int32_t* var_2c_4 = ecx_9
                xmm0_2 = sub_6417e0(ecx_9, ebx_1, arg1[0x10], xmm2_1)
        
        if (not(p_2) || not(arg1[0x19] f<= xmm0_2 f* arg1[0x12]))
            char eax_14
            
            if (arg1[0xf] == 0)
                eax_14 = sub_6b4210(arg1[0xe], arg2)
            
            if (arg1[0xf] != 0 || eax_14 != 0)
                sub_63d850(arg1, &var_14)
                void* eax_15 = sub_6e9d30(arg1, arg1[1])
                arg1[1] = eax_15
                arg1[3] = eax_15
        
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_16 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
    
    result = sub_6e9a30(arg1)
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
