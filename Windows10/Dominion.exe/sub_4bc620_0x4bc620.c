// 函数: sub_4bc620
// 地址: 0x4bc620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_762ca7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_950 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = nullptr
char* esi = *(arg3 + 4)
char* var_90c
sub_63d720(&var_90c, "btn_playerRoot")
char* eax_4 = var_90c
char* const result_2 = &data_801800
char* const ecx_3 = &data_801800

if (eax_4 != 0)
    ecx_3 = eax_4

int32_t esi_2

while (true)
    char edx = *ecx_3
    char temp3_1 = *esi
    bool c_1 = edx u< temp3_1
    
    if (edx == temp3_1)
        if (edx == 0)
            esi_2 = 0
            break
        
        edx = ecx_3[1]
        char temp4_1 = esi[1]
        c_1 = edx u< temp4_1
        
        if (edx == temp4_1)
            ecx_3 = &ecx_3[2]
            esi = &esi[2]
            
            if (edx != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    char* eax_5 = sub_63d4e0(&var_90c)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    int32_t eax_6 = *(arg3 + 8)
    *arg4 = 1
    *arg5 = eax_6
    data_8dbf50 = eax_6

char* esi_4 = *(arg3 + 4)
sub_63d720(&var_90c, "btn_taptip")
char* eax_7 = var_90c
char* const ecx_9 = &data_801800

if (eax_7 != 0)
    ecx_9 = eax_7

int32_t esi_6

while (true)
    char edx_3 = *ecx_9
    char temp6_1 = *esi_4
    bool c_2 = edx_3 u< temp6_1
    
    if (edx_3 == temp6_1)
        if (edx_3 == 0)
            esi_6 = 0
            break
        
        edx_3 = ecx_9[1]
        char temp7_1 = esi_4[1]
        c_2 = edx_3 u< temp7_1
        
        if (edx_3 == temp7_1)
            ecx_9 = &ecx_9[2]
            esi_4 = &esi_4[2]
            
            if (edx_3 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_90c)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_4 = 0xffffffff
void* edi_4

if (esi_6 == 0)
    void* eax_9 = data_cc8d94
    
    if (eax_9 == 0)
        eax_9 = sub_4acc60()
        data_cc8d94 = eax_9
    
    data_cc8d98 = 0
    data_cc8d9c = 2
    data_cc8d90 = 0
    data_cc8da0 = 0x10
    data_cc8da4 = 0
    sub_4add50(eax_9)
    data_8db660 = 0x16
label_4bd6b6:
    *arg4 = 0
label_4bd6b9:
    edi_4 = arg3
label_4bd6bf:
    char* esi_63 = *(edi_4 + 4)
    sub_63d720(&result_1, "btnPlayerRemove")
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_65
    
    while (true)
        char ecx_96 = *result_2
        char temp10_1 = *esi_63
        bool c_20 = ecx_96 u< temp10_1
        
        if (ecx_96 == temp10_1)
            if (ecx_96 == 0)
                esi_65 = 0
                break
            
            ecx_96 = result_2[1]
            char temp12_1 = esi_63[1]
            c_20 = ecx_96 u< temp12_1
            
            if (ecx_96 == temp12_1)
                result_2 = &result_2[2]
                esi_63 = &esi_63[2]
                
                if (ecx_96 != 0)
                    continue
                
                esi_65 = 0
                break
        
        esi_65 = sbb.d(esi_63, esi_63, c_20) | 1
        break
    
    int32_t var_8_42 = 0x15
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp14_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp14_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_43 = 0xffffffff
    
    if (esi_65 == 0)
        *(sub_4bc5c0(arg2, *(edi_4 + 8)) + 0x14) = esi_65
        result = arg4
        *result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

if (*arg4 == 0)
    goto label_4bd6b9

char* _Destination = sub_4bc5c0(arg2, *arg5)
char* esi_7 = *(arg3 + 4)
sub_63d720(&var_90c, "btnClose")
char* ecx_15 = var_90c
char* const edx_7 = &data_801800

if (ecx_15 != 0)
    edx_7 = ecx_15

int32_t esi_9

while (true)
    char eax_14 = *edx_7
    char temp9_1 = *esi_7
    bool c_3 = eax_14 u< temp9_1
    
    if (eax_14 == temp9_1)
        if (eax_14 == 0)
            esi_9 = 0
            break
        
        eax_14 = edx_7[1]
        char temp11_1 = esi_7[1]
        c_3 = eax_14 u< temp11_1
        
        if (eax_14 == temp11_1)
            edx_7 = &edx_7[2]
            esi_7 = &esi_7[2]
            
            if (eax_14 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && ecx_15 != 0 && *ecx_15 != 0)
    char* eax_15 = sub_63d4e0(&var_90c)
    int32_t temp13_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp13_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_9 == 0)
    *arg4 = 0

