// 函数: sub_68c730
// 地址: 0x68c730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e035
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c = arg3
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2

if (data_147abfc != 0)
    char* ecx_1 = &data_801800
    char* var_14
    char* eax_5 = *sub_68bd30(&ExceptionList, arg1, &var_14, nullptr)
    
    if (eax_5 != 0)
        ecx_1 = eax_5
    
    char* eax_6 = arg1
    int32_t esi
    
    while (true)
        char edx_1 = *ecx_1
        char temp0_1 = *eax_6
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                esi = 0
                break
            
            edx_1 = ecx_1[1]
            char temp1_1 = eax_6[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                ecx_1 = &ecx_1[2]
                eax_6 = &eax_6[2]
                
                if (edx_1 != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg3, arg3, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp2_1 == 1)
                eax_6 = sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    char const* const var_50
    int32_t var_4c_1
    char const* const var_48_1
    char* ecx_4
    
    if (esi != 0)
        var_48_1 = "LookupTranslationSafe"
        var_4c_1 = 0x14b
        var_50 = "C:\x\ax2017\Engine\Localization.cpp"
        ecx_4 = "ToKey(key, NULL) == key"
    label_68ca09:
        sub_63b870(eax_6, &data_801800, ecx_4, var_50, var_4c_1, var_48_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (edi == 0)
        eax_6 = data_147abfc
        edi = *(eax_6 + 0x1f8)
    
    if (arg1 == 0)
        var_48_1 = "XString::XString"
        var_4c_1 = 0x94
        var_50 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_4 = &data_871e0c
        goto label_68ca09
    
    sub_63d720(&var_14, arg1)
    int32_t ecx_7 = edi * 0xc
    void* result = sub_6931d0(ecx_7 + data_147abfc, &var_14)
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0)
        char* ecx_9 = var_14
        
        if (ecx_9 != 0 && *ecx_9 != 0)
            char* eax_8 = sub_63d4e0(&var_14)
            int32_t temp3_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (result != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (edi != 1)
        sub_63d720(&var_14, arg1)
        void* eax_9 = sub_6931d0(data_147abfc + 0xc, &var_14)
        int32_t var_8_5 = 2
        
        if (data_cf65bc != 0)
            char* ecx_15 = var_14
            
            if (ecx_15 != 0 && *ecx_15 != 0)
                char* eax_10 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        
        if (eax_9 != 0)
            void var_34
            sub_68ca30(&var_34, eax_9)
            int32_t var_8_7 = 3
            char var_1a_1 = 1
            sub_63d720(&var_14, arg1)
            var_8_7.b = 4
            sub_693230(ecx_7 + data_147abfc, &var_14, &var_34)
            var_8_7.b = 5
            
            if (data_cf65bc != 0)
                char* eax_11 = var_14
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_63d4e0(&var_14)
                    int32_t temp5_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            
            var_8_7.b = 3
            sub_63d720(&var_14, arg1)
            result = sub_6931d0(ecx_7 + data_147abfc, &var_14)
            var_8_7.b = 6
            
            if (data_cf65bc != 0)
                char* ecx_27 = var_14
                
                if (ecx_27 != 0 && *ecx_27 != 0)
                    char* eax_14 = sub_63d4e0(&var_14)
                    int32_t temp6_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            
            sub_4e3ea0(&var_34)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
