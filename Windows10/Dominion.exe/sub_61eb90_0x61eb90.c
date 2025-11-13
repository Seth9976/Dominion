// 函数: sub_61eb90
// 地址: 0x61eb90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b4ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x5080)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_11 = arg2
int32_t* result_1 = result_11
int32_t var_5088 = 0
char* result_2
sub_63d720(&result_2, "btnBack")
char* result_4 = result_2
char* const result_3 = &data_801800
char* edx = result_11[1]
char* const result_14 = &data_801800

if (result_4 != 0)
    result_14 = result_4

int32_t ecx_2

while (true)
    result_4.b = *edx
    char temp0_1 = *result_14
    bool c_1 = result_4.b u< temp0_1
    bool z_1 = result_4.b == temp0_1
    char var_5069_1 = result_4.b
    result_4 = result_2
    
    if (z_1)
        if (var_5069_1 == 0)
            ecx_2 = 0
            break
        
        result_4.b = edx[1]
        char temp1_1 = result_14[1]
        c_1 = result_4.b u< temp1_1
        bool z_2 = result_4.b == temp1_1
        char var_5069_2 = result_4.b
        result_4 = result_2
        
        if (z_2)
            edx = &edx[2]
            result_14 = &result_14[2]
            
            if (var_5069_2 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_14, result_14, c_1) | 1
    break

char var_5069_3

if (ecx_2 != 0)
    var_5069_3 = 0

if (ecx_2 == 0 || result_11[6] == 2)
    var_5069_3 = 1

int32_t var_5088_1 = 0
int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_3 = sub_63d4e0(&result_2)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_2 = &data_801800

int32_t var_8_2 = 0xffffffff

if (var_5069_3 != 0)
    data_8db660 = 3

sub_63d720(&result_2, "btn_Export")
char* result_5 = result_2
char* const result_15 = &data_801800
char* edx_3 = result_11[1]

if (result_5 != 0)
    result_15 = result_5

char* const esi

while (true)
    result_5.b = *edx_3
    char temp3_1 = *result_15
    bool c_2 = result_5.b u< temp3_1
    bool z_3 = result_5.b == temp3_1
    char var_5069_4 = result_5.b
    result_5 = result_2
    
    if (z_3)
        if (var_5069_4 == 0)
            esi = nullptr
            break
        
        result_5.b = edx_3[1]
        char temp4_1 = result_15[1]
        c_2 = result_5.b u< temp4_1
        bool z_4 = result_5.b == temp4_1
        char var_5069_5 = result_5.b
        result_5 = result_2
        
        if (z_4)
            edx_3 = &edx_3[2]
            result_15 = &result_15[2]
            
            if (var_5069_5 != 0)
                continue
            
            esi = nullptr
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_4 = sub_63d4e0(&result_2)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_2 = &data_801800

int32_t var_8_4 = 0xffffffff
char* const var_5080
char* const var_5078
char* var_5074

