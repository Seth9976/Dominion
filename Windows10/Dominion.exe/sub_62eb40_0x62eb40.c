// 函数: sub_62eb40
// 地址: 0x62eb40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_from_source@V?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@0@AAUfloating_point_string@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_94 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0
int32_t var_88 = 0
char* const var_84 = &data_801800
char* const var_80 = &data_801800
char* const var_7c = &data_801800
char* const var_78 = &data_801800
char* const var_74 = &data_801800
char* const var_70 = &data_801800
char* const var_6c = &data_801800
char* const var_68 = &data_801800
char* const var_64 = &data_801800
char* const var_60 = &data_801800
char* const var_5c = &data_801800
char* const var_58 = &data_801800
char* const var_54 = &data_801800
char* const var_50 = &data_801800
char* const var_4c = &data_801800
char* const var_48 = &data_801800
char* const var_44 = &data_801800
char* const var_40 = &data_801800
char* const var_3c = &data_801800
char* const var_38 = &data_801800
int32_t var_14_1 = 1
int32_t esi = 0
char* eax_3 = sub_69dd70(arg4, "_btn_")

if (eax_3 == 0)
    eax_3 = sub_69dd70(arg4, "_power_")
    
    if (eax_3 != 0)
        esi = 1
    else
        eax_3 = sub_69dd70(arg4, "_ability_")
        
        if (eax_3 != 0)
            esi = 1
        else
            char* eax_4 = sub_69dd70(arg4, "twist_")
            
            if (eax_4 != 0)
                eax_3 = sub_69dd70(arg4, "_desc")
            
            if (eax_4 != 0 && eax_3 != 0)
                esi = 1
            else
                eax_3 = sub_69dd70(arg4, "dom_rules_")
                
                if (eax_3 == 0)
                    eax_3 = sub_69dd70(arg4, "dom_smartplay_")
                    
                    if (eax_3 == 0)
                        eax_3 = sub_69dd70(arg4, "dom_card_achievement_")
                        
                        if (eax_3 == 0)
                            eax_3 = sub_69dd70(arg4, "dom_taptip_")
                            
                            if (eax_3 == 0)
                                char* ecx_10 = arg4
                                
                                if (sub_69dd70(arg4, "stamp_") != ecx_10)
                                    goto label_62ed28
                                
                                eax_3 = sub_69dd70(ecx_10, "_desc")
                                
                                if (eax_3 == 0)
                                    ecx_10 = arg4
                                label_62ed28:
                                    eax_3 = sub_69dd70(ecx_10, "dom_tut_")
                                    
                                    if (eax_3 != 0)
                                        eax_3 = sub_69dd70(arg4, "_header")
                                        int32_t esi_2 = neg.d(eax_3)
                                        esi = neg.d(sbb.d(esi_2, esi_2, eax_3 != 0)) + 3
                                else
                                    esi = 2
                            else
                                esi = 2
                        else
                            esi = 7
                    else
                        esi = 6
                else
                    esi = 5
else
    esi = 8

var_88 = esi
char* eax_6 = sub_62e860(eax_3, "small", arg5, nullptr)
char* var_24 = eax_6

if (eax_6.b != 0)
    char* eax_7 = sub_69dd70(arg4, "_ability_")
    uint32_t ecx_15 = zx.d(var_24.b)
    
    if (eax_7 != 0)
        ecx_15 = 0
    
    var_24 = ecx_15

