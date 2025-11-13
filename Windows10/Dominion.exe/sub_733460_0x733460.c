// 函数: sub_733460
// 地址: 0x733460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_8_1 = 0
int32_t var_14 = 0
char* eax_3 = *ebx

while (true)
    arg2.b = *eax_3
    
    if (arg2.b != 0xd && arg2.b != 0xa)
        char* edi = eax_3
        arg1.b = arg2.b
        
        while (arg2.b != 0xa)
            if (arg1.b == 0)
                break
            
            arg1.b = eax_3[1]
            eax_3 = &eax_3[1]
            arg2.b = arg1.b
            
            if (arg1.b == 0xd)
                break
        
        *ebx = eax_3
        *result = &data_801800
        int32_t var_8_2 = 0
        int32_t var_14_1 = 1
        sub_63db30(result, edi, eax_3 - edi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    eax_3 = &eax_3[1]
