// 函数: sub_65d9c0
// 地址: 0x65d9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1?$source_block@V?$multi_link_registry@V?$ITarget@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@V?$ordered_message_processor@W4agent_status@Concurrency@@@2@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = 0
char* arg_4
char* edx = arg_4

if (edx == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_14
sub_63d720(&var_14, edx)
int32_t var_8_1 = 0
sub_63dde0(arg1, &arg_4, &var_14)
var_8_1.b = 3

if (data_cf65bc != 0)
    char* eax_4 = var_14
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

var_8_1.b = 2
char* const result = &data_801800
char* eax_6 = arg_4
char* const ecx_4 = &data_801800

if (eax_6 != 0)
    ecx_4 = eax_6

void* eax_7 = sub_68caf0(eax_6, nullptr, ecx_4, 0)

if (eax_7 == 0)
    int32_t var_8_3 = 5
    
    if (data_cf65bc != 0)
        char* eax_11 = arg_4
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&arg_4)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

char* result_1 = *eax_7

if (result_1 != 0)
    result = result_1

int32_t var_8_2 = 4

if (data_cf65bc != 0)
    char* eax_8 = arg_4
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg_4)
        int32_t temp2_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
