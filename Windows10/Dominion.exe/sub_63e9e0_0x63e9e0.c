// 函数: sub_63e9e0
// 地址: 0x63e9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c5be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg2
char** result = arg3
char** result_1 = result
int32_t var_18 = 0
*result = &data_801800
int32_t var_8_1 = 0
int32_t edi = 0
int32_t var_18_1 = 1

if (*esi != 0)
    int32_t* eax_4 = arg5 + arg4
    int32_t* var_1c_1 = eax_4
    
    while (edi s< eax_4)
        arg3.b = *esi
        int32_t var_3c
        char const* const var_38_2
        
        if (arg3.b u< 0x80)
        label_63ea66:
            char* var_14 = esi
            eax_4 = sub_5a0d00(&var_14)
            
            if (edi s>= arg4)
                sub_63dcd0(result, eax_4)
            
            char ecx_1 = *esi
            var_14 = esi
            
            if (ecx_1 u< 0x80)
            label_63eaa0:
                sub_5a0d00(&var_14)
                esi = var_14
                edi += 1
                
                if (*esi == 0)
                    break
                
                eax_4 = var_1c_1
                continue
            else
                eax_4.b = ecx_1
                eax_4.b &= 0xe0
                
                if (eax_4.b == 0xc0)
                    goto label_63eaa0
                
                eax_4.b = ecx_1
                eax_4.b &= 0xf0
                
                if (eax_4.b == 0xe0 || (ecx_1 & 0xf8) == 0xf0)
                    goto label_63eaa0
                
                var_38_2 = "Xutf8_next"
                var_3c = 0x222
        else
            eax_4.b = arg3.b
            eax_4.b &= 0xe0
            
            if (eax_4.b == 0xc0)
                goto label_63ea66
            
            eax_4.b = arg3.b
            eax_4.b &= 0xf0
            
            if (eax_4.b == 0xe0)
                goto label_63ea66
            
            arg3.b &= 0xf8
            
            if (arg3.b == 0xf0)
                goto label_63ea66
            
            var_38_2 = "Xutf8_peek_next"
            var_3c = 0x21c
        
        sub_63b870(eax_4, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
            "C:\x\ax2017\Engine\Xutf8.cpp", var_3c, var_38_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