char* esi_10 = *(arg3 + 4)
sub_63d720(&var_90c, "btnLocal")
char* eax_18 = var_90c
char* const ecx_19 = &data_801800

if (eax_18 != 0)
    ecx_19 = eax_18

int32_t esi_12

while (true)
    char edx_10 = *ecx_19
    char temp15_1 = *esi_10
    bool c_4 = edx_10 u< temp15_1
    
    if (edx_10 == temp15_1)
        if (edx_10 == 0)
            esi_12 = 0
            break
        
        edx_10 = ecx_19[1]
        char temp16_1 = esi_10[1]
        c_4 = edx_10 u< temp16_1
        
        if (edx_10 == temp16_1)
            ecx_19 = &ecx_19[2]
            esi_10 = &esi_10[2]
            
            if (edx_10 != 0)
                continue
            
            esi_12 = 0
            break
    
    esi_12 = sbb.d(esi_10, esi_10, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_18 != 0 && *eax_18 != 0)
    char* eax_19 = sub_63d4e0(&var_90c)
    int32_t temp17_1 = *(eax_19 + 4)
    *(eax_19 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_12 == 0)
    *arg6 = 1

char* esi_13 = *(arg3 + 4)
sub_63d720(&var_90c, "btnAI")
char* eax_21 = var_90c
char* const ecx_23 = &data_801800

if (eax_21 != 0)
    ecx_23 = eax_21

int32_t esi_15

while (true)
    char edx_13 = *ecx_23
    char temp18_1 = *esi_13
    bool c_5 = edx_13 u< temp18_1
    
    if (edx_13 == temp18_1)
        if (edx_13 == 0)
            esi_15 = 0
            break
        
        edx_13 = ecx_23[1]
        char temp19_1 = esi_13[1]
        c_5 = edx_13 u< temp19_1
        
        if (edx_13 == temp19_1)
            ecx_23 = &ecx_23[2]
            esi_13 = &esi_13[2]
            
            if (edx_13 != 0)
                continue
            
            esi_15 = 0
            break
    
    esi_15 = sbb.d(esi_13, esi_13, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_21 != 0 && *eax_21 != 0)
    char* eax_22 = sub_63d4e0(&var_90c)
    int32_t temp20_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_10 = 0xffffffff

if (esi_15 == 0)
    *arg6 = esi_15

char* esi_16 = *(arg3 + 4)
sub_63d720(&var_90c, "btnFriend")
char* eax_24 = var_90c
char* const ecx_27 = &data_801800

if (eax_24 != 0)
    ecx_27 = eax_24

int32_t esi_18

