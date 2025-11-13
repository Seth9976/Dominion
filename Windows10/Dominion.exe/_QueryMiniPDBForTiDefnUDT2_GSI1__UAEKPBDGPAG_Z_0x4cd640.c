// 函数: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 地址: 0x4cd640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?FindSegment@ScheduleGroupBase@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVlocation@3@PAVSchedulingRing@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_64e7a0(arg1)
*(result + 0x18bc) = sub_4c8b40
void* ecx_1 = data_cc8dc0
char const* const var_4c_1
int32_t var_48_2
char const* const var_44_2
char* ecx_12

if (ecx_1 == 0)
label_4ce0ad:
    var_44_2 = "GetLocalSettings"
    var_48_2 = 0x5fb
    ecx_12 = "gGameSettings.localSettings"
    var_4c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
else
    result = 0x77f06c
    char* const edx_1
    
    do
        if (*result == *(ecx_1 + 0xc))
            edx_1 = *(result + 4)
            
            if (edx_1 != 0)
                goto label_4cd6ab
            
            var_44_2 = "XString::XString"
            var_48_2 = 0x94
            var_4c_1 = "C:\x\ax2017\Engine\xString.cpp"
            ecx_12 = &data_871e0c
            goto label_4ce0c6
        
        result += 8
    while (*(result + 4) != 0)
    
    edx_1 = &data_801800
