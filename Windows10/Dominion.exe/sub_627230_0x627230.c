// 函数: sub_627230
// 地址: 0x627230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Initialize@SchedulerPolicy@Concurrency@@AAEXIPAPAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_6257e0
int32_t* eax_4 = data_cc8d5c
char const* const var_60_1
int32_t var_5c_1
char const* const var_58_1
char* ecx_1

if (eax_4 == 0)
label_627275:
    var_58_1 = "GetClient"
    var_5c_1 = 0x7b
    var_60_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
label_627bd5:
    sub_63b870(eax_4, &data_801800, ecx_1, var_60_1, var_5c_1, var_58_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (eax_4[0x141a] == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

void* eax_6 = sub_611d90(sub_4b9480(), 0xb80ad8)
uint32_t eax_7 = sub_64e7a0(arg1)
sub_665db0(eax_7, eax_6, eax_7, 0x3f800000, 0xffffffff, 0)
uint32_t eax_8 = sub_64e7a0(arg1)
sub_665db0(eax_8, &data_bf0e24, eax_8, 0x3f800000, 0xffffffff, 0)
eax_4 = sub_4b9480()
int32_t ecx_7 = data_b81810
int32_t* var_24 = eax_4

if (ecx_7 s< 2)
    var_58_1 = "ScorescreenUpdate"
    var_5c_1 = 0xf13e
    ecx_1 = "gDomClient.domState.g.config.numPlayers >= 2"
else if (ecx_7 s<= 6)
    uint32_t eax_10 = sub_64e7a0(arg1)
    void* eax_11 = sub_665db0(eax_10, &(&data_bf1018)[ecx_7 * 3], eax_10, 0x3f800000, 0xffffffff, 0)
    int32_t esi_3 = eax_4[0x46a]
    int32_t var_60_2 = 0xffffffff
    sub_666120(eax_11, &data_be3244, arg1, esi_3)
    void* ebx_2 = nullptr
    void* var_30
    void* var_2c
    char* var_28
    char* var_20
    char* const var_1c
    char* const var_18
    char* const var_14
    
    if (esi_3 s> 0)
        void* eax_13 = &var_24[2]
        
        while (true)
            void* const esi_4 = data_b604e0
            
            if (esi_4 == 0xffffffff)
                esi_4 = nullptr
            
            void* eax_14 = sub_4b95e0()
            void* ecx_11 = esi_4 + ebx_2
            void* edx_4 = ecx_11 - eax_14
            
            if (ecx_11 s< eax_14)
                edx_4 = ecx_11
            
            var_2c = edx_4
            void* eax_15 = sub_4b9680(eax_13, edx_4)
            var_30 = eax_15
            int32_t var_38
            sub_4b06c0(eax_15, eax_13, &var_20, eax_15, &var_38)
            int32_t var_8_1 = 0
            void* eax_16 = sub_624450(var_38)
            void* esi_5 = ebx_2 * 9
            char* ecx_15
            
            if (*((esi_5 << 2) + &data_1a968a4) == "tbl_players"
                    && *((esi_5 << 2) + &data_1a968a0) == arg1
                    && *((esi_5 << 2) + &data_1a968a8) == ebx_2
                    && *((esi_5 << 2) + &data_1a968ac) == 0)
                ecx_15 = *((esi_5 << 2) + &data_1a968c0)
                var_28 = ecx_15
                
                if (ecx_15 == 0)
                    goto label_627438
                
                uint32_t eax_17 = zx.d(ecx_15.w)
                
                if (eax_17 u>= data_c23bac || *(eax_17 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_15)
                    goto label_627438
                
                goto label_627473
            
        label_627438:
            ecx_15 = sub_67be20(ebx_2)
            var_28 = ecx_15
            *((esi_5 << 2) + &data_1a968c0) = ecx_15
            
            if (ecx_15 != 0)
                *((esi_5 << 2) + &data_1a968a4) = "tbl_players"
                *((esi_5 << 2) + &data_1a968a0) = arg1
                *((esi_5 << 2) + &data_1a968a8) = ebx_2
                *((esi_5 << 2) + &data_1a968ac) = 0
            label_627473:
                uint32_t eax_21 = sub_64e7a0(ecx_15)
                sub_665db0(eax_21, eax_16, eax_21, 0x3f800000, 0xffffffff, 0)
                int32_t* esi_6 = var_28
                sub_5d8950(esi_6, var_2c)
                void* eax_22 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                void* ecx_22
                
                if ((var_24[8].b & 8) != 0)
                    ecx_22 = var_30
                
                if ((var_24[8].b & 8) == 0 || *(ecx_22 + 0x14) != 1
                        || *(ecx_22 + 0x18) != *(eax_22 + 0x4250) || *(eax_22 + 0x7854) == 0)
                    uint32_t eax_27 = sub_64e7a0(esi_6)
                    sub_665db0(eax_27, &data_bf0f98, eax_27, 0x3f800000, 0xffffffff, 0)
                else
                    float xmm1_1 = *(eax_22 + 0x785c)
                    float xmm0_6 =
                        sub_4d5cb0(((*(eax_22 + 0x7858) - (xmm1_1 + xmm1_1)) * 7.5f + 50f) * 100f)
                    float xmm0_7
                    
                    if (0 f<= xmm0_6)
                        xmm0_7 = xmm0_6 + 0.5f
                    else
                        xmm0_7 = xmm0_6 - 0.5f
                    
                    int32_t var_58_4 = int.d(xmm0_7)
                    sub_63df30(&var_14, "%d")
                    var_8_1.b = 1
                    int32_t var_64_2 = 0xffffffff
                    sub_666380(&var_14, &data_bf0f8c, esi_6, &var_14)
                    var_8_1.b = 2
                    
                    if (data_cf65bc != 0)
                        char* eax_25 = var_14
                        
                        if (eax_25 != 0 && *eax_25 != 0)
                            char* eax_26 = sub_63d4e0(&var_14)
                            int32_t temp8_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                                var_14 = &data_801800
                    
                    var_8_1.b = 0
            
            void* var_58_5 = ebx_2
            sub_666380(&var_20, &data_be3250, arg1, &var_20)
            void* esi_7 = var_2c
            void* eax_29 = sub_5cc5e0(esi_7)
            int32_t ecx_31 = *(eax_29 + 0x24)
            int32_t* ecx_32 = var_24
            var_2c = *(eax_29 + 0x30)
            char const* const var_60_10
            int32_t var_5c_11
            char const* const var_58_13
            void* eax_34
            char* ecx_92
            uint32_t eax_32
            void** edx_12
            
            if (sub_4c3500(ecx_32, esi_7) == 0)
                void var_44
                eax_34 = sub_5f1ae0(&var_44, esi_7, ecx_32, 0, &var_44, &var_28)
                
                if (eax_34 s>= 1)
                    uint32_t eax_35 = sub_64e7a0(arg1)
                    sub_665db0(eax_35, eax_34 * 0xc + &data_bf0fb4, eax_35, 0x3f800000, ebx_2, 0)
                    
                    if (eax_34 != 1)
                        goto label_627677
                    
                    eax_32 = sub_64e7a0(arg1)
                    edx_12 = &data_bf10b4
                    goto label_62766c
                
                var_58_13 = "ScorescreenUpdate"
                var_5c_11 = 0xf177
                var_60_10 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_92 = "playerRank >= RANK_FIRST"
            else
                eax_32 = sub_64e7a0(arg1)
                edx_12 = &data_bf0f68
            label_62766c:
                sub_665db0(eax_32, edx_12, eax_32, 0x3f800000, ebx_2, 0)
            label_627677:
                
                if (sub_4d6250(var_30) == 0)
                label_6276bc:
                    
                    if (ebx_2 == 0)
                        uint32_t eax_38 = sub_64e7a0(arg1)
                        sub_665db0(eax_38, &data_bf0ddc, eax_38, 0x3f800000, ebx_2, ebx_2.b)
                    
                    int32_t var_58_8 = ecx_31
                    sub_63df30(&var_18, "%d")
                    var_8_1.b = 3
                    void* var_64_3 = ebx_2
                    sub_666380(&var_18, &data_bf0f50, arg1, &var_18)
                    var_8_1.b = 4
                    
                    if (data_cf65bc != 0)
                        char* eax_40 = var_18
                        
                        if (eax_40 != 0 && *eax_40 != 0)
                            char* eax_41 = sub_63d4e0(&var_18)
                            int32_t temp5_1 = *(eax_41 + 4)
                            *(eax_41 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    var_8_1.b = 0
                    void* var_58_9 = var_2c
                    sub_63df30(&var_1c, "%d")
                    var_8_1.b = 5
                    void* var_64_4 = ebx_2
                    sub_666380(&var_1c, &data_bf0f5c, arg1, &var_1c)
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_43 = var_1c
                        
                        if (eax_43 != 0 && *eax_43 != 0)
                            char* eax_44 = sub_63d4e0(&var_1c)
                            int32_t temp6_1 = *(eax_44 + 4)
                            *(eax_44 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                                var_1c = &data_801800
                    
                    int32_t var_8_2 = 7
                    
                    if (data_cf65bc != 0)
                        char* eax_45 = var_20
                        
                        if (eax_45 != 0 && *eax_45 != 0)
                            char* eax_46 = sub_63d4e0(&var_20)
                            int32_t temp7_1 = *(eax_46 + 4)
                            *(eax_46 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                                var_20 = &data_801800
                    
                    ebx_2 += 1
                    int32_t var_8_3 = 0xffffffff
                    
                    if (ebx_2 s>= esi_3)
                        break
                    
                    continue
                else
                    eax_34 = data_cc8d5c
                    
                    if (eax_34 != 0)
                        if (*(eax_34 + 0x5028) s< 0x80)
                            uint32_t eax_37 = sub_64e7a0(arg1)
                            sub_665db0(eax_37, &data_bf0dd0, eax_37, 0x3f800000, ebx_2, 0)
                        
                        goto label_6276bc
                    
                    var_58_13 = "GetClient"
                    var_5c_11 = 0x7b
                    var_60_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                    ecx_92 = "gClient"
            sub_63b870(eax_34, &data_801800, ecx_92, var_60_10, var_5c_11, var_58_13)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    eax_4 = data_cf649c
    
    if (eax_4 u> 4)
        var_58_1 = "ScorescreenUpdate"
        var_5c_1 = 0xf1a2
    else
        uint32_t eax_47
        
        switch (eax_4)
            case 1
                eax_47 = sub_64e7a0(arg1)
                sub_665db0(eax_47, &data_bf0f74, eax_47, 0x3f800000, 0xffffffff, 0)
            case 2
                eax_47 = sub_64e7a0(arg1)
                sub_665db0(eax_47, &data_bf0f80, eax_47, 0x3f800000, 0xffffffff, 0)
            case 3
                eax_47 = sub_64e7a0(arg1)
                sub_665db0(eax_47, &data_bf0fa4, eax_47, 0x3f800000, 0xffffffff, 0)
            case 4
                eax_47 = sub_64e7a0(arg1)
                sub_665db0(eax_47, &data_bf0fb0, eax_47, 0x3f800000, 0xffffffff, 0)
        
        eax_4 = data_cc8d5c
        
        if (eax_4 == 0)
            goto label_627275
        
        if (eax_4[0x141a] != 2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        if (sub_4c5690() s>= 0x32)
            uint32_t eax_49 = sub_64e7a0(arg1)
            sub_665db0(eax_49, &data_bf10c0, eax_49, 0x3f800000, 0xffffffff, 0)
        
        eax_4 = sub_627110(&var_30, &var_2c, var_24, &var_30)
        
        if (eax_4 u<= 3)
            char* const* ecx_77
            
            switch (eax_4)
                case 1
                    uint32_t eax_62 = sub_64e7a0(arg1)
                    sub_665db0(eax_62, &data_bf1078, eax_62, 0x3f800000, 0xffffffff, 0)
                    sub_4d47c0(&var_18, "dom_ui_score_replay_set")
                    int32_t var_8_6 = 0x10
                    void* var_60_8 = var_30
                    void* var_64_7 = var_2c
                    var_8_6.b = 0x11
                    sub_63dde0(&var_18, &var_28, sub_63df30(&var_14, " (%d/%d)"))
                    var_8_6.b = 0x14
                    
                    if (data_cf65bc != 0)
                        char* const eax_64 = var_14
                        
                        if (eax_64 != 0 && *eax_64 != 0)
                            char* eax_65 = sub_63d4e0(&var_14)
                            int32_t temp1_1 = *(eax_65 + 4)
                            *(eax_65 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_65, *(eax_65 + 0xc) + 0x10)
                                var_14 = &data_801800
                    
                    var_8_6.b = 0x16
                    
                    if (data_cf65bc != 0)
                        char* const eax_66 = var_18
                        
                        if (eax_66 != 0 && *eax_66 != 0)
                            char* eax_67 = sub_63d4e0(&var_18)
                            int32_t temp3_1 = *(eax_67 + 4)
                            *(eax_67 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_67, *(eax_67 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    var_8_6.b = 0x15
                    uint32_t eax_68 = sub_64e7a0(arg1)
                    sub_665db0(eax_68, &data_bf109c, eax_68, 0x3f800000, 0xffffffff, 0)
                    int32_t var_60_9 = 0xffffffff
                    eax_4 = sub_666380(&var_28, &data_bf10a8, arg1, &var_28)
                    int32_t var_8_7 = 0x17
                    
                    if (data_cf65bc != 0)
                        eax_4 = var_28
                        
                        if (eax_4 != 0 && *eax_4 != 0)
                            ecx_77 = &var_28
                            goto label_627a49
                case 2
                    uint32_t eax_53 = sub_64e7a0(arg1)
                    sub_665db0(eax_53, &data_bf106c, eax_53, 0x3f800000, 0xffffffff, 0)
                    sub_4d47c0(&var_24, "dom_ui_score_replay_rematch")
                    int32_t var_8_4 = 8
                    void* var_60_6 = var_30
                    void* var_64_5 = var_2c
                    var_8_4.b = 9
                    sub_63dde0(&var_24, &var_1c, sub_63df30(&var_20, " (%d/%d)"))
                    var_8_4.b = 0xc
                    
                    if (data_cf65bc != 0)
                        char* eax_55 = var_20
                        
                        if (eax_55 != 0 && *eax_55 != 0)
                            char* eax_56 = sub_63d4e0(&var_20)
                            int32_t temp0_1 = *(eax_56 + 4)
                            *(eax_56 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
                                var_20 = &data_801800
                    
                    var_8_4.b = 0xe
                    
                    if (data_cf65bc != 0)
                        int32_t* eax_57 = var_24
                        
                        if (eax_57 != 0 && *eax_57 != 0)
                            char* eax_58 = sub_63d4e0(&var_24)
                            int32_t temp2_1 = *(eax_58 + 4)
                            *(eax_58 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
                                var_24 = &data_801800
                    
                    var_8_4.b = 0xd
                    uint32_t eax_59 = sub_64e7a0(arg1)
                    sub_665db0(eax_59, &data_bf1084, eax_59, 0x3f800000, 0xffffffff, 0)
                    int32_t var_60_7 = 0xffffffff
                    eax_4 = sub_666380(&var_1c, &data_bf1090, arg1, &var_1c)
                    int32_t var_8_5 = 0xf
                    
                    if (data_cf65bc != 0)
                        eax_4 = var_1c
                        
                        if (eax_4 != 0 && *eax_4 != 0)
                            ecx_77 = &var_1c
                        label_627a49:
                            eax_4 = sub_63d4e0(ecx_77)
                            int32_t temp4_1 = eax_4[1]
                            eax_4[1] -= 1
                            
                            if (temp4_1 == 1)
                                int32_t* eax_61 = sub_64c080(eax_4, eax_4[3] + 0x10)
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_61
                case 3
                    uint32_t eax_51 = sub_64e7a0(arg1)
                    sub_665db0(eax_51, &data_bf106c, eax_51, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_52 = sub_64e7a0(arg1)
                    eax_4 = sub_665db0(eax_52, &data_bf1078, eax_52, 0x3f800000, 0xffffffff, 0)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        var_58_1 = "ScorescreenUpdate"
        var_5c_1 = 0xf1e5
    
    ecx_1 = "Halt"
else
    var_58_1 = "ScorescreenUpdate"
    var_5c_1 = 0xf13f
    ecx_1 = "gDomClient.domState.g.config.numPlayers <= 6"

var_60_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
goto label_627bd5
