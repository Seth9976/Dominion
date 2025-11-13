// 函数: sub_5df320
// 地址: 0x5df320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?DestroyVirtualProcessorRoot@SchedulerProxy@details@Concurrency@@QAEXPAVVirtualProcessorRoot@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_28 = arg2
char** var_30 = arg3
int32_t var_2c = 0
*arg3 = &data_801800
char* esi = *(arg2 + 0x58)
int32_t var_2c_1 = 1
char* var_24 = esi
char* const var_1c = nullptr
char* const var_18 = &data_801800
int32_t var_8_1 = 1
int32_t edx = *(arg2 + 0x9c)
char* const var_14

if ((edx & 0x40000) == 0)
    char* var_48_3 = esi
    
    if ((edx & 0x100000) == 0)
        var_8_1.b = 0xa
        sub_63d850(&var_18, sub_63df30(&var_14, "dom_card_power_%s"))
        var_8_1.b = 0xb
    label_5df545:
        
        if (data_cf65bc != 0)
            char* eax_16 = var_14
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&var_14)
                int32_t temp1_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        var_8_1.b = 1
    else
        var_8_1.b = 8
        sub_63d850(&var_18, sub_63df30(&var_1c, "%s_desc"))
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            char* const eax_13 = var_1c
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 1
        var_1c = nullptr
else
    if (*(arg2 + 0x8c) == 0x1400)
        var_8_1.b = 2
        sub_63d850(&var_18, sub_63df30(&var_14, "dom_card_category_base"))
        var_8_1.b = 3
        goto label_5df545
    
    if (*(arg2 + 0x98) != 0 || edx != 0x40000)
        var_8_1.b = 6
        sub_63d850(&var_18, sub_63df30(&var_1c, "dom_card_category_landscape"))
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* const eax_9 = var_1c
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 1
        var_1c = 2
    else
        var_8_1.b = 4
        sub_63d850(&var_18, sub_63df30(&var_1c, "dom_card_category_expansion"))
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* const eax_6 = var_1c
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_63d4e0(&var_1c)
                int32_t temp4_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 1
        var_1c = 1

uint32_t eax_18 = sub_4c89a0()
char* const edi_1 = var_18
char* const esi_1 = &data_801800
char* const ecx_15 = &data_801800

if (edi_1 != 0)
    ecx_15 = edi_1

void* eax_19 = sub_68c730(ecx_15, eax_18, &data_801800)
var_14 = eax_19
char* const var_20

if (eax_19 != 0)
    sub_63d850(arg3, eax_19)
else
    char* ecx_16 = &data_801800
    
    if (edi_1 != 0)
        ecx_16 = edi_1
    
    eax_19 = sub_68c730(ecx_16, eax_19 + 1, &data_801800)
    var_14 = eax_19
    
    if (eax_19 != 0)
        sub_63d850(arg3, eax_19)
    else
        char* var_48_6 = var_24
        var_8_1.b = 0xc
        sub_63d850(arg3, sub_63df30(&var_20, "**missing:%s**"))
        var_8_1.b = 0xd
        
        if (data_cf65bc != 0)
            char* eax_21 = var_20
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_63d4e0(&var_20)
                int32_t temp7_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        var_8_1.b = 1

char* const eax_23 = var_1c

if (eax_23 == 0)
    goto label_5df86d

char const* const var_50_4
int32_t var_4c_4
char const* const var_48_9
char* const eax_26
char* ecx_21

