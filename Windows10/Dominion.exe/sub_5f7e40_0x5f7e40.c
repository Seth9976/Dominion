// 函数: sub_5f7e40
// 地址: 0x5f7e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a572
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_19c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
*(sub_64e7a0(edi) + 0x18bc) = sub_5f7120
uint32_t eax_4 = sub_64e7a0(edi)
sub_665db0(eax_4, &data_be47ec, eax_4, 0x3f800000, 0xffffffff, 0)
void* esi = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* var_d0 = esi
char eax_6 = sub_4b9d20()
int32_t var_b4[0x28]

if (*(esi + 0x71e8) == 0)
    int32_t eax_7 = sub_60f080(&var_b4)
    int32_t edi_1 = 0
    int32_t esi_1 = 0
    
    if (eax_7 s> 0)
        do
            int32_t edx_1 = 1
            
            for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
                if (var_b4[esi_1] == *i)
                    edi_1 |= edx_1
                    break
                
                i += 4
                edx_1 *= 2
            
            esi_1 += 1
        while (esi_1 s< eax_7)
    
    esi = var_d0
    *(esi + 0x71e8) = edi_1
    edi = arg1
    *(esi + 0x71ec) = 2

void* edx_2 = nullptr
int32_t var_148 = *(esi + 0x71e0)
uint32_t var_13c = zx.d(eax_6)
int32_t esi_2 = 0
int32_t var_138 = *(esi + 0x71ec)
int32_t* i_1 = &var_148
void** var_144 = &data_be46c8
void** var_140 = &data_be4698
void** var_134 = &data_be46d4
void** var_130 = &data_be4698
int32_t var_12c = 0
void* var_c4 = nullptr
int32_t* i_3 = &var_148
char const (* var_cc)[0x6]
char* const var_c0
char* const var_bc
int128_t var_128

