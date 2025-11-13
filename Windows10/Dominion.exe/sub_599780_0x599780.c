// 函数: sub_599780
// 地址: 0x599780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?common_exit@@YAXHW4_crt_exit_cleanup_mode@@W4_crt_exit_return_mode@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_14 = &data_801800
int32_t var_8_1 = 0
char* var_18

if (arg2 != 0xe01)
    int32_t var_30_1 = *sub_571910(arg2)
    var_8_1.b = 3
    sub_63d850(&var_14, sub_63df30(&var_18, "dom_log_%s_token"))
    var_8_1.b = 4
else
    var_8_1.b = 1
    sub_63d850(&var_14, sub_63df30(&var_18, "dom_log_project_cube"))
    var_8_1.b = 2

if (data_cf65bc != 0)
    char* eax_6 = var_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

var_8_1.b = 0
char* const ecx_5 = &data_801800
char* const esi = var_14

if (esi != 0)
    ecx_5 = esi

void* result = sub_68c730(ecx_5, arg1, esi)

if (result == 0)
    if (data_1a8a060 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a8a060)
        
        if (data_1a8a060 == 0xffffffff)
            data_1a8a064 = &data_801800
            data_1a8a068 = &data_801800
            data_1a8a06c = &data_801800
            _atexit(sub_773b40)
            __Init_thread_footer(&data_1a8a060)
    
    sub_63d850(&data_1a8a064, &var_14)
    result = &data_1a8a064

int32_t var_8_2 = 5

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_11 = sub_63d4e0(&var_14)
    int32_t temp1_1 = *(eax_11 + 4)
    *(eax_11 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
