// 函数: sub_667ae0
// 地址: 0x667ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Enqueue@?$SafeSQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEXPAVInternalContextBase@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 - 0x64 u> 0x27)
label_667b1c:
    int32_t* eax_4 = sub_667870(arg1)
    
    if (eax_4 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return &eax_4[6]
    
    int32_t eax_6 = sub_667790(arg1, &var_14)
    
    if (eax_6 == 1)
        char* edx_2 = var_14
        
        if (edx_2 == 0)
            sub_63b870(eax_6, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&var_14, edx_2)
        int32_t var_8_1 = 0
        int32_t* eax_7 = sub_667680(arg1, &var_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* ecx_5 = var_14
            
            if (ecx_5 != 0 && *ecx_5 != 0)
                char* eax_8 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return &eax_7[6]
else
    switch (arg2)
        case 0x65, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 
                0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 
                0x83, 0x84, 0x85, 0x86, 0x87, 0x88
            goto label_667b1c

int32_t result = sub_64cc90(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