if (eax_23 == 1)
    int32_t var_48_12 = *(var_28 + 0x58)
    sub_63df30(&var_1c, "dom_expansion_name_%s")
    var_8_1.b = 0xe
    char* ecx_31 = &data_801800
    char* const eax_37 = var_1c
    
    if (eax_37 != 0)
        ecx_31 = eax_37
    
    var_24 = ecx_31
    void* eax_38 = sub_68caf0(eax_37, nullptr, ecx_31, 0)
    void* ecx_32
    
    if (eax_38 != 0)
        eax_38 = *eax_38
        ecx_32 = &data_801800
        
        if (eax_38 != 0)
            ecx_32 = eax_38
    else
        ecx_32 = var_24
    
    if (ecx_32 == 0)
        sub_63b870(eax_38, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_63d720(&var_24, ecx_32)
    var_8_1.b = 0xf
    char* ecx_34 = &data_801800
    char* esi_2 = var_24
    char* edx_21 = &data_801800
    char* eax_39 = *arg3
    
    if (esi_2 != 0)
        ecx_34 = esi_2
    
    if (eax_39 != 0)
        edx_21 = eax_39
    
    var_8_1.b = 0x10
    sub_63d850(arg3, sub_63dfa0(eax_39, edx_21, &var_20, "[expansion]", ecx_34))
    var_8_1.b = 0x11
    
    if (data_cf65bc != 0)
        char* const eax_41 = var_20
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_63d4e0(&var_20)
            int32_t temp13_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp13_1 == 1)
                sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                var_20 = &data_801800
    
    var_8_1.b = 0x12
    
    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_43 = sub_63d4e0(&var_24)
        int32_t temp14_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
            var_24 = &data_801800
    
    var_8_1.b = 0x13
    
    if (data_cf65bc != 0)
        char* const eax_44 = var_1c
        
        if (eax_44 != 0 && *eax_44 != 0)
            char* eax_45 = sub_63d4e0(&var_1c)
            int32_t temp16_1 = *(eax_45 + 4)
            *(eax_45 + 4) -= 1
            
            if (temp16_1 == 1)
                sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                var_1c = &data_801800
    
    esi_1 = &data_801800
label_5df866:
    var_8_1.b = 1
