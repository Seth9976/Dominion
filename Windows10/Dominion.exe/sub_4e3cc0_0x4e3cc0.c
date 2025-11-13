// 函数: sub_4e3cc0
// 地址: 0x4e3cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t var_1c = 0
char* const var_14 = &data_801800
int32_t var_8_1 = 1
char* var_18

if (arg2[6] != 0xe01)
    int32_t var_34_1 = *arg2
    var_8_1.b = 4
    sub_63d850(&var_14, sub_63df30(&var_18, "dom_log_%s_token"))
    var_8_1.b = 5
else
    var_8_1.b = 2
    sub_63d850(&var_14, sub_63df30(&var_18, "dom_log_project_cube"))
    var_8_1.b = 3

if (data_cf65bc != 0)
    char* eax_5 = var_18
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

var_8_1.b = 1
char* const ecx_4 = &data_801800
char* const esi = var_14

if (esi != 0)
    ecx_4 = esi

void* eax_7 = sub_68c730(ecx_4, 0, esi)

if (eax_7 != 0)
    char* eax_12 = *eax_7
    *arg1 = eax_12
    
    if (eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_63d4e0(arg1)
        *(eax_13 + 4) += 1
    
    int32_t var_1c_2 = 1
    int32_t var_8_3 = 7
else
    if (data_19e5d14 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_19e5d14)
        
        if (data_19e5d14 == 0xffffffff)
            data_19e5d18 = &data_801800
            data_19e5d1c = &data_801800
            data_19e5d20 = &data_801800
            _atexit(sub_773980)
            __Init_thread_footer(&data_19e5d14)
    
    sub_63d850(&data_19e5d18, &var_14)
    char* eax_10 = data_19e5d18
    *arg1 = eax_10
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(arg1)
        *(eax_11 + 4) += 1
    
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 6

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_14 = sub_63d4e0(&var_14)
    int32_t temp1_1 = *(eax_14 + 4)
    *(eax_14 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
