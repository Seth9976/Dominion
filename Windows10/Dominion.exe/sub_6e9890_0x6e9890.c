// 函数: sub_6e9890
// 地址: 0x6e9890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f29d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** esi = arg1
void* result_1
uint32_t result_2 = result_1

if (result_2 s>= 0)
    result = *esi
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        
        if (result_2 s< result[2])
            struct _EXCEPTION_REGISTRATION_RECORD** ecx = *esi
            char* const ebx_1 = &data_801800
            
            if (ecx != 0)
                ebx_1 = ecx
            
            ecx.b = ebx_1[result_2]
            
            if (ecx.b u>= 0x80)
                result.b = ecx.b
                result.b &= 0xe0
                
                if (result.b != 0xc0)
                    result.b = ecx.b
                    result.b &= 0xf0
                    
                    if (result.b != 0xe0)
                        ecx.b &= 0xf8
                        
                        if (ecx.b != 0xf0)
                            sub_63b870(result, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                                "C:\x\ax2017\Engine\Xutf8.cpp", 0x21c, "Xutf8_peek_next")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
            
            result_1 = &ebx_1[result_2]
            uint32_t eax_3 = sub_5a0d00(&result_1)
            int32_t ebx_3
            
            if (eax_3 s< 0x80)
                ebx_3 = 1
            else if (eax_3 s>= 0x800)
                int32_t ebx_4
                ebx_4.b = eax_3 s>= 0x10000
                ebx_3 = ebx_4 + 3
            else
                ebx_3 = 2
            
            result_1 = &data_801800
            int32_t var_8_1 = 0
            char* const eax_4 = &data_801800
            struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = *esi
            
            if (ecx_2 != 0)
                eax_4 = ecx_2
            
            sub_63db30(&result_1, eax_4, result_2)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = *esi
            int32_t ecx_5
            
            if (eax_5 == 0 || *eax_5 == 0)
                ecx_5 = 0
            else
                ecx_5 = *(sub_63d4e0(esi) + 8)
            
            struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = *esi
            struct _EXCEPTION_REGISTRATION_RECORD** edx_1 = &data_801800
            
            if (eax_7 != 0)
                edx_1 = eax_7
            
            sub_63db30(&result_1, edx_1 + ebx_3 + result_2, ecx_5 - ebx_3 - result_2)
            result = sub_63d850(esi, &result_1)
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp1_1 = result[1]
                    result[1] -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