label_5df86d:
    *arg4 = 0
    eax_26 = var_14
    
    if (eax_26 == 0)
    label_5dfc3e:
        
        if ((*(var_28 + 0x98) & 0x40000) != 0)
            char* eax_85 = *arg3
            char* edx_46 = &data_801800
            
            if (eax_85 != 0)
                edx_46 = eax_85
            
            var_8_1.b = 0x28
            sub_63d850(arg3, sub_63dfa0(eax_85, edx_46, &var_28, "auto_card_line", "****"))
            var_8_1.b = 0x29
            
            if (data_cf65bc != 0)
                char* eax_87 = var_28
                
                if (eax_87 != 0 && *eax_87 != 0)
                    char* eax_88 = sub_63d4e0(&var_28)
                    int32_t temp9_1 = *(eax_88 + 4)
                    *(eax_88 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_88, *(eax_88 + 0xc) + 0x10)
            
            var_8_1.b = 1
            char* eax_89 = *arg3
            
            if (eax_89 != 0)
                esi_1 = eax_89
            
            var_8_1.b = 0x2a
            sub_63d850(arg3, sub_63dfa0(eax_89, esi_1, &var_28, "****", "auto_card_line_white"))
            var_8_1.b = 0x2b
            
            if (data_cf65bc != 0)
                char* eax_91 = var_28
                
                if (eax_91 != 0 && *eax_91 != 0)
                    char* eax_92 = sub_63d4e0(&var_28)
                    int32_t temp11_1 = *(eax_92 + 4)
                    *(eax_92 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_92, *(eax_92 + 0xc) + 0x10)
        
        int32_t var_8_2 = 0x2c
        
        if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
            char* eax_93 = sub_63d4e0(&var_18)
            int32_t temp8_1 = *(eax_93 + 4)
            *(eax_93 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_93, *(eax_93 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    char* ecx_43 = *(eax_26 + 8)
    
    if (ecx_43 == 0 || *ecx_43 == 0)
        goto label_5df8ab
    
    if (sub_62e860(eax_26, "narrow", ecx_43, nullptr) == 0)
        eax_26 = var_14
    label_5df8ab:
        char* ecx_44 = *(eax_26 + 8)
        
        if (ecx_44 != 0 && *ecx_44 != 0)
            if (sub_62e860(eax_26, "wide", ecx_44, nullptr) != 0)
                *arg4 = 2
            
            eax_26 = var_14
    else
        *arg4 = 1
        eax_26 = var_14
    
    void* ecx_45 = data_cc8dc0
    
    if (ecx_45 != 0)
        int32_t ecx_46
        
        if (*(ecx_45 + 0x28) != 0)
            ecx_46 = *(ecx_45 + 0x10)
        
        if (*(ecx_45 + 0x28) == 0 || ecx_46 == 0x10 || ecx_46 == 0x11 || ecx_46 == 0x13
                || ecx_46 == 0x12)
            char* ecx_47 = *(eax_26 + 8)
            
            if (ecx_47 == 0 || *ecx_47 == 0)
                goto label_5df9c4
            
            if (sub_62e860(eax_26, "break_none", ecx_47, nullptr) != 0)
                goto label_5df92c
            
            eax_26 = var_14
        label_5df9c4:
            char* ecx_54 = *(eax_26 + 8)
            
            if (ecx_54 == 0 || *ecx_54 == 0)
                goto label_5dfa87
            
            if (sub_62e860(eax_26, "break_large", ecx_54, nullptr) == 0)
                eax_26 = var_14
            label_5dfa87:
                char* ecx_61 = *(eax_26 + 8)
                
                if (ecx_61 == 0 || *ecx_61 == 0)
                    goto label_5dfaa9
                
                if (sub_62e860(eax_26, "break_small", ecx_61, nullptr) != 0)
                label_5dfad4:
                    char* eax_67 = *arg3
                    char* edx_36 = &data_801800
                    
                    if (eax_67 != 0)
                        edx_36 = eax_67
                    
                    var_8_1.b = 0x20
                    sub_63d850(arg3, 
                        sub_63dfa0(eax_67, edx_36, &var_24, "[gap]", "{auto_card_gap_small}"))
                    var_8_1.b = 0x21
                    
                    if (data_cf65bc != 0)
                        char* eax_69 = var_24
                        
                        if (eax_69 != 0 && *eax_69 != 0)
                            char* eax_70 = sub_63d4e0(&var_24)
                            int32_t temp19_1 = *(eax_70 + 4)
                            *(eax_70 + 4) -= 1
                            
                            if (temp19_1 == 1)
                                sub_64c080(eax_70, *(eax_70 + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    char* eax_71 = *arg3
                    char* edx_39 = &data_801800
                    
                    if (eax_71 != 0)
                        edx_39 = eax_71
                    
                    var_8_1.b = 0x22
                    sub_63d850(arg3, 
                        sub_63dfa0(eax_71, edx_39, &var_24, "[gap_line]", &data_801800))
                    var_8_1.b = 0x23
                else
                    eax_26 = var_14
                label_5dfaa9:
                    char* ecx_62 = *(eax_26 + 8)
                    char eax_66
                    
                    if (ecx_62 != 0 && *ecx_62 != 0)
                        eax_66 = sub_62e860(eax_26, "small", ecx_62, nullptr)
                    
                    if (ecx_62 != 0 && *ecx_62 != 0 && eax_66 != 0)
                        goto label_5dfad4
                    
                    char* eax_73 = *arg3
                    char* edx_40 = &data_801800
                    
                    if (eax_73 != 0)
                        edx_40 = eax_73
                    
                    var_8_1.b = 0x24
                    sub_63d850(arg3, 
                        sub_63dfa0(eax_73, edx_40, &var_24, "[gap]", "{auto_card_gap}"))
                    var_8_1.b = 0x25
                    
                    if (data_cf65bc != 0)
                        char* eax_75 = var_24
                        
                        if (eax_75 != 0 && *eax_75 != 0)
                            char* eax_76 = sub_63d4e0(&var_24)
                            int32_t temp17_1 = *(eax_76 + 4)
                            *(eax_76 + 4) -= 1
                            
                            if (temp17_1 == 1)
                                sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    char* eax_77 = *arg3
                    char* edx_43 = &data_801800
                    
                    if (eax_77 != 0)
                        edx_43 = eax_77
                    
                    var_8_1.b = 0x26
                    sub_63d850(arg3, 
                        sub_63dfa0(eax_77, edx_43, &var_24, "[gap_line]", &data_801800))
                    var_8_1.b = 0x27
            else
                char* eax_59 = *arg3
                char* edx_32 = &data_801800
                
                if (eax_59 != 0)
                    edx_32 = eax_59
                
                var_8_1.b = 0x1c
                sub_63d850(arg3, sub_63dfa0(eax_59, edx_32, &var_24, "[gap]", "{auto_card_gap}"))
                var_8_1.b = 0x1d
                
                if (data_cf65bc != 0)
                    char* eax_61 = var_24
                    
                    if (eax_61 != 0 && *eax_61 != 0)
                        char* eax_62 = sub_63d4e0(&var_24)
                        int32_t temp18_1 = *(eax_62 + 4)
                        *(eax_62 + 4) -= 1
                        
                        if (temp18_1 == 1)
                            sub_64c080(eax_62, *(eax_62 + 0xc) + 0x10)
                
                var_8_1.b = 1
                char* eax_63 = *arg3
                char* edx_35 = &data_801800
                
                if (eax_63 != 0)
                    edx_35 = eax_63
                
                var_8_1.b = 0x1e
                sub_63d850(arg3, 
                    sub_63dfa0(eax_63, edx_35, &var_24, "[gap_line]", "{auto_card_gap}"))
                var_8_1.b = 0x1f
        else
        label_5df92c:
            char* eax_52 = *arg3
            char* edx_28 = &data_801800
            
            if (eax_52 != 0)
                edx_28 = eax_52
            
            var_8_1.b = 0x18
            sub_63d850(arg3, sub_63dfa0(eax_52, edx_28, &var_24, "[gap]", &data_801800))
            var_8_1.b = 0x19
            
            if (data_cf65bc != 0)
                char* eax_54 = var_24
                
                if (eax_54 != 0 && *eax_54 != 0)
                    char* eax_55 = sub_63d4e0(&var_24)
                    int32_t temp15_1 = *(eax_55 + 4)
                    *(eax_55 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
            
            var_8_1.b = 1
            char* eax_56 = *arg3
            char* edx_31 = &data_801800
            
            if (eax_56 != 0)
                edx_31 = eax_56
            
            var_8_1.b = 0x1a
            sub_63d850(arg3, sub_63dfa0(eax_56, edx_31, &var_24, "[gap_line]", &data_801800))
            var_8_1.b = 0x1b
        
        if (data_cf65bc != 0)
            char* eax_79 = var_24
            
            if (eax_79 != 0 && *eax_79 != 0)
                char* eax_80 = sub_63d4e0(&var_24)
                int32_t temp20_1 = *(eax_80 + 4)
                *(eax_80 + 4) -= 1
                
                if (temp20_1 == 1)
                    sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
        
        var_8_1.b = 1
        goto label_5dfc3e
    
    var_48_9 = "GetLocalSettings"
    var_4c_4 = 0x5fb
    var_50_4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_21 = "gGameSettings.localSettings"
else
    eax_26 = eax_23 - 2
    
    if (eax_23 == 2)
        char* ecx_22 = var_28
        int32_t edx_12
        edx_12.b = 1
        int32_t eax_28 = *(ecx_22 + 0x9c) & 0xfffbffff
        sub_603160(eax_28, edx_12, &var_1c, *(ecx_22 + 0x98), eax_28)
        var_8_1.b = 0x14
        char* const ecx_24 = &data_801800
        char* eax_29 = var_1c
        char* const edx_15 = &data_801800
        
        if (eax_29 != 0)
            ecx_24 = eax_29
        
        char* eax_30 = *arg3
        
        if (eax_30 != 0)
            edx_15 = eax_30
        
        var_8_1.b = 0x15
        sub_63d850(arg3, sub_63dfa0(eax_30, edx_15, &var_20, "[landscape]", ecx_24))
        var_8_1.b = 0x16
        
        if (data_cf65bc != 0)
            char* const eax_32 = var_20
            
            if (eax_32 != 0 && *eax_32 != 0)
                char* eax_33 = sub_63d4e0(&var_20)
                int32_t temp10_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        var_8_1.b = 0x17
        
        if (data_cf65bc != 0)
            char* eax_34 = var_1c
            
            if (eax_34 != 0 && *eax_34 != 0)
                char* eax_35 = sub_63d4e0(&var_1c)
                int32_t temp12_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp12_1 == 1)
                    sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        goto label_5df866
    
    var_48_9 = "DomDefPower"
    var_4c_4 = 0x4063
    var_50_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_21 = "Halt"

sub_63b870(eax_26, &data_801800, ecx_21, var_50_4, var_4c_4, var_48_9)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
