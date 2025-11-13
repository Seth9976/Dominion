// 函数: sub_64b880
// 地址: 0x64b880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c785
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
data_c1c800 = 0

if (data_bf23bc s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t ebx_1 = data_bf23c0
        int32_t* ecx_1 = *SteamInternal_ContextInit(&data_cb4518, eax_2)
        result = (*(*ecx_1 + 0x1c))(*(ebx_1 + edi_1 + 8))
        
        if (result.b != 0)
            void var_24
            int32_t* eax_8 = (*(**SteamInternal_ContextInit(&data_cb4530) + 8))(&var_24)
            int32_t var_38_3 = eax_8[1]
            int32_t var_3c_1 = *eax_8
            char* result_1
            sub_63df30(&result_1, "%I64d")
            int32_t var_8_1 = 0
            int32_t var_48_1 = *(ebx_1 + edi_1 + 8)
            struct _EXCEPTION_REGISTRATION_RECORD** result_2
            sub_63df30(&result_2, "%d")
            var_8_1.b = 1
            char* const result_6 = &data_801800
            char* result_3 = result_1
            char* result_5 = &data_801800
            
            if (result_3 != 0)
                result_6 = result_3
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_2
            
            if (result_4 != 0)
                result_5 = result_4
            
            result = sub_64ba00(result_4, result_6.b, result_5, result_6)
            var_8_1.b = 2
            
            if (data_cf65bc != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_2)
                    int32_t temp0_1 = result[1]
                    result[1] -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_64c080(result, &result[3][2])
                        result_2 = &data_801800
            
            int32_t var_8_2 = 3
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp1_1 = result[1]
                    result[1] -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_64c080(result, &result[3][2])
                        result_1 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
        
        i += 1
        edi_1 += 0x20
    while (i s< data_bf23bc)

fsbase->NtTib.ExceptionList = ExceptionList
return result