if (esi == 0)
    void* eax_5 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    var_5078 = &data_801800
    int32_t var_8_5 = 2
    sub_63d720(&var_5080, U"\n")
    var_8_5.b = 4
    char* result_6 = *(eax_5 + 0x350c)
    result_2 = result_6
    
    if (result_6 != 0 && *result_6 != 0)
        char* eax_6 = sub_63d4e0(&result_2)
        *(eax_6 + 4) += 1
    
    char* edi = var_5080
    int32_t var_5088_2 = 4
    char* eax_7 = &data_801800
    
    if (edi != 0)
        eax_7 = edi
    
    sub_63d960(&result_2, eax_7)
    char* result_9 = result_2
    char* const result_12 = &data_801800
    
    if (result_9 != 0)
        result_12 = result_9
    
    sub_63d960(&var_5078, result_12)
    var_5074 = nullptr
    int32_t var_5088_3 = 0
    var_8_5.b = 5
    
    if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_8 = sub_63d4e0(&result_2)
        int32_t temp8_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            result_2 = &data_801800
    
    var_8_5.b = 6
    
    if (data_cf65bc != 0 && edi != 0 && *edi != 0)
        char* eax_9 = sub_63d4e0(&var_5080)
        int32_t temp10_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            var_5080 = &data_801800
    
    void* esi_4 = eax_5 + 0x3510
    var_8_5.b = 2
    void* var_508c_1 = esi_4
    int32_t i_2 = 0xa
    int32_t i
    
    do
        sub_63d720(&var_5080, U"\n")
        var_8_5.b = 8
        char* result_7 = *esi_4
        result_2 = result_7
        
        if (result_7 != 0 && *result_7 != 0)
            char* eax_10 = sub_63d4e0(&result_2)
            *(eax_10 + 4) += 1
        
        char* const edi_1 = var_5080
        char* eax_12 = var_5074 | 2
        var_5074 = eax_12
        char* var_5088_4 = eax_12
        char* const eax_13 = &data_801800
        
        if (edi_1 != 0)
            eax_13 = edi_1
        
        sub_63d960(&result_2, eax_13)
        char* result_10 = result_2
        char* const result_13 = &data_801800
        
        if (result_10 != 0)
            result_13 = result_10
        
        sub_63d960(&var_5078, result_13)
        void* eax_15 = var_5074 & 0xfffffffd
        var_5074 = eax_15
        void* var_5088_5 = eax_15
        var_8_5.b = 9
        
        if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
            char* eax_16 = sub_63d4e0(&result_2)
            int32_t temp14_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp14_1 == 1)
                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                result_2 = &data_801800
        
        var_8_5.b = 0xa
        
        if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
            char* eax_17 = sub_63d4e0(&var_5080)
            int32_t temp16_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp16_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                var_5080 = &data_801800
        
        esi_4 = var_508c_1 + 4
        var_8_5.b = 2
        i = i_2
        i_2 -= 1
        var_508c_1 = esi_4
    while (i != 1)
    esi = var_5078
    char* const eax_18 = &data_801800
    
    if (esi != 0)
        eax_18 = esi
    
    char* edi_2 = eax_18
    char* const var_5084_2 = eax_18
    void* ecx_26 = &edi_2[1]
    
    do
        eax_18.b = *edi_2
        edi_2 = &edi_2[1]
    while (eax_18.b != 0)
    
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, edi_2 - ecx_26 + 1)
    memcpy(GlobalLock(hMem), var_5084_2, edi_2 - ecx_26 + 1)
    GlobalUnlock(hMem)
    OpenClipboard(nullptr)
    EmptyClipboard()
    SetClipboardData(1, hMem)
    CloseClipboard()
    int32_t var_8_6 = 0xb
    
    if (data_cf65bc != 0 && esi != 0 && *esi != 0)
        char* eax_20 = sub_63d4e0(&var_5078)
        int32_t temp20_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
            var_5078 = &data_801800
    
    int32_t var_8_7 = 0xffffffff
    result_3 = &data_801800
    result_11 = result_1

sub_63d720(&var_5078, "btnShare")
char* const eax_21 = var_5078
char* const ecx_30 = &data_801800
char* edx_16 = result_11[1]

if (eax_21 != 0)
    ecx_30 = eax_21

int32_t esi_6

