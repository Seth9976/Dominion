// 函数: sub_6a0f60
// 地址: 0x6a0f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@_WW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi
struct _EXCEPTION_REGISTRATION_RECORD** edi

if (arg1 != 0)
    if (arg1[1] != 3)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = arg1
    edi = arg1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 3)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = arg1
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, arg1 + 3)
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != arg1)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != arg1.b)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

struct _EXCEPTION_REGISTRATION_RECORD** var_18 = esi

if (*edi == 0)
    sub_69f4a0(eax_3, 0, edi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *edi
edi[7] = &edi[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next_1 = eax_5->Next
int32_t var_8_4 = 2
struct _EXCEPTION_REGISTRATION_RECORD* Next = Next_1->Next
struct _EXCEPTION_REGISTRATION_RECORD** result

if (Next == 0)
    result = nullptr
else if (Next->__offset(0x28).d == 0)
    result = Next_1->__offset(0x8).d
    
    if (result == 0)
        result = sub_6a0ae0(arg1)
        Next_1->__offset(0x8).d = result
else
    result = sub_6a0f60(eax_2)

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