switch (esi)
    case 0
        sub_63d5e0(&data_801800, 6, &var_54, 0)
        __builtin_strncpy(var_54, "{bold}", 7)
        char* const eax_96 = var_5c
        
        if (eax_96 == 0 || eax_96 != "{normal}")
            sub_63d5e0(eax_96, 8, &var_5c, 0)
            __builtin_strncpy(var_5c, "{normal}", 9)
        
        char* const eax_97 = var_4c
        
        if (eax_97 == 0 || eax_97 != "{italic}")
            sub_63d5e0(eax_97, 8, &var_4c, 0)
            __builtin_strncpy(var_4c, "{italic}", 9)
        
        char* const eax_98 = var_84
        
        if (eax_98 == 0 || eax_98 != "{coin}")
            sub_63d5e0(eax_98, 6, &var_84, 0)
            __builtin_strncpy(var_84, "{coin}", 7)
        
        char* const eax_99 = var_80
        
        if (eax_99 == 0 || eax_99 != "{coin_N}")
            sub_63d5e0(eax_99, 8, &var_80, 0)
            __builtin_strncpy(var_80, "{coin_N}", 9)
        
        char* const eax_100 = var_7c
        
        if (eax_100 == 0 || eax_100 != "{coin_N_big}{br_big}{auto_card_br_big}")
            sub_63d5e0(eax_100, 0x26, &var_7c, 0)
            __builtin_strncpy(var_7c, "{coin_N_big}{br_big}{auto_card_br_big}", 0x27)
        
        char* const eax_101 = var_78
        
        if (eax_101 == 0 || eax_101 != "{vp}")
            sub_63d5e0(eax_101, 4, &var_78, 0)
            __builtin_strncpy(var_78, "{vp}", 5)
            eax_101.b = 0
        
        char* const ecx_247 = var_74
        
        if (ecx_247 == 0 || ecx_247 != "{card_number}N{normal}{vp}")
            sub_63d5e0(eax_101, 0x1a, &var_74, 0)
            __builtin_strncpy(var_74, "{card_number}N{normal}{vp}", 0x1b)
        
        char* const eax_102 = var_70
        
        if (eax_102 == 0
                || eax_102 != "{card_number_big}N{auto_card_vp_number_normal}{auto_card_vp_big}")
            sub_63d5e0(eax_102, 0x40, &var_70, 0)
            __builtin_strncpy(var_70, 
                "{card_number_big}N{auto_card_vp_number_normal}{auto_card_vp_big}", 0x41)
        
        char* const eax_103 = var_64
        
        if (eax_103 == 0 || eax_103 != "{debt}")
            sub_63d5e0(eax_103, 6, &var_64, 0)
            __builtin_strncpy(var_64, "{debt}", 7)
        
        char* const eax_104 = var_60
        
        if (eax_104 == 0 || eax_104 != "{debt_N}")
            sub_63d5e0(eax_104, 8, &var_60, 0)
            __builtin_strncpy(var_60, "{debt_N}", 9)
        
        char* const eax_105 = var_6c
        
        if (eax_105 == 0 || eax_105 != "{potion}")
            sub_63d5e0(eax_105, 8, &var_6c, 0)
            __builtin_strncpy(var_6c, "{potion}", 9)
        
        char* const eax_106 = var_68
        
        if (eax_106 == 0 || eax_106 != "{sun}")
            sub_63d5e0(eax_106, 5, &var_68, 0)
            __builtin_strcpy(var_68, "{sun}")
        
        char* const eax_107 = var_40
        
        if (eax_107 == 0 || eax_107 != "{br}")
            sub_63d5e0(eax_107, 4, &var_40, 0)
            __builtin_strncpy(var_40, "{br}", 5)
        
        char* const eax_108 = var_3c
        
        if (eax_108 == 0 || eax_108 != "{br}")
            sub_63d5e0(eax_108, 4, &var_3c, 0)
            __builtin_strncpy(var_3c, "{br}", 5)
        
        char* const eax_109 = var_38
        
        if (eax_109 == 0 || eax_109 != "{br}{line}{br}")
            sub_63d5e0(eax_109, 0xe, &var_38, 0)
            __builtin_strncpy(var_38, "{br}{line}{br}", 0xf)
            eax_109.w = 0x7d72
            eax_109.b = 0
        
        if (arg2 == 0x10 || arg2 == 0x11 || arg2 == 0x13 || arg2 == 0x12)
            char* const ecx_266 = var_74
            
            if (ecx_266 == 0 || ecx_266 != "N{vp}")
                sub_63d5e0(eax_109, 5, &var_74, 0)
                __builtin_strcpy(var_74, "N{vp}")
    case 1
        if (arg2 != 0x10 && arg2 != 0x11 && arg2 != 0x13 && arg2 != 0x12)
            sub_63d5e0(&data_801800, 0x15, &var_50, 0)
            __builtin_strcpy(var_50, "{auto_card_bold_item}")
            char* const eax_8 = var_54
            
            if (var_24.b == 0)
                if (eax_8 == 0 || eax_8 != "{auto_card_bold}")
                    sub_63d5e0(eax_8, 0x10, &var_54, 0)
                    __builtin_strncpy(var_54, "{auto_card_bold}", 0x11)
                
                char* const eax_12 = var_5c
                
                if (eax_12 == 0 || eax_12 != "{auto_card_normal}")
                    sub_63d5e0(eax_12, 0x12, &var_5c, 0)
                    __builtin_strncpy(var_5c, "{auto_card_normal}", 0x13)
                
                char* const eax_13 = var_58
                
                if (eax_13 == 0 || eax_13 != "{auto_card_normal_nobreaks}")
                    sub_63d5e0(eax_13, 0x1b, &var_58, 0)
                    __builtin_strcpy(var_58, "{auto_card_normal_nobreaks}")
                
                char* const eax_14 = var_4c
                
                if (eax_14 == 0 || eax_14 != "{auto_card_italic}")
                    sub_63d5e0(eax_14, 0x12, &var_4c, 0)
                    __builtin_strncpy(var_4c, "{auto_card_italic}", 0x13)
            else
                if (eax_8 == 0 || eax_8 != "{auto_card_bold_small}")
                    sub_63d5e0(eax_8, 0x16, &var_54, 0)
                    __builtin_strncpy(var_54, "{auto_card_bold_small}", 0x17)
                
                char* const eax_9 = var_5c
                
                if (eax_9 == 0 || eax_9 != "{auto_card_small}")
                    sub_63d5e0(eax_9, 0x11, &var_5c, 0)
                    __builtin_strcpy(var_5c, "{auto_card_small}")
                
                char* const eax_10 = var_58
                
                if (eax_10 == 0 || eax_10 != "{auto_card_small_nobreaks}")
                    sub_63d5e0(eax_10, 0x1a, &var_58, 0)
                    __builtin_strncpy(var_58, "{auto_card_small_nobreaks}", 0x1b)
                
                char* const eax_11 = var_4c
                
                if (eax_11 == 0 || eax_11 != "{auto_card_italic_small}")
                    sub_63d5e0(eax_11, 0x18, &var_4c, 0)
                    __builtin_strncpy(var_4c, "{auto_card_italic_small}", 0x19)
            
            char* const eax_15 = var_84
            
            if (eax_15 == 0 || eax_15 != "{coin}")
                sub_63d5e0(eax_15, 6, &var_84, 0)
                __builtin_strncpy(var_84, "{coin}", 7)
            
            char* const eax_16 = var_80
            
            if (eax_16 == 0 || eax_16 != "{coin_N}")
                sub_63d5e0(eax_16, 8, &var_80, 0)
                __builtin_strncpy(var_80, "{coin_N}", 9)
            
            char* const eax_17 = var_7c
            
            if (eax_17 == 0 || eax_17 != "{coin_N_big}{auto_card_br_big}")
                sub_63d5e0(eax_17, 0x1e, &var_7c, 0)
                __builtin_strncpy(var_7c, "{coin_N_big}{auto_card_br_big}", 0x1f)
            
            char* const eax_18 = var_78
            
            if (eax_18 == 0 || eax_18 != "{vp}")
                sub_63d5e0(eax_18, 4, &var_78, 0)
                __builtin_strncpy(var_78, "{vp}", 5)
            
            goto label_62f422
        
        sub_63d5e0(&data_801800, 0x1c, &var_50, 0)
        bool cond:1_1 = var_24.b == 0
        __builtin_strncpy(var_50, "{auto_card_bold_item_$LANG$}", 0x1d)
        char* const eax_19 = var_54
        
        if (cond:1_1)
            if (eax_19 == 0 || eax_19 != "{auto_card_bold_$LANG$}")
                sub_63d5e0(eax_19, 0x17, &var_54, 0)
                __builtin_strcpy(var_54, "{auto_card_bold_$LANG$}")
            
            char* const eax_23 = var_5c
            
            if (eax_23 == 0 || eax_23 != "{auto_card_normal_$LANG$}")
                sub_63d5e0(eax_23, 0x19, &var_5c, 0)
                __builtin_strcpy(var_5c, "{auto_card_normal_$LANG$}")
            
            sub_63d850(&var_58, &var_5c)
            char* const eax_24 = var_4c
            
            if (eax_24 == 0 || eax_24 != "{auto_card_normal_$LANG$}")
                sub_63d5e0(eax_24, 0x19, &var_4c, 0)
                __builtin_strcpy(var_4c, "{auto_card_normal_$LANG$}")
        else
            if (eax_19 == 0 || eax_19 != "{auto_card_bold_small_$LANG$}")
                sub_63d5e0(eax_19, 0x1d, &var_54, 0)
                __builtin_strcpy(var_54, "{auto_card_bold_small_$LANG$}")
            
            char* const eax_20 = var_5c
            
            if (eax_20 == 0 || eax_20 != "{auto_card_small_$LANG$}")
                sub_63d5e0(eax_20, 0x18, &var_5c, 0)
                __builtin_strncpy(var_5c, "{auto_card_small_$LANG$}", 0x19)
            
            sub_63d850(&var_58, &var_5c)
            char* const eax_21 = var_4c
            
            if (eax_21 == 0 || eax_21 != "{auto_card_small_$LANG$}")
                sub_63d5e0(eax_21, 0x18, &var_4c, 0)
                __builtin_strncpy(var_4c, "{auto_card_small_$LANG$}", 0x19)
        
        char* const eax_25 = var_84
        
        if (eax_25 == 0 || eax_25 != "{coin}")
            sub_63d5e0(eax_25, 6, &var_84, 0)
            __builtin_strncpy(var_84, "{coin}", 7)
        
        char* const eax_26 = var_80
        
        if (eax_26 == 0 || eax_26 != "{coin_N}")
            sub_63d5e0(eax_26, 8, &var_80, 0)
            __builtin_strncpy(var_80, "{coin_N}", 9)
        
        char* const eax_27 = var_7c
        
        if (eax_27 == 0 || eax_27 != "{auto_card_bold_item_$LANG$}{coin_N_big}{auto_card_normal_$LANG$}{auto_card_br_big}")
            sub_63d5e0(eax_27, 0x53, &var_7c, 0)
            __builtin_strcpy(var_7c, 
                "{auto_card_bold_item_$LANG$}{coin_N_big}{auto_card_normal_$LANG$}{auto_card_br_big}")
        
        char* const eax_28 = var_78
        
        if (eax_28 == 0 || eax_28 != "{vp}")
            sub_63d5e0(eax_28, 4, &var_78, 0)
            __builtin_strncpy(var_78, "{vp}", 5)
        
        if (arg2 == 0x10 || arg2 == 0x11 || arg2 == 0x13 || arg2 == 0x12)
            char* const eax_30 = var_74
            
            if (var_24.b == 0)
                if (eax_30 == 0 || eax_30 != "{auto_card_vp_number}N{auto_card_normal_$LANG$}{vp}")
                    sub_63d5e0(eax_30, 0x33, &var_74, 0)
                    __builtin_strcpy(var_74, "{auto_card_vp_number}N{auto_card_normal_$LANG$}{vp}")
            else if (eax_30 == 0
                    || eax_30 != "{auto_card_vp_number_small}N{auto_card_small_$LANG$}{vp}")
                sub_63d5e0(eax_30, 0x38, &var_74, 0)
                __builtin_strncpy(var_74, 
                    "{auto_card_vp_number_small}N{auto_card_small_$LANG$}{vp}", 0x39)
        else
        label_62f422:
            char* const eax_29 = var_74
            
            if (var_24.b == 0)
                if (eax_29 == 0 || eax_29 != "{auto_card_vp_number}N{auto_card_normal}{vp}")
                    sub_63d5e0(eax_29, 0x2c, &var_74, 0)
                    __builtin_strncpy(var_74, "{auto_card_vp_number}N{auto_card_normal}{vp}", 0x2d)
            else if (eax_29 == 0 || eax_29 != "{auto_card_vp_number_small}N{auto_card_small}{vp}")
                sub_63d5e0(eax_29, 0x31, &var_74, 0)
                __builtin_strcpy(var_74, "{auto_card_vp_number_small}N{auto_card_small}{vp}")
        
        char* const eax_31 = var_70
        
        if (eax_31 == 0 || eax_31
                != "{auto_card_vp_number_big}N{auto_card_vp_number_normal}{auto_card_vp_big}")
            sub_63d5e0(eax_31, 0x48, &var_70, 0)
            __builtin_strncpy(var_70, 
                "{auto_card_vp_number_big}N{auto_card_vp_number_normal}{auto_card_vp_big}", 0x49)
        
        char* const eax_32 = var_64
        
        if (eax_32 == 0 || eax_32 != "{debt}")
            sub_63d5e0(eax_32, 6, &var_64, 0)
            __builtin_strncpy(var_64, "{debt}", 7)
        
        char* const eax_33 = var_60
        
        if (eax_33 == 0 || eax_33 != "{debt_N}")
            sub_63d5e0(eax_33, 8, &var_60, 0)
            __builtin_strncpy(var_60, "{debt_N}", 9)
        
        char* const eax_34 = var_6c
        
        if (eax_34 == 0 || eax_34 != "{potion}")
            sub_63d5e0(eax_34, 8, &var_6c, 0)
            __builtin_strncpy(var_6c, "{potion}", 9)
        
        char* const eax_35 = var_68
        
        if (eax_35 == 0 || eax_35 != "{sun}")
            sub_63d5e0(eax_35, 5, &var_68, 0)
            __builtin_strcpy(var_68, "{sun}")
        
        char* const eax_36 = var_48
        
        if (eax_36 == 0 || eax_36 != "{auto_card_br_item}")
            sub_63d5e0(eax_36, 0x13, &var_48, 0)
            __builtin_strcpy(var_48, "{auto_card_br_item}")
        
        char* const eax_37 = var_40
        
        if (eax_37 == 0 || eax_37 != "{auto_card_br}")
            sub_63d5e0(eax_37, 0xe, &var_40, 0)
            __builtin_strncpy(var_40, "{auto_card_br}", 0xf)
        
        char* const eax_38 = var_3c
        
        if (eax_38 == 0 || eax_38 != "[gap]")
            sub_63d5e0(eax_38, 5, &var_3c, 0)
            __builtin_strcpy(var_3c, "[gap]")
        
        char* const eax_39 = var_38
        
        if (eax_39 == 0 || eax_39 != "[gap_line]{auto_card_br_line_top}{auto_card_line}{auto_card_br_line_bottom}[gap_line]")
            sub_63d5e0(eax_39, 0x55, &var_38, 0)
            int16_t* esi_5
            int16_t* edi_2
            edi_2, esi_5 = __builtin_strncpy(var_38, 
                "[gap_line]{auto_card_br_line_top}{auto_card_line}{auto_card_br_line_bottom}[gap_line]", 
                0x54)
            *edi_2 = *esi_5
    case 2, 4
        sub_63d5e0(&data_801800, 0xf, &var_54, 0)
        __builtin_strcpy(var_54, "{taptip_normal}")
        char* const eax_62 = var_5c
        
        if (eax_62 == 0 || eax_62 != "{taptip_normal}")
            sub_63d5e0(eax_62, 0xf, &var_5c, 0)
            __builtin_strcpy(var_5c, "{taptip_normal}")
        
        char* const eax_64 = var_4c
        
        if (eax_64 == 0 || eax_64 != "{taptip_normal}")
            sub_63d5e0(eax_64, 0xf, &var_4c, 0)
            __builtin_strcpy(var_4c, "{taptip_normal}")
        
        char* const eax_66 = var_58
        
        if (eax_66 == 0 || eax_66 != "{nobreaks_taptip}")
            sub_63d5e0(eax_66, 0x11, &var_58, 0)
            __builtin_strcpy(var_58, "{nobreaks_taptip}")
        
        char* const eax_67 = var_84
        
        if (eax_67 == 0 || eax_67 != "{coin_N_taptip}")
            sub_63d5e0(eax_67, 0xf, &var_84, 0)
            __builtin_strcpy(var_84, "{coin_N_taptip}")
        
        char* const eax_69 = var_80
        
        if (eax_69 == 0 || eax_69 != "{coin_N_taptip}")
            sub_63d5e0(eax_69, 0xf, &var_80, 0)
            __builtin_strcpy(var_80, "{coin_N_taptip}")
        
        char* const eax_71 = var_78
        
        if (eax_71 == 0 || eax_71 != "{nobreaks_taptip}{vp_taptip}{taptip_normal}")
            sub_63d5e0(eax_71, 0x2b, &var_78, 0)
            __builtin_strcpy(var_78, "{nobreaks_taptip}{vp_taptip}{taptip_normal}")
        
        char* const eax_72 = var_74
        
        if (eax_72 == 0 || eax_72 != "{nobreaks_taptip}N{vp_taptip}{taptip_normal}")
            sub_63d5e0(eax_72, 0x2c, &var_74, 0)
            __builtin_strncpy(var_74, "{nobreaks_taptip}N{vp_taptip}{taptip_normal}", 0x2d)
        
        char* const eax_73 = var_64
        
        if (eax_73 == 0 || eax_73 != "{debt_taptip}")
            sub_63d5e0(eax_73, 0xd, &var_64, 0)
            __builtin_strcpy(var_64, "{debt_taptip}")
        
        char* const eax_74 = var_60
        
        if (eax_74 == 0 || eax_74 != "{debt_N_taptip}")
            sub_63d5e0(eax_74, 0xf, &var_60, 0)
            __builtin_strcpy(var_60, "{debt_N_taptip}")
        
        char* const eax_76 = var_40
        
        if (eax_76 == 0 || eax_76 != "{br}")
            sub_63d5e0(eax_76, 4, &var_40, 0)
            __builtin_strncpy(var_40, "{br}", 5)
        
        if (arg2 == 0x10 || arg2 == 0x11 || arg2 == 0x13 || arg2 == 0x12)
            char* const eax_77 = var_54
            
            if (eax_77 == 0 || eax_77 != "{taptip_normal_$LANG$}")
                sub_63d5e0(eax_77, 0x16, &var_54, 0)
                __builtin_strncpy(var_54, "{taptip_normal_$LANG$}", 0x17)
            
            char* const eax_78 = var_5c
            
            if (eax_78 == 0 || eax_78 != "{taptip_normal_$LANG$}")
                sub_63d5e0(eax_78, 0x16, &var_5c, 0)
                __builtin_strncpy(var_5c, "{taptip_normal_$LANG$}", 0x17)
            
            char* const eax_79 = var_4c
            
            if (eax_79 == 0 || eax_79 != "{taptip_normal_$LANG$}")
                sub_63d5e0(eax_79, 0x16, &var_4c, 0)
                __builtin_strncpy(var_4c, "{taptip_normal_$LANG$}", 0x17)
    case 3
        sub_63d5e0(&data_801800, 0xa, &var_54, 0)
        __builtin_strncpy(var_54, "{tut_bold}", 0xb)
        void* eax_50
        eax_50.w = 0x7d64
        eax_50.b = 0
        char* const ecx_128 = var_5c
        
        if (ecx_128 == 0 || ecx_128 != "{tut_normal}")
            sub_63d5e0(eax_50, 0xc, &var_5c, 0)
            __builtin_strncpy(var_5c, "{tut_normal}", 0xd)
            eax_50.b = 0
        
        char* const ecx_131 = var_4c
        
        if (ecx_131 == 0 || ecx_131 != "{tut_italic}")
            sub_63d5e0(eax_50, 0xc, &var_4c, 0)
            __builtin_strncpy(var_4c, "{tut_italic}", 0xd)
            eax_50.b = 0
        
        if (var_24.b != 0)
            char* const ecx_134 = var_54
            
            if (ecx_134 == 0 || ecx_134 != "{tut_bold_small}")
                sub_63d5e0(eax_50, 0x10, &var_54, 0)
                __builtin_strncpy(var_54, "{tut_bold_small}", 0x11)
                eax_50.b = 0
            
            char* const ecx_137 = var_5c
            
            if (ecx_137 == 0 || ecx_137 != "{tut_small}")
                sub_63d5e0(eax_50, 0xb, &var_5c, 0)
                char* const ecx_139 = var_5c
                __builtin_strncpy(ecx_139, "{tut_sma", 8)
                eax_50 = &data_7d6c6c
                *(ecx_139 + 8) = &data_7d6c6c
            
            char* const ecx_140 = var_4c
            
            if (ecx_140 == 0 || ecx_140 != "{tut_italic_small}")
                sub_63d5e0(eax_50, 0x12, &var_4c, 0)
                __builtin_strncpy(var_4c, "{tut_italic_small}", 0x13)
        
        char* const eax_51 = var_84
        
        if (eax_51 == 0 || eax_51 != "{coin}")
            sub_63d5e0(eax_51, 6, &var_84, 0)
            __builtin_strncpy(var_84, "{coin}", 7)
        
        char* const eax_52 = var_80
        
        if (eax_52 == 0 || eax_52 != "{coin_N}")
            sub_63d5e0(eax_52, 8, &var_80, 0)
            __builtin_strncpy(var_80, "{coin_N}", 9)
        
        char* const eax_53 = var_7c
        
        if (eax_53 == 0 || eax_53 != "{coin_N_big}{auto_card_br_big}")
            sub_63d5e0(eax_53, 0x1e, &var_7c, 0)
            __builtin_strncpy(var_7c, "{coin_N_big}{auto_card_br_big}", 0x1f)
        
        char* const eax_54 = var_78
        
        if (eax_54 == 0 || eax_54 != "{vp}")
            sub_63d5e0(eax_54, 4, &var_78, 0)
            __builtin_strncpy(var_78, "{vp}", 5)
        
        char* const eax_55 = var_74
        
        if (eax_55 == 0 || eax_55 != "{auto_card_vp_number}N{auto_card_vp_number_normal}{vp}")
            sub_63d5e0(eax_55, 0x36, &var_74, 0)
            __builtin_strncpy(var_74, "{auto_card_vp_number}N{auto_card_vp_number_normal}{vp}", 
                0x37)
        
        char* const eax_56 = var_64
        
        if (eax_56 == 0 || eax_56 != "{debt}")
            sub_63d5e0(eax_56, 6, &var_64, 0)
            __builtin_strncpy(var_64, "{debt}", 7)
        
        char* const eax_57 = var_60
        
        if (eax_57 == 0 || eax_57 != "{debt_N}")
            sub_63d5e0(eax_57, 8, &var_60, 0)
            __builtin_strncpy(var_60, "{debt_N}", 9)
        
        char* const eax_58 = var_6c
        
        if (eax_58 == 0 || eax_58 != "{potion}")
            sub_63d5e0(eax_58, 8, &var_6c, 0)
            __builtin_strncpy(var_6c, "{potion}", 9)
        
        char* const eax_59 = var_68
        
        if (eax_59 == 0 || eax_59 != "{sun}")
            sub_63d5e0(eax_59, 5, &var_68, 0)
            __builtin_strcpy(var_68, "{sun}")
        
        char* const eax_60 = var_40
        
        if (eax_60 == 0 || eax_60 != "{auto_card_br}")
            sub_63d5e0(eax_60, 0xe, &var_40, 0)
            __builtin_strncpy(var_40, "{auto_card_br}", 0xf)
            eax_60.w = 0x7d72
            eax_60.b = 0
        
        if (arg2 == 0x10 || arg2 == 0x11 || arg2 == 0x13 || arg2 == 0x12)
            char* const ecx_163 = var_54
            
            if (ecx_163 == 0 || ecx_163 != "{tut_bold_$LANG$}")
                sub_63d5e0(eax_60, 0x11, &var_54, 0)
                __builtin_strcpy(var_54, "{tut_bold_$LANG$}")
                eax_60.w = 0x7d
            
            char* const ecx_166 = var_5c
            
            if (ecx_166 == 0 || ecx_166 != "{tut_normal_$LANG$}")
                sub_63d5e0(eax_60, 0x13, &var_5c, 0)
                char* const ecx_168 = var_5c
                __builtin_strncpy(ecx_168, "{tut_normal_$LAN", 0x10)
                eax_60 = &data_7d2447
                *(ecx_168 + 0x10) = &data_7d2447
            
            char* const ecx_169 = var_4c
            
            if (ecx_169 == 0 || ecx_169 != "{tut_italic_$LANG$}")
                sub_63d5e0(eax_60, 0x13, &var_4c, 0)
                char* const ecx_171 = var_4c
                __builtin_strncpy(ecx_171, "{tut_italic_$LAN", 0x10)
                eax_60 = &data_7d2447
                *(ecx_171 + 0x10) = &data_7d2447
            
            if (var_24.b != 0)
                char* const ecx_172 = var_54
                
                if (ecx_172 == 0 || ecx_172 != "{tut_bold_small_$LANG$}")
                    sub_63d5e0(eax_60, 0x17, &var_54, 0)
                    eax_60 = var_54
                    __builtin_strcpy(eax_60, "{tut_bold_small_$LANG$}")
                
                char* const ecx_174 = var_5c
                
                if (ecx_174 == 0 || ecx_174 != "{tut_small_$LANG$}")
                    sub_63d5e0(eax_60, 0x12, &var_5c, 0)
                    __builtin_strncpy(var_5c, "{tut_small_$LANG$}", 0x13)
                    eax_60.w = 0x7d24
                    eax_60.b = 0
                
                char* const ecx_177 = var_4c
                
                if (ecx_177 == 0 || ecx_177 != "{tut_italic_small_$LANG$}")
                    sub_63d5e0(eax_60, 0x19, &var_4c, 0)
                    __builtin_strcpy(var_4c, "{tut_italic_small_$LANG$}")
    case 5, 6
        sub_63d5e0(&data_801800, 0xe, &var_50, 0)
        __builtin_strncpy(var_50, "{header_rules}", 0xf)
        char* const esi_8 = var_54
        
        if (esi_8 == 0 || esi_8 != "{header_rules}")
            sub_63d5e0(0x656c7d00, 0xe, &var_54, 0)
            __builtin_strncpy(var_54, "{header_rules}", 0xf)
        
        char* const esi_10 = var_5c
        
        if (esi_10 == 0 || esi_10 != "{normal_rules}")
            sub_63d5e0(0x656c7d00, 0xe, &var_5c, 0)
            __builtin_strncpy(var_5c, "{normal_rules}", 0xf)
        
        char* const eax_40 = var_84
        
        if (eax_40 == 0 || eax_40 != "{coin_N_rules}")
            sub_63d5e0(eax_40, 0xe, &var_84, 0)
            __builtin_strncpy(var_84, "{coin_N_rules}", 0xf)
        
        char* const eax_41 = var_80
        
        if (eax_41 == 0 || eax_41 != "{coin_N_rules}")
            sub_63d5e0(eax_41, 0xe, &var_80, 0)
            __builtin_strncpy(var_80, "{coin_N_rules}", 0xf)
        
        char* const eax_42 = var_78
        
        if (eax_42 == 0 || eax_42 != "{vp_rules}")
            sub_63d5e0(eax_42, 0xa, &var_78, 0)
            __builtin_strncpy(var_78, "{vp_rules}", 0xb)
        
        char* const eax_43 = var_74
        
        if (eax_43 == 0 || eax_43 != "N{vp_rules}")
            sub_63d5e0(eax_43, 0xb, &var_74, 0)
            __builtin_strcpy(var_74, "N{vp_rules}")
        
        char* const eax_44 = var_64
        
        if (eax_44 == 0 || eax_44 != "{debt_rules}")
            sub_63d5e0(eax_44, 0xc, &var_64, 0)
            __builtin_strncpy(var_64, "{debt_rules}", 0xd)
        
        char* const eax_45 = var_60
        
        if (eax_45 == 0 || eax_45 != "{debt_N_rules}")
            sub_63d5e0(eax_45, 0xe, &var_60, 0)
            __builtin_strncpy(var_60, "{debt_N_rules}", 0xf)
        
        char* const eax_46 = var_6c
        
        if (eax_46 == 0 || eax_46 != "{potion_rules}")
            sub_63d5e0(eax_46, 0xe, &var_6c, 0)
            __builtin_strncpy(var_6c, "{potion_rules}", 0xf)
        
        char* const eax_47 = var_68
        
        if (eax_47 == 0 || eax_47 != "{sun}")
            sub_63d5e0(eax_47, 5, &var_68, 0)
            __builtin_strcpy(var_68, "{sun}")
        
        char* const eax_48 = var_40
        
        if (eax_48 == 0 || eax_48 != "{br}")
            sub_63d5e0(eax_48, 4, &var_40, 0)
            __builtin_strncpy(var_40, "{br}", 5)
        
        char* const eax_49 = var_48
        
        if (eax_49 == 0 || eax_49 != "{br}")
            sub_63d5e0(eax_49, 4, &var_48, 0)
            __builtin_strncpy(var_48, "{br}", 5)
            eax_49.b = 0
        
        char* const ecx_114 = var_3c
        
        if (ecx_114 == 0 || ecx_114 != "{br_gap_rules}")
            sub_63d5e0(eax_49, 0xe, &var_3c, 0)
            ecx_114 = var_3c
            __builtin_strncpy(ecx_114, "{br_gap_rules}", 0xf)
            eax_49.w = 0x7d73
            eax_49.b = 0
        
        char* const edx = var_44
        
        if (edx == 0 || edx != "{br_gap_header_rules}")
            sub_63d5e0(eax_49, 0x15, &var_44, 0)
            edx = var_44
            ecx_114 = var_3c
            __builtin_strcpy(edx, "{br_gap_header_rules}")
            eax_49.w = 0x7d
        
        if (arg2 == 0x10 || arg2 == 0x11 || arg2 == 0x13 || arg2 == 0x12)
            char* const esi_12 = var_50
            
            if (esi_12 == 0 || esi_12 != "{header_rules_$LANG$}")
                sub_63d5e0(eax_49, 0x15, &var_50, 0)
                edx = var_44
                __builtin_strcpy(var_50, "{header_rules_$LANG$}")
                eax_49.w = 0x7d
                ecx_114 = var_3c
            
            char* const esi_13 = var_54
            
            if (esi_13 == 0 || esi_13 != "{header_rules_$LANG$}")
                sub_63d5e0(eax_49, 0x15, &var_54, 0)
                edx = var_44
                __builtin_strcpy(var_54, "{header_rules_$LANG$}")
                eax_49.w = 0x7d
                ecx_114 = var_3c
            
            char* const esi_14 = var_5c
            
            if (esi_14 == 0 || esi_14 != "{normal_rules_$LANG$}")
                sub_63d5e0(eax_49, 0x15, &var_5c, 0)
                edx = var_44
                __builtin_strcpy(var_5c, "{normal_rules_$LANG$}")
                eax_49.w = 0x7d
                ecx_114 = var_3c
            
            if (ecx_114 == 0 || ecx_114 != "{br_gap_rules_$LANG$}")
                sub_63d5e0(eax_49, 0x15, &var_3c, 0)
                edx = var_44
                __builtin_strcpy(var_3c, "{br_gap_rules_$LANG$}")
                eax_49.w = 0x7d
            
            if (edx == 0 || edx != "{br_gap_header_rules_$LANG$}")
                sub_63d5e0(eax_49, 0x1c, &var_44, 0)
                __builtin_strncpy(var_44, "{br_gap_header_rules_$LANG$}", 0x1d)
    case 7, 8
        sub_63d5e0(&data_801800, 0xc, &var_54, 0)
        __builtin_strncpy(var_54, "{tut_normal}", 0xd)
        char* const eax_80 = var_5c
        
        if (eax_80 == 0 || eax_80 != "{tut_normal}")
            sub_63d5e0(eax_80, 0xc, &var_5c, 0)
            __builtin_strncpy(var_5c, "{tut_normal}", 0xd)
        
        char* const eax_81 = var_4c
        
        if (eax_81 == 0 || eax_81 != "{tut_normal}")
            sub_63d5e0(eax_81, 0xc, &var_4c, 0)
            __builtin_strncpy(var_4c, "{tut_normal}", 0xd)
        
        char* const eax_82 = var_84
        
        if (eax_82 == 0 || eax_82 != "{coin_N_ok}")
            sub_63d5e0(eax_82, 0xb, &var_84, 0)
            __builtin_strcpy(var_84, "{coin_N_ok}")
        
        char* const eax_83 = var_80
        
        if (eax_83 == 0 || eax_83 != "{coin_N_ok}")
            sub_63d5e0(eax_83, 0xb, &var_80, 0)
            __builtin_strcpy(var_80, "{coin_N_ok}")
        
        char* const eax_84 = var_7c
        
        if (eax_84 == 0 || eax_84 != "{coin_N_ok}")
            sub_63d5e0(eax_84, 0xb, &var_7c, 0)
            __builtin_strcpy(var_7c, "{coin_N_ok}")
        
        char* const eax_85 = var_78
        
        if (eax_85 == 0 || eax_85 != "{vp_ok}")
            sub_63d5e0(eax_85, 7, &var_78, 0)
            __builtin_strcpy(var_78, "{vp_ok}")
        
        char* const eax_87 = var_74
        
        if (eax_87 == 0 || eax_87 != "N{vp_ok}")
            sub_63d5e0(eax_87, 8, &var_74, 0)
            __builtin_strncpy(var_74, "N{vp_ok}", 9)
        
        char* const eax_88 = var_70
        
        if (eax_88 == 0 || eax_88 != "N{vp_ok}")
            sub_63d5e0(eax_88, 8, &var_70, 0)
            __builtin_strncpy(var_70, "N{vp_ok}", 9)
        
        char* const eax_89 = var_64
        
        if (eax_89 == 0 || eax_89 != "{debt_ok}")
            sub_63d5e0(eax_89, 9, &var_64, 0)
            __builtin_strcpy(var_64, "{debt_ok}")
        
        char* const eax_90 = var_60
        
        if (eax_90 == 0 || eax_90 != "{debt_N_ok}")
            sub_63d5e0(eax_90, 0xb, &var_60, 0)
            __builtin_strcpy(var_60, "{debt_N_ok}")
        
        char* const eax_91 = var_6c
        
        if (eax_91 == 0 || eax_91 != "{potion_ok}")
            sub_63d5e0(eax_91, 0xb, &var_6c, 0)
            __builtin_strcpy(var_6c, "{potion_ok}")
        
        char* const eax_92 = var_68
        
        if (eax_92 == 0 || eax_92 != "{sun}")
            sub_63d5e0(eax_92, 5, &var_68, 0)
            __builtin_strcpy(var_68, "{sun}")
        
        char* const eax_93 = var_40
        
        if (eax_93 == 0 || eax_93 != "{auto_card_br}")
            sub_63d5e0(eax_93, 0xe, &var_40, 0)
            __builtin_strncpy(var_40, "{auto_card_br}", 0xf)
        
        char* const eax_94 = var_3c
        
        if (eax_94 == 0 || eax_94 != "{auto_card_br}")
            sub_63d5e0(eax_94, 0xe, &var_3c, 0)
            __builtin_strncpy(var_3c, "{auto_card_br}", 0xf)
        
        char* const eax_95 = var_38
        
        if (eax_95 == 0
                || eax_95 != "{auto_card_br_line_top}{auto_card_line}{auto_card_br_line_bottom}")
            sub_63d5e0(eax_95, 0x41, &var_38, 0)
            __builtin_strcpy(var_38, 
                "{auto_card_br_line_top}{auto_card_line}{auto_card_br_line_bottom}")

