// 函数: sub_6047a0
// 地址: 0x6047a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_stat@U_stat32i64@@@@YAHQBDQAU_stat32i64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
char* var_28 = arg3
int32_t ebx = 0
char* const edi = &data_801800
char* var_20 = nullptr

if (data_1a94e58 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a94e58)
    
    if (data_1a94e58 == 0xffffffff)
        int32_t var_8_1 = 0
        sub_63d720(&data_1a94e5c, &data_801800)
        _atexit(sub_773dc0)
        int32_t var_8_2 = 0xffffffff
        __Init_thread_footer(&data_1a94e58)

int32_t* eax_7 = sub_4b9480()
void* esi_1 = data_cc8d5c
int32_t* var_24 = eax_7

if (esi_1 != 0)
    int32_t* eax_6
    
    if (sub_5cb070() != 0)
        sub_63d850(arg9, &data_1a94e5c)
    label_60485c:
        eax_6.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    eax_7 = *(esi_1 + 0x10)
    int32_t* ecx_45
    
    if (eax_7 != *(esi_1 + 0xc))
        sub_4d47c0(&var_18, "dom_prompt_wait_for_server")
        int32_t var_8_3 = 1
        sub_63d850(&data_1a94e5c, &var_18)
        int32_t var_8_4 = 2
    label_604eca:
        
        if (data_cf65bc == 0)
        label_604efa:
            int32_t var_8_15 = 0xffffffff
        label_6051df:
            sub_63d850(arg9, &data_1a94e5c)
            int32_t* eax_70
            eax_70.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_70
        
        char* eax_51 = var_18
        
        if (eax_51 == 0 || *eax_51 == 0)
            goto label_604efa
        
        ecx_45 = &var_18
    label_604ee2:
        char* eax_52 = sub_63d4e0(ecx_45)
        int32_t temp1_1 = *(eax_52 + 4)
        *(eax_52 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
        
        goto label_604efa
    
    if (data_b604cc != 3)
    label_604900:
        
        if (data_b824dc != 0)
        label_605172:
            sub_4d47c0(&var_24, "dom_prompt_game_over")
            int32_t var_8_19 = 5
            sub_63d850(&data_1a94e5c, &var_24)
            int32_t var_8_20 = 6
            
            if (data_cf65bc != 0)
                eax_6 = var_24
                
                if (eax_6 != 0 && *eax_6 != 0)
                    eax_6 = sub_63d4e0(&var_24)
                    int32_t temp0_1 = eax_6[1]
                    eax_6[1] -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_6, eax_6[3] + 0x10)
            
            int32_t var_8_21 = 0xffffffff
            
            if (data_b809b4 != 2)
                goto label_60485c
            
            goto label_6051df
        
        int32_t* eax_9 = sub_4b9480()
        int32_t edx = 0
        int32_t esi_2 = eax_9[0x46a]
        
        if (esi_2 s> 0)
            void* ecx_6 = &eax_9[0x1a]
            
            do
                int32_t eax_10 = *ecx_6
                
                if (eax_10 == 0x3e9)
                    goto label_605172
                
                if (eax_10 == 0x3ec)
                    goto label_605172
                
                if (eax_10 == 0x3ed)
                    goto label_605172
                
                edx += 1
                ecx_6 += 0x22c
            while (edx s< esi_2)
        
        int32_t edx_1 = data_b80b48
        
        if (edx_1 != var_28)
            int32_t* esi_3 = var_24
            void* eax_11 = sub_4b9680(&esi_3[2], edx_1)
            sub_4b06c0(eax_11, &esi_3[2], &var_18, eax_11, &var_24)
            int32_t var_8_7 = 7
            var_8_7.b = 8
            sub_63d850(&data_1a94e5c, 
                sub_4d48c0(&var_18, "dom_prompt_wait", &var_28, "[player]", &var_18))
            var_8_7.b = 9
            
            if (data_cf65bc != 0)
                char* eax_14 = var_28
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_63d4e0(&var_28)
                    int32_t temp2_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xa
            goto label_604eca
        
        int32_t eax_16 = data_b604e0
        
        if (eax_16 == 0xffffffff)
            eax_16 = 0
        
        char* var_1c
        char* const var_14
        
        if (eax_16 == data_b80b44)
            int32_t eax_44 = data_b80afc
            
            if (eax_44 == 6)
                if (data_b80b08 == 0x1d)
                    void* eax_46 = data_b80b18 * 0x64
                    int32_t var_3c_16 = 0
                    char** eax_47 = sub_4e3fa0(eax_46, *(eax_46 + 0xb82520), &var_18, nullptr, 0)
                    int32_t var_8_13 = 0x1d
                    var_8_13.b = 0x1e
                    sub_63d850(&data_1a94e5c, 
                        sub_4d48c0(eax_47, "dom_prompt_reaction_reveal", &var_24, "[card]", eax_47))
                    var_8_13.b = 0x1f
                    
                    if (data_cf65bc != 0)
                        int32_t* eax_49 = var_24
                        
                        if (eax_49 != 0 && *eax_49 != 0)
                            char* eax_50 = sub_63d4e0(&var_24)
                            int32_t temp3_1 = *(eax_50 + 4)
                            *(eax_50 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                                var_24 = &data_801800
                    
                    int32_t var_8_14 = 0x20
                    goto label_604eca
                
                sub_4d47c0(&var_24, "dom_prompt_ability")
                int32_t var_8_11 = 0x21
                sub_63d850(&data_1a94e5c, &var_24)
                int32_t var_8_12 = 0x22
                
                if (data_cf65bc == 0)
                    goto label_604efa
                
                int32_t* eax_45 = var_24
                
                if (eax_45 == 0 || *eax_45 == 0)
                    goto label_604efa
                
                ecx_45 = &var_24
                goto label_604ee2
            
            if (eax_44 == 0)
                char* eax_53 = data_1a94e5c
                
                if (eax_53 != 0 && eax_53 != &data_801800)
                    if (data_cf65bc != 0 && *eax_53 != 0)
                        char* eax_54 = sub_63d4e0(&data_1a94e5c)
                        int32_t temp4_1 = *(eax_54 + 4)
                        *(eax_54 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                    
                    data_1a94e5c = &data_801800
                
                goto label_6051df
            
            sub_603f10(&var_14, &data_b80af8)
            int32_t* var_3c_18 = &data_b80b4c
            int32_t var_8_16 = 0x23
            char** eax_55
            int32_t edx_33
            eax_55, edx_33 = sub_6039d0(&var_1c)
            int32_t var_40_5 = arg8
            var_8_16.b = 0x24
            sub_603430(eax_55, edx_33, &var_20, data_b80afc, var_18, arg4, arg5, arg6, arg7)
            var_8_16.b = 0x25
            sub_63d850(&data_1a94e5c, &var_20)
            char* eax_56 = var_1c
            
            if (eax_56 != 0 && *eax_56 != 0)
                int32_t* var_3c_20 = &data_1a94e5c
                var_8_16.b = 0x26
                sub_63d850(&data_1a94e5c, 
                    sub_4d4980(&var_1c, "dom_prompt_card_prefix", &var_28, "[prefix]", &var_1c, 
                        "[prompt]"))
                var_8_16.b = 0x27
                
                if (data_cf65bc != 0)
                    char* eax_59 = var_28
                    
                    if (eax_59 != 0 && *eax_59 != 0)
                        char* eax_60 = sub_63d4e0(&var_28)
                        int32_t temp7_1 = *(eax_60 + 4)
                        *(eax_60 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_60, *(eax_60 + 0xc) + 0x10)
                
                var_8_16.b = 0x25
            
            char* const ecx_58 = var_14
            
            if (ecx_58 != 0 && *ecx_58 != 0)
                char* eax_61 = data_1a94e5c
                
                if (eax_61 != 0)
                    edi = eax_61
                
                var_8_16.b = 0x28
                sub_63d850(&data_1a94e5c, sub_63dfa0(eax_61, ecx_58, &var_28, "[prompt]", edi))
                var_8_16.b = 0x29
                
                if (data_cf65bc != 0)
                    char* eax_63 = var_28
                    
                    if (eax_63 != 0 && *eax_63 != 0)
                        char* eax_64 = sub_63d4e0(&var_28)
                        int32_t temp14_1 = *(eax_64 + 4)
                        *(eax_64 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
                            var_28 = &data_801800
            
            var_8_16.b = 0x2a
            
            if (data_cf65bc != 0)
                char* eax_65 = var_20
                
                if (eax_65 != 0 && *eax_65 != 0)
                    char* eax_66 = sub_63d4e0(&var_20)
                    int32_t temp6_1 = *(eax_66 + 4)
                    *(eax_66 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                        var_20 = &data_801800
            
            var_8_16.b = 0x2b
            
            if (data_cf65bc != 0)
                char* eax_67 = var_1c
                
                if (eax_67 != 0 && *eax_67 != 0)
                    char* eax_68 = sub_63d4e0(&var_1c)
                    int32_t temp11_1 = *(eax_68 + 4)
                    *(eax_68 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                        var_1c = &data_801800
            
            int32_t var_8_17 = 0x2c
            
            if (data_cf65bc == 0)
                goto label_604efa
            
            char* const ecx_66 = var_14
            
            if (ecx_66 == 0 || *ecx_66 == 0)
                goto label_604efa
            
            char* eax_69 = sub_63d4e0(&var_14)
            int32_t temp13_1 = *(eax_69 + 4)
            *(eax_69 + 4) -= 1
            
            if (temp13_1 != 1)
                goto label_604efa
            
            sub_64c080(eax_69, *(eax_69 + 0xc) + 0x10)
            var_14 = &data_801800
            int32_t var_8_18 = 0xffffffff
            goto label_6051df
        
        sub_603f10(&var_18, &data_b80af8)
        char* const esi_4 = &data_801800
        int32_t var_8_9 = 0xb
        var_14 = &data_801800
        var_8_9.b = 0xc
        void* eax_17 = data_cc8d5c
        char const* const var_44_2
        int32_t var_40_2
        char const* const var_3c_5
        char* ecx_13
        
        if (eax_17 == 0)
            var_3c_5 = "GetClient"
            var_40_2 = 0x7b
            var_44_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_13 = "gClient"
        label_605238:
            sub_63b870(eax_17, &data_801800, ecx_13, var_44_2, var_40_2, var_3c_5)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* ecx_14 = data_b80b44
        var_28 = ecx_14
        char* eax_27
        char** ecx_29
        
        if (ecx_14 == *(eax_17 + 0x7590))
            if (data_b604cc == 3)
                var_3c_5 = "GetPromptText"
                var_40_2 = 0x9983
                var_44_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_13 = "Halt"
                goto label_605238
            
            sub_4d47c0(&var_1c, "dom_prompt_possession_continue_self")
            ebx = 0x40
            var_20 = 0x40
            var_8_9.b = 0xd
            sub_63d850(&var_14, &var_1c)
            var_8_9.b = 0xe
        label_604cf9:
            
            if (data_cf65bc != 0)
                char* eax_39 = var_1c
                
                if (eax_39 != 0 && *eax_39 != 0)
                    char* eax_40 = sub_63d4e0(&var_1c)
                    int32_t temp10_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
            
            var_8_9.b = 0xc
            eax_27 = var_18
        label_604d29:
            esi_4 = var_14
        label_604d2c:
            
            if (eax_27 == 0 || *eax_27 == 0)
                goto label_604ba9
            
            if (esi_4 != 0)
                edi = esi_4
            
            var_8_9.b = 0x17
            sub_63d850(&data_1a94e5c, sub_63dfa0(eax_27, eax_27, &var_28, "[prompt]", edi))
            var_8_9.b = 0x18
            
            if (data_cf65bc == 0)
                goto label_604c1a
            
            char* eax_42 = var_28
            
            if (eax_42 == 0 || *eax_42 == 0)
                goto label_604c1a
            
            ecx_29 = &var_28
            goto label_604c02
        
        int32_t eax_18 = data_b604cc
        
        if (eax_18 != 1)
            if (eax_18 != 2)
                eax_27 = var_18
                
                if (eax_27 == 0)
                    goto label_604ba9
                
                if (eax_27 == &data_801800)
                    goto label_604d2c
                
                if (data_cf65bc != 0 && *eax_27 != 0)
                    char* eax_43 = sub_63d4e0(&var_18)
                    int32_t temp12_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                
                eax_27 = &data_801800
                var_18 = &data_801800
                goto label_604ba9
            
            int32_t* eax_33 = sub_4b9480()
            void* eax_34 = sub_4b9680(&eax_33[2], var_28)
            sub_4b06c0(eax_34, &eax_33[2], &var_1c, eax_34, &var_28)
            ebx = 0x80
            var_20 = 0x80
            var_8_9.b = 0x13
            var_8_9.b = 0x14
            sub_63d850(&var_14, 
                sub_4d48c0(&var_1c, "dom_prompt_possession_continue", &var_24, "[player]", &var_1c))
            var_8_9.b = 0x15
            
            if (data_cf65bc != 0)
                int32_t* eax_37 = var_24
                
                if (eax_37 != 0 && *eax_37 != 0)
                    char* eax_38 = sub_63d4e0(&var_24)
                    int32_t temp8_1 = *(eax_38 + 4)
                    *(eax_38 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                        var_24 = &data_801800
            
            var_8_9.b = 0x16
            goto label_604cf9
        
        int32_t* eax_19 = sub_4b9480()
        void* eax_20 = sub_4b9680(&eax_19[2], var_28)
        sub_4b06c0(eax_20, &eax_19[2], &var_24, eax_20, &var_28)
        ebx = 0x10
        var_20 = 0x10
        var_8_9.b = 0xf
        var_8_9.b = 0x10
        sub_63d850(&var_14, 
            sub_4d48c0(&var_24, "dom_prompt_possession_start", &var_1c, "[player]", &var_24))
        var_8_9.b = 0x11
        
        if (data_cf65bc != 0)
            char* eax_23 = var_1c
            
            if (eax_23 != 0 && *eax_23 != 0)
                char* eax_24 = sub_63d4e0(&var_1c)
                int32_t temp5_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_9.b = 0x12
        
        if (data_cf65bc != 0)
            int32_t* eax_25 = var_24
            
            if (eax_25 != 0 && *eax_25 != 0)
                char* eax_26 = sub_63d4e0(&var_24)
                int32_t temp9_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
        
        var_8_9.b = 0xc
        eax_27 = var_18
        
        if (eax_27 != 0)
            if (eax_27 == &data_801800)
                goto label_604d29
            
            if (data_cf65bc != 0 && *eax_27 != 0)
                char* eax_28 = sub_63d4e0(&var_18)
                int32_t temp15_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp15_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
            
            esi_4 = var_14
            eax_27 = &data_801800
            var_18 = &data_801800
            goto label_604ba9
        
        esi_4 = var_14
    label_604ba9:
        var_8_9.b = 0x19
        var_1c = eax_27
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_29 = sub_63d4e0(&var_1c)
            *(eax_29 + 4) += 1
        
        var_20 = ebx | 8
        
        if (esi_4 != 0)
            edi = esi_4
        
        sub_63d960(&var_1c, edi)
        sub_63d850(&data_1a94e5c, &var_1c)
        var_8_9.b = 0x1a
        
        if (data_cf65bc == 0)
        label_604c1a:
            var_8_9.b = 0x1b
            
            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                char* eax_32 = sub_63d4e0(&var_14)
                int32_t temp16_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp16_1 == 1)
                    sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0x1c
            goto label_604eca
        
        char* eax_30 = var_1c
        
        if (eax_30 == 0 || *eax_30 == 0)
            goto label_604c1a
        
        ecx_29 = &var_1c
    label_604c02:
        char* eax_31 = sub_63d4e0(ecx_29)
        int32_t temp17_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        
        goto label_604c1a
    
    void* ecx_4 = data_cc8d5c
    
    if (ecx_4 != 0)
        int32_t eax_8 = data_b604e0
        
        if (eax_8 == 0xffffffff)
            eax_8 = 0
        
        if (*(ecx_4 + 0x7590) == eax_8)
            goto label_604900
        
        sub_4d47c0(&var_18, "dom_prompt_possession_complete")
        int32_t var_8_5 = 3
        sub_63d850(&data_1a94e5c, &var_18)
        int32_t var_8_6 = 4
        goto label_604eca

sub_63b870(eax_7, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
