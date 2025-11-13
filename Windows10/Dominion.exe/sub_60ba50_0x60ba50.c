// 函数: sub_60ba50
// 地址: 0x60ba50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg2 != 0)
    uint32_t eax_3 = sub_64e7a0(arg3)
    sub_665db0(eax_3, &data_be5ed0, eax_3, 0x3f800000, arg4, 0)
    int32_t eax_5 = *arg2 - 1
    
    if (eax_5 u<= 3)
        uint32_t eax_6
        void** edx
        
        switch (eax_5)
            case 0
                eax_6 = sub_64e7a0(arg3)
                edx = &data_be5edc
            case 1
                eax_6 = sub_64e7a0(arg3)
                edx = &data_be5ee8
            case 2
                eax_6 = sub_64e7a0(arg3)
                edx = &data_be5ef4
            case 3
                eax_6 = sub_64e7a0(arg3)
                edx = &data_be5f00
        
        sub_665db0(eax_6, edx, eax_6, 0x3f800000, arg4, 0)
    
    if (arg2[1] == 1)
        uint32_t eax_9 = sub_64e7a0(arg3)
        sub_665db0(eax_9, &data_be5f0c, eax_9, 0x3f800000, arg4, 0)
    
    int32_t var_2c_1 = arg2[2]
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    sub_63df30(&result_1, "%d")
    int32_t var_8_1 = 0
    int32_t var_2c_2 = arg4
    result = sub_666380(&result_1, &data_be5f18, arg3, &result_1)
    int32_t var_8_2 = 1
    
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

if (arg2[1] == 0)
    result = arg2[3] - 1
    
    if (result u<= 8)
        uint32_t eax_19
        
        switch (result)
            case 1
                eax_19 = sub_64e7a0(arg3)
                sub_665db0(eax_19, &data_be5f30, eax_19, 0x3f800000, arg4, 0)
            case 2
                goto label_60bc84
            case 3
                goto label_60bc63
            case 4
                goto label_60bc42
            case 5
                goto label_60bc21
            case 6
                goto label_60bc00
            case 7
                goto label_60bbdf
            case 8
                uint32_t eax_12 = sub_64e7a0(arg3)
                sub_665db0(eax_12, &data_be5f84, eax_12, 0x3f800000, arg4, 0)
            label_60bbdf:
                uint32_t eax_13 = sub_64e7a0(arg3)
                sub_665db0(eax_13, &data_be5f78, eax_13, 0x3f800000, arg4, 0)
            label_60bc00:
                uint32_t eax_14 = sub_64e7a0(arg3)
                sub_665db0(eax_14, &data_be5f6c, eax_14, 0x3f800000, arg4, 0)
            label_60bc21:
                uint32_t eax_15 = sub_64e7a0(arg3)
                sub_665db0(eax_15, &data_be5f60, eax_15, 0x3f800000, arg4, 0)
            label_60bc42:
                uint32_t eax_16 = sub_64e7a0(arg3)
                sub_665db0(eax_16, &data_be5f54, eax_16, 0x3f800000, arg4, 0)
            label_60bc63:
                uint32_t eax_17 = sub_64e7a0(arg3)
                sub_665db0(eax_17, &data_be5f48, eax_17, 0x3f800000, arg4, 0)
            label_60bc84:
                uint32_t eax_18 = sub_64e7a0(arg3)
                sub_665db0(eax_18, &data_be5f3c, eax_18, 0x3f800000, arg4, 0)
                eax_19 = sub_64e7a0(arg3)
                sub_665db0(eax_19, &data_be5f30, eax_19, 0x3f800000, arg4, 0)
        
        uint32_t eax_20 = sub_64e7a0(arg3)
        result = sub_665db0(eax_20, &data_be5f24, eax_20, 0x3f800000, arg4, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