int32_t edx_1 = sub_63d720(&var_24, "*missing*")
var_14_1.b = 2
char* esi_15

if (arg2 - 0x10 u> 3)
    esi_15 = var_24
else
    switch (arg2)
        case 0x10
            esi_15 = var_24
            
            if (esi_15 == 0 || esi_15 != &data_86db80)
                edx_1 = sub_63d5e0(arg2 - 0x10, 3, &var_24, 0)
                esi_15 = var_24
                *esi_15 = 0x6e706a
        case 0x11
            esi_15 = var_24
            
            if (esi_15 == 0 || esi_15 != &data_86db6c)
                edx_1 = sub_63d5e0(arg2 - 0x10, 2, &var_24, 0)
                esi_15 = var_24
                *esi_15 = 0x6f6b
                esi_15[2] = 0
        case 0x12
            esi_15 = var_24
            
            if (esi_15 == 0 || esi_15 != "zh_hant")
                edx_1 = sub_63d5e0(arg2 - 0x10, 7, &var_24, 0)
                esi_15 = var_24
                __builtin_strcpy(esi_15, "zh_hant")
        case 0x13
            esi_15 = var_24
            
            if (esi_15 == 0 || esi_15 != "zh_cn")
                edx_1 = sub_63d5e0(arg2 - 0x10, 5, &var_24, 0)
                esi_15 = var_24
                __builtin_strcpy(esi_15, "zh_cn")

