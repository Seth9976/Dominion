// 函数: sub_68f520
// 地址: 0x68f520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76eb78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_18 = 0
int32_t var_8_1 = 1
char* const var_14 = &data_801800
var_8_1.b = 2

if (arg2 - 1 u> 3)
    sub_63b870(&ExceptionList, &data_801800, "Halt", "C:\x\ax2017\Engine\Localization.cpp", 0x5b4, 
        "DefaultPlural_pl")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_1c
char* arg_4

switch (arg2)
    case 1, 2
        if (sub_68cbb0(&var_14, U"k", &arg_4, &var_14) == 0)
            if (sub_68cbb0(&var_14, U"g", &arg_4, &var_14) == 0)
                if (sub_68cbb0(&var_14, U"ck", &arg_4, &var_14) == 0)
                    if (sub_68cbb0(&var_14, U"j", &arg_4, &var_14) == 0)
                        if (sub_68cbb0(&var_14, U"l", &arg_4, &var_14) == 0)
                            if (sub_68cbb0(&var_14, 0x87805c, &arg_4, &var_14) == 0)
                                if (sub_68cbb0(&var_14, "zh", &arg_4, &var_14) == 0)
                                    if (sub_68cbb0(&var_14, 0x878068, &arg_4, &var_14) == 0)
                                        if (sub_68cbb0(&var_14, 0x87805c, &arg_4, &var_14) == 0)
                                            if (sub_68cbb0(&var_14, 0x87805c, &arg_4, &var_14) == 0)
                                                if (sub_68cbb0(&var_14, 0x878068, &arg_4, &var_14)
                                                        == 0)
                                                    if (sub_68cbb0(&var_14, 0x878074, &arg_4, 
                                                            &var_14) == 0)
                                                        if (sub_68cbb0(&var_14, 0x878080, &arg_4, 
                                                                &var_14) == 0)
                                                            char** ecx_210 = &var_1c
                                                            
                                                            if (sub_68cbb0(&var_14, 0x87805c, 
                                                                    &arg_4, &var_14) == 0)
                                                                sub_63d720(ecx_210, U"yck")
                                                                var_8_1.b = 0x86
                                                                char* eax_170 = arg_4
                                                                *arg1 = eax_170
                                                                
                                                                if (eax_170 != 0 && *eax_170 != 0)
                                                                    char* eax_171 = sub_63d4e0(arg1)
                                                                    *(eax_171 + 4) += 1
                                                                
                                                                char* esi_27 = var_1c
                                                                char* eax_172 = &data_801800
                                                                int32_t var_18_55 = 0x10000000
                                                                
                                                                if (esi_27 != 0)
                                                                    eax_172 = esi_27
                                                                
                                                                sub_63d960(arg1, eax_172)
                                                                int32_t var_8_56 = 0x85
                                                                int32_t var_18_56 = 1
                                                                var_8_56.b = 0x87
                                                                
                                                                if (data_cf65bc != 0 && esi_27 != 0
                                                                        && *esi_27 != 0)
                                                                    char* eax_173 = sub_63d4e0(&var_1c)
                                                                    int32_t temp52_1 = *(eax_173 + 4)
                                                                    *(eax_173 + 4) -= 1
                                                                    
                                                                    if (temp52_1 == 1)
                                                                        sub_64c080(eax_173, 
                                                                            *(eax_173 + 0xc) + 0x10)
                                                                
                                                                var_8_56.b = 0x88
                                                                
                                                                if (data_cf65bc != 0)
                                                                    char* const eax_174 = var_14
                                                                    
                                                                    if (eax_174 != 0 && *eax_174 != 0)
                                                                        char* eax_175 = sub_63d4e0(&var_14)
                                                                        int32_t temp55_1 = *(eax_175 + 4)
                                                                        *(eax_175 + 4) -= 1
                                                                        
                                                                        if (temp55_1 == 1)
                                                                            sub_64c080(eax_175, 
                                                                                *(eax_175 + 0xc) + 0x10)
                                                                
                                                                int32_t var_8_57 = 0x89
                                                            else
                                                                sub_63d720(ecx_210, "zie")
                                                                var_8_1.b = 0x81
                                                                char* const esi_26 = var_14
                                                                *arg1 = esi_26
                                                                
                                                                if (esi_26 != 0 && *esi_26 != 0)
                                                                    char* eax_166 = sub_63d4e0(arg1)
                                                                    *(eax_166 + 4) += 1
                                                                
                                                                char* edi_26 = var_1c
                                                                char* eax_167 = &data_801800
                                                                int32_t var_18_53 = 0x8000000
                                                                
                                                                if (edi_26 != 0)
                                                                    eax_167 = edi_26
                                                                
                                                                sub_63d960(arg1, eax_167)
                                                                int32_t var_8_54 = 0x80
                                                                int32_t var_18_54 = 1
                                                                var_8_54.b = 0x82
                                                                
                                                                if (data_cf65bc != 0 && edi_26 != 0
                                                                        && *edi_26 != 0)
                                                                    char* eax_168 = sub_63d4e0(&var_1c)
                                                                    int32_t temp53_1 = *(eax_168 + 4)
                                                                    *(eax_168 + 4) -= 1
                                                                    
                                                                    if (temp53_1 == 1)
                                                                        sub_64c080(eax_168, 
                                                                            *(eax_168 + 0xc) + 0x10)
                                                                
                                                                var_8_54.b = 0x83
                                                                
                                                                if (data_cf65bc != 0 && esi_26 != 0
                                                                        && *esi_26 != 0)
                                                                    char* eax_169 = sub_63d4e0(&var_14)
                                                                    int32_t temp56_1 = *(eax_169 + 4)
                                                                    *(eax_169 + 4) -= 1
                                                                    
                                                                    if (temp56_1 == 1)
                                                                        sub_64c080(eax_169, 
                                                                            *(eax_169 + 0xc) + 0x10)
                                                                
                                                                int32_t var_8_55 = 0x84
                                                        else
                                                            sub_63d720(&var_1c, "sie")
                                                            var_8_1.b = 0x7c
                                                            char* const esi_25 = var_14
                                                            *arg1 = esi_25
                                                            
                                                            if (esi_25 != 0 && *esi_25 != 0)
                                                                char* eax_160 = sub_63d4e0(arg1)
                                                                *(eax_160 + 4) += 1
                                                            
                                                            char* edi_25 = var_1c
                                                            char* eax_161 = &data_801800
                                                            int32_t var_18_51 = 0x4000000
                                                            
                                                            if (edi_25 != 0)
                                                                eax_161 = edi_25
                                                            
                                                            sub_63d960(arg1, eax_161)
                                                            int32_t var_8_52 = 0x7b
                                                            int32_t var_18_52 = 1
                                                            var_8_52.b = 0x7d
                                                            
                                                            if (data_cf65bc != 0 && edi_25 != 0
                                                                    && *edi_25 != 0)
                                                                char* eax_162 = sub_63d4e0(&var_1c)
                                                                int32_t temp50_1 = *(eax_162 + 4)
                                                                *(eax_162 + 4) -= 1
                                                                
                                                                if (temp50_1 == 1)
                                                                    sub_64c080(eax_162, 
                                                                        *(eax_162 + 0xc) + 0x10)
                                                            
                                                            var_8_52.b = 0x7e
                                                            
                                                            if (data_cf65bc != 0 && esi_25 != 0
                                                                    && *esi_25 != 0)
                                                                char* eax_163 = sub_63d4e0(&var_14)
                                                                int32_t temp54_1 = *(eax_163 + 4)
                                                                *(eax_163 + 4) -= 1
                                                                
                                                                if (temp54_1 == 1)
                                                                    sub_64c080(eax_163, 
                                                                        *(eax_163 + 0xc) + 0x10)
                                                            
                                                            int32_t var_8_53 = 0x7f
                                                    else
                                                        sub_63d720(&var_1c, "nie")
                                                        var_8_1.b = 0x77
                                                        char* const esi_24 = var_14
                                                        *arg1 = esi_24
                                                        
                                                        if (esi_24 != 0 && *esi_24 != 0)
                                                            char* eax_154 = sub_63d4e0(arg1)
                                                            *(eax_154 + 4) += 1
                                                        
                                                        char* edi_24 = var_1c
                                                        char* eax_155 = &data_801800
                                                        int32_t var_18_49 = 0x2000000
                                                        
                                                        if (edi_24 != 0)
                                                            eax_155 = edi_24
                                                        
                                                        sub_63d960(arg1, eax_155)
                                                        int32_t var_8_50 = 0x76
                                                        int32_t var_18_50 = 1
                                                        var_8_50.b = 0x78
                                                        
                                                        if (data_cf65bc != 0 && edi_24 != 0
                                                                && *edi_24 != 0)
                                                            char* eax_156 = sub_63d4e0(&var_1c)
                                                            int32_t temp48_1 = *(eax_156 + 4)
                                                            *(eax_156 + 4) -= 1
                                                            
                                                            if (temp48_1 == 1)
                                                                sub_64c080(eax_156, 
                                                                    *(eax_156 + 0xc) + 0x10)
                                                        
                                                        var_8_50.b = 0x79
                                                        
                                                        if (data_cf65bc != 0 && esi_24 != 0
                                                                && *esi_24 != 0)
                                                            char* eax_157 = sub_63d4e0(&var_14)
                                                            int32_t temp51_1 = *(eax_157 + 4)
                                                            *(eax_157 + 4) -= 1
                                                            
                                                            if (temp51_1 == 1)
                                                                sub_64c080(eax_157, 
                                                                    *(eax_157 + 0xc) + 0x10)
                                                        
                                                        int32_t var_8_51 = 0x7a
                                                else
                                                    sub_63d720(&var_1c, "cie")
                                                    var_8_1.b = 0x72
                                                    char* const esi_23 = var_14
                                                    *arg1 = esi_23
                                                    
                                                    if (esi_23 != 0 && *esi_23 != 0)
                                                        char* eax_148 = sub_63d4e0(arg1)
                                                        *(eax_148 + 4) += 1
                                                    
                                                    char* edi_23 = var_1c
                                                    char* eax_149 = &data_801800
                                                    void* var_18_47 = &data_1000000
                                                    
                                                    if (edi_23 != 0)
                                                        eax_149 = edi_23
                                                    
                                                    sub_63d960(arg1, eax_149)
                                                    int32_t var_8_48 = 0x71
                                                    int32_t var_18_48 = 1
                                                    var_8_48.b = 0x73
                                                    
                                                    if (data_cf65bc != 0 && edi_23 != 0
                                                            && *edi_23 != 0)
                                                        char* eax_150 = sub_63d4e0(&var_1c)
                                                        int32_t temp46_1 = *(eax_150 + 4)
                                                        *(eax_150 + 4) -= 1
                                                        
                                                        if (temp46_1 == 1)
                                                            sub_64c080(eax_150, 
                                                                *(eax_150 + 0xc) + 0x10)
                                                    
                                                    var_8_48.b = 0x74
                                                    
                                                    if (data_cf65bc != 0 && esi_23 != 0
                                                            && *esi_23 != 0)
                                                        char* eax_151 = sub_63d4e0(&var_14)
                                                        int32_t temp49_1 = *(eax_151 + 4)
                                                        *(eax_151 + 4) -= 1
                                                        
                                                        if (temp49_1 == 1)
                                                            sub_64c080(eax_151, 
                                                                *(eax_151 + 0xc) + 0x10)
                                                    
                                                    int32_t var_8_49 = 0x75
                                            else
                                                sub_63d720(&var_1c, 0x878030)
                                                var_8_1.b = 0x6d
                                                char* const esi_22 = var_14
                                                *arg1 = esi_22
                                                
                                                if (esi_22 != 0 && *esi_22 != 0)
                                                    char* eax_142 = sub_63d4e0(arg1)
                                                    *(eax_142 + 4) += 1
                                                
                                                char* edi_22 = var_1c
                                                char* const eax_143 = &data_801800
                                                struct DOS_Header* const var_18_45 = &__dos_header
                                                
                                                if (edi_22 != 0)
                                                    eax_143 = edi_22
                                                
                                                sub_63d960(arg1, eax_143)
                                                int32_t var_8_46 = 0x6c
                                                int32_t var_18_46 = 1
                                                var_8_46.b = 0x6e
                                                
                                                if (data_cf65bc != 0 && edi_22 != 0 && *edi_22 != 0)
                                                    char* eax_144 = sub_63d4e0(&var_1c)
                                                    int32_t temp43_1 = *(eax_144 + 4)
                                                    *(eax_144 + 4) -= 1
                                                    
                                                    if (temp43_1 == 1)
                                                        sub_64c080(eax_144, *(eax_144 + 0xc) + 0x10)
                                                
                                                var_8_46.b = 0x6f
                                                
                                                if (data_cf65bc != 0 && esi_22 != 0 && *esi_22 != 0)
                                                    char* eax_145 = sub_63d4e0(&var_14)
                                                    int32_t temp47_1 = *(eax_145 + 4)
                                                    *(eax_145 + 4) -= 1
                                                    
                                                    if (temp47_1 == 1)
                                                        sub_64c080(eax_145, *(eax_145 + 0xc) + 0x10)
                                                
                                                int32_t var_8_47 = 0x70
                                        else
                                            sub_63d720(&var_1c, 0x878030)
                                            var_8_1.b = 0x68
                                            char* const esi_21 = var_14
                                            *arg1 = esi_21
                                            
                                            if (esi_21 != 0 && *esi_21 != 0)
                                                char* eax_136 = sub_63d4e0(arg1)
                                                *(eax_136 + 4) += 1
                                            
                                            char* edi_21 = var_1c
                                            char* const eax_137 = &data_801800
                                            int32_t var_18_43 = 0x80000
                                            
                                            if (edi_21 != 0)
                                                eax_137 = edi_21
                                            
                                            sub_63d960(arg1, eax_137)
                                            int32_t var_8_44 = 0x67
                                            int32_t var_18_44 = 1
                                            var_8_44.b = 0x69
                                            
                                            if (data_cf65bc != 0 && edi_21 != 0 && *edi_21 != 0)
                                                char* eax_138 = sub_63d4e0(&var_1c)
                                                int32_t temp39_1 = *(eax_138 + 4)
                                                *(eax_138 + 4) -= 1
                                                
                                                if (temp39_1 == 1)
                                                    sub_64c080(eax_138, *(eax_138 + 0xc) + 0x10)
                                            
                                            var_8_44.b = 0x6a
                                            
                                            if (data_cf65bc != 0 && esi_21 != 0 && *esi_21 != 0)
                                                char* eax_139 = sub_63d4e0(&var_14)
                                                int32_t temp44_1 = *(eax_139 + 4)
                                                *(eax_139 + 4) -= 1
                                                
                                                if (temp44_1 == 1)
                                                    sub_64c080(eax_139, *(eax_139 + 0xc) + 0x10)
                                            
                                            int32_t var_8_45 = 0x6b
                                    else
                                        sub_63d720(&var_1c, "cie")
                                        var_8_1.b = 0x63
                                        char* const esi_20 = var_14
                                        *arg1 = esi_20
                                        
                                        if (esi_20 != 0 && *esi_20 != 0)
                                            char* eax_130 = sub_63d4e0(arg1)
                                            *(eax_130 + 4) += 1
                                        
                                        char* edi_20 = var_1c
                                        char* const eax_131 = &data_801800
                                        int32_t var_18_41 = 0x40000
                                        
                                        if (edi_20 != 0)
                                            eax_131 = edi_20
                                        
                                        sub_63d960(arg1, eax_131)
                                        int32_t var_8_42 = 0x62
                                        int32_t var_18_42 = 1
                                        var_8_42.b = 0x64
                                        
                                        if (data_cf65bc != 0 && edi_20 != 0 && *edi_20 != 0)
                                            char* eax_132 = sub_63d4e0(&var_1c)
                                            int32_t temp35_1 = *(eax_132 + 4)
                                            *(eax_132 + 4) -= 1
                                            
                                            if (temp35_1 == 1)
                                                sub_64c080(eax_132, *(eax_132 + 0xc) + 0x10)
                                        
                                        var_8_42.b = 0x65
                                        
                                        if (data_cf65bc != 0 && esi_20 != 0 && *esi_20 != 0)
                                            char* eax_133 = sub_63d4e0(&var_14)
                                            int32_t temp40_1 = *(eax_133 + 4)
                                            *(eax_133 + 4) -= 1
                                            
                                            if (temp40_1 == 1)
                                                sub_64c080(eax_133, *(eax_133 + 0xc) + 0x10)
                                        
                                        int32_t var_8_43 = 0x66
                                else
                                    sub_63d720(&var_1c, "zhe")
                                    var_8_1.b = 0x5e
                                    char* const esi_19 = var_14
                                    *arg1 = esi_19
                                    
                                    if (esi_19 != 0 && *esi_19 != 0)
                                        char* eax_124 = sub_63d4e0(arg1)
                                        *(eax_124 + 4) += 1
                                    
                                    char* edi_19 = var_1c
                                    char* const eax_125 = &data_801800
                                    int32_t var_18_39 = 0x10000
                                    
                                    if (edi_19 != 0)
                                        eax_125 = edi_19
                                    
                                    sub_63d960(arg1, eax_125)
                                    int32_t var_8_40 = 0x5d
                                    int32_t var_18_40 = 1
                                    var_8_40.b = 0x5f
                                    
                                    if (data_cf65bc != 0 && edi_19 != 0 && *edi_19 != 0)
                                        char* eax_126 = sub_63d4e0(&var_1c)
                                        int32_t temp31_1 = *(eax_126 + 4)
                                        *(eax_126 + 4) -= 1
                                        
                                        if (temp31_1 == 1)
                                            sub_64c080(eax_126, *(eax_126 + 0xc) + 0x10)
                                    
                                    var_8_40.b = 0x60
                                    
                                    if (data_cf65bc != 0 && esi_19 != 0 && *esi_19 != 0)
                                        char* eax_127 = sub_63d4e0(&var_14)
                                        int32_t temp36_1 = *(eax_127 + 4)
                                        *(eax_127 + 4) -= 1
                                        
                                        if (temp36_1 == 1)
                                            sub_64c080(eax_127, *(eax_127 + 0xc) + 0x10)
                                    
                                    int32_t var_8_41 = 0x61
                            else
                                sub_63d720(&var_1c, 0x878030)
                                var_8_1.b = 0x59
                                char* const esi_18 = var_14
                                *arg1 = esi_18
                                
                                if (esi_18 != 0 && *esi_18 != 0)
                                    char* eax_118 = sub_63d4e0(arg1)
                                    *(eax_118 + 4) += 1
                                
                                char* edi_18 = var_1c
                                char* const eax_119 = &data_801800
                                int32_t var_18_37 = 0x4000
                                
                                if (edi_18 != 0)
                                    eax_119 = edi_18
                                
                                sub_63d960(arg1, eax_119)
                                int32_t var_8_38 = 0x58
                                int32_t var_18_38 = 1
                                var_8_38.b = 0x5a
                                
                                if (data_cf65bc != 0 && edi_18 != 0 && *edi_18 != 0)
                                    char* eax_120 = sub_63d4e0(&var_1c)
                                    int32_t temp27_1 = *(eax_120 + 4)
                                    *(eax_120 + 4) -= 1
                                    
                                    if (temp27_1 == 1)
                                        sub_64c080(eax_120, *(eax_120 + 0xc) + 0x10)
                                
                                var_8_38.b = 0x5b
                                
                                if (data_cf65bc != 0 && esi_18 != 0 && *esi_18 != 0)
                                    char* eax_121 = sub_63d4e0(&var_14)
                                    int32_t temp32_1 = *(eax_121 + 4)
                                    *(eax_121 + 4) -= 1
                                    
                                    if (temp32_1 == 1)
                                        sub_64c080(eax_121, *(eax_121 + 0xc) + 0x10)
                                
                                int32_t var_8_39 = 0x5c
                        else
                            sub_63d720(&var_1c, "le")
                            var_8_1.b = 0x54
                            char* const esi_17 = var_14
                            *arg1 = esi_17
                            
                            if (esi_17 != 0 && *esi_17 != 0)
                                char* eax_112 = sub_63d4e0(arg1)
                                *(eax_112 + 4) += 1
                            
                            char* edi_17 = var_1c
                            char* const eax_113 = &data_801800
                            int32_t var_18_35 = 0x1000
                            
                            if (edi_17 != 0)
                                eax_113 = edi_17
                            
                            sub_63d960(arg1, eax_113)
                            int32_t var_8_36 = 0x53
                            int32_t var_18_36 = 1
                            var_8_36.b = 0x55
                            
                            if (data_cf65bc != 0 && edi_17 != 0 && *edi_17 != 0)
                                char* eax_114 = sub_63d4e0(&var_1c)
                                int32_t temp23_1 = *(eax_114 + 4)
                                *(eax_114 + 4) -= 1
                                
                                if (temp23_1 == 1)
                                    sub_64c080(eax_114, *(eax_114 + 0xc) + 0x10)
                            
                            var_8_36.b = 0x56
                            
                            if (data_cf65bc != 0 && esi_17 != 0 && *esi_17 != 0)
                                char* eax_115 = sub_63d4e0(&var_14)
                                int32_t temp28_1 = *(eax_115 + 4)
                                *(eax_115 + 4) -= 1
                                
                                if (temp28_1 == 1)
                                    sub_64c080(eax_115, *(eax_115 + 0xc) + 0x10)
                            
                            int32_t var_8_37 = 0x57
                    else
                        sub_63d720(&var_1c, "je")
                        var_8_1.b = 0x4f
                        char* const esi_16 = var_14
                        *arg1 = esi_16
                        
                        if (esi_16 != 0 && *esi_16 != 0)
                            char* eax_106 = sub_63d4e0(arg1)
                            *(eax_106 + 4) += 1
                        
                        char* edi_16 = var_1c
                        char* const eax_107 = &data_801800
                        int32_t var_18_33 = 0x100
                        
                        if (edi_16 != 0)
                            eax_107 = edi_16
                        
                        sub_63d960(arg1, eax_107)
                        int32_t var_8_34 = 0x4e
                        int32_t var_18_34 = 1
                        var_8_34.b = 0x50
                        
                        if (data_cf65bc != 0 && edi_16 != 0 && *edi_16 != 0)
                            char* eax_108 = sub_63d4e0(&var_1c)
                            int32_t temp17_1 = *(eax_108 + 4)
                            *(eax_108 + 4) -= 1
                            
                            if (temp17_1 == 1)
                                sub_64c080(eax_108, *(eax_108 + 0xc) + 0x10)
                        
                        var_8_34.b = 0x51
                        
                        if (data_cf65bc != 0 && esi_16 != 0 && *esi_16 != 0)
                            char* eax_109 = sub_63d4e0(&var_14)
                            int32_t temp24_1 = *(eax_109 + 4)
                            *(eax_109 + 4) -= 1
                            
                            if (temp24_1 == 1)
                                sub_64c080(eax_109, *(eax_109 + 0xc) + 0x10)
                        
                        int32_t var_8_35 = 0x52
                else
                    sub_63d720(&var_1c, "ce")
                    var_8_1.b = 0x4a
                    char* const esi_15 = var_14
                    *arg1 = esi_15
                    
                    if (esi_15 != 0 && *esi_15 != 0)
                        char* eax_100 = sub_63d4e0(arg1)
                        *(eax_100 + 4) += 1
                    
                    char* edi_15 = var_1c
                    char* const eax_101 = &data_801800
                    int32_t var_18_31 = 0x40
                    
                    if (edi_15 != 0)
                        eax_101 = edi_15
                    
                    sub_63d960(arg1, eax_101)
                    int32_t var_8_32 = 0x49
                    int32_t var_18_32 = 1
                    var_8_32.b = 0x4b
                    
                    if (data_cf65bc != 0 && edi_15 != 0 && *edi_15 != 0)
                        char* eax_102 = sub_63d4e0(&var_1c)
                        int32_t temp10_1 = *(eax_102 + 4)
                        *(eax_102 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_64c080(eax_102, *(eax_102 + 0xc) + 0x10)
                    
                    var_8_32.b = 0x4c
                    
                    if (data_cf65bc != 0 && esi_15 != 0 && *esi_15 != 0)
                        char* eax_103 = sub_63d4e0(&var_14)
                        int32_t temp18_1 = *(eax_103 + 4)
                        *(eax_103 + 4) -= 1
                        
                        if (temp18_1 == 1)
                            sub_64c080(eax_103, *(eax_103 + 0xc) + 0x10)
                    
                    int32_t var_8_33 = 0x4d
            else
                sub_63d720(&var_1c, "gi")
                var_8_1.b = 0x45
                char* const esi_14 = var_14
                *arg1 = esi_14
                
                if (esi_14 != 0 && *esi_14 != 0)
                    char* eax_94 = sub_63d4e0(arg1)
                    *(eax_94 + 4) += 1
                
                char* edi_14 = var_1c
                char* const eax_95 = &data_801800
                int32_t var_18_29 = 0x10
                
                if (edi_14 != 0)
                    eax_95 = edi_14
                
                sub_63d960(arg1, eax_95)
                int32_t var_8_30 = 0x44
                int32_t var_18_30 = 1
                var_8_30.b = 0x46
                
                if (data_cf65bc != 0 && edi_14 != 0 && *edi_14 != 0)
                    char* eax_96 = sub_63d4e0(&var_1c)
                    int32_t temp6_1 = *(eax_96 + 4)
                    *(eax_96 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_96, *(eax_96 + 0xc) + 0x10)
                
                var_8_30.b = 0x47
                
                if (data_cf65bc != 0 && esi_14 != 0 && *esi_14 != 0)
                    char* eax_97 = sub_63d4e0(&var_14)
                    int32_t temp11_1 = *(eax_97 + 4)
                    *(eax_97 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_97, *(eax_97 + 0xc) + 0x10)
                
                int32_t var_8_31 = 0x48
        else
            sub_63d720(&var_1c, "ki")
            var_8_1.b = 0x40
            char* const esi_13 = var_14
            *arg1 = esi_13
            
            if (esi_13 != 0 && *esi_13 != 0)
                char* eax_88 = sub_63d4e0(arg1)
                *(eax_88 + 4) += 1
            
            char* edi_13 = var_1c
            char* const eax_89 = &data_801800
            int32_t var_18_27 = 2
            
            if (edi_13 != 0)
                eax_89 = edi_13
            
            sub_63d960(arg1, eax_89)
            int32_t var_8_28 = 0x3f
            int32_t var_18_28 = 1
            var_8_28.b = 0x41
            
            if (data_cf65bc != 0 && edi_13 != 0 && *edi_13 != 0)
                char* eax_90 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_90 + 4)
                *(eax_90 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_90, *(eax_90 + 0xc) + 0x10)
            
            var_8_28.b = 0x42
            
            if (data_cf65bc != 0 && esi_13 != 0 && *esi_13 != 0)
                char* eax_91 = sub_63d4e0(&var_14)
                int32_t temp7_1 = *(eax_91 + 4)
                *(eax_91 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
            
            int32_t var_8_29 = 0x43
    case 3
        if (sub_68cbb0(&var_14, "ka", &arg_4, &var_14) == 0)
            if (sub_68cbb0(&var_14, "ga", &arg_4, &var_14) == 0)
                if (sub_68cbb0(&var_14, "ca", &arg_4, &var_14) == 0)
                    if (sub_68cbb0(&var_14, "ea", &arg_4, &var_14) == 0)
                        if (sub_68cbb0(&var_14, "ia", &arg_4, &var_14) == 0)
                            if (sub_68cbb0(&var_14, "ja", &arg_4, &var_14) == 0)
                                if (sub_68cbb0(&var_14, "la", &arg_4, &var_14) == 0)
                                    if (sub_68cbb0(&var_14, 0x878038, &arg_4, &var_14) == 0)
                                        if (sub_68cbb0(&var_14, "zha", &arg_4, &var_14) == 0)
                                            if (sub_68cbb0(&var_14, U"a", &arg_4, &var_14) == 0)
                                                goto label_68ff52
                                            
                                            sub_63d720(&var_1c, U"yck")
                                            var_8_1.b = 0x31
                                            char* esi_9 = var_14
                                            *arg1 = esi_9
                                            
                                            if (esi_9 != 0 && *esi_9 != 0)
                                                char* eax_60 = sub_63d4e0(arg1)
                                                *(eax_60 + 4) += 1
                                            
                                            char* edi_10 = var_1c
                                            char* eax_61 = &data_801800
                                            int32_t var_18_19 = 0x800000
                                            
                                            if (edi_10 != 0)
                                                eax_61 = edi_10
                                            
                                            sub_63d960(arg1, eax_61)
                                            int32_t var_8_20 = 0x30
                                            int32_t var_18_20 = 1
                                            var_8_20.b = 0x32
                                            
                                            if (data_cf65bc != 0 && edi_10 != 0 && *edi_10 != 0)
                                                char* eax_62 = sub_63d4e0(&var_1c)
                                                int32_t temp41_1 = *(eax_62 + 4)
                                                *(eax_62 + 4) -= 1
                                                
                                                if (temp41_1 == 1)
                                                    sub_64c080(eax_62, *(eax_62 + 0xc) + 0x10)
                                            
                                            var_8_20.b = 0x33
                                            
                                            if (data_cf65bc != 0 && esi_9 != 0 && *esi_9 != 0)
                                                char* eax_63 = sub_63d4e0(&var_14)
                                                int32_t temp45_1 = *(eax_63 + 4)
                                                *(eax_63 + 4) -= 1
                                                
                                                if (temp45_1 == 1)
                                                    sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
                                            
                                            int32_t var_8_21 = 0x34
                                        else
                                            sub_63d720(&var_1c, "zhe")
                                            var_8_1.b = 0x2c
                                            char* esi_8 = var_14
                                            *arg1 = esi_8
                                            
                                            if (esi_8 != 0 && *esi_8 != 0)
                                                char* eax_54 = sub_63d4e0(arg1)
                                                *(eax_54 + 4) += 1
                                            
                                            char* edi_9 = var_1c
                                            char* eax_55 = &data_801800
                                            int32_t var_18_17 = 0x200000
                                            
                                            if (edi_9 != 0)
                                                eax_55 = edi_9
                                            
                                            sub_63d960(arg1, eax_55)
                                            int32_t var_8_18 = 0x2b
                                            int32_t var_18_18 = 1
                                            var_8_18.b = 0x2d
                                            
                                            if (data_cf65bc != 0 && edi_9 != 0 && *edi_9 != 0)
                                                char* eax_56 = sub_63d4e0(&var_1c)
                                                int32_t temp37_1 = *(eax_56 + 4)
                                                *(eax_56 + 4) -= 1
                                                
                                                if (temp37_1 == 1)
                                                    sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
                                            
                                            var_8_18.b = 0x2e
                                            
                                            if (data_cf65bc != 0 && esi_8 != 0 && *esi_8 != 0)
                                                char* eax_57 = sub_63d4e0(&var_14)
                                                int32_t temp42_1 = *(eax_57 + 4)
                                                *(eax_57 + 4) -= 1
                                                
                                                if (temp42_1 == 1)
                                                    sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                                            
                                            int32_t var_8_19 = 0x2f
                                    else
                                        sub_63d720(&var_1c, 0x878030)
                                        var_8_1.b = 0x27
                                        char* esi_7 = var_14
                                        *arg1 = esi_7
                                        
                                        if (esi_7 != 0 && *esi_7 != 0)
                                            char* eax_48 = sub_63d4e0(arg1)
                                            *(eax_48 + 4) += 1
                                        
                                        char* edi_8 = var_1c
                                        char* eax_49 = &data_801800
                                        int32_t var_18_15 = 0x100000
                                        
                                        if (edi_8 != 0)
                                            eax_49 = edi_8
                                        
                                        sub_63d960(arg1, eax_49)
                                        int32_t var_8_16 = 0x26
                                        int32_t var_18_16 = 1
                                        var_8_16.b = 0x28
                                        
                                        if (data_cf65bc != 0 && edi_8 != 0 && *edi_8 != 0)
                                            char* eax_50 = sub_63d4e0(&var_1c)
                                            int32_t temp33_1 = *(eax_50 + 4)
                                            *(eax_50 + 4) -= 1
                                            
                                            if (temp33_1 == 1)
                                                sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                                        
                                        var_8_16.b = 0x29
                                        
                                        if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
                                            char* eax_51 = sub_63d4e0(&var_14)
                                            int32_t temp38_1 = *(eax_51 + 4)
                                            *(eax_51 + 4) -= 1
                                            
                                            if (temp38_1 == 1)
                                                sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                                        
                                        int32_t var_8_17 = 0x2a
                                else
                                    sub_63d720(&var_1c, "le")
                                    var_8_1.b = 0x22
                                    char* esi_6 = var_14
                                    *arg1 = esi_6
                                    
                                    if (esi_6 != 0 && *esi_6 != 0)
                                        char* eax_42 = sub_63d4e0(arg1)
                                        *(eax_42 + 4) += 1
                                    
                                    char* edi_7 = var_1c
                                    char* eax_43 = &data_801800
                                    int32_t var_18_13 = 0x20000
                                    
                                    if (edi_7 != 0)
                                        eax_43 = edi_7
                                    
                                    sub_63d960(arg1, eax_43)
                                    int32_t var_8_14 = 0x21
                                    int32_t var_18_14 = 1
                                    var_8_14.b = 0x23
                                    
                                    if (data_cf65bc != 0 && edi_7 != 0 && *edi_7 != 0)
                                        char* eax_44 = sub_63d4e0(&var_1c)
                                        int32_t temp29_1 = *(eax_44 + 4)
                                        *(eax_44 + 4) -= 1
                                        
                                        if (temp29_1 == 1)
                                            sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                                    
                                    var_8_14.b = 0x24
                                    
                                    if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                                        char* eax_45 = sub_63d4e0(&var_14)
                                        int32_t temp34_1 = *(eax_45 + 4)
                                        *(eax_45 + 4) -= 1
                                        
                                        if (temp34_1 == 1)
                                            sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                                    
                                    int32_t var_8_15 = 0x25
                            else
                                sub_63d720(&var_1c, "je")
                                var_8_1.b = 0x1d
                                char* esi_5 = var_14
                                *arg1 = esi_5
                                
                                if (esi_5 != 0 && *esi_5 != 0)
                                    char* eax_36 = sub_63d4e0(arg1)
                                    *(eax_36 + 4) += 1
                                
                                char* edi_6 = var_1c
                                char* eax_37 = &data_801800
                                int32_t var_18_11 = 0x8000
                                
                                if (edi_6 != 0)
                                    eax_37 = edi_6
                                
                                sub_63d960(arg1, eax_37)
                                int32_t var_8_12 = 0x1c
                                int32_t var_18_12 = 1
                                var_8_12.b = 0x1e
                                
                                if (data_cf65bc != 0 && edi_6 != 0 && *edi_6 != 0)
                                    char* eax_38 = sub_63d4e0(&var_1c)
                                    int32_t temp25_1 = *(eax_38 + 4)
                                    *(eax_38 + 4) -= 1
                                    
                                    if (temp25_1 == 1)
                                        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                                
                                var_8_12.b = 0x1f
                                
                                if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                                    char* eax_39 = sub_63d4e0(&var_14)
                                    int32_t temp30_1 = *(eax_39 + 4)
                                    *(eax_39 + 4) -= 1
                                    
                                    if (temp30_1 == 1)
                                        sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                                
                                int32_t var_8_13 = 0x20
                        else
                            sub_63d720(&var_1c, "ie")
                            var_8_1.b = 0x18
                            char* esi_4 = var_14
                            *arg1 = esi_4
                            
                            if (esi_4 != 0 && *esi_4 != 0)
                                char* eax_30 = sub_63d4e0(arg1)
                                *(eax_30 + 4) += 1
                            
                            char* edi_5 = var_1c
                            char* eax_31 = &data_801800
                            int32_t var_18_9 = 0x2000
                            
                            if (edi_5 != 0)
                                eax_31 = edi_5
                            
                            sub_63d960(arg1, eax_31)
                            int32_t var_8_10 = 0x17
                            int32_t var_18_10 = 1
                            var_8_10.b = 0x19
                            
                            if (data_cf65bc != 0 && edi_5 != 0 && *edi_5 != 0)
                                char* eax_32 = sub_63d4e0(&var_1c)
                                int32_t temp19_1 = *(eax_32 + 4)
                                *(eax_32 + 4) -= 1
                                
                                if (temp19_1 == 1)
                                    sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                            
                            var_8_10.b = 0x1a
                            
                            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                                char* eax_33 = sub_63d4e0(&var_14)
                                int32_t temp26_1 = *(eax_33 + 4)
                                *(eax_33 + 4) -= 1
                                
                                if (temp26_1 == 1)
                                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                            
                            int32_t var_8_11 = 0x1b
                    else
                        sub_63d720(&var_1c, "ee")
                        var_8_1.b = 0x13
                        char* esi_3 = var_14
                        *arg1 = esi_3
                        
                        if (esi_3 != 0 && *esi_3 != 0)
                            char* eax_24 = sub_63d4e0(arg1)
                            *(eax_24 + 4) += 1
                        
                        char* edi_4 = var_1c
                        char* eax_25 = &data_801800
                        int32_t var_18_7 = 0x800
                        
                        if (edi_4 != 0)
                            eax_25 = edi_4
                        
                        sub_63d960(arg1, eax_25)
                        int32_t var_8_8 = 0x12
                        int32_t var_18_8 = 1
                        var_8_8.b = 0x14
                        
                        if (data_cf65bc != 0 && edi_4 != 0 && *edi_4 != 0)
                            char* eax_26 = sub_63d4e0(&var_1c)
                            int32_t temp12_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp12_1 == 1)
                                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        
                        var_8_8.b = 0x15
                        
                        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                            char* eax_27 = sub_63d4e0(&var_14)
                            int32_t temp20_1 = *(eax_27 + 4)
                            *(eax_27 + 4) -= 1
                            
                            if (temp20_1 == 1)
                                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                        
                        int32_t var_8_9 = 0x16
                else
                    sub_63d720(&var_1c, "ce")
                    var_8_1.b = 0xe
                    char* esi_2 = var_14
                    *arg1 = esi_2
                    
                    if (esi_2 != 0 && *esi_2 != 0)
                        char* eax_18 = sub_63d4e0(arg1)
                        *(eax_18 + 4) += 1
                    
                    char* edi_3 = var_1c
                    char* eax_19 = &data_801800
                    int32_t var_18_5 = 0x80
                    
                    if (edi_3 != 0)
                        eax_19 = edi_3
                    
                    sub_63d960(arg1, eax_19)
                    int32_t var_8_6 = 0xd
                    int32_t var_18_6 = 1
                    var_8_6.b = 0xf
                    
                    if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                        char* eax_20 = sub_63d4e0(&var_1c)
                        int32_t temp8_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                    
                    var_8_6.b = 0x10
                    
                    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                        char* eax_21 = sub_63d4e0(&var_14)
                        int32_t temp13_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    
                    int32_t var_8_7 = 0x11
            else
                sub_63d720(&var_1c, "gi")
                var_8_1.b = 9
                char* const esi_1 = var_14
                *arg1 = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_12 = sub_63d4e0(arg1)
                    *(eax_12 + 4) += 1
                
                char* edi_2 = var_1c
                char* eax_13 = &data_801800
                int32_t var_18_3 = 0x20
                
                if (edi_2 != 0)
                    eax_13 = edi_2
                
                sub_63d960(arg1, eax_13)
                int32_t var_8_4 = 8
                int32_t var_18_4 = 1
                var_8_4.b = 0xa
                
                if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                    char* eax_14 = sub_63d4e0(&var_1c)
                    int32_t temp3_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                
                var_8_4.b = 0xb
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_15 = sub_63d4e0(&var_14)
                    int32_t temp9_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                
                int32_t var_8_5 = 0xc
        else
            sub_63d720(&var_1c, "ki")
            var_8_1.b = 4
            char* const esi = var_14
            *arg1 = esi
            
            if (esi != 0 && *esi != 0)
                char* eax_6 = sub_63d4e0(arg1)
                *(eax_6 + 4) += 1
            
            char* edi_1 = var_1c
            char* eax_7 = &data_801800
            int32_t var_18_1 = 8
            
            if (edi_1 != 0)
                eax_7 = edi_1
            
            sub_63d960(arg1, eax_7)
            int32_t var_8_2 = 3
            int32_t var_18_2 = 1
            var_8_2.b = 5
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_8 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            
            var_8_2.b = 6
            
            if (data_cf65bc != 0 && esi != 0 && *esi != 0)
                char* eax_9 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            
            int32_t var_8_3 = 7
    case 4
        if (sub_68cbb0(&var_14, U"o", &arg_4, &var_14) != 0)
        label_690016:
            sub_63d720(&var_1c, U"a")
            var_8_1.b = 0x36
            char* const esi_12 = var_14
            *arg1 = esi_12
            
            if (esi_12 != 0 && *esi_12 != 0)
                char* eax_82 = sub_63d4e0(arg1)
                *(eax_82 + 4) += 1
            
            char* edi_12 = var_1c
            char* eax_83 = &data_801800
            int32_t var_18_25 = 4
            
            if (edi_12 != 0)
                eax_83 = edi_12
            
            sub_63d960(arg1, eax_83)
            int32_t var_8_26 = 0x35
            int32_t var_18_26 = 1
            var_8_26.b = 0x37
            
            if (data_cf65bc != 0 && edi_12 != 0 && *edi_12 != 0)
                char* eax_84 = sub_63d4e0(&var_1c)
                int32_t temp1_1 = *(eax_84 + 4)
                *(eax_84 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_84, *(eax_84 + 0xc) + 0x10)
            
            var_8_26.b = 0x38
            
            if (data_cf65bc != 0 && esi_12 != 0 && *esi_12 != 0)
                char* eax_85 = sub_63d4e0(&var_14)
                int32_t temp5_1 = *(eax_85 + 4)
                *(eax_85 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_85, *(eax_85 + 0xc) + 0x10)
            
            int32_t var_8_27 = 0x39
        else
            if (sub_68cbb0(&var_14, U"es", &arg_4, &var_14) != 0)
                goto label_690016
            
            if (sub_68cbb0(&var_14, "um", &arg_4, &var_14) != 0)
                goto label_690016
            
            if (sub_68cbb0(&var_14, 0x878048, &arg_4, &var_14) == 0)
            label_68ff52:
                sub_63d720(&var_1c, "_s")
                var_8_1.b = 0x8b
                char* eax_76 = arg_4
                *arg1 = eax_76
                
                if (eax_76 != 0 && *eax_76 != 0)
                    char* eax_77 = sub_63d4e0(arg1)
                    *(eax_77 + 4) += 1
                
                char* esi_11 = var_1c
                char* eax_78 = &data_801800
                int32_t var_18_23 = 0x200
                
                if (esi_11 != 0)
                    eax_78 = esi_11
                
                sub_63d960(arg1, eax_78)
                int32_t var_8_24 = 0x8a
                int32_t var_18_24 = 1
                var_8_24.b = 0x8c
                
                if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
                    char* eax_79 = sub_63d4e0(&var_1c)
                    int32_t temp15_1 = *(eax_79 + 4)
                    *(eax_79 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_79, *(eax_79 + 0xc) + 0x10)
                
                var_8_24.b = 0x8d
                
                if (data_cf65bc != 0)
                    char* const eax_80 = var_14
                    
                    if (eax_80 != 0 && *eax_80 != 0)
                        char* eax_81 = sub_63d4e0(&var_14)
                        int32_t temp21_1 = *(eax_81 + 4)
                        *(eax_81 + 4) -= 1
                        
                        if (temp21_1 == 1)
                            sub_64c080(eax_81, *(eax_81 + 0xc) + 0x10)
                
                int32_t var_8_25 = 0x8e
            else
                sub_63d720(&var_1c, "_s")
                var_8_1.b = 0x3b
                char* const esi_10 = var_14
                *arg1 = esi_10
                
                if (esi_10 != 0 && *esi_10 != 0)
                    char* eax_72 = sub_63d4e0(arg1)
                    *(eax_72 + 4) += 1
                
                char* edi_11 = var_1c
                char* eax_73 = &data_801800
                int32_t var_18_21 = 0x400
                
                if (edi_11 != 0)
                    eax_73 = edi_11
                
                sub_63d960(arg1, eax_73)
                int32_t var_8_22 = 0x3a
                int32_t var_18_22 = 1
                var_8_22.b = 0x3c
                
                if (data_cf65bc != 0 && edi_11 != 0 && *edi_11 != 0)
                    char* eax_74 = sub_63d4e0(&var_1c)
                    int32_t temp16_1 = *(eax_74 + 4)
                    *(eax_74 + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
                
                var_8_22.b = 0x3d
                
                if (data_cf65bc != 0 && esi_10 != 0 && *esi_10 != 0)
                    char* eax_75 = sub_63d4e0(&var_14)
                    int32_t temp22_1 = *(eax_75 + 4)
                    *(eax_75 + 4) -= 1
                    
                    if (temp22_1 == 1)
                        sub_64c080(eax_75, *(eax_75 + 0xc) + 0x10)
                
                int32_t var_8_23 = 0x3e

if (data_cf65bc != 0)
    char* eax_176 = arg_4
    
    if (eax_176 != 0 && *eax_176 != 0)
        char* eax_177 = sub_63d4e0(&arg_4)
        int32_t temp14_1 = *(eax_177 + 4)
        *(eax_177 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_64c080(eax_177, *(eax_177 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
