// 函数: sub_6039d0
// 地址: 0x6039d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_stat@U_stat32@@@@YAHQBDQAU_stat32@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg1
char* arg_4
int32_t* esi = arg_4
int32_t eax_3 = *esi

if (eax_3 u> 4)
    sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x96d1, 
        "GetCardPrefix")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* eax_11
char** ecx_13

switch (eax_3)
    case 0
        sub_63d720(arg1, &data_801800)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 1
        void* eax_36
        int32_t ecx_38
        eax_36, ecx_38 = sub_571910(*((esi[1] << 5) + 0xb95da0))
        int32_t var_3c_9 = ecx_38
        char* var_20
        sub_4e3cc0(&var_20, eax_36)
        int32_t var_8_10 = 0x13
        char* eax_37 = var_20
        *arg1 = eax_37
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_63d4e0(arg1)
            *(eax_38 + 4) += 1
            eax_37 = var_20
        
        int32_t var_8_11 = 0x14
        
        if (data_cf65bc == 0 || eax_37 == 0 || *eax_37 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        ecx_13 = &var_20
    label_603e4c:
        char* eax_39 = sub_63d4e0(ecx_13)
        int32_t temp1_1 = *(eax_39 + 4)
        *(eax_39 + 4) -= 1
        
        if (temp1_1 != 1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 2
        int32_t ecx_14 = esi[1]
        void* eax_13 = sub_5de8b0(ecx_14)
        
        if (eax_13 == 0)
        label_603d99:
            void* eax_34 = esi[1] * 0x64
            int32_t var_3c_8 = 0
            sub_4e3fa0(eax_34, *(eax_34 + 0xb82520), &arg_4, nullptr, ecx_14)
            int32_t var_8_8 = 0x11
            eax_11 = arg_4
            *arg1 = eax_11
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_35 = sub_63d4e0(arg1)
                *(eax_35 + 4) += 1
                eax_11 = arg_4
            
            int32_t var_8_9 = 0x12
            goto label_603abd
        
        int32_t eax_14 = *(eax_13 + 0x100)
        char* const var_18
        
        if (eax_14 s> 1)
            int32_t var_3c_4 = eax_14
            char* const var_14
            sub_63df30(&var_14, "%d")
            int32_t var_8_3 = 2
            int32_t var_48_1 = *(eax_13 + 0xfc)
            sub_63df30(&arg_4, "%d")
            var_8_3.b = 3
            int32_t* var_54_1 = &var_14
            char* var_1c
            int32_t ecx_16 = sub_4d4980(&arg_4, "dom_prompt_play_again_suffix", &var_1c, 0x801c54, 
                &arg_4, 0x804a04)
            var_8_3.b = 6
            
            if (data_cf65bc != 0)
                char* eax_16 = arg_4
                
                if (eax_16 != 0 && *eax_16 != 0)
                    char* eax_17 = sub_63d4e0(&arg_4)
                    int32_t temp0_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    ecx_16 = *(eax_17 + 4)
                    
                    if (temp0_1 == 1)
                        ecx_16 = sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                        arg_4 = &data_801800
            
            var_8_3.b = 8
            
            if (data_cf65bc != 0)
                char* eax_18 = var_14
                
                if (eax_18 != 0 && *eax_18 != 0)
                    char* eax_19 = sub_63d4e0(&var_14)
                    int32_t temp2_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    ecx_16 = *(eax_19 + 4)
                    
                    if (temp2_1 == 1)
                        ecx_16 = sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                        var_14 = &data_801800
            
            var_8_3.b = 7
            void* eax_20 = esi[1] * 0x64
            int32_t var_3c_5 = 0
            sub_4e3fa0(eax_20, *(eax_20 + 0xb82520), &var_18, nullptr, ecx_16)
            var_8_3.b = 9
            char** var_48_2 = &var_1c
            sub_4d4980(&var_18, "dom_prompt_card_suffix", arg1, "[card]", &var_18, "[suffix]")
            var_8_3.b = 0xa
            
            if (data_cf65bc != 0)
                char* eax_22 = var_18
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_63d4e0(&var_18)
                    int32_t temp4_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_4 = 0xb
            
            if (data_cf65bc == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1
            
            char* eax_24 = var_1c
            
            if (eax_24 == 0 || *eax_24 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1
            
            ecx_13 = &var_1c
            goto label_603e4c
        
        if (*(eax_13 + 0x108) == 0)
            goto label_603d99
        
        void* eax_25 = esi[1] * 0x64
        int32_t var_3c_6 = 0
        int32_t var_8_5 = 0xc
        char eax_27
        int32_t ecx_26
        eax_27, ecx_26 = sub_5757f0(
            sub_4e3fa0(eax_25, *(eax_25 + 0xb82520), &arg_4, nullptr, ecx_14), 
            (*(eax_13 + 0x108)).w, 0xb80ad8, 0x8000000, 0)
        
        if (eax_27 != 0)
            void* eax_28 = *(eax_13 + 0x108) * 0x64
            int32_t var_3c_7 = 0
            sub_4e3fa0(eax_28, *(eax_28 + 0xb82520), &var_18, nullptr, ecx_26)
            var_8_5.b = 0xd
            char* const* var_48_3 = &var_18
            sub_4d4980(&arg_4, "dom_prompt_card_suffix", arg1, "[card]", &arg_4, "[suffix]")
            var_8_5.b = 0xe
            
            if (data_cf65bc != 0)
                char* const eax_30 = var_18
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&var_18)
                    int32_t temp3_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_6 = 0xf
            
            if (data_cf65bc == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1
            
            char* eax_32 = arg_4
            
            if (eax_32 == 0 || *eax_32 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1
            
            ecx_13 = &arg_4
            goto label_603e4c
        
        eax_11 = arg_4
        *arg1 = eax_11
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_33 = sub_63d4e0(arg1)
            *(eax_33 + 4) += 1
            eax_11 = arg_4
        
        int32_t var_8_7 = 0x10
    case 3
        int32_t ecx_2 = esi[1]
        int32_t eax_7 = ecx_2 u>> 4 & 3
        
        switch (eax_7)
            case 0, 1, 2
                char* eax_9
                int32_t ecx_4
                int32_t edx
                eax_9, ecx_4 = sub_571b30(sub_5915b0(eax_7, edx, 0xb80ad8, ecx_2), data_b81820)
                int32_t var_3c_2 = 0
                sub_4e3fa0(eax_9, eax_9, &arg_4, nullptr, ecx_4)
            case 3
                int32_t* eax_10
                int32_t ecx_10
                eax_10, ecx_10 = sub_571910(*((ecx_2 u>> 0x12 << 5) + 0xb95da0))
                int32_t var_3c_3 = ecx_10
                sub_4e3cc0(&arg_4, eax_10)
        
        int32_t var_8_1 = 0
        eax_11 = arg_4
        *arg1 = eax_11
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(arg1)
            *(eax_12 + 4) += 1
            eax_11 = arg_4
        
        int32_t var_8_2 = 1
    case 4
        void* eax_41
        int32_t ecx_45
        eax_41, ecx_45 = sub_571b30(esi[1], 0x18)
        int32_t var_3c_10 = 0
        sub_4e3fa0(eax_41, eax_41, arg1, nullptr, ecx_45)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1

label_603abd:

if (data_cf65bc == 0 || eax_11 == 0 || *eax_11 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

ecx_13 = &arg_4
goto label_603e4c