while (true)
    char edx_16 = *ecx_27
    char temp21_1 = *esi_16
    bool c_6 = edx_16 u< temp21_1
    
    if (edx_16 == temp21_1)
        if (edx_16 == 0)
            esi_18 = 0
            break
        
        edx_16 = ecx_27[1]
        char temp22_1 = esi_16[1]
        c_6 = edx_16 u< temp22_1
        
        if (edx_16 == temp22_1)
            ecx_27 = &ecx_27[2]
            esi_16 = &esi_16[2]
            
            if (edx_16 != 0)
                continue
            
            esi_18 = 0
            break
    
    esi_18 = sbb.d(esi_16, esi_16, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && eax_24 != 0 && *eax_24 != 0)
    char* eax_25 = sub_63d4e0(&var_90c)
    int32_t temp23_1 = *(eax_25 + 4)
    *(eax_25 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_12 = 0xffffffff

if (esi_18 == 0)
    *arg6 = 1

char* esi_19 = *(arg3 + 4)
sub_63d720(&var_90c, "btnLobby")
char* eax_27 = var_90c
char* const ecx_31 = &data_801800

if (eax_27 != 0)
    ecx_31 = eax_27

int32_t esi_21

while (true)
    char edx_19 = *ecx_31
    char temp24_1 = *esi_19
    bool c_7 = edx_19 u< temp24_1
    
    if (edx_19 == temp24_1)
        if (edx_19 == 0)
            esi_21 = 0
            break
        
        edx_19 = ecx_31[1]
        char temp25_1 = esi_19[1]
        c_7 = edx_19 u< temp25_1
        
        if (edx_19 == temp25_1)
            ecx_31 = &ecx_31[2]
            esi_19 = &esi_19[2]
            
            if (edx_19 != 0)
                continue
            
            esi_21 = 0
            break
    
    esi_21 = sbb.d(esi_19, esi_19, c_7) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && eax_27 != 0 && *eax_27 != 0)
    char* eax_28 = sub_63d4e0(&var_90c)
    int32_t temp26_1 = *(eax_28 + 4)
    *(eax_28 + 4) -= 1
    
    if (temp26_1 == 1)
        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_14 = 0xffffffff

if (esi_21 == 0)
    *arg6 = esi_21

char* esi_22 = *(arg3 + 4)
sub_63d720(&var_90c, "btnIntro")
char* eax_30 = var_90c
char* const ecx_35 = &data_801800

if (eax_30 != 0)
    ecx_35 = eax_30

int32_t esi_24

while (true)
    char edx_22 = *ecx_35
    char temp27_1 = *esi_22
    bool c_8 = edx_22 u< temp27_1
    
    if (edx_22 == temp27_1)
        if (edx_22 == 0)
            esi_24 = 0
            break
        
        edx_22 = ecx_35[1]
        char temp28_1 = esi_22[1]
        c_8 = edx_22 u< temp28_1
        
        if (edx_22 == temp28_1)
            ecx_35 = &ecx_35[2]
            esi_22 = &esi_22[2]
            
            if (edx_22 != 0)
                continue
            
            esi_24 = 0
            break
    
    esi_24 = sbb.d(esi_22, esi_22, c_8) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && eax_30 != 0 && *eax_30 != 0)
    char* eax_31 = sub_63d4e0(&var_90c)
    int32_t temp29_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_16 = 0xffffffff

if (esi_24 == 0)
    *(_Destination + 0x14) = 3
    *(_Destination + 0x18) = 3
    strncpy(_Destination, "Very Easy AI", 0x10)
    _Destination[0xf] = 0
    *(_Destination + 0x10) = *(_Destination + 0x18) + 1 + sub_6245e0(1)
    *arg4 = 0

char* esi_26 = *(arg3 + 4)
sub_63d720(&var_90c, "btnEasy")
char* eax_36 = var_90c
char* const ecx_39 = &data_801800

if (eax_36 != 0)
    ecx_39 = eax_36

int32_t esi_28

while (true)
    char edx_26 = *ecx_39
    char temp30_1 = *esi_26
    bool c_9 = edx_26 u< temp30_1
    
    if (edx_26 == temp30_1)
        if (edx_26 == 0)
            esi_28 = 0
            break
        
        edx_26 = ecx_39[1]
        char temp31_1 = esi_26[1]
        c_9 = edx_26 u< temp31_1
        
        if (edx_26 == temp31_1)
            ecx_39 = &ecx_39[2]
            esi_26 = &esi_26[2]
            
            if (edx_26 != 0)
                continue
            
            esi_28 = 0
            break
    
    esi_28 = sbb.d(esi_26, esi_26, c_9) | 1
    break

int32_t var_8_17 = 8

if (data_cf65bc != 0 && eax_36 != 0 && *eax_36 != 0)
    char* eax_37 = sub_63d4e0(&var_90c)
    int32_t temp32_1 = *(eax_37 + 4)
    *(eax_37 + 4) -= 1
    
    if (temp32_1 == 1)
        sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_18 = 0xffffffff