char* const eax_111 = &data_801800

if (esi_15 != 0)
    eax_111 = esi_15

int32_t edx_2 = sub_62eaa0(eax_111, edx_1, &var_50, eax_111)
char* const eax_112 = &data_801800

if (esi_15 != 0)
    eax_112 = esi_15

int32_t edx_3 = sub_62eaa0(eax_112, edx_2, &var_54, eax_112)
char* const eax_113 = &data_801800

if (esi_15 != 0)
    eax_113 = esi_15

int32_t edx_4 = sub_62eaa0(eax_113, edx_3, &var_5c, eax_113)
char* const eax_114 = &data_801800

if (esi_15 != 0)
    eax_114 = esi_15

int32_t edx_5 = sub_62eaa0(eax_114, edx_4, &var_58, eax_114)
char* const eax_115 = &data_801800

if (esi_15 != 0)
    eax_115 = esi_15

int32_t edx_6 = sub_62eaa0(eax_115, edx_5, &var_4c, eax_115)
char* const eax_116 = &data_801800

if (esi_15 != 0)
    eax_116 = esi_15

int32_t edx_7 = sub_62eaa0(eax_116, edx_6, &var_84, eax_116)
char* const eax_117 = &data_801800

if (esi_15 != 0)
    eax_117 = esi_15