while (true)
    eax_21.b = *edx_16
    char temp6_1 = *ecx_30
    bool c_3 = eax_21.b u< temp6_1
    bool z_5 = eax_21.b == temp6_1
    char var_5069_6 = eax_21.b
    eax_21 = var_5078
    
    if (z_5)
        if (var_5069_6 == 0)
            esi_6 = 0
            break
        
        eax_21.b = edx_16[1]
        char temp7_1 = ecx_30[1]
        c_3 = eax_21.b u< temp7_1
        bool z_6 = eax_21.b == temp7_1
        char var_5069_7 = eax_21.b
        eax_21 = var_5078
        
        if (z_6)
            edx_16 = &edx_16[2]
            ecx_30 = &ecx_30[2]
            
            if (var_5069_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_8 = 0xc

if (data_cf65bc != 0 && eax_21 != 0 && *eax_21 != 0)
    char* eax_22 = sub_63d4e0(&var_5078)
    int32_t temp9_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp9_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        var_5078 = &data_801800

int32_t var_8_9 = 0xffffffff

if (esi_6 == 0)
    HANDLE eax_23 = sub_625600(esi_6 + 1)
    int32_t ecx_34
    
    if (data_8db664 != 0x7e3)
        ecx_34 = 0
        
        if (data_8db674 == 0x7e3)
            ecx_34 = data_8db678
    else
        ecx_34 = data_8db668
    
    int32_t var_24_10 = 0
    int32_t var_28_4 = ecx_34
    sub_67cd20(eax_23, "exportToClipboard", ecx_34.b)

sub_63d720(&var_5078, "btn_Import")
char* const eax_24 = var_5078
char* const ecx_36 = &data_801800
char* edx_19 = result_11[1]

if (eax_24 != 0)
    ecx_36 = eax_24

void* i_1

while (true)
    eax_24.b = *edx_19
    char temp11_1 = *ecx_36
    bool c_4 = eax_24.b u< temp11_1
    bool z_7 = eax_24.b == temp11_1
    char var_5069_8 = eax_24.b
    eax_24 = var_5078
    
    if (z_7)
        if (var_5069_8 == 0)
            i_1 = nullptr
            break
        
        eax_24.b = edx_19[1]
        char temp12_1 = ecx_36[1]
        c_4 = eax_24.b u< temp12_1
        bool z_8 = eax_24.b == temp12_1
        char var_5069_9 = eax_24.b
        eax_24 = var_5078
        
        if (z_8)
            edx_19 = &edx_19[2]
            ecx_36 = &ecx_36[2]
            
            if (var_5069_9 != 0)
                continue
            
            i_1 = nullptr
            break
    
    i_1 = sbb.d(esi_6, esi_6, c_4) | 1
    break

int32_t var_8_10 = 0xd

if (data_cf65bc != 0 && eax_24 != 0 && *eax_24 != 0)
    eax_24 = sub_63d4e0(&var_5078)
    int32_t temp15_1 = *(eax_24 + 4)
    *(eax_24 + 4) -= 1
    
    if (temp15_1 == 1)
        eax_24 = sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
        var_5078 = &data_801800

int32_t var_8_11 = 0xffffffff
char* result
int32_t var_5068

if (i_1 != 0)
label_61f50d:
    sub_63d720(&var_5078, "btn_Official")
    char* const eax_41 = var_5078
    char* const ecx_64 = &data_801800
    void* edx_31 = result_11[1]
    
    if (eax_41 != 0)
        ecx_64 = eax_41
    
    int32_t esi_9
    
    while (true)
        eax_41.b = *edx_31
        char temp17_1 = *ecx_64
        bool c_5 = eax_41.b u< temp17_1
        bool z_9 = eax_41.b == temp17_1
        char var_5069_10 = eax_41.b
        eax_41 = var_5078
        
        if (z_9)
            if (var_5069_10 == 0)
                esi_9 = 0
                break
            
            eax_41.b = *(edx_31 + 1)
            char temp18_1 = ecx_64[1]
            c_5 = eax_41.b u< temp18_1
            bool z_10 = eax_41.b == temp18_1
            char var_5069_11 = eax_41.b
            eax_41 = var_5078
            
            if (z_10)
                edx_31 += 2
                ecx_64 = &ecx_64[2]
                
                if (var_5069_11 != 0)
                    continue
                
                esi_9 = 0
                break
        
        esi_9 = sbb.d(i_1, i_1, c_5) | 1
        break
    
    int32_t var_8_19 = 0x19
    
    if (data_cf65bc != 0 && eax_41 != 0 && *eax_41 != 0)
        char* eax_42 = sub_63d4e0(&var_5078)
        int32_t temp21_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp21_1 == 1)
            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
            var_5078 = &data_801800
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_9 == 0)
        void* eax_43 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t* eax_44 = sub_4e6680(eax_43, eax_43 + 0x350c, &var_5068, eax_43 + 0x3510)
        
        if (var_5068 != esi_9)
            sub_63b870(eax_44, &data_801800, "setup.params.type == CAMPAIGNTYPE_EXPANSION", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe135, "CampaignsDlgClick")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_61e1a0()
    
    sub_63d720(&var_5074, "btn_Reroll")
    char* eax_45 = var_5074
    char* const ecx_75 = &data_801800
    char* edx_37 = result_11[1]
    
    if (eax_45 != 0)
        ecx_75 = eax_45
    
    int32_t esi_11
    
    while (true)
        eax_45.b = *edx_37
        char temp22_1 = *ecx_75
        bool c_6 = eax_45.b u< temp22_1
        bool z_11 = eax_45.b == temp22_1
        char var_5069_12 = eax_45.b
        eax_45 = var_5074
        
        if (z_11)
            if (var_5069_12 == 0)
                esi_11 = 0
                break
            
            eax_45.b = edx_37[1]
            char temp25_1 = ecx_75[1]
            c_6 = eax_45.b u< temp25_1
            bool z_12 = eax_45.b == temp25_1
            char var_5069_13 = eax_45.b
            eax_45 = var_5074
            
            if (z_12)
                edx_37 = &edx_37[2]
                ecx_75 = &ecx_75[2]
                
                if (var_5069_13 != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_9, esi_9, c_6) | 1
        break
    
    int32_t var_8_21 = 0x1a
    
    if (data_cf65bc != 0 && eax_45 != 0 && *eax_45 != 0)
        char* eax_46 = sub_63d4e0(&var_5074)
        int32_t temp27_1 = *(eax_46 + 4)
        *(eax_46 + 4) -= 1
        
        if (temp27_1 == 1)
            sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_11 == 0)
        sub_61e5e0()
    
    sub_63d720(&var_5074, "btn_Resign")
    char* eax_47 = var_5074
    char* const ecx_79 = &data_801800
    char* edx_40 = result_11[1]
    
    if (eax_47 != 0)
        ecx_79 = eax_47
    
    int32_t esi_13
    
    while (true)
        eax_47.b = *edx_40
        char temp28_1 = *ecx_79
        bool c_7 = eax_47.b u< temp28_1
        bool z_13 = eax_47.b == temp28_1
        char var_5069_14 = eax_47.b
        eax_47 = var_5074
        
        if (z_13)
            if (var_5069_14 == 0)
                esi_13 = 0
                break
            
            eax_47.b = edx_40[1]
            char temp29_1 = ecx_79[1]
            c_7 = eax_47.b u< temp29_1
            bool z_14 = eax_47.b == temp29_1
            char var_5069_15 = eax_47.b
            eax_47 = var_5074
            
            if (z_14)
                edx_40 = &edx_40[2]
                ecx_79 = &ecx_79[2]
                
                if (var_5069_15 != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_7) | 1
        break
    
    int32_t var_8_23 = 0x1b
    
    if (data_cf65bc != 0 && eax_47 != 0 && *eax_47 != 0)
        eax_47 = sub_63d4e0(&var_5074)
        int32_t temp30_1 = *(eax_47 + 4)
        *(eax_47 + 4) -= 1
        
        if (temp30_1 == 1)
            eax_47 = sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
    
    int32_t var_8_24 = 0xffffffff
    
    if (esi_13 == 0)
        data_8db6b0 = 0x20
        void* eax_48 = sub_68caf0(eax_47, nullptr, "dom_ui_resign_campaign_header", esi_13)
        char const* const ecx_82
        
        if (eax_48 != 0)
            char* eax_49 = *eax_48
            ecx_82 = &data_801800
            
            if (eax_49 != 0)
                ecx_82 = eax_49
        else
            ecx_82 = "dom_ui_resign_campaign_header"
        
        void* eax_51 =
            sub_68caf0(sub_63d8d0(&data_8db750, ecx_82), nullptr, "dom_ui_resign_campaign_body", 0)
        char const* const ecx_83
        
        if (eax_51 != 0)
            char* eax_52 = *eax_51
            ecx_83 = &data_801800
            
            if (eax_52 != 0)
                ecx_83 = eax_52
        else
            ecx_83 = "dom_ui_resign_campaign_body"
        
        sub_63d8d0(&data_8db754, ecx_83)
        sub_63d8d0(&data_8db758, &data_801800)
        sub_63d8d0(&data_8db75c, &data_801800)
        data_8db760 = sub_61fc70
        data_8db764 = 0
    
    sub_63d720(&var_5074, "btn_Done")
    char* eax_53 = var_5074
    char* const ecx_85 = &data_801800
    char* edx_43 = result_11[1]
    
    if (eax_53 != 0)
        ecx_85 = eax_53
    
    int32_t esi_15
    
    while (true)
        eax_53.b = *edx_43
        char temp31_1 = *ecx_85
        bool c_8 = eax_53.b u< temp31_1
        bool z_15 = eax_53.b == temp31_1
        char var_5069_16 = eax_53.b
        eax_53 = var_5074
        
        if (z_15)
            if (var_5069_16 == 0)
                esi_15 = 0
                break
            
            eax_53.b = edx_43[1]
            char temp32_1 = ecx_85[1]
            c_8 = eax_53.b u< temp32_1
            bool z_16 = eax_53.b == temp32_1
            char var_5069_17 = eax_53.b
            eax_53 = var_5074
            
            if (z_16)
                edx_43 = &edx_43[2]
                ecx_85 = &ecx_85[2]
                
                if (var_5069_17 != 0)
                    continue
                
                esi_15 = 0
                break
        
        esi_15 = sbb.d(esi_13, esi_13, c_8) | 1
        break
    
    int32_t var_8_25 = 0x1c
    
    if (data_cf65bc != 0 && eax_53 != 0 && *eax_53 != 0)
        char* eax_54 = sub_63d4e0(&var_5074)
        int32_t temp33_1 = *(eax_54 + 4)
        *(eax_54 + 4) -= 1
        
        if (temp33_1 == 1)
            sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
    
    int32_t var_8_26 = 0xffffffff
    
    if (esi_15 == 0)
        void* eax_56 = sub_61dba0(sub_61dad0(), &result_1)
        
        if (eax_56.b != 0)
            sub_4b98a0(eax_56, 0xffffffff, result_1, 3, 0xffffffff)
        
        data_171efc8 = 0
        sub_61dd90(sub_61dad0())
        data_8db660 = 0x7e1
    
    sub_63d720(&var_5074, "btn_Unlock")
    char* eax_58 = var_5074
    char* const ecx_92 = &data_801800
    char* edx_47 = result_11[1]
    
    if (eax_58 != 0)
        ecx_92 = eax_58
    
    int32_t esi_17
    
    while (true)
        eax_58.b = *edx_47
        char temp34_1 = *ecx_92
        bool c_9 = eax_58.b u< temp34_1
        bool z_17 = eax_58.b == temp34_1
        char var_5069_18 = eax_58.b
        eax_58 = var_5074
        
        if (z_17)
            if (var_5069_18 == 0)
                esi_17 = 0
                break
            
            eax_58.b = edx_47[1]
            char temp35_1 = ecx_92[1]
            c_9 = eax_58.b u< temp35_1
            bool z_18 = eax_58.b == temp35_1
            char var_5069_19 = eax_58.b
            eax_58 = var_5074
            
            if (z_18)
                edx_47 = &edx_47[2]
                ecx_92 = &ecx_92[2]
                
                if (var_5069_19 != 0)
                    continue
                
                esi_17 = 0
                break
        
        esi_17 = sbb.d(esi_15, esi_15, c_9) | 1
        break
    
    int32_t var_8_27 = 0x1d
    
    if (data_cf65bc != 0 && eax_58 != 0 && *eax_58 != 0)
        char* eax_59 = sub_63d4e0(&var_5074)
        int32_t temp36_1 = *(eax_59 + 4)
        *(eax_59 + 4) -= 1
        
        if (temp36_1 == 1)
            sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
    
    int32_t var_8_28 = 0xffffffff
    
    if (esi_17 == 0)
        data_171efcc = data_171efcc == 0
    
    sub_63d720(&var_5074, "btn_Dev")
    char* eax_60 = var_5074
    char* const ecx_96 = &data_801800
    void* edx_50 = result_11[1]
    
    if (eax_60 != 0)
        ecx_96 = eax_60
    
    int32_t esi_19
    
    while (true)
        eax_60.b = *edx_50
        char temp37_1 = *ecx_96
        bool c_10 = eax_60.b u< temp37_1
        bool z_19 = eax_60.b == temp37_1
        char var_5069_20 = eax_60.b
        eax_60 = var_5074
        
        if (z_19)
            if (var_5069_20 == 0)
                esi_19 = 0
                break
            
            eax_60.b = *(edx_50 + 1)
            char temp38_1 = ecx_96[1]
            c_10 = eax_60.b u< temp38_1
            bool z_20 = eax_60.b == temp38_1
            char var_5069_21 = eax_60.b
            eax_60 = var_5074
            
            if (z_20)
                edx_50 += 2
                ecx_96 = &ecx_96[2]
                
                if (var_5069_21 != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(esi_17, esi_17, c_10) | 1
        break
    
    int32_t var_8_29 = 0x1e
    
    if (data_cf65bc != 0 && eax_60 != 0 && *eax_60 != 0)
        char* eax_61 = sub_63d4e0(&var_5074)
        int32_t temp39_1 = *(eax_61 + 4)
        *(eax_61 + 4) -= 1
        
        if (temp39_1 == 1)
            sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
    
    int32_t var_8_30 = 0xffffffff
    
    if (esi_19 == 0)
        data_1724030 = data_1724030 == 0
    
    sub_63d720(&result_1, "btn_Mission")
    result = result_1
    char* ecx_100 = result_11[1]
    
    if (result != 0)
        result_3 = result
    
    int32_t esi_21
    
    while (true)
        char edx_53 = *ecx_100
        char temp40_1 = *result_3
        bool c_11 = edx_53 u< temp40_1
        
        if (edx_53 == temp40_1)
            if (edx_53 == 0)
                esi_21 = 0
                break
            
            edx_53 = ecx_100[1]
            char temp41_1 = result_3[1]
            c_11 = edx_53 u< temp41_1
            
            if (edx_53 == temp41_1)
                ecx_100 = &ecx_100[2]
                result_3 = &result_3[2]
                
                if (edx_53 != 0)
                    continue
                
                esi_21 = 0
                break
        
        esi_21 = sbb.d(esi_19, esi_19, c_11) | 1
        break
    
    int32_t var_8_31 = 0x1f
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp42_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp42_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_32 = 0xffffffff
    
    if (esi_21 == 0)
        int32_t ebx_1 = data_171efc8
        int32_t edi_6 = *(sub_6580f0(sub_64e7a0(*result_11)) + 0x18c8)
        
        while (true)
            if (*(sub_6580f0(sub_64e7a0(*((esi_21 << 2) + &data_1724008))) + 0x18c8) == edi_6)
                data_171efc8 = esi_21
                break
            
            esi_21 += 1
            
            if (esi_21 s>= 0xa)
                esi_21 = data_171efc8
                break
        
        if (data_171efcc == 0 || esi_21 == ebx_1)
            sub_61e6d0(esi_21)
            sub_4d46e0(5, 0)
else
    if (data_1723ff4 != i_1)
        sub_63b870(eax_24, &data_801800, "gCampaignDlg.activeStatus.type == CAMPAIGN_STATUS_MAIN", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe109, "CampaignsDlgClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_25 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    result_2 = &data_801800
    int32_t var_8_12 = 0xe
    sub_63c340(&result_2)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_11)(struct 
        _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
    char* var_44
    int32_t ecx_42
    int32_t edx_22
    ecx_42, edx_22 = `eh vector constructor iterator'(&var_44, 4, 0xb, 0x5a0be0)
    int32_t var_24_12 = ecx_42
    var_8_12.b = 0xf
    
    if (sub_61d5b0(&var_44, edx_22, &result_2, &var_44) == 0xb)
    label_61f355:
        
        if (data_171efcc == 0)
            data_171efc8 = 0
        
        sub_61dd90(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x353c)
        var_8_12.b = 0x14
        sub_63d850(eax_25 + 0x350c, sub_63e810(&var_5080))
        var_8_12.b = 0x15
        
        if (data_cf65bc != 0)
            char* const eax_33 = var_5080
            
            if (eax_33 != 0 && *eax_33 != 0)
                char* eax_34 = sub_63d4e0(&var_5080)
                int32_t temp19_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp19_1 == 1)
                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                    var_5080 = &data_801800
        
        var_8_12.b = 0xf
        
        for (i_1 = nullptr; i_1 s< 0x28; )
            var_8_12.b = 0x16
            sub_63d850(i_1 + 0x3510 + eax_25, sub_63e810(&var_5080))
            var_8_12.b = 0x17
            
            if (data_cf65bc != 0)
                char* const eax_36 = var_5080
                
                if (eax_36 != 0 && *eax_36 != 0)
                    char* eax_37 = sub_63d4e0(&var_5080)
                    int32_t temp23_1 = *(eax_37 + 4)
                    *(eax_37 + 4) -= 1
                    
                    if (temp23_1 == 1)
                        sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                        var_5080 = &data_801800
            
            i_1 += 4
            var_8_12.b = 0xf
        
        sub_4e6680(eax_25 + 0x3510, eax_25 + 0x350c, &var_5068, eax_25 + 0x3510)
        uint32_t eax_39 = sub_5ac2e0(&var_5068)
        data_cc8dc8
        data_171efd0 = eax_39
        sub_4d8ad0(i_1)
        var_8_12.b = 0xe
        `eh vector vbase constructor iterator'(&var_44, 4, 0xb, sub_63d770)
        int32_t var_8_15 = 0x18
        
        if (data_cf65bc != 0)
            char* result_8 = result_2
            
            if (result_8 != 0 && *result_8 != 0)
                char* eax_40 = sub_63d4e0(&result_2)
                int32_t temp26_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp26_1 == 1)
                    sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                    result_2 = &data_801800
        
        int32_t var_8_16 = 0xffffffff
        result_11 = result_1
        goto label_61f50d
    
    char* ecx_44 = var_44
    char* const eax_28 = &data_801800
    
    if (ecx_44 != 0)
        eax_28 = ecx_44
    
    if (*eax_28 == 0x2d)
        char* eax_29 = &data_801800
        
        if (ecx_44 != 0)
            eax_29 = ecx_44
        
        if (eax_29[1] == 0x63)
            int32_t eax_30 = 0
            
            while (true)
                char* ecx_45 = (&var_44)[eax_30]
                
                if (ecx_45 == 0 || *ecx_45 != 0x2d)
                    var_8_12.b = 0xe
                    `eh vector vbase constructor iterator'(&var_44, 4, 0xb, sub_63d770)
                    int32_t var_8_18 = 0x12
                    break
                
                if (ecx_45[1] != 0x6b)
                    var_8_12.b = 0xe
                    `eh vector vbase constructor iterator'(&var_44, 4, 0xb, sub_63d770)
                    int32_t var_8_17 = 0x13
                    break
                
                eax_30 += 1
                
                if (eax_30 s>= 0xb)
                    goto label_61f355
                
                continue
        else
            var_8_12.b = 0xe
            `eh vector vbase constructor iterator'(&var_44, 4, 0xb, sub_63d770)
            int32_t var_8_14 = 0x11
    else
        var_8_12.b = 0xe
        `eh vector vbase constructor iterator'(&var_44, 4, 0xb, sub_63d770)
        int32_t var_8_13 = 0x10
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_2)
            int32_t temp24_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp24_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