if (esi_28 == 0)
    *(_Destination + 0x14) = 3
    *(_Destination + 0x18) = esi_28
    strncpy(_Destination, "Easy AI", 0x10)
    _Destination[0xf] = 0
    *(_Destination + 0x10) = *(_Destination + 0x18) + 1 + sub_6245e0(1)
    *arg4 = 0

char* esi_30 = *(arg3 + 4)
sub_63d720(&var_90c, "btnMedium")
char* eax_42 = var_90c
char* const ecx_43 = &data_801800

if (eax_42 != 0)
    ecx_43 = eax_42

int32_t esi_32

while (true)
    char edx_30 = *ecx_43
    char temp33_1 = *esi_30
    bool c_10 = edx_30 u< temp33_1
    
    if (edx_30 == temp33_1)
        if (edx_30 == 0)
            esi_32 = 0
            break
        
        edx_30 = ecx_43[1]
        char temp34_1 = esi_30[1]
        c_10 = edx_30 u< temp34_1
        
        if (edx_30 == temp34_1)
            ecx_43 = &ecx_43[2]
            esi_30 = &esi_30[2]
            
            if (edx_30 != 0)
                continue
            
            esi_32 = 0
            break
    
    esi_32 = sbb.d(esi_30, esi_30, c_10) | 1
    break

int32_t var_8_19 = 9

if (data_cf65bc != 0 && eax_42 != 0 && *eax_42 != 0)
    char* eax_43 = sub_63d4e0(&var_90c)
    int32_t temp35_1 = *(eax_43 + 4)
    *(eax_43 + 4) -= 1
    
    if (temp35_1 == 1)
        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_20 = 0xffffffff

if (esi_32 == 0)
    *(_Destination + 0x14) = 3
    *(_Destination + 0x18) = 1
    strncpy(_Destination, "AI", 0x10)
    _Destination[0xf] = 0
    *(_Destination + 0x10) = *(_Destination + 0x18) + 1 + sub_6245e0(1)
    *arg4 = 0

char* esi_34 = *(arg3 + 4)
sub_63d720(&var_90c, "btnHard")
char* eax_48 = var_90c
char* ecx_47 = &data_801800

if (eax_48 != 0)
    ecx_47 = eax_48

int32_t esi_36

while (true)
    char edx_34 = *ecx_47
    char temp36_1 = *esi_34
    bool c_11 = edx_34 u< temp36_1
    
    if (edx_34 == temp36_1)
        if (edx_34 == 0)
            esi_36 = 0
            break
        
        edx_34 = ecx_47[1]
        char temp37_1 = esi_34[1]
        c_11 = edx_34 u< temp37_1
        
        if (edx_34 == temp37_1)
            ecx_47 = &ecx_47[2]
            esi_34 = &esi_34[2]
            
            if (edx_34 != 0)
                continue
            
            esi_36 = 0
            break
    
    esi_36 = sbb.d(esi_34, esi_34, c_11) | 1
    break

int32_t var_8_21 = 0xa

if (data_cf65bc != 0 && eax_48 != 0 && *eax_48 != 0)
    char* eax_49 = sub_63d4e0(&var_90c)
    int32_t temp38_1 = *(eax_49 + 4)
    *(eax_49 + 4) -= 1
    
    if (temp38_1 == 1)
        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_22 = 0xffffffff

if (esi_36 == 0)
    *(_Destination + 0x14) = 3
    *(_Destination + 0x18) = 2
    strncpy(_Destination, "Hard AI", 0x10)
    _Destination[0xf] = 0
    *(_Destination + 0x10) = *(_Destination + 0x18) + 1 + sub_6245e0(1)
    *arg4 = 0

char* esi_38 = *(arg3 + 4)
sub_63d720(&var_90c, "btnOptional")
char* eax_54 = var_90c
char* ecx_51 = &data_801800

if (eax_54 != 0)
    ecx_51 = eax_54

int32_t esi_40

while (true)
    char edx_38 = *ecx_51
    char temp39_1 = *esi_38
    bool c_12 = edx_38 u< temp39_1
    
    if (edx_38 == temp39_1)
        if (edx_38 == 0)
            esi_40 = 0
            break
        
        edx_38 = ecx_51[1]
        char temp40_1 = esi_38[1]
        c_12 = edx_38 u< temp40_1
        
        if (edx_38 == temp40_1)
            ecx_51 = &ecx_51[2]
            esi_38 = &esi_38[2]
            
            if (edx_38 != 0)
                continue
            
            esi_40 = 0
            break
    
    esi_40 = sbb.d(esi_38, esi_38, c_12) | 1
    break

