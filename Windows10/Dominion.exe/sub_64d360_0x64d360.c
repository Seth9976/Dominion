// 函数: sub_64d360
// 地址: 0x64d360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c99d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_8c = arg1
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a4)(void* arg1) = sub_64ca90
int32_t* var_94 = arg1
int32_t var_90 = 0
void var_80
`eh vector constructor iterator'(&var_80, 0x34, 2, sub_64ca70)
int32_t var_8_1 = 0
uint32_t eax_4 = *arg2 - 1

if (eax_4 u<= 0xb)
    eax_4 = zx.d(lookup_table_64d594[eax_4])
    
    switch (eax_4)
        case 0
            var_8_1.b = 1
            char* eax_5 = arg2[1]
            
            if (eax_5 == 0)
                sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            uint32_t var_a4_1 = arg2[2]
            var_8c = &data_801800
            sub_63db30(&var_8c, eax_5, var_a4_1)
            int32_t var_90_1 = 4
            int32_t var_8_2 = 2
            sub_64cfe0(arg1, &var_8c)
            int32_t var_90_2 = 6
            int32_t var_8_3 = 3
            
            if (data_cf65bc != 0)
                int32_t* eax_6 = var_8c
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_63d4e0(&var_8c)
                    int32_t temp0_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            
            int32_t var_8_4 = 4
            goto label_64d480
        case 1
            sub_64d1a0(arg1, arg2[1])
            int32_t var_8_5 = 5
        label_64d480:
            `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_64ca90)
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(arg1)
            return arg1
        case 2
            sub_64d280(arg1, arg2[1])
            int32_t var_8_6 = 6
            goto label_64d480
        case 3
            sub_64d0c0(arg1, arg2[1])
            int32_t var_8_7 = 7
            goto label_64d480
        case 4
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a4_2)(void* arg1) = sub_64ca90
            *arg1 = data_c23b30
            arg1[1] = data_c23b34
            (&arg1[2], 0xc23b38, 0x34, 2, sub_64cba0)
            arg1[0x1c] = data_c23ba0
            int32_t var_8_8 = 8
            goto label_64d480

sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0xe00, "UI2ExprToEvalResult")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
