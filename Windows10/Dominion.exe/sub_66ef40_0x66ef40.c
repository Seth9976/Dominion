// 函数: sub_66ef40
// 地址: 0x66ef40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d5e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_667870(arg1)
char const* const var_a38
int32_t var_a34
char const* const var_a30
void* eax_4
char* ecx_1
char* var_a18
void* edi_1

if (eax_3 == 0)
    eax_4 = sub_667790(arg1, &var_a18)
    
    if (eax_4 != 1)
        edi_1 = sub_64cc90(arg1)
        goto label_66f03f
    
    char* edx_1 = var_a18
    
    if (edx_1 != 0)
        sub_63d720(&var_a18, edx_1)
        int32_t var_8_1 = 0
        int32_t* eax_5 = sub_667680(arg1, &var_a18)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* ecx_4 = var_a18
            
            if (ecx_4 != 0 && *ecx_4 != 0)
                char* eax_6 = sub_63d4e0(&var_a18)
                int32_t temp1_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                    var_a18 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        edi_1 = &eax_5[6]
        goto label_66f03f
    
    var_a30 = "XString::XString"
    var_a34 = 0x94
    var_a38 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_1 = &data_871e0c
else
    edi_1 = &eax_3[6]
label_66f03f:
    *(arg1 + 0x1360) = 0
    void var_a14
    sub_66a920(&var_a18, &var_a14, arg1, &var_a18)
    int32_t edx_6
    edx_6:eax_4 = muls.dp.d(0x66666667, arg2 - var_a18)
    int32_t ebx_4 = (arg2 - var_a18) s/ 5
    
    if ((arg2 - var_a18) s/ 5 s>= 0)
        eax_4 = sub_6dd1e0(eax_4, edi_1, &data_8cae70, data_1724a88, 0x71)
        
        if (eax_4 != 0)
            if (*(eax_4 + 0x10) s> ebx_4)
                int32_t* eax_9 = sub_69dd00(data_1724a88, 8)
                sub_6fb870(eax_9, eax_9, eax_4, ebx_4, nullptr)
                int32_t ecx_11
                ecx_11.b = 1
                uint32_t result = sub_665770(ecx_11)
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            var_a30 = "UI2DeleteTransition"
            var_a34 = 0x45f2
            ecx_1 = "transition->numItems > animIdx"
        else
            var_a30 = "UI2DeleteTransition"
            var_a34 = 0x45f1
            ecx_1 = "transition"
    else
        var_a30 = "UI2DeleteTransition"
        var_a34 = 0x45ee
        ecx_1 = "animIdx >= 0"
    
    var_a38 = "C:\x\ax2017\Engine\UI2.cpp"
sub_63b870(eax_4, &data_801800, ecx_1, var_a38, var_a34, var_a30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
