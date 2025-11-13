// 函数: sub_612a90
// 地址: 0x612a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b275
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_160 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_5cb070()

if (eax_3 != 0)
    uint32_t eax_4 = sub_64e7a0(arg1)
    sub_665db0(eax_4, &data_be5068, eax_4, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_7
    
    switch (*(eax_3 + 0x10))
        case 1, 6, 7, 0x16, 0x19, 0x1a
            eax_7 = sub_64e7a0(arg1)
            sub_665db0(eax_7, &data_be6218, eax_7, 0x3f800000, 0xffffffff, 0)
        case 0xc, 0x12
            eax_7 = sub_64e7a0(arg1)
            sub_665db0(eax_7, &data_be6224, eax_7, 0x3f800000, 0xffffffff, 0)
        case 0x13, 0x14
            eax_7 = sub_64e7a0(arg1)
            sub_665db0(eax_7, &data_be6230, eax_7, 0x3f800000, 0xffffffff, 0)

void* eax_8 = data_cc8d5c
char const* const var_16c_1
int32_t var_168_1
char const* const var_164_1
char* ecx_7

if (eax_8 == 0)
label_612b4b:
    var_164_1 = "GetClient"
    var_168_1 = 0x7b
    var_16c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_7 = "gClient"
label_61473b:
    sub_63b870(eax_8, &data_801800, ecx_7, var_16c_1, var_168_1, var_164_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (*(eax_8 + 0x5068) != 0)
    int32_t esi_1 = 0
    int32_t edi_1 = *sub_4b9480()
    uint32_t eax_13
    void* edx_2
    
    while (true)
        if (*(esi_1 + sub_61dad0() + 8) == edi_1)
            eax_13 = sub_64e7a0(arg1)
            edx_2 = &data_be67d4
            break
        
        esi_1 += 0xc
        
        if (esi_1 s>= 0x78)
            void* eax_12 = sub_611d90(sub_4b9480(), 0xb80ad8)
            eax_13 = sub_64e7a0(arg1)
            edx_2 = eax_12
            break
    
    sub_665db0(eax_13, edx_2, eax_13, 0x3f800000, 0xffffffff, 0)

void* eax_14 = sub_5cb070()

if (eax_14 != 0)
    uint32_t eax_15 = sub_64e7a0(arg1)
    sub_665db0(eax_15, eax_14, eax_15, 0x3f800000, 0xffffffff, 0)
    
    if ((*(eax_14 + 0xa0) & 1) != 0)
        uint32_t eax_16 = sub_64e7a0(arg1)
        sub_665db0(eax_16, &data_be6588, eax_16, 0x3f800000, 0xffffffff, 0)

if (data_ccf768 != 0)
    uint32_t eax_17 = sub_64e7a0(arg1)
    sub_665db0(eax_17, &data_be65ac, eax_17, 0x3f800000, 0xffffffff, 0)

eax_8 = data_cc8dc0

if (eax_8 == 0)
    var_164_1 = "GetLocalSettings"
    var_168_1 = 0x5fb
    var_16c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_7 = "gGameSettings.localSettings"
    goto label_61473b

if (*(eax_8 + 0x38) != 0 && sub_5cb070() == 0)
    uint32_t eax_19 = sub_64e7a0(arg1)
    sub_665db0(eax_19, &data_be66f0, eax_19, 0x3f800000, 0xffffffff, 0)
    int32_t eax_20 = sub_4bb9f0(0x1a962f0, arg1, "tbl_logEntries")
    
    if (eax_20 != 0)
        sub_62a3a0(eax_20)
    
    if (data_1724a4c != 0)
        uint32_t eax_21 = sub_64e7a0(arg1)
        sub_665db0(eax_21, &data_be66fc, eax_21, 0x3f800000, 0xffffffff, 0)

uint32_t eax_22 = sub_64e7a0(arg1)
sub_665db0(eax_22, &data_cadf48, eax_22, 0x3f800000, 0xffffffff, 0)
*(sub_64e7a0(arg1) + 0x18bc) = sub_600c70
sub_612890(arg1)

if (data_b809a8 != 0)
    uint32_t eax_24 = sub_64e7a0(arg1)
    sub_665db0(eax_24, &data_be6600, eax_24, 0x3f800000, 0xffffffff, 0)

uint32_t eax_27

switch (data_b809a4 - 1)
    case 0
        eax_27 = sub_64e7a0(arg1)
        sub_665db0(eax_27, &data_be65b8, eax_27, 0x3f800000, 0xffffffff, 0)
    case 1
        uint32_t eax_28 = sub_64e7a0(arg1)
        sub_665db0(eax_28, &data_be65c4, eax_28, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_29 = sub_64e7a0(arg1)
        sub_665db0(eax_29, &data_be65d0, eax_29, 0x3f800000, 0xffffffff, 0)
    case 2
        uint32_t eax_30 = sub_64e7a0(arg1)
        sub_665db0(eax_30, &data_be65c4, eax_30, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_31 = sub_64e7a0(arg1)
        sub_665db0(eax_31, &data_be65dc, eax_31, 0x3f800000, 0xffffffff, 0)
    case 3
        eax_27 = sub_64e7a0(arg1)
        sub_665db0(eax_27, &data_be65f4, eax_27, 0x3f800000, 0xffffffff, 0)
    case 4
        eax_27 = sub_64e7a0(arg1)
        sub_665db0(eax_27, &data_be65e8, eax_27, 0x3f800000, 0xffffffff, 0)

int32_t edi_2 = 0xa
void* eax_32 = &data_b821cc

while (*eax_32 != 0)
    eax_32 += 0x10
    edi_2 += 1
    
    if (eax_32 s> 0xb8220c)
        break

int32_t ecx_41 = 0
void* eax_33 = &data_b8221c

while (*eax_33 != 0)
    eax_33 += 0x10
    ecx_41 += 1
    
    if (eax_33 s> 0xb8225c)
        break

int32_t esi_4 = 0
void* eax_34 = &data_b8227c

while (*(eax_34 - 0x10) != 0)
    if (*eax_34 == 0)
        esi_4 += 1
        break
    
    if (*(eax_34 + 0x10) == 0)
        esi_4 += 2
        break
    
    eax_34 += 0x30
    esi_4 += 3
    
    if (eax_34 s> 0xb8247c)
        break

bool cond:0_1 = sub_4aec30() != 0
eax_8 = data_cc8dc0
bool var_1c = cond:0_1

if (eax_8 == 0)
    var_164_1 = "GetLocalSettings"
    var_168_1 = 0x5fb
    var_16c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_7 = "gGameSettings.localSettings"
    goto label_61473b

char var_20

if (*(eax_8 + 0x38) == 0)
    var_20 = 0
else
    eax_8 = sub_5cb070()
    var_20 = 1
    
    if (eax_8 != 0)
        var_20 = 0

sub_5d3410(arg1, sub_5d2120(eax_8, ecx_41, edi_2, esi_4, (var_1c.d).b, (var_20.d).b))
void** esi_5 = &data_8dc8a0

if (sub_4aebd0() != 0)
    esi_5 = &data_8dc8ac

uint32_t eax_38 = sub_64e7a0(arg1)
sub_665db0(eax_38, esi_5, eax_38, 0x3f800000, 0xffffffff, 0)
eax_8 = sub_4aec30()
void* var_2c_2 = eax_8

if (eax_8 u> 3)
    var_164_1 = "GameSpecific_MainLayoutUpdate"
    var_168_1 = 0xbf0d
    ecx_7 = "Halt"
else
    uint32_t eax_39
    
    switch (eax_8)
        case nullptr
            eax_39 = sub_64e7a0(arg1)
            sub_665db0(eax_39, &data_be4fa8, eax_39, 0x3f800000, 0xffffffff, 0)
        case 1
            eax_39 = sub_64e7a0(arg1)
            sub_665db0(eax_39, &data_be4f9c, eax_39, 0x3f800000, 0xffffffff, 0)
        case 2
            eax_39 = sub_64e7a0(arg1)
            sub_665db0(eax_39, &data_be4fb4, eax_39, 0x3f800000, 0xffffffff, 0)
    
    sub_605770(arg1)
    sub_6053f0(arg1)
    sub_611470(arg1)
    eax_8 = data_cc8d5c
    
    if (eax_8 == 0)
        goto label_612b4b
    
    if (*(eax_8 + 0x5068) != 0)
        int32_t eax_40 = sub_5da0c0(0xbdfb60)
        
        if (eax_40 == 0)
            uint32_t eax_43 = sub_64e7a0(arg1)
            sub_665db0(eax_43, &data_be65a0, eax_43, 0x3f800000, 0xffffffff, 0)
        label_612ff7:
            int32_t ecx_55 = data_b604e0
            
            if (ecx_55 == 0xffffffff)
                ecx_55 = 0
            
            void* eax_44 = sub_5d10b0(ecx_55, 0x3ea)
            int32_t ecx_56 = data_b604e0
            void* esi_6 = eax_44
            
            if (ecx_56 == 0xffffffff)
                ecx_56 = 0
            
            void* eax_45 = sub_5cddc0(ecx_56)
            
            if (eax_45.b != 0)
                esi_6 = 1
            else if (esi_6 s< 1)
                esi_6 = 1
            
            int32_t var_164_3 = 0xffffffff
            void* eax_46 = sub_666120(eax_45, &data_be5014, arg1, esi_6)
            int32_t esi_7 = data_b809cc
            void* eax_47 = sub_5cc410(eax_46, esi_7, 0x3e9, 0, 0)
            int32_t eax_48
            
            if (eax_47 == 0)
                eax_48 = 0
            else
                eax_48 = *(eax_47 + 0x88)
            
            int32_t var_164_4 = 0xffffffff
            
            if (eax_48 s< 1)
                eax_48 = 1
            
            sub_666120(eax_48, &data_be505c, arg1, eax_48)
            char* const var_18
            
            if (esi_7 == 0xffffffff)
                int32_t var_164_9 = 0
                sub_63df30(&var_18, "%d")
                int32_t var_8_13 = 8
                int32_t var_170_5 = 0xffffffff
                sub_666380(&var_18, &data_be4da4, arg1, &var_18)
                int32_t var_8_14 = 9
                
                if (data_cf65bc != 0)
                    char* const eax_65 = var_18
                    
                    if (eax_65 != 0 && *eax_65 != 0)
                        char* eax_66 = sub_63d4e0(&var_18)
                        int32_t temp3_1 = *(eax_66 + 4)
                        *(eax_66 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_164_10 = 0
                int32_t var_8_15 = 0xffffffff
                sub_63df30(&var_18, "%d")
                int32_t var_8_16 = 0xa
                int32_t var_170_6 = 0xffffffff
                sub_666380(&var_18, &data_be4db0, arg1, &var_18)
                int32_t var_8_17 = 0xb
                
                if (data_cf65bc != 0)
                    char* const eax_68 = var_18
                    
                    if (eax_68 != 0 && *eax_68 != 0)
                        char* eax_69 = sub_63d4e0(&var_18)
                        int32_t temp5_1 = *(eax_69 + 4)
                        *(eax_69 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_69, *(eax_69 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_164_11 = 0
                int32_t var_8_18 = 0xffffffff
                sub_63df30(&var_18, "%d")
                int32_t var_8_19 = 0xc
                int32_t var_170_7 = 0xffffffff
                sub_666380(&var_18, &data_be4d98, arg1, &var_18)
                int32_t var_8_20 = 0xd
                
                if (data_cf65bc != 0)
                    char* const eax_71 = var_18
                    
                    if (eax_71 != 0 && *eax_71 != 0)
                        char* eax_72 = sub_63d4e0(&var_18)
                        int32_t temp7_1 = *(eax_72 + 4)
                        *(eax_72 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_72, *(eax_72 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_21 = 0xffffffff
            else
                int32_t* eax_49 = sub_5cc5e0(esi_7)
                int32_t var_164_5 = *eax_49
                int32_t edi_3 = eax_49[3]
                var_1c.d = eax_49[1]
                int32_t ecx_61 = eax_49[2]
                sub_63df30(&var_18, "%d")
                int32_t var_8_1 = 0
                int32_t var_170_1 = 0xffffffff
                sub_666380(&var_18, &data_be4da4, arg1, &var_18)
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    char* eax_51 = var_18
                    
                    if (eax_51 != 0 && *eax_51 != 0)
                        char* eax_52 = sub_63d4e0(&var_18)
                        int32_t temp4_1 = *(eax_52 + 4)
                        *(eax_52 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_3 = 0xffffffff
                int32_t var_164_6 = var_1c.d
                sub_63df30(&var_18, "%d")
                int32_t var_8_4 = 2
                int32_t var_170_2 = 0xffffffff
                sub_666380(&var_18, &data_be4db0, arg1, &var_18)
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0)
                    char* const eax_54 = var_18
                    
                    if (eax_54 != 0 && *eax_54 != 0)
                        char* eax_55 = sub_63d4e0(&var_18)
                        int32_t temp6_1 = *(eax_55 + 4)
                        *(eax_55 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_164_7 = ecx_61
                int32_t var_8_6 = 0xffffffff
                sub_63df30(&var_18, "%d")
                int32_t var_8_7 = 4
                int32_t var_170_3 = 0xffffffff
                sub_666380(&var_18, &data_be4d98, arg1, &var_18)
                int32_t var_8_8 = 5
                
                if (data_cf65bc != 0)
                    char* const eax_57 = var_18
                    
                    if (eax_57 != 0 && *eax_57 != 0)
                        char* eax_58 = sub_63d4e0(&var_18)
                        int32_t temp8_1 = *(eax_58 + 4)
                        *(eax_58 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_164_8 = edi_3
                int32_t var_8_9 = 0xffffffff
                sub_63df30(&var_18, "%d")
                int32_t var_8_10 = 6
                int32_t var_170_4 = 0xffffffff
                sub_666380(&var_18, &data_be4dbc, arg1, &var_18)
                int32_t var_8_11 = 7
                
                if (data_cf65bc != 0)
                    char* const eax_60 = var_18
                    
                    if (eax_60 != 0 && *eax_60 != 0)
                        char* eax_61 = sub_63d4e0(&var_18)
                        int32_t temp9_1 = *(eax_61 + 4)
                        *(eax_61 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_12 = 0xffffffff
                
                if (edi_3 s> 0)
                    uint32_t eax_62 = sub_64e7a0(arg1)
                    sub_665db0(eax_62, &data_be4dc8, eax_62, 0x3f800000, 0xffffffff, 0)
                
                int32_t eax_63 = sub_4bb9f0(0x1a96314, arg1, "grpTurnResources")
                
                if (eax_63 != 0)
                    sub_5d8950(eax_63, esi_7)
            
            int32_t ecx_86 = data_b604e0
            
            if (ecx_86 == 0xffffffff)
                ecx_86 = 0
            
            void* eax_73 = sub_5cc5e0(ecx_86)
            int32_t eax_74 = sub_4bb9f0(0x1a96338, arg1, "grp_player_color")
            
            if (eax_74 != 0)
                int32_t edx_25 = data_b604e0
                
                if (edx_25 == 0xffffffff)
                    edx_25 = 0
                
                sub_5d8950(eax_74, edx_25)
            
            int32_t* eax_75 = sub_4b9480()
            int32_t edx_26 = data_b604e0
            
            if (edx_26 == 0xffffffff)
                edx_26 = 0
            
            char* var_24
            
            if (sub_4c3550(eax_75, edx_26, eax_75, &var_1c, &var_24) != 0)
                uint32_t eax_77 = sub_64e7a0(arg1)
                sub_665db0(eax_77, &data_be4de0, eax_77, 0x3f800000, 0xffffffff, 0)
            
            int32_t var_164_13 = *(eax_73 + 0x24)
            sub_63df30(&var_18, "%d")
            int32_t var_8_22 = 0xe
            int32_t var_170_8 = 0xffffffff
            sub_666380(&var_18, &data_be4dd4, arg1, &var_18)
            int32_t var_8_23 = 0xf
            
            if (data_cf65bc != 0)
                char* const eax_79 = var_18
                
                if (eax_79 != 0 && *eax_79 != 0)
                    char* eax_80 = sub_63d4e0(&var_18)
                    int32_t temp10_1 = *(eax_80 + 4)
                    *(eax_80 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_24 = 0xffffffff
            int32_t edx_29 = 0
            void* i = data_b809e0
            
            for (void* ecx_95 = data_b809e4 * 0x1c30 + i; i u< ecx_95; i += 0x1c30)
                if ((*(i + 0x1c28) & 0xffff0000) != 0)
                    while (i != 0xffffffff)
                        if (*(i + 0x2c) == 0 && *(i + 0xa4) == 2)
                            edx_29 += 1
                        
                        i += 0x1c30
                        
                        if (i u>= ecx_95)
                            break
                        
                        while ((*(i + 0x1c28) & 0xffff0000) == 0)
                            i += 0x1c30
                            
                            if (i u>= ecx_95)
                                goto label_61357c
                    
                    break
            
        label_61357c:
            int32_t var_164_14 = edx_29
            sub_63df30(&var_18, "%d")
            int32_t var_8_25 = 0x10
            int32_t var_170_9 = 0xffffffff
            sub_666380(&var_18, &data_be5074, arg1, &var_18)
            int32_t var_8_26 = 0x11
            
            if (data_cf65bc != 0)
                char* const eax_82 = var_18
                
                if (eax_82 != 0 && *eax_82 != 0)
                    char* eax_83 = sub_63d4e0(&var_18)
                    int32_t temp11_1 = *(eax_83 + 4)
                    *(eax_83 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_83, *(eax_83 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_27 = 0xffffffff
            
            if (sub_5d20c0() s> 8)
                uint32_t eax_85 = sub_64e7a0(arg1)
                sub_665db0(eax_85, &data_be6540, eax_85, 0x3f800000, 0xffffffff, 0)
            
            if (sub_612750() != 0)
                int32_t eax_87 = sub_4bb9f0(0x1a9635c, arg1, "btn_trash")
                
                if (eax_87 != 0)
                    uint32_t eax_88 = sub_64e7a0(eax_87)
                    sub_665db0(eax_88, &data_be31e4, eax_88, 0x3f800000, 0xffffffff, 0)
            
            if (sub_612810() != 0)
                int32_t eax_90 = sub_4bb9f0(0x1a96380, arg1, "grp_discard")
                
                if (eax_90 != 0)
                    uint32_t eax_91 = sub_64e7a0(eax_90)
                    sub_665db0(eax_91, &data_be31e4, eax_91, 0x3f800000, 0xffffffff, 0)
            
            if (sub_6127b0() != 0)
                int32_t eax_93 = sub_4bb9f0(0x1a963a4, arg1, "btn_deck")
                
                if (eax_93 != 0)
                    uint32_t eax_94 = sub_64e7a0(eax_93)
                    sub_665db0(eax_94, &data_be31e4, eax_94, 0x3f800000, 0xffffffff, 0)
            
            int32_t eax_95 = sub_4bb9f0(0x1a963c8, arg1, "img_playerAvatar")
            
            if (eax_95 != 0)
                int32_t* eax_96 = sub_4b9480()
                int32_t edx_32 = data_b604e0
                
                if (edx_32 == 0xffffffff)
                    edx_32 = 0
                
                void* eax_97 = sub_4b9680(&eax_96[2], edx_32)
                sub_4b06c0(eax_97, &eax_96[2], &var_20, eax_97, &var_1c)
                int32_t var_8_28 = 0x12
                void* eax_98 = sub_624450(var_1c.d)
                uint32_t eax_99 = sub_64e7a0(eax_95)
                sub_665db0(eax_99, eax_98, eax_99, 0x3f800000, 0xffffffff, 0)
                int32_t var_8_29 = 0x13
                
                if (data_cf65bc != 0)
                    char* eax_100 = var_20.d
                    
                    if (eax_100 != 0 && *eax_100 != 0)
                        char* eax_101 = sub_63d4e0(&var_20)
                        int32_t temp12_1 = *(eax_101 + 4)
                        *(eax_101 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            sub_64c080(eax_101, *(eax_101 + 0xc) + 0x10)
                            var_20.d = &data_801800
                
                int32_t var_8_30 = 0xffffffff
            
            int32_t ecx_114 = data_b604e0
            
            if (ecx_114 == 0xffffffff)
                ecx_114 = 0
            
            int32_t eax_102 = sub_5d1210(0, 0x3eb, ecx_114, 0, 0)
            int32_t ecx_115 = data_b604e0
            
            if (ecx_115 == 0xffffffff)
                ecx_115 = 0
            
            int32_t eax_103 = sub_5d1210(0, 0x3ec, ecx_115, 0, 0)
            int32_t var_174_10 = eax_102
            sub_63df30(&var_18, "%d")
            int32_t var_8_31 = 0x14
            int32_t var_180_1 = 0xffffffff
            sub_666380(&var_18, &data_be4dec, arg1, &var_18)
            int32_t var_8_32 = 0x15
            
            if (data_cf65bc != 0)
                char* const eax_105 = var_18
                
                if (eax_105 != 0 && *eax_105 != 0)
                    char* eax_106 = sub_63d4e0(&var_18)
                    int32_t temp13_1 = *(eax_106 + 4)
                    *(eax_106 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_64c080(eax_106, *(eax_106 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_164_16 = eax_103
            int32_t var_8_33 = 0xffffffff
            sub_63df30(&var_18, "%d")
            int32_t var_8_34 = 0x16
            int32_t var_170_10 = 0xffffffff
            sub_666380(&var_18, &data_be4df8, arg1, &var_18)
            int32_t var_8_35 = 0x17
            
            if (data_cf65bc != 0)
                char* const eax_108 = var_18
                
                if (eax_108 != 0 && *eax_108 != 0)
                    char* eax_109 = sub_63d4e0(&var_18)
                    int32_t temp14_1 = *(eax_109 + 4)
                    *(eax_109 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_109, *(eax_109 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_36 = 0xffffffff
            int32_t eax_110 = sub_4bb9f0(0x1a963ec, arg1, "grp_discard")
            var_1c.d = eax_110
            void** esi_12 = &data_be4ca8
            
            if (eax_110 != 0)
                data_b604e0
                void** edi_6
                
                if (sub_5cc500() != 0)
                    edi_6 = &data_be4c78
                else if (eax_103 == 0)
                    edi_6 = &data_be4c84
                else if (eax_103 == 1)
                    edi_6 = &data_be4c78
                else if (eax_103 - 1 u<= 3)
                    edi_6 = &data_be4c90
                else if (eax_103 - 5 u> 5)
                    edi_6 = &data_be4ca8
                    
                    if (eax_103 - 0xb u> 5)
                        edi_6 = &data_be4cb4
                else
                    edi_6 = &data_be4c9c
                
                uint32_t eax_115 = sub_64e7a0(var_1c.d)
                sub_665db0(eax_115, edi_6, eax_115, 0x3f800000, 0xffffffff, 0)
            
            int32_t eax_116 = sub_4bb9f0(0x1a96410, arg1, "btn_deck")
            
            if (eax_116 != 0)
                data_b604e0
                
                if (sub_5cc500() != 0)
                    esi_12 = &data_be4c78
                else if (eax_102 == 0)
                    esi_12 = &data_be4c84
                else if (eax_102 == 1)
                    esi_12 = &data_be4c78
                else if (eax_102 - 1 u<= 3)
                    esi_12 = &data_be4c90
                else if (eax_102 - 5 u<= 5)
                    esi_12 = &data_be4c9c
                else if (eax_102 - 0xb u> 5)
                    esi_12 = &data_be4cb4
                
                uint32_t eax_121 = sub_64e7a0(eax_116)
                sub_665db0(eax_121, esi_12, eax_121, 0x3f800000, 0xffffffff, 0)
            
            int32_t ecx_129 = data_b604e0
            
            if (ecx_129 == 0xffffffff)
                ecx_129 = 0
            
            if (sub_611f30(ecx_129) != 0)
                uint32_t eax_123 = sub_64e7a0(arg1)
                sub_665db0(eax_123, &data_be4ef4, eax_123, 0x3f800000, 0xffffffff, 0)
            
            void var_150
            eax_8 = sub_5f0fa0(&var_150)
            int32_t var_c0[0xc]
            __builtin_memcpy(&var_c0, eax_8, 0x90)
            void* esi_14 = data_cc8d5c
            
            if (esi_14 == 0)
                goto label_612b4b
            
            int32_t eax_124 = *(esi_14 + 0x5068)
            
            if (eax_124 == 1)
            label_613a97:
                int32_t var_28
                eax_8 = sub_4c5510(&var_28)
                
                if (eax_8.b != 0)
                    uint32_t eax_126 = sub_64e7a0(arg1)
                    eax_8 = sub_665db0(eax_126, &data_be5080, eax_126, 0x3f800000, 0xffffffff, 0)
                    
                    if (var_28 == 1)
                        uint32_t eax_127 = sub_64e7a0(arg1)
                        eax_8 =
                            sub_665db0(eax_127, &data_be508c, eax_127, 0x3f800000, 0xffffffff, 0)
                
                esi_14 = data_cc8d5c
            else
                eax_8 = eax_124 - 2
                
                if (eax_124 == 2)
                    eax_8 = sub_4b9480()
                    
                    if (*(eax_8 + 0x28) == 5)
                        esi_14 = data_cc8d5c
                    else
                        esi_14 = data_cc8d5c
                        
                        if (esi_14 == 0)
                            goto label_612b4b
                        
                        eax_8 = data_b80b48
                        
                        if (eax_8 != *(esi_14 + 0x7590))
                            goto label_613a97
            
            int32_t edi_8 = 0
            void* i_1 = data_b809e0
            
            for (void* edx_48 = data_b809e4 * 0x1c30 + i_1; i_1 u< edx_48; i_1 += 0x1c30)
                if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                    while (i_1 != 0xffffffff)
                        if (*(i_1 + 0x2c) == 5)
                            eax_8 = data_b604e0
                            var_1c.d = 0
                            
                            if (eax_8 == 0xffffffff)
                                eax_8 = var_1c.d
                            
                            if (*(i_1 + 0x1f0) == eax_8 && *(i_1 + 0x21c) != 0)
                                edi_8 += 1
                        
                        i_1 += 0x1c30
                        
                        if (i_1 u>= edx_48)
                            break
                        
                        while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                            i_1 += 0x1c30
                            
                            if (i_1 u>= edx_48)
                                goto label_613b8d
                    
                    break
            
        label_613b8d:
            
            if (esi_14 == 0)
                goto label_612b4b
            
            int32_t eax_128 = *(esi_14 + 0x10)
            int32_t ecx_137 = 0
            int32_t var_164_18 = 0xffffffff
            
            if (eax_128 == *(esi_14 + 0xc))
                ecx_137 = edi_8
            
            sub_666120(eax_128, &data_be657c, arg1, ecx_137)
            char* ecx_139 = 6
            bool cond:12_1 = data_b80afc != 4
            var_18 = 6
            
            if (not(cond:12_1))
                int32_t temp17_1 = data_b80b64
                
                if (temp17_1 s> 6)
                    ecx_139 = data_b80b64
                
                var_18 = ecx_139
                
                if (temp17_1 s>= 6 && data_b80b58 != data_b80b54)
                    ecx_139 = &ecx_139[1]
                    var_18 = ecx_139
            
            int32_t eax_130 = *(esi_14 + 0x10)
            int32_t var_164_19 = 0xffffffff
            
            if (eax_130 == *(esi_14 + 0xc))
                sub_666120(eax_130, &data_be6594, arg1, ecx_139)
                int32_t esi_15 = data_ccf6a0
                int32_t edi_9 = 0
                
                if (var_18 s> 0)
                    do
                        if (esi_15 == 0)
                            int32_t var_90[0xc]
                            uint32_t eax_136
                            
                            switch (var_90[edi_9])
                                case 0
                                    eax_136 = sub_64e7a0(arg1)
                                    sub_665db0(eax_136, &data_be654c, eax_136, 0x3f800000, edi_9, 0)
                                case 2
                                    eax_136 = sub_64e7a0(arg1)
                                    sub_665db0(eax_136, &data_be6564, eax_136, 0x3f800000, edi_9, 0)
                                case 3
                                    eax_136 = sub_64e7a0(arg1)
                                    sub_665db0(eax_136, &data_be6558, eax_136, 0x3f800000, edi_9, 0)
                                case 4
                                    eax_136 = sub_64e7a0(arg1)
                                    sub_665db0(eax_136, &data_be6570, eax_136, 0x3f800000, edi_9, 0)
                            
                            int32_t var_60[0xc]
                            int32_t var_164_21 = var_60[edi_9]
                            sub_611100(var_c0[edi_9])
                        else if (esi_15 u>= 0xe3)
                            uint32_t eax_134 = sub_64e7a0(arg1)
                            sub_665db0(eax_134, &data_be654c, eax_134, 0x3f800000, edi_9, 0)
                        else
                            int32_t* eax_133 = (esi_15 << 4) + 0x7e9804
                            
                            while (true)
                                char* ecx_142 = *eax_133
                                
                                if (ecx_142 != 0 && *ecx_142 != 0)
                                    break
                                
                                esi_15 += 1
                                eax_133 = &eax_133[4]
                            
                            int32_t var_164_20 = 1
                            sub_611100(esi_15)
                            esi_15 += 1
                        
                        edi_9 += 1
                    while (edi_9 s< var_18)
            else
                sub_666120(eax_130, &data_be6594, arg1, 0)
            
            int32_t* eax_137 = sub_4b9480()
            int32_t eax_138 = eax_137[0x46a]
            var_20.d = eax_138
            eax_8 = eax_138 - 1
            
            if (eax_8 s>= 1)
                int32_t var_164_22 = 0xffffffff
                uint32_t ecx_152 = arg1
                sub_666120(eax_8, &data_be4e40, ecx_152, eax_8)
                eax_8 = sub_624730(ecx_152)
                
                if (eax_8.b == 0)
                label_613e17:
                    
                    if (var_20.d - 2 u<= 4)
                        uint32_t eax_146
                        void** edx_53
                        
                        switch (var_20.d)
                            case 2, 3
                                eax_146 = sub_64e7a0(arg1)
                                edx_53 = &data_be4e10
                            case 4
                                eax_146 = sub_64e7a0(arg1)
                                edx_53 = &data_be4e1c
                            case 5, 6
                                eax_146 = sub_64e7a0(arg1)
                                edx_53 = &data_be4e34
                        
                        sub_665db0(eax_146, edx_53, eax_146, 0x3f800000, 0xffffffff, 0)
                    
                    var_18 = nullptr
                    char** edi_11 = &data_1a9643c
                    int32_t i_2
                    char* const esi_18
                    
                    do
                        int32_t esi_17 = data_b604e0
                        
                        if (esi_17 == 0xffffffff)
                            esi_17 = 0
                        
                        void* eax_147 = sub_4b95e0()
                        void* ecx_165 = &var_18[1 + esi_17]
                        esi_18 = var_18
                        void* edx_55 = ecx_165 - eax_147
                        
                        if (ecx_165 s< eax_147)
                            edx_55 = ecx_165
                        
                        var_1c.d = edx_55
                        int32_t* ecx_166
                        
                        if (*edi_11 != "tbl_opponents" || edi_11[-1] != arg1 || edi_11[1] != esi_18
                            || edi_11[2] != 0)
                        label_613ee3:
                            ecx_166 = sub_67be20(esi_18)
                            edi_11[7] = ecx_166
                            
                            if (ecx_166 != 0)
                                edx_55 = var_1c.d
                                *edi_11 = "tbl_opponents"
                                edi_11[-1] = arg1
                                edi_11[1] = esi_18
                                edi_11[2] = 0
                                sub_602740(ecx_166, edx_55)
                        else
                            ecx_166 = edi_11[7]
                            
                            if (ecx_166 == 0)
                                goto label_613ee3
                            
                            uint32_t eax_148 = zx.d(ecx_166.w)
                            
                            if (eax_148 u>= data_c23bac
                                    || *(eax_148 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_166)
                                goto label_613ee3
                            
                            sub_602740(ecx_166, edx_55)
                        i_2 = var_20.d - 1
                        var_18 = &esi_18[1]
                        edi_11 = &edi_11[9]
                    while (&esi_18[1] s< i_2)
                    var_20.d = &data_801800
                    int32_t var_8_37 = 0x18
                    char* eax_153 = sub_5cb070()
                    
                    if (eax_153 != 0)
                        uint32_t eax_154 = sub_64e7a0(arg1)
                        eax_153 =
                            sub_665db0(eax_154, &data_be4d8c, eax_154, 0x3f800000, 0xffffffff, 0)
                    
                    void* ecx_170 = data_cc8d5c
                    char const* const var_16c_13
                    int32_t var_168_23
                    char const* const var_164_24
                    char* ecx_171
                    
                    if (ecx_170 != 0)
                        char* var_164_25 = &var_20
                        
                        if (sub_6047a0(&var_20, data_b80b08, *(ecx_170 + 0x7590), data_b8097c, 
                                data_b80b54, ecx_170, data_b80b18, data_b80b20, data_b80b24) == 0)
                            uint32_t eax_157 = sub_64e7a0(arg1)
                            sub_665db0(eax_157, &data_be4e58, eax_157, 0x3f800000, 0xffffffff, 0)
                        
                        int32_t var_164_26 = 0xffffffff
                        sub_666380(&var_20, &data_be4e4c, arg1, &var_20)
                        
                        if (data_b7d424 != 0)
                            uint32_t eax_159 = sub_64e7a0(arg1)
                            sub_665db0(eax_159, &data_be40e0, eax_159, 0x3f800000, 0xffffffff, 0)
                            int32_t* esi_20 = data_b7f4c0
                            int32_t esi_21
                            
                            if (esi_20 != 0)
                                esi_21 = *esi_20
                                
                                if (esi_21 != 0)
                                    goto label_614030
                            else
                                esi_21 = 1
                            label_614030:
                                uint32_t eax_160 = sub_64e7a0(arg1)
                                int32_t var_16c_15 = 0xffffffff
                                sub_666120(
                                    sub_665db0(eax_160, &data_be4edc, eax_160, 0x3f800000, 
                                        0xffffffff, 0), 
                                    &data_be4ee8, arg1, esi_21)
                            int32_t eax_167 = data_b7d424
                            
                            if (eax_167 == 1 || eax_167 == 3 || eax_167 == 2)
                                if (sub_5cb070() == 0)
                                    if (sub_605250(nullptr) != 0)
                                        uint32_t eax_164 = sub_64e7a0(arg1)
                                        sub_665db0(eax_164, &data_be4e64, eax_164, 0x3f800000, 
                                            0xffffffff, 0)
                                    
                                    if (sub_605250(1) != 0)
                                        uint32_t eax_166 = sub_64e7a0(arg1)
                                        sub_665db0(eax_166, &data_be4e70, eax_166, 0x3f800000, 
                                            0xffffffff, 0)
                                
                                eax_167 = data_b7d424
                            
                            if (eax_167 == 1)
                                if (data_b7fccc s> 0xe)
                                    uint32_t eax_168 = sub_64e7a0(arg1)
                                    sub_665db0(eax_168, &data_be6750, eax_168, 0x3f800000, 
                                        0xffffffff, 0)
                                    eax_167 = data_b7d424
                                
                                if (data_b7f4bc s> 3)
                                    uint32_t eax_169 = sub_64e7a0(arg1)
                                    sub_665db0(eax_169, &data_be6744, eax_169, 0x3f800000, 
                                        0xffffffff, 0)
                                    eax_167 = data_b7d424
                            
                            if (eax_167 == 3 || data_b7d428 == 3)
                                uint32_t eax_170 = sub_64e7a0(arg1)
                                sub_665db0(eax_170, &data_be675c, eax_170, 0x3f800000, 0xffffffff, 
                                    0)
                                eax_167 = data_b7d424
                            
                            if (eax_167 == 2)
                                uint32_t eax_171 = sub_64e7a0(arg1)
                                sub_665db0(eax_171, &data_be6768, eax_171, 0x3f800000, 0xffffffff, 
                                    0)
                            
                            int32_t eax_172 = data_b7d434
                            
                            if (eax_172 != 0)
                                uint32_t ecx_193 = zx.d(eax_172.w)
                                
                                if (ecx_193 u< data_b809e4)
                                    void* esi_23 = ecx_193 * 0x1c30 + data_b809e0
                                    
                                    if (*(esi_23 + 0x1c28) == eax_172 && esi_23 != 0)
                                        int32_t eax_173 = sub_5cf7e0()
                                        void* eax_174 = sub_571b30(*(esi_23 + 0x170), eax_173)
                                        
                                        if (((*(eax_174 + 0x98) & 0x7f000400)
                                                | (*(eax_174 + 0x9c) & 0x940)) != 0)
                                            uint32_t eax_177 = sub_64e7a0(arg1)
                                            sub_665db0(eax_177, &data_be6774, eax_177, 0x3f800000, 
                                                0xffffffff, 0)
                                        
                                        int32_t* i_3 = &data_b7d438
                                        
                                        if (data_b7f4b8 == 0)
                                            i_3 = nullptr
                                        
                                        int32_t eax_178 = data_b7d424
                                        
                                        if (eax_178 == 1 || eax_178 == 3)
                                            int32_t edi_12 = 0
                                            var_1c.d = sub_4c89a0()
                                            
                                            while (i_3 != 0)
                                                eax_153 = i_3[1]
                                                
                                                if (eax_153 s< 0)
                                                    var_164_24 = "AssocPileLabelGetKey"
                                                    var_168_23 = 0x4d6
                                                    var_16c_13 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                                    ecx_171 = "type >= 0"
                                                    goto label_61476b
                                                
                                                if (eax_153 s>= 0x11)
                                                    var_164_24 = "AssocPileLabelGetKey"
                                                    var_168_23 = 0x4d7
                                                    var_16c_13 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                                    ecx_171 = "type < NUM_ASSOC_PILE_TYPES"
                                                    goto label_61476b
                                                
                                                void* ecx_200 = eax_153 * 3
                                                
                                                if (*((ecx_200 << 2) + &data_7fee00) != eax_153)
                                                    var_164_24 = "AssocPileLabelGetKey"
                                                    var_168_23 = 0x4d8
                                                    var_16c_13 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                                    ecx_171 = "ASSOCDEFS[type].type == type"
                                                    goto label_61476b
                                                
                                                char edx_59 = (*((ecx_200 << 2) + &data_7fee08)).b
                                                char* ecx_201 = (&data_7fee04)[ecx_200]
                                                
                                                if (ecx_201 != 0)
                                                    eax_153.b = edx_59
                                                    eax_153.b &= 1
                                                    int32_t var_30_2
                                                    var_30_2.b = eax_153.b
                                                    
                                                    if ((edx_59 & 2) != 0)
                                                        eax_153 = zx.d(eax_153.b)
                                                        
                                                        if (*i_3 s> 1)
                                                            eax_153 = 1
                                                        
                                                        var_30_2.b = eax_153.b
                                                    
                                                    eax_153 = sub_68caf0(eax_153, nullptr, ecx_201, 
                                                        var_1c.d)
                                                    
                                                    if (eax_153 == 0)
                                                        var_164_24 = "GameSpecific_MainLayoutUpdate"
                                                        var_168_23 = 0xc110
                                                        var_16c_13 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                                        ecx_171 = &data_8248d4
                                                        goto label_61476b
                                                    
                                                    int32_t var_164_28 = var_30_2
                                                    var_24 = sub_693050(var_1c.d, eax_153)
                                                    uint32_t eax_181 = sub_64e7a0(arg1)
                                                    sub_665db0(eax_181, &data_be6708, eax_181, 
                                                        0x3f800000, edi_12, 0)
                                                    eax_153 = var_24
                                                    
                                                    if (eax_153 == 0)
                                                        var_164_24 = "XString::XString"
                                                        var_168_23 = 0x94
                                                        var_16c_13 =
                                                            "C:\x\ax2017\Engine\xString.cpp"
                                                        ecx_171 = &data_871e0c
                                                        goto label_61476b
                                                    
                                                    sub_63d720(&var_18, eax_153)
                                                    var_8_37.b = 0x19
                                                    int32_t var_164_29 = edi_12
                                                    int32_t* eax_183 = sub_666380(&var_18, 
                                                        &data_be6714, arg1, &var_18)
                                                    var_8_37.b = 0x1a
                                                    
                                                    if (data_cf65bc != 0)
                                                        eax_183 = var_18
                                                        
                                                        if (eax_183 != 0 && *eax_183 != 0)
                                                            eax_183 = sub_63d4e0(&var_18)
                                                            int32_t temp19_1 = eax_183[1]
                                                            eax_183[1] -= 1
                                                            
                                                            if (temp19_1 == 1)
                                                                eax_183 =
                                                                    sub_64c080(eax_183, eax_183[3] + 0x10)
                                                                var_18 = &data_801800
                                                    
                                                    var_8_37.b = 0x18
                                                    int32_t var_164_30 = edi_12
                                                    sub_666120(eax_183, &data_be6720, arg1, *i_3)
                                                
                                                i_3 = &i_3[*i_3 * 3 + 2]
                                                
                                                if (i_3 == data_b7f4b8 + &data_b7d438)
                                                    break
                                                
                                                edi_12 += 1
                                            
                                            eax_178 = data_b7d424
                                        
                                        int32_t esi_25 = data_b7f4bc
                                        int32_t ecx_210 = 3
                                        int32_t eax_188 = esi_25
                                        
                                        if (eax_178 == 3)
                                            ecx_210 = 0xc
                                        
                                        int32_t var_164_31 = 0xffffffff
                                        
                                        if (esi_25 s> 3)
                                            eax_188 = 3
                                        
                                        if (ecx_210 s< esi_25)
                                            esi_25 = ecx_210
                                        
                                        int32_t var_16c_17 = 0xffffffff
                                        sub_666120(
                                            sub_666120(eax_188, &data_be6738, arg1, eax_188), 
                                            &data_be672c, arg1, esi_25)
                        
                        int32_t esi_26
                        
                        if (data_1a96514 != "tbl_global_play" || data_1a96510 != arg1
                            || data_1a96518 != 0xffffffff)
                        label_614440:
                            esi_26 = sub_67bd70(arg1, "tbl_global_play")
                            data_1a96530 = esi_26
                            
                            if (esi_26 != 0)
                                data_1a96514 = "tbl_global_play"
                                data_1a96510 = arg1
                                data_1a96518 = 0xffffffff
                        else
                            esi_26 = data_1a96530
                            
                            if (esi_26 == 0)
                                goto label_614440
                            
                            uint32_t eax_190 = zx.d(esi_26.w)
                            
                            if (eax_190 u>= data_c23bac
                                    || *(eax_190 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_26)
                                goto label_614440
                        
                        int32_t edi_13
                        
                        if (data_1a96538 != "tbl_global_play_center" || data_1a96534 != arg1
                            || data_1a9653c != 0xffffffff)
                        label_61453e:
                            edi_13 = sub_67bd70(arg1, "tbl_global_play_center")
                            data_1a96554 = edi_13
                            
                            if (edi_13 != 0)
                                data_1a96538 = "tbl_global_play_center"
                                data_1a96534 = arg1
                                data_1a9653c = 0xffffffff
                        else
                            edi_13 = data_1a96554
                            
                            if (edi_13 == 0)
                                goto label_61453e
                            
                            uint32_t eax_194 = zx.d(edi_13.w)
                            
                            if (eax_194 u>= data_c23bac
                                    || *(eax_194 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_13)
                                goto label_61453e
                        
                        void* eax_204
                        
                        if (data_1a9655c != "tbl_player_hand" || data_1a96558 != arg1
                            || data_1a96560 != 0xffffffff)
                        label_6145ba:
                            int32_t eax_201 = sub_67bd70(arg1, "tbl_player_hand")
                            var_1c.d = eax_201
                            data_1a96578 = eax_201
                            
                            if (eax_201 == 0)
                                eax_204 = var_2c_2
                            else
                                data_1a9655c = "tbl_player_hand"
                                data_1a96558 = arg1
                                data_1a96560 = 0xffffffff
                            label_6145e8:
                                eax_204 = var_2c_2
                                
                                if (eax_204 s> 0)
                                    int32_t ecx_218 = data_b604e0
                                    
                                    if (ecx_218 == 0xffffffff)
                                        ecx_218 = 0
                                    
                                    if (sub_5cddc0(ecx_218) != 0)
                                        uint32_t eax_203 = sub_64e7a0(var_1c.d)
                                        sub_665db0(eax_203, &data_be3220, eax_203, 0x3f800000, 
                                            0xffffffff, 0)
                                    
                                    eax_204 = var_2c_2
                        else
                            int32_t ecx_215 = data_1a96578
                            var_1c.d = ecx_215
                            
                            if (ecx_215 == 0)
                                goto label_6145ba
                            
                            uint32_t eax_198 = zx.d(ecx_215.w)
                            
                            if (eax_198 u>= data_c23bac
                                    || *(eax_198 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_215)
                                goto label_6145ba
                            
                            if (ecx_215 != 0)
                                goto label_6145e8
                            
                            eax_204 = var_2c_2
                        
                        if (esi_26 != 0 && eax_204 s> 0 && sub_5ded20() == 0)
                            uint32_t eax_206 = sub_64e7a0(esi_26)
                            sub_665db0(eax_206, &data_be3220, eax_206, 0x3f800000, 0xffffffff, 0)
                        
                        if (edi_13 != 0 && sub_5ded20() == 0)
                            uint32_t eax_208 = sub_64e7a0(edi_13)
                            sub_665db0(eax_208, &data_be3220, eax_208, 0x3f800000, 0xffffffff, 0)
                        
                        eax_153 = data_cc8dc0
                        
                        if (eax_153 != 0)
                            uint32_t eax_209
                            void** edx_64
                            
                            if (*(eax_153 + 0xc) != 0)
                                eax_209 = sub_64e7a0(arg1)
                                edx_64 = &data_cadf54
                            else
                                eax_209 = sub_64e7a0(arg1)
                                edx_64 = &data_cadf60
                            
                            void* result =
                                sub_665db0(eax_209, edx_64, eax_209, 0x3f800000, 0xffffffff, 0)
                            int32_t var_8_38 = 0x1b
                            
                            if (data_cf65bc != 0)
                                result = var_20.d
                                
                                if (result != 0 && *result != 0)
                                    result = sub_63d4e0(&var_20)
                                    int32_t temp18_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp18_1 == 1)
                                        result = sub_64c080(result, *(result + 0xc) + 0x10)
                            
                            fsbase->NtTib.ExceptionList = ExceptionList
                            CookieCheckFunction(result)
                            return result
                        
                        var_164_24 = "GetLocalSettings"
                        var_168_23 = 0x5fb
                        var_16c_13 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                        ecx_171 = "gGameSettings.localSettings"
                    else
                        var_164_24 = "GetClient"
                        var_168_23 = 0x7b
                        var_16c_13 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                        ecx_171 = "gClient"
                    
                label_61476b:
                    sub_63b870(eax_153, &data_801800, ecx_171, var_16c_13, var_168_23, var_164_24)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* ecx_153 = data_cc8d5c
                
                if (ecx_153 == 0)
                    goto label_612b4b
                
                if (sub_5a0c70(*(ecx_153 + 0x7590), &var_1c) == 0xffffffff)
                    goto label_613e17
                
                eax_8 = data_cc8d5c
                
                if (eax_8 == 0)
                    goto label_612b4b
                
                if (*(eax_8 + 0x5068) != 0)
                    int32_t eax_140 = sub_4e3a30(0xbdfb60)
                    
                    if (eax_140 != 0)
                        int32_t esi_16 = var_1c.d
                        
                        if (eax_140 != 1 || esi_16 != 2)
                            char eax_141 = (eax_137[8]).b
                            
                            if (((eax_141 & 4) == 0 || esi_16 != 2)
                                    && (eax_141 s>= 0 || esi_16 != 2))
                                uint32_t eax_142 = sub_64e7a0(arg1)
                                sub_665db0(eax_142, &data_be6528, eax_142, 0x3f800000, 0xffffffff, 
                                    0)
                                
                                if (esi_16 == 2)
                                    uint32_t eax_143 = sub_64e7a0(arg1)
                                    sub_665db0(eax_143, &data_be6534, eax_143, 0x3f800000, 
                                        0xffffffff, 0)
                    
                    goto label_613e17
                
                var_164_1 = "GetActiveConfig"
                var_168_1 = 0x33b6
                ecx_7 = "c.activeGame.gameType != GAME_NONE"
            else
                var_164_1 = "GameSpecific_MainLayoutUpdate"
                var_168_1 = 0xc05d
                ecx_7 = "numOpponents >= 1"
        else
            if (eax_40 == 1)
                goto label_612ff7
            
            eax_8 = eax_40 - 2
            
            if (eax_40 == 2)
                goto label_612ff7
            
            var_164_1 = "GameSpecific_MainLayoutUpdate"
            var_168_1 = 0xbf27
            ecx_7 = "Halt"
    else
        var_164_1 = "GetActiveConfig"
        var_168_1 = 0x33b6
        ecx_7 = "c.activeGame.gameType != GAME_NONE"

var_16c_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
goto label_61473b