int32_t var_8_23 = 0xb

if (data_cf65bc != 0 && eax_54 != 0 && *eax_54 != 0)
    char* eax_55 = sub_63d4e0(&var_90c)
    int32_t temp41_1 = *(eax_55 + 4)
    *(eax_55 + 4) -= 1
    
    if (temp41_1 == 1)
        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_24 = 0xffffffff

if (esi_40 == 0)
    *(_Destination + 0x14) = 2
    *(_Destination + 0x18) = 1
    strncpy(_Destination, "OPTIONAL", 0x10)
    _Destination[0xf] = 0
    *arg4 = 0

char* esi_41 = *(arg3 + 4)
sub_63d720(&var_90c, "btnRequired")
char* eax_58 = var_90c
char* ecx_55 = &data_801800

if (eax_58 != 0)
    ecx_55 = eax_58

int32_t esi_43

while (true)
    char edx_41 = *ecx_55
    char temp42_1 = *esi_41
    bool c_13 = edx_41 u< temp42_1
    
    if (edx_41 == temp42_1)
        if (edx_41 == 0)
            esi_43 = 0
            break
        
        edx_41 = ecx_55[1]
        char temp43_1 = esi_41[1]
        c_13 = edx_41 u< temp43_1
        
        if (edx_41 == temp43_1)
            ecx_55 = &ecx_55[2]
            esi_41 = &esi_41[2]
            
            if (edx_41 != 0)
                continue
            
            esi_43 = 0
            break
    
    esi_43 = sbb.d(esi_41, esi_41, c_13) | 1
    break

int32_t var_8_25 = 0xc

if (data_cf65bc != 0 && eax_58 != 0 && *eax_58 != 0)
    char* eax_59 = sub_63d4e0(&var_90c)
    int32_t temp44_1 = *(eax_59 + 4)
    *(eax_59 + 4) -= 1
    
    if (temp44_1 == 1)
        sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_26 = 0xffffffff

if (esi_43 == 0)
    *(_Destination + 0x14) = 2
    *(_Destination + 0x18) = esi_43
    strncpy(_Destination, "REQUIRED", 0x10)
    _Destination[0xf] = 0
    *arg4 = 0

char* esi_44 = *(arg3 + 4)
sub_63d720(&var_90c, "btnPlayer")
char* eax_62 = var_90c
char* ecx_59 = &data_801800

if (eax_62 != 0)
    ecx_59 = eax_62

char* esi_46

while (true)
    char edx_44 = *ecx_59
    char temp45_1 = *esi_44
    bool c_14 = edx_44 u< temp45_1
    
    if (edx_44 == temp45_1)
        if (edx_44 == 0)
            esi_46 = nullptr
            break
        
        edx_44 = ecx_59[1]
        char temp46_1 = esi_44[1]
        c_14 = edx_44 u< temp46_1
        
        if (edx_44 == temp46_1)
            ecx_59 = &ecx_59[2]
            esi_44 = &esi_44[2]
            
            if (edx_44 != 0)
                continue
            
            esi_46 = nullptr
            break
    
    esi_46 = sbb.d(esi_44, esi_44, c_14) | 1
    break

int32_t var_8_27 = 0xd

if (data_cf65bc != 0 && eax_62 != 0 && *eax_62 != 0)
    char* eax_63 = sub_63d4e0(&var_90c)
    int32_t temp47_1 = *(eax_63 + 4)
    *(eax_63 + 4) -= 1
    
    if (temp47_1 == 1)
        sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
        var_90c = &data_801800

int32_t var_8_28 = 0xffffffff

if (esi_46 != 0)
    goto label_4bd231

char* var_914 = esi_46
int32_t eax_64
void* edx_47
eax_64, edx_47 = sub_6245e0(&esi_46[1])
int32_t ebx = eax_64
void* eax_65 = edx_47
void* var_940_1 = eax_65
char const* const var_95c_8
int32_t var_958_2
char const* const var_954_2
char* ecx_69

