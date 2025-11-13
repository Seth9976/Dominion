// 函数: sub_64ece0
// 地址: 0x64ece0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
char* ecx

if (*(arg1 + 0x15f8) != 0)
    int32_t eax_4 = sub_64c870(arg1, arg2)
    
    if (eax_4 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = sub_64ec00(arg1)
        sub_65bf00(eax_5)
        char* ecx_4 = *(arg1 + 0x15e0)
        char* const edx = &data_801800
        
        if (ecx_4 != 0)
            edx = ecx_4
        
        char* const var_30_2 = edx
        int32_t var_8_1 = 0
        char* var_14
        sub_63d850(&eax_5[0x578], sub_63df30(&var_14, "just allocated, parent:%s"))
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        eax_5[0x579] = arg2
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    eax_3 = sub_64e7a0(eax_4)
    
    if (eax_3[0x5c6] == arg1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    char const* const var_30_4 = "UI2GetOrAllocChild"
    var_34 = 0xfea
    ecx = "ui.parent == &parent"
else
    char const* const var_30 = "UI2GetOrAllocChild"
    var_34 = 0xfe4
    ecx = "parent.type != UI_NONE"

sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_34, "UI2GetOrAllocChild")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
