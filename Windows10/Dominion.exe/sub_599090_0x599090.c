// 函数: sub_599090
// 地址: 0x599090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_598f00(&ExceptionList, arg2, arg3, arg4)
int32_t var_8_2 = 0
char* const edi = &data_801800
char* const ecx = &data_801800
char* const edx = &data_801800
int32_t var_14_1 = 1
int32_t* arg_c
char* eax_5 = *arg_c

if (eax_5 != 0)
    ecx = eax_5

char* eax_6 = *arg3

if (eax_6 != 0)
    edx = eax_6

int32_t var_8_3 = 1
sub_63d850(arg3, sub_63dfa0(eax_6, edx, &arg_c, arg5, ecx))
int32_t var_8_4 = 2

if (data_cf65bc != 0)
    int32_t* eax_8 = arg_c
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg_c)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

char* const ecx_5 = &data_801800
var_8_4.b = 0
char* eax_11 = *arg7

if (eax_11 != 0)
    ecx_5 = eax_11

char* eax_12 = *arg3

if (eax_12 != 0)
    edi = eax_12

int32_t var_8_5 = 3
sub_63d850(arg3, sub_63dfa0(eax_12, edi, &arg_c, arg6, ecx_5))
int32_t var_8_6 = 4

if (data_cf65bc != 0)
    int32_t* eax_14 = arg_c
    
    if (eax_14 != 0 && *eax_14 != 0)
        char* eax_15 = sub_63d4e0(&arg_c)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