if (ebx s>= eax_65)
label_4bd26b:
    var_954_2 = "RandomUnusedAvatar"
    var_958_2 = 0x120
    var_95c_8 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx_69 = "numAvatars > 0"
else
    void* ecx_63 = arg2
    eax_65 = ecx_63 + 0x40
    void* var_920_1 = eax_65
    int32_t var_908[0x23c]
    void* esi_49
    
    do
        int32_t esi_47 = 0
        void* edi_1 = eax_65
        
        while (true)
            sub_4b06c0(&result_1, ecx_63, &var_90c, edi_1, &result_1)
            int32_t var_8_29 = 0xe
            
            if (data_cf65bc != 0)
                char* eax_67 = var_90c
                
                if (eax_67 != 0 && *eax_67 != 0)
                    char* eax_68 = sub_63d4e0(&var_90c)
                    int32_t temp50_1 = *(eax_68 + 4)
                    *(eax_68 + 4) -= 1
                    
                    if (temp50_1 == 1)
                        sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                        var_90c = &data_801800
            
            int32_t var_8_30 = 0xffffffff
            
            if (result_1 == ebx)
                esi_49 = var_914
                break
            
            ecx_63 = arg2
            esi_47 += 1
            edi_1 += 0x22c
            
            if (esi_47 s>= 8)
                char* esi_48 = var_914
                var_908[esi_48] = ebx
                esi_49 = &esi_48[1]
                var_914 = esi_49
                break
        
        eax_65 = var_920_1
        ebx += 1
        ecx_63 = arg2
    while (ebx s< var_940_1)
    
    if (esi_49 s<= 0)
        goto label_4bd26b
    
    uint32_t temp1_1 = modu.dp.d(0:(sub_63eb70()), esi_49)
    *(_Destination + 0x14) = 0x3e9
    *(_Destination + 0x10) = var_908[temp1_1]
    strncpy(_Destination, "Guest", 0x10)
    _Destination[0xf] = 0
    *arg4 = 0
