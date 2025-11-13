// 函数: sub_64d5a0
// 地址: 0x64d5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c9f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg1
int32_t* var_20 = arg1
int32_t* var_1c = arg1
int32_t var_18 = 0
int32_t* eax_3 = *(arg2 + 8)
char const* const var_38
int32_t var_34
char const* const var_30
char* ecx_2

switch (eax_3)
    case nullptr
        var_30 = "UI2StateToEvalResult"
        var_34 = 0xe09
        goto label_64d79b
    case 1
        sub_64d1a0(arg1, *(arg2 + 0x18))
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 2
        sub_64d280(arg1, *(arg2 + 0x18))
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 3
        eax_3 = *(arg2 + 0xc)
        
        if (eax_3 == 0)
            var_30 = "StringLinear::GetString"
            var_34 = 0x684
            ecx_2 = "base"
            goto label_64d7a0
        
        int32_t edx_1 = *(arg2 + 0x10)
        
        if (edx_1 == neg.d(*eax_3))
            var_30 = "XString::XString"
            var_34 = 0x94
            var_38 = "C:\x\ax2017\Engine\xString.cpp"
            ecx_2 = &data_871e0c
            goto label_64d7aa
        
        sub_63d720(&var_14, edx_1 + *eax_3)
        int32_t var_8_1 = 0
        sub_64cfe0(arg1, &var_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_5 = var_14
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&var_14)
                int32_t temp2_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 4
        sub_64d0c0(arg1, *(arg2 + 0x18))
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 8
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_30_1)(void* arg1) = sub_64ca90
        int32_t var_8_3 = 2
        `eh vector constructor iterator'(&arg1[2], 0x34, 2, sub_64ca70)
        arg1[1] = 0
        *arg1 = 8
        int32_t var_18_1 = 2
        arg1[4] = *(arg2 + 0x18)
        sub_63d850(&arg1[8], &arg1[3])
        arg1[9] = arg1[4]
        arg1[9] = arg1[4]
        *(arg1 + 0x24) = *(arg1 + 0x10)
        *(arg1 + 0x24) = *(arg1 + 0x10)
        arg1[0xb] = arg1[6]
        int32_t ecx_12 = arg1[5]
        arg1[9] = arg1[4]
        arg1[0xa] = ecx_12
        arg1[9] = arg1[4]
        arg1[9] = arg1[4]
        char* eax_17 = var_14
        *(eax_17 + 0x70) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_17
    default
        var_30 = "UI2StateToEvalResult"
        var_34 = 0xe15
    label_64d79b:
        ecx_2 = "Halt"
    label_64d7a0:
        var_38 = "C:\x\ax2017\Engine\UI2.cpp"
    label_64d7aa:
        sub_63b870(eax_3, &data_801800, ecx_2, var_38, var_34, var_30)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
