// 函数: sub_612890
// 地址: 0x612890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?common_flush_all@@YAH_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_b604e0 != 0xffffffff)
    int32_t var_20
    int32_t var_1c
    char var_11
    result = sub_600ad0(&var_11, &var_20, &var_1c, &var_11, nullptr)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
    
    if (result_2 != 0)
        int32_t ecx_1 = data_b604e0
        
        if (ecx_1 == 0xffffffff)
            ecx_1 = 0
        
        result = sub_5e4d40(ecx_1)
        
        if (result.b == 0)
            uint32_t eax_4 = sub_64e7a0(arg1)
            sub_665db0(eax_4, &data_be6780, eax_4, 0x3f800000, 0xffffffff, 0)
            
            if (result_2 != 2)
                void* eax_6 = sub_571b30(var_1c, 0x18)
                
                if ((*(eax_6 + 0x9c) & 0x1000) == 0)
                    uint32_t eax_8 = sub_64e7a0(arg1)
                    sub_665db0(eax_8, &data_be67bc, eax_8, 0x3f800000, 0xffffffff, 0)
                    int32_t* eax_9 = *(eax_6 + 0x60)
                    int32_t var_34_2 = *eax_9
                    result = sub_666250(eax_9, &data_be67c8, arg1)
                else
                    uint32_t eax_7 = sub_64e7a0(arg1)
                    result = sub_665db0(eax_7, eax_6 + 0x74, eax_7, 0x3f800000, 0xffffffff, 0)
            else
                uint32_t eax_5 = sub_64e7a0(arg1)
                result = sub_665db0(eax_5, &data_be678c, eax_5, 0x3f800000, 0xffffffff, 0)
            
            int32_t edi_2 = var_20
            
            if (edi_2 s> 1)
                uint32_t eax_10 = sub_64e7a0(arg1)
                sub_665db0(eax_10, &data_be67a4, eax_10, 0x3f800000, 0xffffffff, 0)
                int32_t var_38_1 = edi_2
                struct _EXCEPTION_REGISTRATION_RECORD** result_1
                sub_63df30(&result_1, "%d")
                int32_t var_8_1 = 0
                int32_t var_44_1 = 0xffffffff
                result = sub_666380(&result_1, &data_be67b0, arg1, &result_1)
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp0_1 = result[1]
                        result[1] -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_64c080(result, &result[3][2])
                            result_1 = &data_801800
                
                int32_t var_8_3 = 0xffffffff
            
            if (var_11 != 0)
                uint32_t eax_12 = sub_64e7a0(arg1)
                result = sub_665db0(eax_12, &data_be6798, eax_12, 0x3f800000, 0xffffffff, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
