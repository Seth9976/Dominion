// 函数: sub_4d2c70
// 地址: 0x4d2c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76360b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1a0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_4d0900
void* i_4 = data_cc8d5c
void* i_2 = i_4

if (i_4 != 0)
    void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    void* var_164 = eax_4
    int32_t edi_2 = *(eax_4 + 0x42c0)
    
    if (edi_2 == 0)
    label_4d2d7b:
        void* eax_7
        eax_7.b = *(var_164 + 0x42d4)
        eax_7.b = not.b(eax_7.b)
        eax_7.b &= 1
        char var_15d = eax_7.b
        
        if (eax_7.b != 0)
            uint32_t eax_8 = sub_64e7a0(arg1)
            sub_665db0(eax_8, &data_8db9dc, eax_8, 0x3f800000, 0xffffffff, 0)
        
        int32_t eax_9 = 0
        void var_154
        void* ebx_1 = &var_154
        void* const i = &data_77fca8
        int32_t var_158 = 0
        void* const i_3 = &data_77fca8
        
        do
            int32_t edi_3 = *i
            
            if (edi_3 != 0x13)
                int32_t var_184
                
                if (edi_3 == 2)
                label_4d2efb:
                    void* ecx_18 = ebx_1
                    var_158 = eax_9 + 1
                    ebx_1 += 8
                    *ecx_18 = *i
                    *(ecx_18 + 4) = var_184
                else
                    int32_t var_180
                    void* var_178
                    uint32_t eax_10 = sub_4daf40(&var_178, &var_180)
                    int32_t esi_2 = 0
                    
                    if (eax_10 s> 0)
                        while (true)
                            if (sub_4db700(*(var_178 + (esi_2 << 2)), edi_3) != 0)
                                i = i_3
                                var_184 = *(var_180 + (esi_2 << 2))
                                eax_9 = var_158
                                break
                            
                            esi_2 += 1
                            
                            if (esi_2 s>= eax_10)
                                goto label_4d2e16
                        
                        goto label_4d2efb
                    
                label_4d2e16:
                    i = i_3
                eax_9 = var_158
            
            i += 0x1c
            i_3 = i
        while (i s< &data_77fea0)
        
        int32_t var_14c
        
        if (eax_9 == 1)
        label_4d2e4b:
            uint32_t eax_13 = sub_64e7a0(arg1)
            sub_665db0(eax_13, &data_8dba24, eax_13, 0x3f800000, 0xffffffff, 0)
            
            if (var_15d == 0)
                uint32_t eax_14 = sub_64e7a0(arg1)
                sub_665db0(eax_14, &data_8dba18, eax_14, 0x3f800000, 0xffffffff, 0)
        else if (eax_9 == 2 && var_14c == 0x13)
            goto label_4d2e4b
        void* esi_3 = var_164
        char* edx_4 = &data_801800
        char* eax_15 = *esi_3
        
        if (eax_15 != 0)
            edx_4 = eax_15
        
        sub_63d720(&var_164, edx_4)
        int32_t var_8_1 = 0
        void* edi_4 = var_164
        
        if (edi_4 == 0 || *edi_4 == 0)
            uint32_t eax_22 = sub_64e7a0(arg1)
            sub_665db0(eax_22, &data_8db9d0, eax_22, 0x3f800000, 0xffffffff, 0)
        else
            int32_t var_1a4_1 = 0xffffffff
            sub_666380(&var_164, &data_8db9c4, arg1, &var_164)
        
        if (sub_4c5750() != 0)
            uint32_t eax_24 = sub_64e7a0(arg1)
            sub_665db0(eax_24, &data_8dc9b0, eax_24, 0x3f800000, 0xffffffff, 0)
        
        void* eax_25 = sub_624450(*(esi_3 + 8))
        uint32_t eax_26 = sub_64e7a0(arg1)
        sub_665db0(eax_26, eax_25, eax_26, 0x3f800000, 0xffffffff, 0)
        int32_t eax_27 = sub_4bfcf0()
        
        if (eax_27 u> 3)
            sub_63b870(eax_27, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x2d50, "TitleUpdate")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void** esi_5
        
        switch (eax_27)
            case 0
                esi_5 = &data_8db970
            case 1
                esi_5 = &data_8db964
            case 2
                uint32_t eax_28 = sub_64e7a0(arg1)
                sub_665db0(eax_28, &data_8db964, eax_28, 0x3f800000, 0xffffffff, 0)
                uint32_t eax_29 = sub_64e7a0(arg1)
                sub_665db0(eax_29, &data_8db940, eax_29, 0x3f800000, 0xffffffff, 0)
                esi_5 = &data_8db94c
            case 3
                uint32_t eax_30 = sub_64e7a0(arg1)
                sub_665db0(eax_30, &data_8db964, eax_30, 0x3f800000, 0xffffffff, 0)
                uint32_t eax_31 = sub_64e7a0(arg1)
                sub_665db0(eax_31, &data_8db940, eax_31, 0x3f800000, 0xffffffff, 0)
                esi_5 = &data_8db958
        
        uint32_t eax_32 = sub_64e7a0(arg1)
        sub_665db0(eax_32, esi_5, eax_32, 0x3f800000, 0xffffffff, 0)
        char* i_1 = i_2
        
        if (*(i_1 + 0x7694) != 0)
            uint32_t eax_33 = sub_64e7a0(arg1)
            i_1 = sub_665db0(eax_33, &data_8dba48, eax_33, 0x3f800000, 0xffffffff, 0)
        
        i_3 = &data_801800
        var_8_1.b = 1
        void* esi_6 = data_cc8d5c
        data_19e3988 = 0
        char const* const var_1ac
        int32_t var_1a8_2
        char const* const var_1a4_5
        char* ecx_38
        
        if (esi_6 != 0)
            sub_63d850(&i_3, esi_6 + 0x20)
            i_1 = *(esi_6 + 0x18)
            
            if (i_1 u> 3)
                var_1a4_5 = "ServerStatusMsg"
                var_1a8_2 = 0x2b69
            label_4d3798:
                var_1ac = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                ecx_38 = "Halt"
            else
                void** eax_36
                
                if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b4) != 1)
                    if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b4) != 2)
                        switch (*(esi_6 + 0x1c) - 1)
                            case 0, 3
                                eax_36 = &data_8dc858
                            case 1
                                eax_36 = &data_8dc864
                            case 2
                                eax_36 = &data_8dc870
                            case 4
                                eax_36 = &data_8dc888
                            case 6
                                eax_36 = &data_8dc87c
                            case 7
                                eax_36 = &data_8dc894
                            default
                                eax_36 = nullptr
                    else
                        eax_36 = &data_8dc84c
                else
                    eax_36 = &data_8dc840
                
                data_19e3988 = eax_36
                int32_t var_1a4_3 = 0xffffffff
                sub_666380(&i_3, &data_8db9a0, arg1, &i_3)
                void* const i_5 = i_3
                void* const i_6 = &data_801800
                char* const ecx_45 = &data_801800
                
                if (i_5 != 0)
                    i_6 = i_5
                
                int32_t eax_42
                
                while (true)
                    char edx_7 = *i_6
                    char temp0_1 = *ecx_45
                    bool c_1 = edx_7 u< temp0_1
                    
                    if (edx_7 == temp0_1)
                        if (edx_7 == 0)
                            eax_42 = 0
                            break
                        
                        edx_7 = *(i_6 + 1)
                        char temp1_1 = ecx_45[1]
                        c_1 = edx_7 u< temp1_1
                        
                        if (edx_7 == temp1_1)
                            i_6 += 2
                            ecx_45 = &ecx_45[2]
                            
                            if (edx_7 != 0)
                                continue
                            
                            eax_42 = 0
                            break
                    
                    eax_42 = sbb.d(i_6, i_6, c_1) | 1
                    break
                
                if (eax_42 != 0)
                    uint32_t eax_43 = sub_64e7a0(arg1)
                    sub_665db0(eax_43, &data_8db9ac, eax_43, 0x3f800000, 0xffffffff, 0)
                
                if (eax_36 != 0)
                    uint32_t eax_44 = sub_64e7a0(arg1)
                    sub_665db0(eax_44, eax_36, eax_44, 0x3f800000, 0xffffffff, 0)
                
                for (i_1 = &data_77f084; i_1 != &data_77f098; i_1 = &i_1[0x14])
                    if (i_1[0x10] != 0)
                        int32_t ecx_50 = *(i_1 + 4)
                        int32_t var_158_2
                        
                        if (ecx_50 != 1)
                            if (ecx_50 != 0)
                                var_1a4_5 = "ShouldShowNewProductBanner"
                                var_1a8_2 = 0xcd4
                                goto label_4d3798
                            
                            var_158_2 = *(i_1 + 0xc)
                            void* eax_47 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                            int32_t* eax_49 =
                                *(*(eax_47 + 0x7200) + ((*(eax_47 + 0x7204) & 0xfffffdff) << 2))
                            
                            if (eax_49 != 0)
                                while (*eax_49 != 0xffffd8f1)
                                    eax_49 = eax_49[2]
                                    
                                    if (eax_49 == 0)
                                        goto label_4d32ab
                                
                                if (eax_49 != 0xfffffffc)
                                    goto label_4d3308
                        else
                            var_158_2 = *(i_1 + 0xc)
                            
                            if (sub_4be9d0(*(i_1 + 8)) == 0)
                                goto label_4d3308
                        
                    label_4d32ab:
                        uint32_t eax_51 = sub_64e7a0(arg1)
                        sub_665db0(eax_51, &data_8dba0c, eax_51, 0x3f800000, 0xffffffff, 0)
                        
                        if (var_158_2 != 0)
                            uint32_t eax_52 = sub_64e7a0(arg1)
                            sub_665db0(eax_52, var_158_2, eax_52, 0x3f800000, 0xffffffff, 0)
                        
                        goto label_4d3308
                
            label_4d3308:
                char* eax_54 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x350c)
                
                if (eax_54 != 0 && *eax_54 != 0)
                    uint32_t eax_55 = sub_64e7a0(arg1)
                    sub_665db0(eax_55, &data_8dc9bc, eax_55, 0x3f800000, 0xffffffff, 0)
                
                i_1 = data_cc8d5c
                
                if (i_1 == 0)
                    goto label_4d30b5
                
                int32_t eax_56 = *(i_1 + 0x75d8)
                int64_t var_174 = *(i_1 + 0x75d0)
                int32_t var_16c_1 = eax_56
                
                if (var_174.d != 0)
                    i_1 = sub_4ba1d0(&var_174)
                    
                    if (i_1 == 0 || i_1 == 1)
                        void var_190
                        int64_t* eax_58 = sub_60a040(&var_190)
                        int32_t eax_59 = eax_58[1].d
                        var_174 = *eax_58
                        int32_t var_16c_2 = eax_59
                        
                        if (sub_60b750(&var_174) == 2)
                            uint32_t eax_61 = sub_64e7a0(arg1)
                            sub_665db0(eax_61, &data_8dc9c8, eax_61, 0x3f800000, 0xffffffff, 0)
                    
                    if (i_1 u> 0x11)
                    label_4d3776:
                        var_1a4_5 = "TitleUpdate"
                        var_1a8_2 = 0x2dbb
                        goto label_4d3798
                    
                    i_1 = zx.d(*(i_1 + &lookup_table_4d382c))
                    uint32_t eax_72
                    void** edx_10
                    
                    switch (i_1)
                        case nullptr
                            goto label_4d3648
                        case 1
                            uint32_t eax_62 = sub_64e7a0(arg1)
                            sub_665db0(eax_62, &data_8dc98c, eax_62, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 2
                            uint32_t eax_63 = sub_64e7a0(arg1)
                            sub_665db0(eax_63, &data_8dc974, eax_63, 0x3f800000, 0xffffffff, 0)
                            uint32_t eax_64 = sub_64e7a0(arg1)
                            sub_665db0(eax_64, &data_8dc950, eax_64, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 3
                            uint32_t eax_65 = sub_64e7a0(arg1)
                            sub_665db0(eax_65, &data_8dc974, eax_65, 0x3f800000, 0xffffffff, 0)
                            uint32_t eax_66 = sub_64e7a0(arg1)
                            sub_665db0(eax_66, &data_8dc944, eax_66, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 4
                            uint32_t eax_67 = sub_64e7a0(arg1)
                            sub_665db0(eax_67, &data_8dc974, eax_67, 0x3f800000, 0xffffffff, 0)
                            uint32_t eax_68 = sub_64e7a0(arg1)
                            sub_665db0(eax_68, &data_8dc938, eax_68, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 5
                            uint32_t eax_69 = sub_64e7a0(arg1)
                            sub_665db0(eax_69, &data_8dc974, eax_69, 0x3f800000, 0xffffffff, 0)
                            uint32_t eax_70 = sub_64e7a0(arg1)
                            sub_665db0(eax_70, &data_8dc92c, eax_70, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 6
                            uint32_t eax_71 = sub_64e7a0(arg1)
                            sub_665db0(eax_71, &data_8dc974, eax_71, 0x3f800000, 0xffffffff, 0)
                            eax_72 = sub_64e7a0(arg1)
                            edx_10 = &data_8dc950
                        label_4d3621:
                            sub_665db0(eax_72, edx_10, eax_72, 0x3f800000, 0xffffffff, 0)
                            uint32_t eax_76 = sub_64e7a0(arg1)
                            sub_665db0(eax_76, &data_8dc980, eax_76, 0x3f800000, 0xffffffff, 0)
                            goto label_4d3648
                        case 7
                            uint32_t eax_73 = sub_64e7a0(arg1)
                            sub_665db0(eax_73, &data_8dc974, eax_73, 0x3f800000, 0xffffffff, 0)
                            eax_72 = sub_64e7a0(arg1)
                            edx_10 = &data_8dc944
                            goto label_4d3621
                        case 8
                            uint32_t eax_74 = sub_64e7a0(arg1)
                            sub_665db0(eax_74, &data_8dc974, eax_74, 0x3f800000, 0xffffffff, 0)
                            eax_72 = sub_64e7a0(arg1)
                            edx_10 = &data_8dc938
                            goto label_4d3621
                        case 9
                            uint32_t eax_75 = sub_64e7a0(arg1)
                            sub_665db0(eax_75, &data_8dc974, eax_75, 0x3f800000, 0xffffffff, 0)
                            eax_72 = sub_64e7a0(arg1)
                            edx_10 = &data_8dc92c
                            goto label_4d3621
                        case 0xa
                            goto label_4d3776
                else
                    uint32_t eax_57 = sub_64e7a0(arg1)
                    sub_665db0(eax_57, &data_8dc95c, eax_57, 0x3f800000, 0xffffffff, 0)
                label_4d3648:
                    i_1 = data_cc8dc0
                    
                    if (i_1 != 0)
                        if (i_1[0x18] == 0)
                            uint32_t eax_77 = sub_64e7a0(arg1)
                            i_1 =
                                sub_665db0(eax_77, &data_8dc9a4, eax_77, 0x3f800000, 0xffffffff, 0)
                        
                        var_8_1.b = 2
                        
                        if (data_cf65bc != 0 && i_5 != 0 && *i_5 != 0)
                            i_1 = sub_63d4e0(&i_3)
                            int32_t temp3_1 = *(i_1 + 4)
                            *(i_1 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                i_1 = sub_64c080(i_1, *(i_1 + 0xc) + 0x10)
                        
                        int32_t var_8_2 = 3
                        
                        if (data_cf65bc != 0 && edi_4 != 0 && *edi_4 != 0)
                            i_1 = sub_63d4e0(&var_164)
                            int32_t temp4_1 = *(i_1 + 4)
                            *(i_1 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                i_1 = sub_64c080(i_1, *(i_1 + 0xc) + 0x10)
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        CookieCheckFunction(i_1)
                        return i_1
                    
                    var_1a4_5 = "GetLocalSettings"
                    var_1a8_2 = 0x5fb
                    var_1ac = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_38 = "gGameSettings.localSettings"
        else
        label_4d30b5:
            var_1a4_5 = "GetClient"
            var_1a8_2 = 0x7b
            var_1ac = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_38 = "gClient"
        
        sub_63b870(i_1, &data_801800, ecx_38, var_1ac, var_1a8_2, var_1a4_5)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t eax_5 = sub_64e7a0(arg1)
    i_4 = sub_665db0(eax_5, &data_8db9e8, eax_5, 0x3f800000, 0xffffffff, 0)
    void* esi_1 = data_cc8d5c
    
    if (esi_1 != 0)
        if (*(esi_1 + 0x63c0) != 1 || *(esi_1 + 0x63c4) != edi_2)
            *(esi_1 + 0x63c0) = 1
            *(esi_1 + 0x63c4) = edi_2
            sub_4da700()
        
        if (*(esi_1 + 0x63f0) s< 0x17)
            uint32_t eax_6 = sub_64e7a0(arg1)
            sub_665db0(eax_6, &data_8dba00, eax_6, 0x3f800000, 0xffffffff, 0)
        
        goto label_4d2d7b

sub_63b870(i_4, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