do
    void var_18c
    bool cond:4_1 = *(&var_18c + esi_2) != "tbl_rules"
    var_128 = *i_1
    void var_190
    void var_188
    void var_184
    char* ecx_6
    void var_170
    
    if (cond:4_1 || *(&var_190 + esi_2) != edi || *(&var_188 + esi_2) != edx_2
        || *(&var_184 + esi_2) != 0)
    label_5f8020:
        ecx_6 = sub_67be20(edx_2)
        var_c0 = ecx_6
        *(&var_170 + esi_2) = ecx_6
        
        if (ecx_6 != 0)
            void* eax_16 = var_c4
            *(&var_18c + esi_2) = "tbl_rules"
            *(&var_190 + esi_2) = edi
            *(&var_188 + esi_2) = eax_16
            *(&var_184 + esi_2) = 0
        else
            var_c0 = ecx_6
    else
        ecx_6 = *(&var_170 + esi_2)
        var_c0 = ecx_6
        
        if (ecx_6 == 0)
            goto label_5f8020
        
        uint32_t eax_12 = zx.d(ecx_6.w)
        
        if (eax_12 u>= data_c23bac || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_6)
            goto label_5f8020
    uint32_t eax_17 = sub_64e7a0(ecx_6)
    sub_665db0(eax_17, var_128:4.d, eax_17, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_18 = sub_64e7a0(var_c0)
    sub_665db0(eax_18, var_128:8.d, eax_18, 0x3f800000, 0xffffffff, 0)
    void var_114
    char* ecx_11 = *(&var_114 + esi_2)
    bool cond:3_1 = var_128:0xc.d == 0
    var_bc = ecx_11
    int32_t edi_2
    void var_118
    void var_110
    void var_f8
    
    if (cond:3_1)
        char* edx_9 = (&data_be46f8)[var_128.d]
        char* const ecx_20 = var_c0
        var_cc = edx_9
        
        if (ecx_11 != edx_9 || *(&var_118 + esi_2) != ecx_20 || *(&var_110 + esi_2) != 0xffffffff)
        label_5f8335:
            edi_2 = sub_67bd70(ecx_20, edx_9)
            *(&var_f8 + esi_2) = edi_2
            
            if (edi_2 != 0)
                *(&var_114 + esi_2) = var_cc
                *(&var_118 + esi_2) = var_c0
                *(&var_110 + esi_2) = 0xffffffff
        else
            edi_2 = *(&var_f8 + esi_2)
            
            if (edi_2 == 0)
                goto label_5f8335
            
            uint32_t eax_40 = zx.d(edi_2.w)
            
            if (eax_40 u>= data_c23bac || *(eax_40 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
                goto label_5f8335
        
        var_cc = &data_be46e0
    else
        char const (* edx_6)[0x6] = data_be46f8
        char* const ecx_12 = var_c0
        var_cc = edx_6
        
        if (ecx_11 != edx_6 || *(&var_118 + esi_2) != ecx_12 || *(&var_110 + esi_2) != 0xffffffff)
        label_5f811f:
            edi_2 = sub_67bd70(ecx_12, edx_6)
            *(&var_f8 + esi_2) = edi_2
            
            if (edi_2 != 0)
                char* ecx_13 = var_cc
                char* const eax_24 = var_c0
                *(&var_114 + esi_2) = ecx_13
                *(&var_118 + esi_2) = eax_24
                *(&var_110 + esi_2) = 0xffffffff
                var_bc = ecx_13
            else
                var_bc = var_bc
        else
            edi_2 = *(&var_f8 + esi_2)
            
            if (edi_2 == 0)
                goto label_5f811f
            
            uint32_t eax_19 = zx.d(edi_2.w)
            
            if (eax_19 u>= data_c23bac || *(eax_19 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
                goto label_5f811f
        
        uint32_t eax_25 = sub_64e7a0(edi_2)
        sub_665db0(eax_25, &data_be46e0, eax_25, 0x3f800000, 0xffffffff, 0)
        char const (* edx_7)[0x6] = data_be46fc
        char* const ecx_16 = var_c0
        var_cc = edx_7
        uint32_t eax_26
        
        if (var_bc == edx_7 && *(&var_118 + esi_2) == ecx_16 && *(&var_110 + esi_2) == 0xffffffff
                && edi_2 != 0)
            eax_26 = zx.d(edi_2.w)
        
        if (var_bc != edx_7 || *(&var_118 + esi_2) != ecx_16 || *(&var_110 + esi_2) != 0xffffffff
                || edi_2 == 0 || eax_26 u>= data_c23bac
                || *(eax_26 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
            edi_2 = sub_67bd70(ecx_16, edx_7)
            *(&var_f8 + esi_2) = edi_2
            
            if (edi_2 != 0)
                *(&var_114 + esi_2) = var_cc
                *(&var_118 + esi_2) = var_c0
                *(&var_110 + esi_2) = 0xffffffff
        
        uint32_t eax_32 = sub_64e7a0(edi_2)
        sub_665db0(eax_32, &data_be46ec, eax_32, 0x3f800000, 0xffffffff, 0)
        char const (* edx_8)[0x6] = data_be4700
        char* const ecx_19 = var_c0
        var_cc = edx_8
        uint32_t eax_33
        
        if (*(&var_114 + esi_2) == edx_8 && *(&var_118 + esi_2) == ecx_19
                && *(&var_110 + esi_2) == 0xffffffff && edi_2 != 0)
            eax_33 = zx.d(edi_2.w)
        
        if (*(&var_114 + esi_2) != edx_8 || *(&var_118 + esi_2) != ecx_19
                || *(&var_110 + esi_2) != 0xffffffff || edi_2 == 0 || eax_33 u>= data_c23bac
                || *(eax_33 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
            edi_2 = sub_67bd70(ecx_19, edx_8)
            *(&var_f8 + esi_2) = edi_2
            
            if (edi_2 != 0)
                *(&var_114 + esi_2) = var_cc
                *(&var_118 + esi_2) = var_c0
                *(&var_110 + esi_2) = 0xffffffff
                var_cc = &data_be46ec
            else
                var_cc = &data_be46ec
        else
            var_cc = &data_be46ec
    uint32_t eax_46 = sub_64e7a0(edi_2)
    sub_665db0(eax_46, var_cc, eax_46, 0x3f800000, 0xffffffff, 0)
    i_1 = &i_3[4]
    edi = arg1
    edx_2 = var_c4 + 1
    var_c4 = edx_2
    esi_2 += 0x24
    i_3 = i_1
while (i_1 != &var_128)

if (*(var_d0 + 0x71ec) == 0)
    uint32_t eax_48 = sub_64e7a0(arg1)
    sub_665db0(eax_48, &data_be47a4, eax_48, 0x3f800000, 0xffffffff, 0)

if (*(var_d0 + 0x71ec) == 1)
    uint32_t eax_49 = sub_64e7a0(arg1)
    sub_665db0(eax_49, &data_be47b0, eax_49, 0x3f800000, 0xffffffff, 0)
    int32_t eax_50 = sub_60f080(&var_b4)
    
    if (*(var_d0 + 0x71ec) s> eax_50)
        uint32_t eax_51 = sub_64e7a0(arg1)
        sub_665db0(eax_51, &data_be47bc, eax_51, 0x3f800000, 0xffffffff, 0)

int32_t eax_52 = *(var_d0 + 0x71e0)
int32_t ecx_30 = 1
int32_t edi_4 = 4

if (eax_52 != 0)
    ecx_30 = 4

if (eax_52 == 0)
    edi_4 = 1

int32_t eax_53 = *(var_d0 + 0x71f0)

if (eax_53 == 0xffffffff)
    sub_4d47c0(&var_bc, "dom_ui_matchmaking_sets_owned")
    int32_t var_8_5 = 4
    int32_t var_1a0_5 = 0xffffffff
    sub_666380(&var_bc, &data_be47c8, arg1, &var_bc)
    sub_4d47c0(&var_c4, "dom_ui_matchmaking_sets_owned_short")
    var_8_5.b = 5
    int32_t var_1a8_3 = 0xffffffff
    sub_666380(&var_c4, &data_be47d4, arg1, &var_c4)
    uint32_t eax_76 = sub_64e7a0(arg1)
    sub_665db0(eax_76, &data_be4804, eax_76, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_77 = sub_64e7a0(arg1)
    sub_665db0(eax_77, &data_be47f8, eax_77, 0x3f800000, 0xffffffff, 0)
    var_8_5.b = 6
    
    if (data_cf65bc != 0)
        void* eax_78 = var_c4
        
        if (eax_78 != 0 && *eax_78 != 0)
            char* eax_79 = sub_63d4e0(&var_c4)
            int32_t temp1_1 = *(eax_79 + 4)
            *(eax_79 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_79, *(eax_79 + 0xc) + 0x10)
                var_c4 = &data_801800
    
    int32_t var_8_6 = 7
    
    if (data_cf65bc != 0)
        char* const eax_80 = var_bc
        
        if (eax_80 != 0 && *eax_80 != 0)
            char* eax_81 = sub_63d4e0(&var_bc)
            int32_t temp2_1 = *(eax_81 + 4)
            *(eax_81 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_81, *(eax_81 + 0xc) + 0x10)
                var_bc = &data_801800
else if (eax_53 == 0)
    sub_4d47c0(&var_c4, "dom_ui_matchmaking_sets_all")
    int32_t var_8_3 = 0
    int32_t var_1a0_4 = 0xffffffff
    sub_666380(&var_c4, &data_be47c8, arg1, &var_c4)
    sub_4d47c0(&var_bc, "dom_ui_matchmaking_sets_all_short")
    var_8_3.b = 1
    int32_t var_1a8_2 = 0xffffffff
    sub_666380(&var_bc, &data_be47d4, arg1, &var_bc)
    uint32_t eax_69 = sub_64e7a0(arg1)
    sub_665db0(eax_69, &data_be47f8, eax_69, 0x3f800000, 0xffffffff, 0)
    var_8_3.b = 2
    
    if (data_cf65bc != 0)
        char* const eax_70 = var_bc
        
        if (eax_70 != 0 && *eax_70 != 0)
            char* eax_71 = sub_63d4e0(&var_bc)
            int32_t temp3_1 = *(eax_71 + 4)
            *(eax_71 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                var_bc = &data_801800
    
    int32_t var_8_4 = 3
    
    if (data_cf65bc != 0)
        void* eax_72 = var_c4
        
        if (eax_72 != 0 && *eax_72 != 0)
            char* eax_73 = sub_63d4e0(&var_c4)
            int32_t temp4_1 = *(eax_73 + 4)
            *(eax_73 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_73, *(eax_73 + 0xc) + 0x10)
                var_c4 = &data_801800
else
    if (ecx_30 s> eax_53)
        eax_53 = ecx_30
    
    int32_t var_1a0_2 = eax_53
    *(var_d0 + 0x71f0) = eax_53
    sub_63df30(&var_bc, "%d")
    int32_t var_8_1 = 8
    sub_4d48c0(&var_bc, "dom_ui_matchmaking_sets_at_least_n", &var_cc, 0x801c54, &var_bc)
    var_8_1.b = 0xb
    
    if (data_cf65bc != 0)
        char* eax_55 = var_bc
        
        if (eax_55 != 0 && *eax_55 != 0)
            char* eax_56 = sub_63d4e0(&var_bc)
            int32_t temp5_1 = *(eax_56 + 4)
            *(eax_56 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
                var_bc = &data_801800
    
    var_8_1.b = 0xa
    int32_t var_1a0_3 = 0xffffffff
    sub_666380(&var_cc, &data_be47c8, arg1, &var_cc)
    int32_t var_1a8_1 = *(var_d0 + 0x71f0)
    sub_63df30(&var_c0, "%d")
    var_8_1.b = 0xc
    int32_t var_1b4_1 = 0xffffffff
    sub_666380(&var_c0, &data_be47d4, arg1, &var_c0)
    var_8_1.b = 0xd
    
    if (data_cf65bc != 0)
        char* eax_60 = var_c0
        
        if (eax_60 != 0 && *eax_60 != 0)
            char* eax_61 = sub_63d4e0(&var_c0)
            int32_t temp6_1 = *(eax_61 + 4)
            *(eax_61 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                var_c0 = &data_801800
    
    void* eax_63 = var_d0
    var_8_1.b = 0xa
    
    if (*(eax_63 + 0x71f0) s> edi_4)
        uint32_t eax_62 = sub_64e7a0(arg1)
        sub_665db0(eax_62, &data_be47f8, eax_62, 0x3f800000, 0xffffffff, 0)
        eax_63 = var_d0
    
    if (*(eax_63 + 0x71f0) s< 0x11)
        uint32_t eax_64 = sub_64e7a0(arg1)
        sub_665db0(eax_64, &data_be4804, eax_64, 0x3f800000, 0xffffffff, 0)
    
    int32_t var_8_2 = 0xe
    
    if (data_cf65bc != 0)
        char const (* eax_65)[0x6] = var_cc
        
        if (eax_65 != 0 && *eax_65 != 0)
            char* eax_66 = sub_63d4e0(&var_cc)
            int32_t temp7_1 = *(eax_66 + 4)
            *(eax_66 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                var_cc = &data_801800

void* edi_5 = nullptr
int32_t var_8_7 = 0xffffffff
int32_t ecx_66 = 1
char var_b5_1 = 0
int32_t esi_4 = *(var_d0 + 0x71e8)
int128_t* const i_2
int32_t edx_27

for (i_2 = &data_77fea0; i_2 != &data_77fee8; )
    edx_27 = *i_2
    
    if ((esi_4 & ecx_66) == 0)
        edx_27.b = var_b5_1
    else if (edx_27 != 0x13)
        var_b4[edi_5] = edx_27
        edi_5 += 1
        edx_27.b = var_b5_1
    else
        edx_27.b = 1
        var_b5_1 = 1
    
    i_2 += 4
    ecx_66 *= 2

var_c4 = edi_5

if (edx_27.b != 0)
    var_b4[edi_5] = 0x13
    edi_5 += 1
    var_c4 = edi_5

int32_t var_1a0_6 = 0xffffffff
uint32_t result = sub_666120(i_2, &data_be475c, arg1, edi_5)

if (edi_5 s<= 0xa)
    int32_t var_1a0_7 = 0xffffffff
    result = sub_666120(result, &data_be47e0, arg1, 1)

char* const esi_6 = nullptr
var_bc = nullptr

if (edi_5 s> 0)
    void* edi_6 = &data_1a93b0c
    
    do
        if (edi_6 s>= &data_1a940ac)
            sub_63b870(result, &data_801800, "i < MAX_DOM_EXPANSIONS", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x856f, 
                "DomMatchmakingSettingsUpdate")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t var_c8_2
        
        if (*edi_6 == "tbl_expansions" && *(edi_6 - 4) == arg1 && *(edi_6 + 4) == esi_6
                && *(edi_6 + 8) == 0)
            int32_t ecx_69 = *(edi_6 + 0x1c)
            var_c8_2 = ecx_69
            
            if (ecx_69 == 0)
                goto label_5f89bc
            
            uint32_t eax_83 = zx.d(ecx_69.w)
            
            if (eax_83 u>= data_c23bac || *(eax_83 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_69)
                goto label_5f89bc
            
            goto label_5f89fc
        
    label_5f89bc:
        int32_t eax_86 = sub_67be20(esi_6)
        var_c8_2 = eax_86
        *(edi_6 + 0x1c) = eax_86
        
        if (eax_86 != 0)
            *edi_6 = "tbl_expansions"
            *(edi_6 - 4) = arg1
            *(edi_6 + 4) = esi_6
            *(edi_6 + 8) = 0
        label_5f89fc:
            int32_t eax_88 = sub_5f8b10(var_b4[esi_6])
            uint32_t eax_89 = sub_64e7a0(var_c8_2)
            result = sub_665db0(eax_89, eax_88, eax_89, 0x3f800000, 0xffffffff, 0)
            esi_6 = var_bc
        else
            result = sub_5f8b10(var_b4[esi_6])
        
        esi_6 = &esi_6[1]
        edi_6 += 0x24
        var_bc = esi_6
    while (esi_6 s< var_c4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
