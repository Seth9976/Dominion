// 函数: sub_4bf0f0
// 地址: 0x4bf0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@IG@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_4
char* ebx = arg_4
char* esi = *(ebx + 4)
sub_63d720(&var_14, "btnBack")
char* eax_3 = var_14
char* const edi = &data_801800
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 == 0 || *(ebx + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 4
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* ebx_1 = arg_4
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&var_14, "btnAvatar")
char* eax_4 = var_14
char* const ecx_9 = &data_801800

if (eax_4 != 0)
    ecx_9 = eax_4

int32_t esi_3

while (true)
    char edx_4 = *ecx_9
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_9[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_9 = &ecx_9[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    eax_4 = sub_63d4e0(&var_14)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_cc8dbc = esi_3
    eax_4.b = 0
    data_8db660 = 6
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

char* esi_4 = *(ebx_1 + 4)
sub_63d720(&var_14, "BtnProfiles")
char* eax_5 = var_14
char* const ecx_15 = &data_801800

if (eax_5 != 0)
    ecx_15 = eax_5

int32_t esi_6

while (true)
    char edx_7 = *ecx_15
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_15[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_15 = &ecx_15[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    eax_5 = sub_63d4e0(&var_14)
    int32_t temp8_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_8db660 = 8
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* esi_7 = *(ebx_1 + 4)
sub_63d720(&var_14, "BtnOffline")
char* eax_6 = var_14
char* const ecx_21 = &data_801800

if (eax_6 != 0)
    ecx_21 = eax_6

int32_t esi_9

while (true)
    char edx_10 = *ecx_21
    char temp9_1 = *esi_7
    bool c_4 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_21[1]
        char temp10_1 = esi_7[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_21 = &ecx_21[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&var_14)
    int32_t temp11_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_26
    ecx_26.b = *(eax_8 + 0x42b4) == 0
    *(eax_8 + 0x42b4) = ecx_26
    data_cc8dc8
    sub_4d8ad0(eax_8)
    
    if (*(eax_8 + 0x42b4) == 0)
        sub_4aea20()
        void* eax_10
        eax_10.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    sub_4aeb40(0)
    int32_t eax_9
    eax_9.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9

sub_63d720(&var_14, "BtnEnterCode")
char* eax_11 = var_14
char* const ecx_34 = &data_801800
char* edx_13 = *(ebx_1 + 4)

if (eax_11 != 0)
    ecx_34 = eax_11

int32_t esi_11

while (true)
    ebx_1.b = *edx_13
    char temp12_1 = *ecx_34
    bool c_5 = ebx_1.b u< temp12_1
    
    if (ebx_1.b == temp12_1)
        if (ebx_1.b == 0)
            esi_11 = 0
            break
        
        ebx_1.b = edx_13[1]
        char temp13_1 = ecx_34[1]
        c_5 = ebx_1.b u< temp13_1
        
        if (ebx_1.b == temp13_1)
            edx_13 = &edx_13[2]
            ecx_34 = &ecx_34[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_11 = 0
            break
    
    esi_11 = sbb.d(esi_9, esi_9, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_11 != 0 && *eax_11 != 0)
    char* eax_12 = sub_63d4e0(&var_14)
    int32_t temp14_1 = *(eax_12 + 4)
    *(eax_12 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (esi_11 == 0)
    void* eax_13 = data_8dbc48
    
    if (eax_13 != 0 && eax_13 != &data_801800)
        if (data_cf65bc != esi_11 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&data_8dbc48)
            int32_t temp17_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp17_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        
        data_8dbc48 = &data_801800
    
    data_8dbc4c = 1
    sub_63d720(&arg_4, &data_801800)
    int32_t var_8_11 = 5
    data_8db6b0 = 0x22
    data_8db768 = &data_8dbc78
    data_8db770 = Concurrency::details::ListArray<struct Concurrency::details::ListArrayInlineLink<class Concurrency::details::WorkQueue> >::CheckForDeletionBridge
    data_8db774 = sub_4bfb50
    sub_63d850(&data_8db76c, &arg_4)
    data_8db778 = 3
    int32_t var_8_12 = 6
    goto label_4bf89e

sub_63d720(&var_14, "btn_clearEmail")
char* const ecx_40 = &data_801800
char* edx_18 = *(arg_4 + 4)
char* eax_17 = var_14

if (eax_17 != 0)
    ecx_40 = eax_17

int32_t esi_13

while (true)
    ebx_1.b = *edx_18
    char temp15_1 = *ecx_40
    bool c_6 = ebx_1.b u< temp15_1
    
    if (ebx_1.b == temp15_1)
        if (ebx_1.b == 0)
            esi_13 = 0
            break
        
        ebx_1.b = edx_18[1]
        char temp16_1 = ecx_40[1]
        c_6 = ebx_1.b u< temp16_1
        
        if (ebx_1.b == temp16_1)
            edx_18 = &edx_18[2]
            ecx_40 = &ecx_40[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_13 = 0
            break
    
    esi_13 = sbb.d(esi_11, esi_11, c_6) | 1
    break

int32_t var_8_13 = 7

if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
    char* eax_18 = sub_63d4e0(&var_14)
    int32_t temp19_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp19_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)

int32_t var_8_14 = 0xffffffff

if (esi_13 == 0)
    sub_4b8cc0(&data_801800)
    void* eax_19 = data_8dbc48
    
    if (eax_19 != 0 && eax_19 != &data_801800)
        if (data_cf65bc != esi_13 && *eax_19 != 0)
            char* eax_20 = sub_63d4e0(&data_8dbc48)
            int32_t temp22_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp22_1 == 1)
                sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        
        data_8dbc48 = &data_801800
    
    void* eax_21 = data_8dbc44
    
    if (eax_21 != 0 && eax_21 != &data_801800)
        if (data_cf65bc != 0 && *eax_21 != 0)
            char* eax_22 = sub_63d4e0(&data_8dbc44)
            int32_t temp23_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp23_1 == 1)
                sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        
        data_8dbc44 = &data_801800
    
    void* ecx_45 = data_cc8dc8
    data_8dbc4c = 0
    data_8dbc40 = 0
    void* eax_23 = sub_4d8f30(*(ecx_45 + 0x1e1a4))
    char* eax_24 = *(eax_23 + 4)
    
    if (eax_24 != 0 && eax_24 != &data_801800)
        if (data_cf65bc != 0 && *eax_24 != 0)
            char* eax_25 = sub_63d4e0(eax_23 + 4)
            int32_t temp24_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp24_1 == 1)
                sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        
        *(eax_23 + 4) = &data_801800
    
    char* eax_26 = *(eax_23 + 0x4258)
    
    if (eax_26 != 0 && eax_26 != &data_801800)
        if (data_cf65bc != 0 && *eax_26 != 0)
            char* eax_27 = sub_63d4e0(eax_23 + 0x4258)
            int32_t temp26_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp26_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
        
        *(eax_23 + 0x4258) = &data_801800
    
    *(eax_23 + 0x425c) &= 0xfffffffe
    data_cc8dc8
    sub_4d8ad0(eax_23)
    char* eax_28
    eax_28.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_28

sub_63d720(&var_14, "BtnAddEmail")
char* const ecx_55 = &data_801800
void* edx_29 = *(arg_4 + 4)
char* eax_30 = var_14

if (eax_30 != 0)
    ecx_55 = eax_30

int32_t esi_16

while (true)
    ebx_1.b = *edx_29
    char temp20_1 = *ecx_55
    bool c_7 = ebx_1.b u< temp20_1
    
    if (ebx_1.b == temp20_1)
        if (ebx_1.b == 0)
            esi_16 = 0
            break
        
        ebx_1.b = *(edx_29 + 1)
        char temp21_1 = ecx_55[1]
        c_7 = ebx_1.b u< temp21_1
        
        if (ebx_1.b == temp21_1)
            edx_29 += 2
            ecx_55 = &ecx_55[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_16 = 0
            break
    
    esi_16 = sbb.d(esi_13, esi_13, c_7) | 1
    break

int32_t var_8_15 = 8

if (data_cf65bc != 0 && eax_30 != 0 && *eax_30 != 0)
    char* eax_31 = sub_63d4e0(&var_14)
    int32_t temp25_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp25_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)

int32_t var_8_16 = 0xffffffff
char* eax_15

if (esi_16 != 0)
    char* ebx_3 = arg_4
    char* esi_18 = *(ebx_3 + 4)
    sub_63d720(&arg_4, "BtnResend")
    char* eax_37 = arg_4
    char* ecx_70 = &data_801800
    
    if (eax_37 != 0)
        ecx_70 = eax_37
    
    int32_t esi_20
    
    while (true)
        char edx_38 = *ecx_70
        char temp27_1 = *esi_18
        bool c_8 = edx_38 u< temp27_1
        
        if (edx_38 == temp27_1)
            if (edx_38 == 0)
                esi_20 = 0
                break
            
            edx_38 = ecx_70[1]
            char temp28_1 = esi_18[1]
            c_8 = edx_38 u< temp28_1
            
            if (edx_38 == temp28_1)
                ecx_70 = &ecx_70[2]
                esi_18 = &esi_18[2]
                
                if (edx_38 != 0)
                    continue
                
                esi_20 = 0
                break
        
        esi_20 = sbb.d(esi_18, esi_18, c_8) | 1
        break
    
    int32_t var_8_19 = 0xb
    
    if (data_cf65bc != 0 && eax_37 != 0 && *eax_37 != 0)
        char* eax_38 = sub_63d4e0(&arg_4)
        int32_t temp31_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp31_1 == 1)
            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_20 == 0)
        char* eax_40 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 4)
        
        if (eax_40 != 0)
            edi = eax_40
        
        sub_4b8cc0(edi)
        void* eax_41
        eax_41.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_41
    
    char* esi_21 = *(ebx_3 + 4)
    sub_63d720(&arg_4, "btn_newsletter")
    char* eax_42 = arg_4
    char* ecx_79 = &data_801800
    
    if (eax_42 != 0)
        ecx_79 = eax_42
    
    int32_t esi_23
    
    while (true)
        char edx_41 = *ecx_79
        char temp32_1 = *esi_21
        bool c_9 = edx_41 u< temp32_1
        
        if (edx_41 == temp32_1)
            if (edx_41 == 0)
                esi_23 = 0
                break
            
            edx_41 = ecx_79[1]
            char temp33_1 = esi_21[1]
            c_9 = edx_41 u< temp33_1
            
            if (edx_41 == temp33_1)
                ecx_79 = &ecx_79[2]
                esi_21 = &esi_21[2]
                
                if (edx_41 != 0)
                    continue
                
                esi_23 = 0
                break
        
        esi_23 = sbb.d(esi_21, esi_21, c_9) | 1
        break
    
    int32_t var_8_21 = 0xc
    
    if (data_cf65bc != 0 && eax_42 != 0 && *eax_42 != 0)
        char* eax_43 = sub_63d4e0(&arg_4)
        int32_t temp34_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp34_1 == 1)
            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_23 == 0)
        void* eax_44 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        void* eax_45
        int32_t ecx_86
        eax_45, ecx_86 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if ((*(eax_45 + 0x425c) & 1) == 0)
            ecx_86.b = 1
            sub_4aef60(ecx_86)
            *(eax_44 + 0x425c) |= 1
            int32_t eax_49
            eax_49.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_49
        
        ecx_86.b = 0
        sub_4aef60(ecx_86)
        *(eax_44 + 0x425c) &= 0xfffffffe
        int32_t eax_47
        eax_47.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_47
    
    sub_63d720(&arg_4, "BtnPrivacy")
    eax_15 = arg_4
    char* ecx_92 = *(ebx_3 + 4)
    
    if (eax_15 != 0)
        edi = eax_15
    
    int32_t esi_25
    
    while (true)
        char edx_44 = *ecx_92
        char temp35_1 = *edi
        bool c_10 = edx_44 u< temp35_1
        
        if (edx_44 == temp35_1)
            if (edx_44 == 0)
                esi_25 = 0
                break
            
            edx_44 = ecx_92[1]
            char temp36_1 = edi[1]
            c_10 = edx_44 u< temp36_1
            
            if (edx_44 == temp36_1)
                ecx_92 = &ecx_92[2]
                edi = &edi[2]
                
                if (edx_44 != 0)
                    continue
                
                esi_25 = 0
                break
        
        esi_25 = sbb.d(esi_23, esi_23, c_10) | 1
        break
    
    int32_t var_8_23 = 0xd
    
    if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_63d4e0(&arg_4)
        int32_t temp37_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp37_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
    
    if (esi_25 == 0)
        data_8db660 = 0x1e
