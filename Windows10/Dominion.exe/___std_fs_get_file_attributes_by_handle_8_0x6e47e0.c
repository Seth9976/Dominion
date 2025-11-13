// 函数: ___std_fs_get_file_attributes_by_handle@8
// 地址: 0x6e47e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fstat@U_stat64@@@@YAHHQAU_stat64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_58 = arg1
int32_t* var_70 = arg1
int32_t var_5c = 0
int32_t var_54 = 0
int64_t var_50 = 0
char* const var_48 = &data_801800
int32_t var_8_1 = 1
void var_44
memset(&var_44, 0, 0x30)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84)(void* arg1) = sub_4ab280
`eh vector constructor iterator'(&var_44, 0xc, 4, sub_4ab270)
int32_t var_8_2 = 2
void var_3c
void* esi = &var_3c
int32_t edi = 0

while (true)
    void var_6c
    int32_t* eax_4 = (&data_882124)[edi](&var_6c, arg2, eax_2)
    var_8_2.b = 3
    *(esi - 8) = *eax_4
    *(esi - 4) = eax_4[1]
    sub_63d850(esi, &eax_4[2])
    var_8_2.b = 4
    
    if (data_cf65bc != 0)
        char* const var_64
        char* eax_8 = var_64
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_64)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                var_64 = &data_801800
    
    var_8_2.b = 2
    int32_t eax_10 = *(esi - 8)
    
    if (eax_10 != 2 && eax_10 != 3 && eax_10 != 4)
        int32_t var_54_1 = 1
        void* ecx_11 = &var_44 + edi * 0xc
        var_50.d = *ecx_11
        var_50:4.d = *(ecx_11 + 4)
        sub_63d850(&var_48, esi)
        *arg1 = var_54_1
        arg1[1] = var_50.d
        arg1[2] = var_50:4.d
        char* const eax_26 = var_48
        void* var_58_2 = &arg1[1]
        arg1[3] = eax_26
        
        if (eax_26 != 0 && *eax_26 != 0)
            char* eax_27 = sub_63d4e0(&arg1[3])
            *(eax_27 + 4) += 1
        
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84_5)(void* arg1) = sub_4ab280
        var_8_2.b = 5
        (&arg1[4], &var_44, 0xc, 4, &lookup_table_6e197c[0x24])
        int32_t var_5c_2 = 1
        int32_t var_8_4 = 6
        `eh vector vbase constructor iterator'(&var_44, 0xc, 4, sub_4ab280)
        var_8_4.b = 7
        break
    
    edi += 1
    esi += 0xc
    
    if (edi s>= 3)
        *arg1 = var_54
        arg1[1] = var_50.d
        arg1[2] = var_50:4.d
        char* const eax_14 = var_48
        int32_t* var_58_1 = &arg1[1]
        arg1[3] = eax_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_63d4e0(&arg1[3])
            *(eax_15 + 4) += 1
        
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84_3)(void* arg1) = sub_4ab280
        var_8_2.b = 8
        (&arg1[4], &var_44, 0xc, 4, &lookup_table_6e197c[0x24])
        int32_t var_5c_1 = 1
        int32_t var_8_3 = 9
        `eh vector vbase constructor iterator'(&var_44, 0xc, 4, sub_4ab280)
        var_8_3.b = 0xa
        break

if (data_cf65bc != 0)
    char* const eax_17 = var_48
    
    if (eax_17 != 0 && *eax_17 != 0)
        char* eax_18 = sub_63d4e0(&var_48)
        int32_t temp1_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