int32_t edx_8 = sub_62eaa0(eax_117, edx_7, &var_80, eax_117)
char* const eax_118 = &data_801800

if (esi_15 != 0)
    eax_118 = esi_15

int32_t edx_9 = sub_62eaa0(eax_118, edx_8, &var_7c, eax_118)
char* const eax_119 = &data_801800

if (esi_15 != 0)
    eax_119 = esi_15

int32_t edx_10 = sub_62eaa0(eax_119, edx_9, &var_78, eax_119)
char* const eax_120 = &data_801800

if (esi_15 != 0)
    eax_120 = esi_15

int32_t edx_11 = sub_62eaa0(eax_120, edx_10, &var_74, eax_120)
char* const eax_121 = &data_801800

if (esi_15 != 0)
    eax_121 = esi_15

int32_t edx_12 = sub_62eaa0(eax_121, edx_11, &var_70, eax_121)
char* const eax_122 = &data_801800

if (esi_15 != 0)
    eax_122 = esi_15

int32_t edx_13 = sub_62eaa0(eax_122, edx_12, &var_64, eax_122)
char* const eax_123 = &data_801800

if (esi_15 != 0)
    eax_123 = esi_15

int32_t edx_14 = sub_62eaa0(eax_123, edx_13, &var_60, eax_123)
char* const eax_124 = &data_801800

