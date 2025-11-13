// 函数: sub_64e320
// 地址: 0x64e320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
uint32_t eax_3 = sub_6e55a0(arg2)

if (eax_3 == 3)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2c_1)(void* arg1) = sub_64ca90
    *arg3 = arg2[1]
    arg3[1] = arg2[2]
    (&arg3[2], &arg2[3], 0x34, 2, sub_64cba0)
    arg3[0x1c] = arg2[0x1d]
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

char* var_14

if (eax_3 != 2)
    char* edx = arg2[0x1e]
    
    if (edx != 0)
        sub_63d720(&var_14, edx)
        int32_t var_8_1 = 0
        sub_64cfe0(arg3, &var_14)
        int32_t var_8_2 = 1
        goto label_64e3f7
    
    sub_63b870(eax_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* edx_2 = arg2[0x1f]

if (edx_2 != 0)
    sub_64d7f0(eax_3, edx_2, arg3, arg4, arg5)
else
    sub_63d720(&var_14, "null root")
    int32_t var_8_3 = 2
    sub_64cfe0(arg3, &var_14)
    int32_t var_8_4 = 3
label_64e3f7:
    
    if (data_cf65bc != 0)
        char* eax_10 = var_14
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg3

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
