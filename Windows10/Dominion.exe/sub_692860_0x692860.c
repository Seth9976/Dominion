// 函数: sub_692860
// 地址: 0x692860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76eefe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg2
char** var_20 = arg3
int32_t var_1c = 0
*arg3 = &data_801800
int32_t var_8_1 = 0
char eax_3 = *edi
int32_t var_1c_1 = 1

if (eax_3 == 0)
label_692ac3:
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

char* eax_5 = sx.d(eax_3) - 0x20
int32_t var_3c
char const* const ecx_11

if (eax_5 u> 0xe)
label_692ad2:
    char const* const var_38_8 = "FormatMicros"
    var_3c = 0x74a
    ecx_11 = "Halt"
else
    int32_t esi_1 = arg4
    
    while (true)
        eax_5 = zx.d(*(eax_5 + &lookup_table_692b18))
        
        switch (jump_table_692b04[eax_5])
            case 0x6928da
                sub_63d960(arg3, arg7)
            label_692a95:
                eax_5.b = edi[1]
                edi = &edi[1]
                
                if (eax_5.b == 0)
                    goto label_692ac3
                
                eax_5 = sx.d(eax_5.b) - 0x20
                
                if (eax_5 u> 0xe)
                    goto label_692ad2
                
                continue
            case 0x6928e9
                char* eax_6 = *arg3
                
                if (eax_6 == 0 || *eax_6 == 0)
                    int32_t* eax_8 = sub_64bfd0(0x12)
                    eax_8[3] += 1
                    
                    if (*eax_8 == 0)
                        sub_64be70(eax_8)
                    
                    int32_t* ecx_5 = *eax_8
                    *eax_8 = *ecx_5
                    eax_5 = &data_807454
                    *ecx_5 = 0xfafafafa
                    ecx_5[1] = 1
                    ecx_5[2] = 1
                    ecx_5[3] = 2
                    *arg3 = &ecx_5[4]
                    int32_t edx_3 = ecx_5 - " 0"
                    
                    do
                        ecx_5.b = *eax_5
                        eax_5 = &eax_5[1]
                        eax_5[edx_3 - 1] = ecx_5.b
                    while (ecx_5.b != 0)
                    
                    esi_1 = arg4
                else
                    char* eax_7 = sub_63d4e0(arg3)
                    int16_t* esi_2 = *(eax_7 + 8)
                    sub_63d5e0(eax_7, esi_2 + 1, arg3, 1)
                    *(esi_2 + *arg3) = 0x20
                    esi_1 = arg4
                
                goto label_692a95
            case 0x692985
                int16_t* const var_38_2 = &data_807234
                int32_t var_8_2 = 1
                char* const ecx_7 = &data_801800
                char* var_14
                char* eax_11 = *sub_6921f0(eax_5, arg6, &var_14, esi_1, arg5, U".")
                
                if (eax_11 != 0)
                    ecx_7 = eax_11
                
                eax_5 = sub_63d960(arg3, ecx_7)
                int32_t var_8_3 = 2
                
                if (data_cf65bc != 0)
                    eax_5 = var_14
                    
                    if (eax_5 != 0 && *eax_5 != 0)
                        eax_5 = sub_63d4e0(&var_14)
                        int32_t temp0_1 = *(eax_5 + 4)
                        *(eax_5 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            eax_5 = sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                edi = &edi[1]
                var_8_3.b = 0
                
                if (*edi == 0x2c)
                    goto label_692a95
                
                char const* const var_38_4 = "FormatMicros"
                var_3c = 0x742
                ecx_11 = "*curFormat == ','"
                break
            case 0x692a19
                void* const var_38_5 = &data_8033d0
                int32_t var_8_4 = 3
                char* const ecx_13 = &data_801800
                char* var_18
                char* eax_13 = *sub_6921f0(eax_5, arg6, &var_18, esi_1, arg5, &data_807234)
                
                if (eax_13 != 0)
                    ecx_13 = eax_13
                
                eax_5 = sub_63d960(arg3, ecx_13)
                int32_t var_8_5 = 4
                
                if (data_cf65bc != 0)
                    eax_5 = var_18
                    
                    if (eax_5 != 0 && *eax_5 != 0)
                        eax_5 = sub_63d4e0(&var_18)
                        int32_t temp1_1 = *(eax_5 + 4)
                        *(eax_5 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            eax_5 = sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                edi = &edi[1]
                var_8_5.b = 0
                
                if (*edi == 0x2e)
                    goto label_692a95
                
                char const* const var_38_7 = "FormatMicros"
                var_3c = 0x747
                ecx_11 = "*curFormat == '.'"
                break
            case 0x692ad2
                goto label_692ad2

sub_63b870(eax_5, &data_801800, ecx_11, "C:\x\ax2017\Engine\Localization.cpp", var_3c, 
    "FormatMicros")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