else
    void* eax_32 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    char* ecx_60 = *(eax_32 + 4)
    
    if (ecx_60 != 0 && ecx_60 != &data_801800)
        if (data_cf65bc != esi_16 && *ecx_60 != 0)
            char* eax_33 = sub_63d4e0(eax_32 + 4)
            int32_t temp29_1 = *(eax_33 + 4)
            *(eax_33 + 4) -= 1
            
            if (temp29_1 == 1)
                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
        
        *(eax_32 + 4) = &data_801800
    
    void* eax_34 = data_8dbc44
    
    if (eax_34 != 0 && eax_34 != &data_801800)
        if (data_cf65bc != 0 && *eax_34 != 0)
            char* eax_35 = sub_63d4e0(&data_8dbc44)
            int32_t temp30_1 = *(eax_35 + 4)
            *(eax_35 + 4) -= 1
            
            if (temp30_1 == 1)
                sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
        
        data_8dbc44 = &data_801800
    
    data_8dbc40 = 1
    *(eax_32 + 0x425c) &= 0xfffffffe
    sub_63d720(&arg_4, &data_801800)
    int32_t var_8_17 = 9
    data_8db6b0 = 0x22
    data_8db768 = &data_8dbc54
    data_8db770 = sub_4bfb60
    data_8db774 = sub_4bfb50
    sub_63d850(&data_8db76c, &arg_4)
    data_8db778 = 2
    int32_t var_8_18 = 0xa
label_4bf89e:
    
    if (data_cf65bc != 0)
        eax_15 = arg_4
        
        if (eax_15 != 0 && *eax_15 != 0)
            eax_15 = sub_63d4e0(&arg_4)
            int32_t temp18_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp18_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                int32_t* eax_36
                eax_36.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_36

eax_15.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
