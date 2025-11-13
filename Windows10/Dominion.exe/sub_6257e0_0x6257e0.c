// 函数: sub_6257e0
// 地址: 0x6257e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAAVios_base@2@AAHAAO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_44 = edi
char* esi = *(edi + 4)
char* result_1
sub_63d720(&result_1, "btnBack")
char* result_3 = result_1
char* const result_12 = &data_801800

if (result_3 != 0)
    result_12 = result_3

int32_t ecx_2

while (true)
    char edx_1 = *result_12
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_2 = 0
            break
        
        edx_1 = result_12[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_12 = &result_12[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_12, result_12, c_1) | 1
    break

int32_t ebx

if (ecx_2 == 0 || *(edi + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    sub_4c44f0()

char* esi_1 = *(edi + 4)
sub_63d720(&result_1, "btn1")
char* result_4 = result_1
char* const result_13 = &data_801800

if (result_4 != 0)
    result_13 = result_4

PSTR esi_3

while (true)
    char edx_4 = *result_13
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = nullptr
            break
        
        edx_4 = result_13[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_13 = &result_13[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = nullptr
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    int32_t* eax_5 = sub_4b9480()
    
    if (((eax_5[8] u>> 2).b & 1) == 0)
        int32_t edi_1 = *eax_5
        
        for (int32_t i = 0; i s< 0x78; i += 0xc)
            if (*(sub_61dad0() + i + 8) == edi_1)
                break
        
        sub_4c44f0()
        int32_t ecx_10
        ecx_10.b = 1
        sub_624fb0(ecx_10)
        edi = var_44
    else
        ShellExecuteA(esi_3, "open", 
            "https://discord.com/channels/609163450077151233/1001235513635782777", esi_3, esi_3, 
            SW_SHOWNORMAL)

char* esi_4 = *(edi + 4)
sub_63d720(&result_1, "btn2")
char* result_5 = result_1
char* const result_14 = &data_801800

if (result_5 != 0)
    result_14 = result_5

int32_t esi_6

while (true)
    char edx_7 = *result_14
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = result_14[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            result_14 = &result_14[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_7 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_6 != 0)
    goto label_625ac6

int32_t* eax_8 = sub_4b9480()
void* eax_9

if (((eax_8[8] u>> 2).b & 1) == 0)
    int32_t edi_2 = 0
    result_1 = *eax_8
    
    for (int32_t i_1 = 0; i_1 s< 0x78; )
        eax_9 = sub_61dad0()
        
        if (*(eax_9 + i_1 + 8) == result_1)
            *(sub_61dad0() + edi_2 * 0xc + 8) = 0
            data_cc8dc8
            sub_4d8ad0(i_1)
            goto label_625a97
        
        i_1 += 0xc
        edi_2 += 1
    
    if ((eax_8[8] & 0x100) == 0)
        void* edx_11 = data_cc8d5c
        
        if (edx_11 == 0)
            goto label_625a34
        
        int64_t var_4c
        
        if (sub_5f1ae0(&var_4c:4, *(edx_11 + 0x7590), eax_8, 0, &var_4c:4, &result_1) == 1
                && sub_5e9bb0(&var_4c:4, &result_1, eax_8, &var_4c:4) == 0)
            char* result_7 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            int128_t var_3c
            int128_t* i_2 = &var_3c
            __builtin_memcpy(&var_3c, 
                "\xe9\x03\x00\x00\xec\x03\x00\x00\xef\x03\x00\x00\xf2\x03\x00\x00\xf5\x03\x00\x00\xf8\x"
            "03\x00\x00\xfb\x03\x00\x00\xfe\x03\x00\x00\x01\x04\x00\x00\x04\x04\x00\x00", 
                0x28)
            int32_t esi_9 = 0
            result_1 = result_7
            int32_t edi_3 = *(result_7 + 0x42a0)
            int32_t ebx_2 = *(result_7 + 0x429c)
            
            do
                int32_t j = *i_2
                int32_t* eax_19 = *(ebx_2 + (((j s>> 4 | j) & edi_3) << 2))
                int32_t ecx_23
                
                if (eax_19 == 0)
                label_625bc0:
                    var_4c = 0
                    ecx_23 = var_4c.d
                else
                    while (j != *eax_19)
                        eax_19 = eax_19[6]
                        
                        if (eax_19 == 0)
                            goto label_625bc0
                    
                    if (eax_19 == 0xfffffff8)
                        goto label_625bc0
                    
                    ecx_23 = eax_19[4]
                    int32_t var_48_1 = eax_19[5]
                
                i_2 += 4
                esi_9 += ecx_23
            while (i_2 != &var_14)
            
            char* result_11 = result_1
            int32_t eax_21 = *(result_11 + 0x42b8) + 0xf
            
            if (eax_21 s< 5)
                eax_21 = 5
            
            if (esi_9 s>= eax_21)
                *(result_11 + 0x42b8) = esi_9
            
            data_cc8dc8
            sub_4d8ad0(esi_9)
        
        sub_4c3620()
        eax_9 = data_cc8d5c
        
        if (eax_9 == 0)
            goto label_625a34
        
        *(eax_9 + 0x5044) = 7
        *(eax_9 + 0x5064) = 0
        *(eax_9 + 0x5060) = 0
    else
    label_625a97:
        sub_4c3620()
        eax_9 = data_cc8d5c
        
        if (eax_9 == 0)
            goto label_625a34
        
        *(eax_9 + 0x5044) = 7
        *(eax_9 + 0x5064) = 0
        *(eax_9 + 0x5060) = 2
    
    edi = var_44
    goto label_625ac6

sub_4c3620()
eax_9 = data_cc8d5c
char const* const var_6c_2
int32_t var_68_2
char const* const var_64_2
char* ecx_16

if (eax_9 != 0)
    *(eax_9 + 0x5044) = 7
    *(eax_9 + 0x5064) = 0
    *(eax_9 + 0x5060) = 1
label_625ac6:
    char* esi_7 = *(edi + 4)
    sub_63d720(&result_1, "btn3")
    char* result_6 = result_1
    char* const result_15 = &data_801800
    
    if (result_6 != 0)
        result_15 = result_6
    
    int32_t esi_11
    
    while (true)
        char edx_10 = *result_15
        char temp9_1 = *esi_7
        bool c_4 = edx_10 u< temp9_1
        
        if (edx_10 == temp9_1)
            if (edx_10 == 0)
                esi_11 = 0
                break
            
            edx_10 = result_15[1]
            char temp10_1 = esi_7[1]
            c_4 = edx_10 u< temp10_1
            
            if (edx_10 == temp10_1)
                result_15 = &result_15[2]
                esi_7 = &esi_7[2]
                
                if (edx_10 != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_7, esi_7, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_25 = sub_63d4e0(&result_1)
        int32_t temp11_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        *(eax_25 + 4)
        
        if (temp11_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_11 != 0)
        goto label_625d04
    
    sub_4c44f0()
    int32_t* eax_26 = sub_4b9480()
    
    if ((eax_26[8].b & 4) == 0)
        int32_t ecx_30
        ecx_30.b = 0
        sub_624fb0(ecx_30)
    label_625d04:
        char* esi_13 = *(edi + 4)
        sub_63d720(&result_1, "btnOverview")
        char* result_8 = result_1
        char* const result_16 = &data_801800
        
        if (result_8 != 0)
            result_16 = result_8
        
        int32_t esi_15
        
        while (true)
            char edx_17 = *result_16
            char temp12_1 = *esi_13
            bool c_5 = edx_17 u< temp12_1
            
            if (edx_17 == temp12_1)
                if (edx_17 == 0)
                    esi_15 = 0
                    break
                
                edx_17 = result_16[1]
                char temp13_1 = esi_13[1]
                c_5 = edx_17 u< temp13_1
                
                if (edx_17 == temp13_1)
                    result_16 = &result_16[2]
                    esi_13 = &esi_13[2]
                    
                    if (edx_17 != 0)
                        continue
                    
                    esi_15 = 0
                    break
            
            esi_15 = sbb.d(esi_13, esi_13, c_5) | 1
            break
        
        int32_t var_8_9 = 4
        
        if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
            char* eax_28 = sub_63d4e0(&result_1)
            int32_t temp15_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp15_1 == 1)
                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_10 = 0xffffffff
        
        if (esi_15 == 0)
            data_8db660 = 0x29
        
        char* esi_16 = *(edi + 4)
        sub_63d720(&result_1, "btnShare")
        char* result_9 = result_1
        char* const result_17 = &data_801800
        
        if (result_9 != 0)
            result_17 = result_9
        
        int32_t esi_18
        
        while (true)
            char edx_20 = *result_17
            char temp16_1 = *esi_16
            bool c_6 = edx_20 u< temp16_1
            
            if (edx_20 == temp16_1)
                if (edx_20 == 0)
                    esi_18 = 0
                    break
                
                edx_20 = result_17[1]
                char temp17_1 = esi_16[1]
                c_6 = edx_20 u< temp17_1
                
                if (edx_20 == temp17_1)
                    result_17 = &result_17[2]
                    esi_16 = &esi_16[2]
                    
                    if (edx_20 != 0)
                        continue
                    
                    esi_18 = 0
                    break
            
            esi_18 = sbb.d(esi_16, esi_16, c_6) | 1
            break
        
        int32_t var_8_11 = 5
        
        if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
            char* eax_29 = sub_63d4e0(&result_1)
            int32_t temp18_1 = *(eax_29 + 4)
            *(eax_29 + 4) -= 1
            
            if (temp18_1 == 1)
                sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_12 = 0xffffffff
        
        if (esi_18 == 0)
            sub_625600(0)
            int32_t ecx_40
            
            if (data_8db664 != 0x29)
                ecx_40 = 0
                
                if (data_8db674 == 0x29)
                    ecx_40 = data_8db678
            else
                ecx_40 = data_8db668
            
            int32_t eax_30
            int32_t ecx_41
            eax_30, ecx_41 = sub_67bd70(ecx_40, "tbl_players")
            int32_t var_64_3 = 0
            int32_t var_68_4 = ecx_41
            sub_67cd20(eax_30, "exportToClipboard", eax_30.b)
        
        char* esi_19 = *(edi + 4)
        sub_63d720(&result_1, "btn_player")
        char* result_10 = result_1
        char* result_18 = &data_801800
        
        if (result_10 != 0)
            result_18 = result_10
        
        int32_t esi_21
        
        while (true)
            char edx_23 = *result_18
            char temp19_1 = *esi_19
            bool c_7 = edx_23 u< temp19_1
            
            if (edx_23 == temp19_1)
                if (edx_23 == 0)
                    esi_21 = 0
                    break
                
                edx_23 = result_18[1]
                char temp20_1 = esi_19[1]
                c_7 = edx_23 u< temp20_1
                
                if (edx_23 == temp20_1)
                    result_18 = &result_18[2]
                    esi_19 = &esi_19[2]
                    
                    if (edx_23 != 0)
                        continue
                    
                    esi_21 = 0
                    break
            
            esi_21 = sbb.d(esi_19, esi_19, c_7) | 1
            break
        
        int32_t var_8_13 = 6
        
        if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
            char* eax_31 = sub_63d4e0(&result_1)
            int32_t temp21_1 = *(eax_31 + 4)
            *(eax_31 + 4) -= 1
            
            if (temp21_1 == 1)
                sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_14 = 0xffffffff
        
        if (esi_21 == 0)
            void* const esi_22 = data_b604e0
            int32_t edi_4 = *(edi + 8)
            
            if (esi_22 == 0xffffffff)
                esi_22 = nullptr
            
            void* eax_32 = sub_4b95e0()
            void* edx_26 = esi_22 + edi_4
            data_cf6490 = 1
            data_cf6498 = 0
            void* ecx_47 = edx_26 - eax_32
            
            if (edx_26 s< eax_32)
                ecx_47 = edx_26
            
            data_cf6494 = ecx_47
            sub_5931d0(0xb80ad8, 0xcd3198)
            edi = var_44
            data_8db660 = 0x7eb
        
        char* esi_23 = *(edi + 4)
        sub_63d720(&result_1, "btnFriend")
        char* result = result_1
        char* result_2 = &data_801800
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_25
        
        while (true)
            char edx_27 = *result_2
            char temp22_1 = *esi_23
            bool c_8 = edx_27 u< temp22_1
            
            if (edx_27 == temp22_1)
                if (edx_27 == 0)
                    esi_25 = 0
                    break
                
                edx_27 = result_2[1]
                char temp23_1 = esi_23[1]
                c_8 = edx_27 u< temp23_1
                
                if (edx_27 == temp23_1)
                    result_2 = &result_2[2]
                    esi_23 = &esi_23[2]
                    
                    if (edx_27 != 0)
                        continue
                    
                    esi_25 = 0
                    break
            
            esi_25 = sbb.d(esi_23, esi_23, c_8) | 1
            break
        
        int32_t var_8_15 = 7
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp24_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp24_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_16 = 0xffffffff
        
        if (esi_25 != 0)
            goto label_626012
        
        void* const esi_26 = data_b604e0
        int32_t ebx_3 = *(edi + 8)
        
        if (esi_26 == 0xffffffff)
            esi_26 = nullptr
        
        void* eax_33 = sub_4b95e0()
        void* esi_27 = esi_26 + ebx_3
        int32_t* eax_34 = sub_4b9480()
        void* edx_31 = esi_27 - eax_33
        
        if (esi_27 s< eax_33)
            edx_31 = esi_27
        
        void* eax_35 = sub_4b9680(&eax_34[2], edx_31)
        eax_9 = sub_4d6250(eax_35)
        
        if (eax_9.b != 0)
            sub_4b40b0(*(eax_35 + 0x18), 0)
        label_626012:
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        var_64_2 = "ScorescreenClick"
        var_68_2 = 0xee2a
        ecx_16 = "GameCanAddFriend(playerConfig)"
    else
        void var_50
        eax_9 = sub_4ba400(&var_50)
        
        if (eax_9.b != 0)
            uint32_t eax_27 = sub_4d6320(&eax_26[2])
            sub_60a950(eax_27, eax_27, &var_50, 1)
            goto label_625d04
        
        var_64_2 = "ScorescreenClick"
        var_68_2 = 0xeded
        ecx_16 = "retval"
    
    var_6c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
label_625a34:
    var_64_2 = "GetClient"
    var_68_2 = 0x7b
    var_6c_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_16 = "gClient"

sub_63b870(eax_9, &data_801800, ecx_16, var_6c_2, var_68_2, var_64_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