label_4bd231:
    char* esi_50 = *(arg3 + 4)
    sub_63d720(&var_914, "btnProfile")
    char* eax_73 = var_914
    char* const ecx_68 = &data_801800
    
    if (eax_73 != 0)
        ecx_68 = eax_73
    
    int32_t esi_52
    
    while (true)
        char edx_53 = *ecx_68
        char temp48_1 = *esi_50
        bool c_15 = edx_53 u< temp48_1
        
        if (edx_53 == temp48_1)
            if (edx_53 == 0)
                esi_52 = 0
                break
            
            edx_53 = ecx_68[1]
            char temp49_1 = esi_50[1]
            c_15 = edx_53 u< temp49_1
            
            if (edx_53 == temp49_1)
                ecx_68 = &ecx_68[2]
                esi_50 = &esi_50[2]
                
                if (edx_53 != 0)
                    continue
                
                esi_52 = 0
                break
        
        esi_52 = sbb.d(esi_50, esi_50, c_15) | 1
        break
    
    int32_t var_8_31 = 0xf
    
    if (data_cf65bc != 0 && eax_73 != 0 && *eax_73 != 0)
        char* eax_74 = sub_63d4e0(&var_914)
        int32_t temp51_1 = *(eax_74 + 4)
        *(eax_74 + 4) -= 1
        
        if (temp51_1 == 1)
            sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
            var_914 = &data_801800
    
    int32_t var_8_32 = 0xffffffff
    
    if (esi_52 == 0)
        char** eax_77 = sub_4d8f30(*((*(arg3 + 8) << 2) + &data_8dbf54))
        *(_Destination + 0x14) = 0x3e8
        char* _Source_1 = &data_801800
        char* _Source_3 = *eax_77
        
        if (_Source_3 != 0)
            _Source_1 = _Source_3
        
        strncpy(_Destination, _Source_1, 0x10)
        _Destination[0xf] = 0
        *(_Destination + 0x10) = eax_77[2]
        *(_Destination + 0x18) = eax_77[0x10ac]
        *arg4 = 0
    
    char* edi_2 = *(arg3 + 4)
    sub_63d720(&var_914, "btnAddPlayerBg")
    int32_t var_8_33 = 0x10
    char* result_3 = 1
    char* esi_54 = var_914
    char* const eax_82 = &data_801800
    result_1 = 1
    
    if (esi_54 != 0)
        eax_82 = esi_54
    
    int32_t eax_84
    
    while (true)
        char ecx_74 = *eax_82
        char temp52_1 = *edi_2
        bool c_16 = ecx_74 u< temp52_1
        
        if (ecx_74 == temp52_1)
            if (ecx_74 == 0)
                eax_84 = 0
                break
            
            ecx_74 = eax_82[1]
            char temp53_1 = edi_2[1]
            c_16 = ecx_74 u< temp53_1
            
            if (ecx_74 == temp53_1)
                eax_82 = &eax_82[2]
                edi_2 = &edi_2[2]
                
                if (ecx_74 != 0)
                    continue
                
                eax_84 = 0
                break
        
        eax_84 = sbb.d(eax_82, eax_82, c_16) | 1
        break
    
    char edx_56 = 1
    char var_919_1
    char* eax_86
    
    if (eax_84 == 0)
        eax_86 = var_90c
        edi_4 = arg3
    label_4bd40c:
        var_919_1 = 1
        
        if ((edx_56 & 2) != 0)
            goto label_4bd418
    else
        char* edi_3 = *(arg3 + 4)
        sub_63d720(&var_90c, "btnBack")
        eax_86 = var_90c
        char* ecx_76 = &data_801800
        result_3 = 3
        
        if (eax_86 != 0)
            ecx_76 = eax_86
        
        int32_t ecx_78
        
        while (true)
            char edx_57 = *ecx_76
            char temp54_1 = *edi_3
            bool c_17 = edx_57 u< temp54_1
            
            if (edx_57 == temp54_1)
                if (edx_57 == 0)
                    ecx_78 = 0
                    break
                
                edx_57 = ecx_76[1]
                char temp55_1 = edi_3[1]
                c_17 = edx_57 u< temp55_1
                
                if (edx_57 == temp55_1)
                    ecx_76 = &ecx_76[2]
                    edi_3 = &edi_3[2]
                    
                    if (edx_57 != 0)
                        continue
                    
                    ecx_78 = 0
                    break
            
            ecx_78 = sbb.d(ecx_76, ecx_76, c_17) | 1
            break
        
        edi_4 = arg3
        edx_56 = 3
        
        if (ecx_78 == 0 || *(edi_4 + 0x18) == 2)
            goto label_4bd40c
        
        var_919_1 = 0
    label_4bd418:
        result_3 &= 0xfffffffd
        result_1 = result_3
        int32_t var_8_34 = 0x11
        
        if (data_cf65bc != 0 && eax_86 != 0 && *eax_86 != 0)
            char* eax_87 = sub_63d4e0(&var_90c)
            int32_t temp56_1 = *(eax_87 + 4)
            *(eax_87 + 4) -= 1
            
            if (temp56_1 == 1)
                sub_64c080(eax_87, *(eax_87 + 0xc) + 0x10)
                var_90c = &data_801800
    int32_t var_8_35 = 0xffffffff
    
    if ((result_3.b & 1) != 0)
        int32_t var_8_36 = 0x12
        
        if (data_cf65bc != 0 && esi_54 != 0 && *esi_54 != 0)
            char* eax_88 = sub_63d4e0(&var_914)
            int32_t temp58_1 = *(eax_88 + 4)
            *(eax_88 + 4) -= 1
            
            if (temp58_1 == 1)
                sub_64c080(eax_88, *(eax_88 + 0xc) + 0x10)
                var_914 = &data_801800
        
        int32_t var_8_37 = 0xffffffff
    
    if (var_919_1 != 0)
        *arg4 = 0
    
    char* esi_55 = *(edi_4 + 4)
    sub_63d720(&var_914, "btnFriendList")
    char* eax_90 = var_914
    result_2 = &data_801800
    char* ecx_84 = &data_801800
    
    if (eax_90 != 0)
        ecx_84 = eax_90
    
    int32_t esi_57
    
    while (true)
        char edx_62 = *ecx_84
        char temp57_1 = *esi_55
        bool c_18 = edx_62 u< temp57_1
        
        if (edx_62 == temp57_1)
            if (edx_62 == 0)
                esi_57 = 0
                break
            
            edx_62 = ecx_84[1]
            char temp59_1 = esi_55[1]
            c_18 = edx_62 u< temp59_1
            
            if (edx_62 == temp59_1)
                ecx_84 = &ecx_84[2]
                esi_55 = &esi_55[2]
                
                if (edx_62 != 0)
                    continue
                
                esi_57 = 0
                break
        
        esi_57 = sbb.d(esi_55, esi_55, c_18) | 1
        break
    
    int32_t var_8_38 = 0x13
    
    if (data_cf65bc != 0 && eax_90 != 0 && *eax_90 != 0)
        char* eax_91 = sub_63d4e0(&var_914)
        int32_t temp60_1 = *(eax_91 + 4)
        *(eax_91 + 4) -= 1
        
        if (temp60_1 == 1)
            sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
            var_914 = &data_801800
    
    int32_t var_8_39 = 0xffffffff
    
    if (esi_57 == 0)
        *arg4 = 0
        sub_4bc520(esi_57 + 1)
    
    char* esi_58 = *(edi_4 + 4)
    sub_63d720(&var_914, "btnRecentFriend")
    char* eax_93 = var_914
    char* ecx_89 = &data_801800
    
    if (eax_93 != 0)
        ecx_89 = eax_93
    
    int32_t esi_60
    
    while (true)
        char edx_65 = *ecx_89
        char temp61_1 = *esi_58
        bool c_19 = edx_65 u< temp61_1
        
        if (edx_65 == temp61_1)
            if (edx_65 == 0)
                esi_60 = 0
                break
            
            edx_65 = ecx_89[1]
            char temp62_1 = esi_58[1]
            c_19 = edx_65 u< temp62_1
            
            if (edx_65 == temp62_1)
                ecx_89 = &ecx_89[2]
                esi_58 = &esi_58[2]
                
                if (edx_65 != 0)
                    continue
                
                esi_60 = 0
                break
        
        esi_60 = sbb.d(esi_58, esi_58, c_19) | 1
        break
    
    int32_t var_8_40 = 0x14
    
    if (data_cf65bc != 0 && eax_93 != 0 && *eax_93 != 0)
        char* eax_94 = sub_63d4e0(&var_914)
        int32_t temp63_1 = *(eax_94 + 4)
        *(eax_94 + 4) -= 1
        
        if (temp63_1 == 1)
            sub_64c080(eax_94, *(eax_94 + 0xc) + 0x10)
            var_914 = &data_801800
    
    int32_t var_8_41 = 0xffffffff
    
    if (esi_60 != 0)
        goto label_4bd6bf
    
    int32_t esi_61 = *(edi_4 + 8)
    int32_t edi_5 = *arg5
    void* eax_96 = sub_4bbdb0()
    eax_65 = sub_4b3f20(*((esi_61 << 2) + &data_8dbf54))
    
    if (eax_65 != 0xffffffff)
        int32_t ebx_1 = data_cc8d5c
        
        if (ebx_1 != 0)
            int32_t ecx_94 = eax_65 << 5
            void* edi_7 = edi_5 * 0x22c + eax_96
            *(edi_7 + 0x50) = *(ecx_94 + ebx_1 + 0x34)
            char* _Source_2 = *(ecx_94 + ebx_1 + 0x30)
            char* _Source = &data_801800
            
            if (_Source_2 != 0)
                _Source = _Source_2
            
            strncpy(edi_7 + 0x40, _Source, 0x10)
            *(edi_7 + 0x4f) = 0
            *(edi_7 + 0x54) = 1
            result_2 = &data_801800
            *(edi_7 + 0x58) = *(ecx_94 + ebx_1 + 0x2c)
            goto label_4bd6b6
        
        var_954_2 = "GetClient"
        var_958_2 = 0x7b
        var_95c_8 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_69 = "gClient"
    else
        var_954_2 = "LookupFriend"
        var_958_2 = 0xa75
        var_95c_8 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
        ecx_69 = "idx != -1"

sub_63b870(eax_65, &data_801800, ecx_69, var_95c_8, var_958_2, var_954_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