label_4cd6ab:
    char* var_20
    sub_63d720(&var_20, edx_1)
    int32_t var_8_1 = 0
    int32_t var_44_1 = 0xffffffff
    sub_666380(&var_20, &data_8dc560, arg1, &var_20)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_4 = var_20
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&var_20)
            int32_t temp2_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                var_20 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    
    if (*SteamInternal_ContextInit(&data_cb4524, eax_2) != 0
            && (*(**SteamInternal_ContextInit(&data_cb4524) + 0x88))() != 0)
        uint32_t eax_11 = sub_64e7a0(arg1)
        sub_665db0(eax_11, &data_8dc608, eax_11, 0x3f800000, 0xffffffff, 0)
    
    uint32_t eax_12 = sub_64e7a0(arg1)
    sub_665db0(eax_12, &data_8dc6c8, eax_12, 0x3f800000, 0xffffffff, 0)
    int32_t eax_13 = data_cc8db8
    void** esi_1
    
    if (eax_13 == 0)
        esi_1 = &data_8dc68c
    label_4cd7e0:
        uint32_t eax_15 = sub_64e7a0(arg1)
        sub_665db0(eax_15, esi_1, eax_15, 0x3f800000, 0xffffffff, 0)
        result = data_cc8dc0
        
        if (result == 0)
            goto label_4ce0ad
        
        int32_t eax_16 = *(result + 0x28)
        
        if (eax_16 == 0)
            goto label_4cd871
        
        uint32_t eax_19
        void** edx_5
        
        if (eax_16 == 1)
            eax_19 = sub_64e7a0(arg1)
            edx_5 = &data_8dc674
        label_4cd85d:
            sub_665db0(eax_19, edx_5, eax_19, 0x3f800000, 0xffffffff, 0)
        label_4cd871:
            
            if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4240) != 0)
                uint32_t eax_21 = sub_64e7a0(arg1)
                sub_665db0(eax_21, &data_8dc6a4, eax_21, 0x3f800000, 0xffffffff, 0)
            
            if ((*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42bc) & 1) != 0)
                uint32_t eax_23 = sub_64e7a0(arg1)
                sub_665db0(eax_23, &data_8dc6b0, eax_23, 0x3f800000, 0xffffffff, 0)
            
            if ((*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42bc) & 2) != 0)
                uint32_t eax_25 = sub_64e7a0(arg1)
                sub_665db0(eax_25, &data_8dc6bc, eax_25, 0x3f800000, 0xffffffff, 0)
            
            int32_t eax_26 = sub_4dad50()
            void** esi_2
            
            if (eax_26 == 1)
                esi_2 = &data_8dc5a8
            label_4cd94f:
                uint32_t eax_28 = sub_64e7a0(arg1)
                sub_665db0(eax_28, esi_2, eax_28, 0x3f800000, 0xffffffff, 0)
                result = data_cc8dc0
                
                if (result == 0)
                    goto label_4ce0ad
                
                void* const edx_7 = &data_804d28
                
                if (*(result + 0x30) == 0)
                    edx_7 = &data_804d2c
                
                sub_63d720(&var_20, edx_7)
                int32_t var_8_4 = 2
                int32_t var_44_3 = 0xffffffff
                sub_666380(&var_20, &data_8dc584, arg1, &var_20)
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0)
                    char* eax_30 = var_20
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        char* eax_31 = sub_63d4e0(&var_20)
                        int32_t temp8_1 = *(eax_31 + 4)
                        *(eax_31 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                int32_t var_8_6 = 0xffffffff
                result = data_cc8dc0
                
                if (result == 0)
                    goto label_4ce0ad
                
                char const* const edx_10 = "Light"
                
                if (*(result + 0x31) == 0)
                    edx_10 = "Night"
                
                sub_63d720(&var_20, edx_10)
                int32_t var_8_7 = 4
                int32_t var_44_4 = 0xffffffff
                sub_666380(&var_20, &data_8dc590, arg1, &var_20)
                int32_t var_8_8 = 5
                
                if (data_cf65bc != 0)
                    char* eax_33 = var_20
                    
                    if (eax_33 != 0 && *eax_33 != 0)
                        char* eax_34 = sub_63d4e0(&var_20)
                        int32_t temp9_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                int32_t var_8_9 = 0xffffffff
                result = data_cc8d5c
                
                if (result != 0)
                    if (*(result + 0x5068) == 2)
                        uint32_t eax_35 = sub_64e7a0(arg1)
                        sub_665db0(eax_35, &data_8db838, eax_35, 0x3f800000, 0xffffffff, 0)
                    
                    sub_63d720(&var_20, "*missing*")
                    int32_t var_8_10 = 6
                    void* eax_36 = data_147abfc
                    
                    if (eax_36 != 0)
                        int32_t edi_2 = *(eax_36 + 0x204)
                        int32_t esi_3 = 0
                        int32_t eax_37 = *(eax_36 + 0x208)
                        int32_t var_28_1 = edi_2
                        int32_t var_2c_1 = 0
                        
                        if (eax_37 s> 0)
                            while (true)
                                void* const eax_38 = &data_7ff598
                                char* var_14
                                char* eax_40
                                char* edx_13
                                
                                while (true)
                                    char* const eax_39
                                    
                                    if (*eax_38 != *(edi_2 + (esi_3 << 3)))
                                        eax_38 += 8
                                        
                                        if (*(eax_38 + 4) != 0)
                                            continue
                                        else
                                            eax_39 = &data_801800
                                        
                                        goto label_4cdb2f
                                    
                                    eax_39 = *(eax_38 + 4)
                                    int32_t var_48_8
                                    char* ecx_74
                                    
                                    if (eax_39 == 0)
                                        char const* const var_44_12 = "LocalizationGetLanaugageCode"
                                        var_48_8 = 0x71
                                        ecx_74 = &data_877d30
                                    else
                                    label_4cdb2f:
                                        
                                        if (*eax_39 != 0)
                                            char* const var_44_5 = eax_39
                                            sub_63df30(&var_14, "dom_ui_options_language_%s")
                                            var_8_10.b = 7
                                            eax_40 = var_14
                                            edx_13 = &data_801800
                                            break
                                        
                                        char const* const var_44_11 = "LocalizationGetLanaugageCode"
                                        var_48_8 = 0x72
                                        ecx_74 = "val[0] != 0"
                                    
                                    sub_63b870(eax_39, &data_801800, ecx_74, 
                                        "C:\x\ax2017\Engine\Localization.cpp", var_48_8, 
                                        "LocalizationGetLanaugageCode")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                if (eax_40 != 0)
                                    edx_13 = eax_40
                                
                                var_8_10.b = 8
                                char* const var_24
                                sub_63d850(&var_14, 
                                    sub_63dfa0(eax_40, edx_13, &var_24, &data_804d6c, _-"))
                                var_8_10.b = 9
                                
                                if (data_cf65bc != 0)
                                    char* eax_42 = var_24
                                    
                                    if (eax_42 != 0 && *eax_42 != 0)
                                        char* eax_43 = sub_63d4e0(&var_24)
                                        int32_t temp11_1 = *(eax_43 + 4)
                                        *(eax_43 + 4) -= 1
                                        
                                        if (temp11_1 == 1)
                                            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                                            var_24 = &data_801800
                                
                                var_8_10.b = 7
                                char* const ecx_48 = &data_801800
                                char* eax_44 = var_14
                                
                                if (eax_44 != 0)
                                    ecx_48 = eax_44
                                
                                void* eax_45 = sub_68caf0(eax_44, &data_801800, ecx_48, 
                                    *(edi_2 + (esi_3 << 3)))
                                char* edi_3
                                
                                if (eax_45 == 0)
                                    edi_3 = var_14
                                else
                                    edi_3 = *eax_45
                                
                                char* var_1c = edi_3
                                
                                if (edi_3 != 0 && *edi_3 != 0)
                                    char* eax_46 = sub_63d4e0(&var_1c)
                                    *(eax_46 + 4) += 1
                                
                                var_8_10.b = 0xa
                                int32_t var_44_8 = esi_3
                                sub_666380(&var_1c, &data_8dc6d4, arg1, &var_1c)
                                int32_t eax_50 = *(var_28_1 + (esi_3 << 3)) - 0x10
                                void** var_18_1
                                
                                if (eax_50 u> 3)
                                    var_18_1 = &data_8dc668
                                else
                                    switch (eax_50)
                                        case 0
                                            var_18_1 = &data_8dc614
                                        case 1
                                            var_18_1 = &data_8dc620
                                        case 2
                                            var_18_1 = &data_8dc638
                                        case 3
                                            var_18_1 = &data_8dc62c
                                
                                uint32_t eax_51 = sub_64e7a0(arg1)
                                sub_665db0(eax_51, var_18_1, eax_51, 0x3f800000, esi_3, 0)
                                
                                if (*(var_28_1 + (esi_3 << 3)) == sub_4c89a0())
                                    sub_63d850(&var_20, &var_1c)
                                
                                var_8_10.b = 0xb
                                
                                if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                                    char* eax_54 = sub_63d4e0(&var_1c)
                                    int32_t temp12_1 = *(eax_54 + 4)
                                    *(eax_54 + 4) -= 1
                                    
                                    if (temp12_1 == 1)
                                        sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                                        var_1c = &data_801800
                                
                                var_8_10.b = 0xc
                                
                                if (data_cf65bc != 0)
                                    char* eax_55 = var_14
                                    
                                    if (eax_55 != 0 && *eax_55 != 0)
                                        char* eax_56 = sub_63d4e0(&var_14)
                                        int32_t temp13_1 = *(eax_56 + 4)
                                        *(eax_56 + 4) -= 1
                                        
                                        if (temp13_1 == 1)
                                            sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
                                            var_14 = &data_801800
                                
                                edi_2 = var_28_1
                                esi_3 = var_2c_1 + 1
                                var_8_10.b = 6
                                var_2c_1 = esi_3
                                
                                if (esi_3 s>= eax_37)
                                    break
                    
                    int32_t var_44_10 = 0xffffffff
                    sub_666380(&var_20, &data_8dc6e0, arg1, &var_20)
                    int32_t var_8_11 = 0xd
                    
                    if (data_cf65bc != 0)
                        char* eax_58 = var_20
                        
                        if (eax_58 != 0 && *eax_58 != 0)
                            char* eax_59 = sub_63d4e0(&var_20)
                            int32_t temp10_1 = *(eax_59 + 4)
                            *(eax_59 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                                var_20 = &data_801800
                    
                    int32_t var_8_12 = 0xffffffff
                    int32_t ecx_61
                    
                    if (data_19e5c80 == "sliderMusic" && data_19e5c7c == arg1
                            && data_19e5c84 == 0xffffffff)
                        ecx_61 = data_19e5c9c
                        
                        if (ecx_61 == 0)
                            goto label_4cddc6
                        
                        uint32_t eax_60 = zx.d(ecx_61.w)
                        
                        if (eax_60 u>= data_c23bac
                                || *(eax_60 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_61)
                            goto label_4cddc6
                        
                        if (ecx_61 == 0)
                            goto label_4cde07
                        
                        goto label_4cddec
                    
                label_4cddc6:
                    ecx_61 = sub_67bd70(arg1, "sliderMusic")
                    data_19e5c9c = ecx_61
                    
                    if (ecx_61 == 0)
                        goto label_4cde07
                    
                    data_19e5c80 = "sliderMusic"
                    data_19e5c7c = arg1
                    data_19e5c84 = 0xffffffff
                label_4cddec:
                    result = data_cc8dc0
                    
                    if (result != 0)
                        sub_4cd0b0(ecx_61, &data_cc8da8, *result)
                    label_4cde07:
                        int32_t ecx_63
                        
                        if (data_19e5ca4 == "sliderEffects" && data_19e5ca0 == arg1
                                && data_19e5ca8 == 0xffffffff)
                            ecx_63 = data_19e5cc0
                            
                            if (ecx_63 == 0)
                                goto label_4cde5f
                            
                            uint32_t eax_64 = zx.d(ecx_63.w)
                            
                            if (eax_64 u>= data_c23bac
                                    || *(eax_64 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_63)
                                goto label_4cde5f
                            
                            if (ecx_63 == 0)
                                goto label_4cdeab
                            
                            goto label_4cde85
                        
                    label_4cde5f:
                        ecx_63 = sub_67bd70(arg1, "sliderEffects")
                        data_19e5cc0 = ecx_63
                        
                        if (ecx_63 == 0)
                            goto label_4cdeab
                        
                        data_19e5ca4 = "sliderEffects"
                        data_19e5ca0 = arg1
                        data_19e5ca8 = 0xffffffff
                    label_4cde85:
                        result = data_cc8dc0
                        
                        if (result != 0)
                            sub_4cd0b0(ecx_63, &data_cc8db0, *(result + 4))
                        label_4cdeab:
                            void** esi_6 = &data_8dc5cc
                            int32_t edi_4
                            
                            if (data_19e5cc8 == "btnWidescreen" && data_19e5cc4 == arg1
                                    && data_19e5ccc == 0xffffffff)
                                edi_4 = data_19e5ce4
                                
                                if (edi_4 == 0)
                                    goto label_4cdf06
                                
                                uint32_t eax_68 = zx.d(edi_4.w)
                                
                                if (eax_68 u>= data_c23bac
                                        || *(eax_68 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_4)
                                    goto label_4cdf06
                                
                                if (edi_4 != 0)
                                    goto label_4cdf35
                                
                                goto label_4cdfc2
                            
                        label_4cdf06:
                            edi_4 = sub_67bd70(arg1, "btnWidescreen")
                            data_19e5ce4 = edi_4
                            
                            if (edi_4 == 0)
                            label_4cdfc2:
                                uint32_t result_1
                                
                                if (data_19e5cec != "btnFullscreen" || data_19e5ce8 != arg1
                                    || data_19e5cf0 != 0xffffffff)
                                label_4cdffa:
                                    result = sub_67bd70(arg1, "btnFullscreen")
                                    result_1 = result
                                    data_19e5d08 = result_1
                                    
                                    if (result_1 == 0)
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return result
                                    
                                    data_19e5cec = "btnFullscreen"
                                    data_19e5ce8 = arg1
                                    data_19e5cf0 = 0xffffffff
                                else
                                    result_1 = data_19e5d08
                                    
                                    if (result_1 == 0)
                                        goto label_4cdffa
                                    
                                    uint32_t eax_75 = zx.d(result_1.w)
                                    
                                    if (eax_75 u>= data_c23bac)
                                        goto label_4cdffa
                                    
                                    result = eax_75 * 0x18d0 + data_c23ba8
                                    
                                    if (*(result + 0x18c8) != result_1)
                                        goto label_4cdffa
                                    
                                    if (result_1 == 0)
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return result
                                
                                if (data_cc8dc0 != 0)
                                    if (*(data_cc8dc0 + 0x18) == 0)
                                        esi_6 = &data_8dc5d8
                                    
                                    uint32_t eax_78 = sub_64e7a0(result_1)
                                    result =
                                        sub_665db0(eax_78, esi_6, eax_78, 0x3f800000, 0xffffffff, 0)
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return result
                            else
                                data_19e5cc8 = "btnWidescreen"
                                data_19e5cc4 = arg1
                                data_19e5ccc = 0xffffffff
                            label_4cdf35:
                                result = data_cc8dc0
                                
                                if (result != 0)
                                    if (*(result + 0x14) == 0)
                                        esi_6 = &data_8dc5d8
                                    
                                    uint32_t eax_72 = sub_64e7a0(edi_4)
                                    result =
                                        sub_665db0(eax_72, esi_6, eax_72, 0x3f800000, 0xffffffff, 0)
                                    
                                    if (data_cc8dc0 != 0)
                                        if (*(data_cc8dc0 + 0x18) != 0)
                                            uint32_t eax_74 = sub_64e7a0(edi_4)
                                            sub_665db0(eax_74, &data_8dc5e4, eax_74, 0x3f800000, 
                                                0xffffffff, 0)
                                        
                                        esi_6 = &data_8dc5cc
                                        goto label_4cdfc2
                    
                    goto label_4ce0ad
                
                var_44_2 = "GetClient"
                var_48_2 = 0x7b
                var_4c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                ecx_12 = "gClient"
            else
                result = eax_26 - 2
                
                if (eax_26 == 2)
                    esi_2 = &data_8dc5c0
                    goto label_4cd94f
                
                var_44_2 = "OptionsUpdate"
                var_48_2 = 0x27cc
                var_4c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                ecx_12 = "Halt"
        else
            result = eax_16 - 2
            
            if (eax_16 == 2)
                eax_19 = sub_64e7a0(arg1)
                edx_5 = &data_8dc680
                goto label_4cd85d
            
            var_44_2 = "OptionsUpdate"
            var_48_2 = 0x27a0
            var_4c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx_12 = "Halt"
    else
        result = eax_13 - 1
        
        if (eax_13 == 1)
            esi_1 = &data_8dc698
            goto label_4cd7e0
        
        var_44_2 = "OptionsUpdate"
        var_48_2 = 0x278f
        var_4c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
        ecx_12 = "Halt"

label_4ce0c6:
sub_63b870(result, &data_801800, ecx_12, var_4c_1, var_48_2, var_44_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
