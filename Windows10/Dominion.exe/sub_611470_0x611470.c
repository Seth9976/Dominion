// 函数: sub_611470
// 地址: 0x611470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b1a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_5cda30(data_b80b08)

if (eax_3 == 1 || eax_3 == 4 || eax_3 == 5)
    uint32_t eax_4 = sub_64e7a0(arg1)
    sub_665db0(eax_4, &data_be62c0, eax_4, 0x3f800000, 0xffffffff, 0)

uint32_t eax_13 = data_cc8d5c
char const* const var_58_1
int32_t var_54_1
char const* const var_50_1
char* ecx_3

if (eax_13 != 0)
    if (*(eax_13 + 0x5068) != 0)
        int32_t eax_5 = sub_5da050(0xbdfb60)
        
        if (sub_5cda30(data_b80b08) == 2 || eax_5 == 1 || eax_5 == 2)
            uint32_t eax_7 = sub_64e7a0(arg1)
            sub_665db0(eax_7, &data_be4ea0, eax_7, 0x3f800000, 0xffffffff, 0)
        
        eax_13 = data_b7fcf4
        
        if (eax_13 == 0)
        label_611ce9:
            data_b7fcf4 = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        uint32_t ecx_7 = zx.d(eax_13.w)
        
        if (ecx_7 u>= data_b809e4)
            goto label_611ce9
        
        void* edi_2 = ecx_7 * 0x1c30 + data_b809e0
        void* var_28_1 = edi_2
        
        if (*(edi_2 + 0x1c28) != eax_13 || edi_2 == 0)
            goto label_611ce9
        
        if (data_1a962a0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            sub_75970e(&data_1a962a0)
            
            if (data_1a962a0 == 0xffffffff)
                int32_t var_8_1 = 0
                sub_63d720(&data_1a962a4, &data_801800)
                _atexit(sub_773e40)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_1a962a0)
        
        uint32_t eax_10 = sub_64e7a0(arg1)
        int128_t var_40
        int128_t xmm0_1 = *sub_5d3c80(&var_40, 
            sub_665db0(eax_10, &data_be5050, eax_10, 0x3f800000, 0xffffffff, 0), edi_2, &var_40)
        eax_13 = xmm0_1
        var_40 = xmm0_1
        uint32_t ecx_12 = eax_13 * 5
        
        if (*((ecx_12 << 2) + &data_be2628) == eax_13)
            char* var_1c
            char** var_18
            char** eax_18
            
            if (eax_13 != 0x15)
                char* ecx_22 = (&data_be262c)[ecx_12]
                void* eax_19 = sub_68caf0(eax_13, nullptr, ecx_22, 0)
                char* ecx_23
                
                if (eax_19 != 0)
                    char* eax_20 = *eax_19
                    ecx_23 = &data_801800
                    
                    if (eax_20 != 0)
                        ecx_23 = eax_20
                else
                    ecx_23 = ecx_22
                
                eax_18 = sub_63d8d0(&data_1a962a4, ecx_23)
            else
                uint32_t eax_14 = sub_4c89a0()
                sub_63d720(&var_18, "missing card")
                int32_t var_8_3 = 1
                int32_t ecx_14 = var_40:8.d
                
                if (ecx_14 != 0)
                    void* eax_15
                    int32_t ecx_15
                    eax_15, ecx_15 = sub_571b30(ecx_14, 0x18)
                    int32_t var_50_2 = 0
                    sub_4e3fa0(eax_15, eax_15, &var_1c, eax_14, ecx_15)
                    var_8_3.b = 2
                    sub_63d850(&var_18, &var_1c)
                    var_8_3.b = 3
                    
                    if (data_cf65bc != 0)
                        char* eax_16 = var_1c
                        
                        if (eax_16 != 0 && *eax_16 != 0)
                            char* eax_17 = sub_63d4e0(&var_1c)
                            int32_t temp1_1 = *(eax_17 + 4)
                            *(eax_17 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                                var_1c = &data_801800
                    
                    var_8_3.b = 1
                
                eax_18 = sub_63d850(&data_1a962a4, &var_18)
                int32_t var_8_4 = 4
                
                if (data_cf65bc != 0)
                    eax_18 = var_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        eax_18 = sub_63d4e0(&var_18)
                        int32_t temp0_1 = eax_18[1]
                        eax_18[1] = &eax_18[1][0xffffffff]
                        
                        if (temp0_1 == 1)
                            eax_18 = sub_64c080(eax_18, &eax_18[3][0x10])
                            var_18 = &data_801800
                
                int32_t var_8_5 = 0xffffffff
            
            int32_t var_50_6 = 0xffffffff
            sub_666380(eax_18, &data_be62d8, arg1, &data_1a962a4)
            int32_t* eax_21 = sub_4b9480()
            
            if (data_cb4508 s>= eax_21[0x46a])
                data_cb4508 = 0xffffffff
            
            int32_t ecx_26 = var_40:4.d
            
            if (ecx_26 != 0xffffffff)
                int32_t eax_22
                
                if (var_40:0xc.b == 0)
                    eax_22 = data_b604e0
                    
                    if (eax_22 == 0xffffffff)
                        eax_22 = 0
                
                if (var_40:0xc.b != 0 || ecx_26 != eax_22)
                    uint32_t eax_23 = sub_64e7a0(arg1)
                    sub_665db0(eax_23, &data_be62e4, eax_23, 0x3f800000, 0xffffffff, 0)
                    data_cb4508 = var_40:4.d
            
            char** eax_25 = sub_5d4360(edi_2)
            bool cond:0_1 = data_cb4508 == 0xffffffff
            var_18 = eax_25
            int32_t var_30
            
            if (not(cond:0_1))
                int32_t* ecx_30 = sub_4bb9f0(0x1a962a8, arg1, "group_reveal")
                char** eax_27 = var_18
                int32_t* var_24_3 = ecx_30
                
                if (eax_27 == 2 || eax_27 == 3)
                    int32_t* eax_28 = sub_4bb9f0(0x1a962cc, arg1, "group_slidepile")
                    ecx_30 = eax_28
                    var_24_3 = eax_28
                
                edi_2 = var_28_1
                
                if (ecx_30 != 0)
                    sub_5d8950(ecx_30, data_cb4508)
                    int32_t* eax_29 = sub_4b9480()
                    int32_t edx_9 = eax_29[0x46a]
                    void* eax_30 = &eax_29[2]
                    int32_t ecx_31 = 0
                    void* var_2c_1 = eax_30
                    
                    if (edx_9 s<= 0)
                    label_611d1d:
                        sub_63b870(eax_30, &data_801800, "Halt", 
                            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x1305, 
                            "GameGetPlayer_2a")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    while (*(eax_30 + 0x5c) != data_cb4508)
                        ecx_31 += 1
                        eax_30 += 0x22c
                        
                        if (ecx_31 s>= edx_9)
                            goto label_611d1d
                    
                    sub_4b06c0(eax_30 + 0x40, var_2c_1, &var_1c, eax_30 + 0x40, &var_30)
                    int32_t var_8_6 = 5
                    void* eax_32 = sub_624450(var_30)
                    uint32_t eax_33 = sub_64e7a0(var_24_3)
                    sub_665db0(eax_33, eax_32, eax_33, 0x3f800000, 0xffffffff, 0)
                    int32_t var_60_1 = 0xffffffff
                    sub_666380(&var_1c, &data_be62f0, var_24_3, &var_1c)
                    int32_t var_8_7 = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_35 = var_1c
                        
                        if (eax_35 != 0 && *eax_35 != 0)
                            char* eax_36 = sub_63d4e0(&var_1c)
                            int32_t temp2_1 = *(eax_36 + 4)
                            *(eax_36 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                                var_1c = &data_801800
                    
                    int32_t var_8_8 = 0xffffffff
            
            int32_t eax_37 = *(edi_2 + 0x70)
            char var_11_1 = 0
            
            if (eax_37 != 0)
                uint32_t ecx_39 = zx.d(eax_37.w)
                
                if (ecx_39 u< data_b809e4)
                    uint32_t ecx_41 = ecx_39 * 0x1c30 + data_b809e0
                    
                    if (*(ecx_41 + 0x1c28) == eax_37 && ecx_41 != 0)
                        void* eax_40 = sub_571b30(sub_5cbb20(ecx_41), sub_5cf7e0())
                        var_11_1 = 0
                        
                        if (((*(eax_40 + 0x98) & 0x7f000400) | (*(eax_40 + 0x9c) & 0x940)) != 0)
                            var_11_1 = 1
            
            eax_13 = var_18
            int32_t* esi_5
            
            if (eax_13 == 7 || eax_13 == 3)
                esi_5 = arg1
                uint32_t eax_43 = sub_64e7a0(esi_5)
                sub_665db0(eax_43, &data_be6248, eax_43, 0x3f800000, 0xffffffff, 0)
                eax_13 = var_18
            else
                esi_5 = arg1
            
            if (eax_13 == 6)
                uint32_t eax_44 = sub_64e7a0(esi_5)
                sub_665db0(eax_44, &data_be62cc, eax_44, 0x3f800000, 0xffffffff, 0)
            label_6119fe:
                uint32_t eax_45 = sub_64e7a0(esi_5)
                sub_665db0(eax_45, &data_be6290, eax_45, 0x3f800000, 0xffffffff, 0)
                eax_13 = var_18
            else if (eax_13 == 0xb || eax_13 == 5)
                goto label_6119fe
            
            if (eax_13 u> 0xb)
            label_611d34:
                var_50_1 = "PlayerRevealUpdate"
                var_54_1 = 0xbb8d
                ecx_3 = "Halt"
            else
                eax_13 = zx.d(lookup_table_611d7c[eax_13])
                
                switch (eax_13)
                    case 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_13
                    case 1
                        uint32_t eax_56 = sub_64e7a0(esi_5)
                        uint32_t eax_58 = sub_5cdc20(
                            sub_665db0(eax_56, &data_be6254, eax_56, 0x3f800000, 0xffffffff, 0), 
                            *(edi_2 + 0x5c), *(edi_2 + 0x58), *(edi_2 + 0x6c))
                        int32_t edx_18 = *(edi_2 + 0x5c)
                        int32_t ecx_69 = *(edi_2 + 0x58)
                        void* eax_59
                        
                        if (eax_58.b == 0)
                            eax_59 =
                                sub_5d1210(eax_58, edx_18, ecx_69, *(edi_2 + 0x60), *(edi_2 + 0x64))
                        else
                            eax_59 = sub_5d10b0(ecx_69, edx_18)
                        
                        int32_t var_50_11 = 0xffffffff
                        
                        if (eax_59 s< 1)
                            eax_59 = 1
                        
                        void* eax_60 = sub_666120(eax_59, &data_be5020, esi_5, eax_59)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_60
                    case 2
                        void* eax_46 = sub_5cc410(eax_13, *(edi_2 + 0x58), *(edi_2 + 0x5c), 
                            *(edi_2 + 0x60), *(edi_2 + 0x64))
                        int32_t edi_3
                        
                        if (eax_46 == 0)
                            edi_3 = 0
                        else
                            edi_3 = *(eax_46 + 0x88)
                        
                        int32_t eax_47 = edi_3
                        int32_t var_50_9 = 0xffffffff
                        
                        if (edi_3 s< 1)
                            eax_47 = 1
                        
                        sub_666120(eax_47, &data_be5020, esi_5, eax_47)
                        void** edi_4
                        
                        if (var_11_1 == 0)
                            edi_4 = &data_be6260
                            
                            if (edi_3 s> 3)
                                edi_4 = &data_be626c
                        else
                            edi_4 = &data_be626c
                            
                            if (edi_3 s<= 1)
                                edi_4 = &data_be6260
                        
                        uint32_t eax_48 = sub_64e7a0(esi_5)
                        void* eax_49 = sub_665db0(eax_48, edi_4, eax_48, 0x3f800000, 0xffffffff, 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_49
                    case 3
                        uint32_t eax_50 = sub_64e7a0(esi_5)
                        int32_t eax_52 = sub_5d1210(
                            sub_665db0(eax_50, &data_be6278, eax_50, 0x3f800000, 0xffffffff, 0), 
                            0x3ef, *(edi_2 + 0x58), *(edi_2 + 0x60), *(edi_2 + 0x64))
                        int32_t esi_6 = eax_52
                        int32_t edi_5 = sub_5d1210(eax_52, 0x3f0, *(edi_2 + 0x58), *(edi_2 + 0x60), 
                            *(edi_2 + 0x64))
                        int32_t var_68 = 0xffffffff
                        
                        if (esi_6 s< 1)
                            esi_6 = 1
                        
                        void* eax_54 = sub_666120(1, &data_be502c, arg1, esi_6)
                        int32_t var_70 = 0xffffffff
                        
                        if (edi_5 s< 1)
                            edi_5 = 1
                        
                        void* eax_55 = sub_666120(eax_54, &data_be5038, arg1, edi_5)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_55
                    case 4
                        uint32_t eax_61 = sub_64e7a0(esi_5)
                        eax_13 = sub_665db0(eax_61, &data_be6284, eax_61, 0x3f800000, 0xffffffff, 0)
                        
                        if (*(edi_2 + 0x5c) == 0x3ee)
                            int32_t eax_62 = sub_5d1210(eax_13, 0x3ef, *(edi_2 + 0x58), 
                                *(edi_2 + 0x60), *(edi_2 + 0x64))
                            int32_t esi_7 = eax_62
                            int32_t eax_63 = sub_5d1210(eax_62, 0x3ee, *(edi_2 + 0x58), 
                                *(edi_2 + 0x60), *(edi_2 + 0x64))
                            int32_t edi_6 = eax_63
                            var_30 = sub_5d1210(eax_63, 0x3f0, *(var_28_1 + 0x58), 
                                *(var_28_1 + 0x60), *(var_28_1 + 0x64))
                            int32_t var_68_1 = 0xffffffff
                            
                            if (esi_7 s< 1)
                                esi_7 = 1
                            
                            sub_666120(1, &data_be502c, arg1, esi_7)
                            int32_t var_70_1 = 0xffffffff
                            
                            if (edi_6 s< 1)
                                edi_6 = 1
                            
                            sub_666120(1, &data_be5020, arg1, edi_6)
                            int32_t eax_65 = var_30
                            int32_t var_78 = 0xffffffff
                            
                            if (eax_65 s< 1)
                                eax_65 = 1
                            
                            sub_666120(eax_65, &data_be5038, arg1, eax_65)
                            uint32_t eax_66 = sub_64e7a0(arg1)
                            void* eax_67 =
                                sub_665db0(eax_66, &data_be5044, eax_66, 0x3f800000, 0xffffffff, 0)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_67
                        
                        var_50_1 = "PlayerRevealUpdate"
                        var_54_1 = 0xbb80
                        ecx_3 = "gfxPile->pile.where == CW_PLAYER_REVEAL"
                    case 5
                        goto label_611d34
        else
            var_50_1 = "PlayerRevealUpdate"
            var_54_1 = 0xbad7
            ecx_3 = "LABELS[label.type].label == label.type"
    else
        var_50_1 = "GetActiveConfig"
        var_54_1 = 0x33b6
        ecx_3 = "c.activeGame.gameType != GAME_NONE"
    
    var_58_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_50_1 = "GetClient"
    var_54_1 = 0x7b
    var_58_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_3 = "gClient"

sub_63b870(eax_13, &data_801800, ecx_3, var_58_1, var_54_1, var_50_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
