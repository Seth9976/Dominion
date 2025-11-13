// 函数: sub_4dd440
// 地址: 0x4dd440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?ScheduleTask@ScheduleGroupSegmentBase@details@Concurrency@@QAEXP6AXPAX@Z0@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* _String_2
int32_t* _String_3 = _String_2
int32_t edi = 0
int32_t ebx = 0
int32_t var_1c = _String_3[1]
int32_t var_20 = *_String_3
char* result_1
sub_4dc550(&result_1, &var_20)
int32_t var_50
int32_t ecx_1 = sub_4dc900(&var_50)
char* result = result_1

if (result != var_50)
    uint32_t var_34
    
    while (true)
        uint32_t edx = var_34
        
        if (edx != 0)
            int32_t eax_5
            eax_5, ecx_1 = isdigit(sx.d(*result))
            result = result_1
            
            if (eax_5 != 0)
                break
            
            edx = var_34
        
        int32_t var_64_3 = arg6
        struct _EXCEPTION_REGISTRATION_RECORD* eax_6 = sub_4dd260(result, edx, result, ecx_1)
        
        if (eax_6 != 0)
            void* eax_7 = sub_571b30(eax_6, arg4)
            void var_30
            
            if (((*(eax_7 + 0x98) & 0x7f000400) | (*(eax_7 + 0x9c) & 0x940)) == 0)
                if (arg2 != 0 && edi != arg2)
                    arg3[edi] = eax_6
                    edi += 1
                    sub_4dd660(&var_30, arg5, arg4, eax_6, &var_30)
            else if (arg8 != 0 && ebx != arg8)
                *(arg7 + (ebx << 2)) = eax_6
                ebx += 1
                sub_4dd660(&var_30, arg5, arg4, eax_6, &var_30)
        
        ecx_1 = sub_4dc8e0(&result_1)
        result = result_1
        
        if (result == var_50)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    if (result == 0)
        sub_63b870(result, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    _String_2 = &data_801800
    result = sub_63db30(&_String_2, result, var_34)
    int32_t var_8_1 = 0
    int32_t var_68_4
    char* ecx_12
    
    if (arg2 s< 1)
        char const* const var_64_6 = "AddCards"
        var_68_4 = 0x8dc
        ecx_12 = "numWhats >= 1"
    label_4dd646:
        sub_63b870(result, &data_801800, ecx_12, 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_68_4, "AddCards")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* _String_1 = _String_2
    char* const _String = &data_801800
    
    if (_String_1 != 0)
        _String = _String_1
    
    result = neg.d(atoi(_String))
    *arg3 = result
    
    if (result == 0)
        char const* const var_64_8 = "AddCards"
        var_68_4 = 0x8de
        ecx_12 = "whats[0] != CARD_NONE"
        goto label_4dd646
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && _String_1 != 0 && *_String_1 != 0)
        result = sub_63d4e0(&_String_2)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