if (esi_15 != 0)
    eax_124 = esi_15

int32_t edx_15 = sub_62eaa0(eax_124, edx_14, &var_6c, eax_124)
char* const eax_125 = &data_801800

if (esi_15 != 0)
    eax_125 = esi_15

int32_t edx_16 = sub_62eaa0(eax_125, edx_15, &var_68, eax_125)
char* const eax_126 = &data_801800

if (esi_15 != 0)
    eax_126 = esi_15

int32_t edx_17 = sub_62eaa0(eax_126, edx_16, &var_40, eax_126)
char* eax_127 = &data_801800

if (esi_15 != 0)
    eax_127 = esi_15

int32_t edx_18 = sub_62eaa0(eax_127, edx_17, &var_3c, eax_127)
char* eax_128 = &data_801800

if (esi_15 != 0)
    eax_128 = esi_15

int32_t edx_19 = sub_62eaa0(eax_128, edx_18, &var_44, eax_128)
char* eax_129 = &data_801800

if (esi_15 != 0)
    eax_129 = esi_15

sub_62eaa0(eax_129, edx_19, &var_38, eax_129)
int32_t* var_98_22 = &var_88

if (arg2 != 0x11)
    sub_6315e0(arg3, var_98_22)
    int32_t var_2c_2 = 1
    var_14_1.b = 4
else
    sub_6315e0(arg3, var_98_22)
    int32_t var_2c_1 = 1
    var_14_1.b = 3

if (data_cf65bc != 0 && esi_15 != 0 && *esi_15 != 0)
    char* eax_130 = sub_63d4e0(&var_24)
    int32_t temp1_1 = *(eax_130 + 4)
    *(eax_130 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_130, *(eax_130 + 0xc) + 0x10)

sub_6310c0(&var_88)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
