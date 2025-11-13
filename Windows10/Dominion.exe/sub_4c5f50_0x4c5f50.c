// 函数: sub_4c5f50
// 地址: 0x4c5f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0SchedulerBase@details@Concurrency@@QAE@ABVSchedulerPolicy@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_20 = nullptr
char* arg_4
char* ebx = arg_4
char* esi = *(ebx + 4)
char* var_18
sub_63d720(&var_18, "btnBack")
char* eax_3 = var_18
char* const edi = &data_801800
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_3 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_3 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_3) | 1
    break

if (ecx_3 == 0 || *(ebx + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(&var_18)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* ebx_1 = arg_4
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_tabMatchmake")
char* eax_4 = var_18
char* const ecx_9 = &data_801800

if (eax_4 != 0)
    ecx_9 = eax_4

int32_t esi_3

while (true)
    char edx_4 = *ecx_9
    char temp3_1 = *esi_1
    bool c_4 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_9[1]
        char temp4_1 = esi_1[1]
        c_4 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_9 = &ecx_9[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_4) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    eax_4 = sub_63d4e0(&var_18)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_8dbfb0 = esi_3
    eax_4.b = 0
    data_8dbfb8 = esi_3
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

char* esi_4 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_tabMyGames")
char* eax_5 = var_18
char* const ecx_15 = &data_801800

if (eax_5 != 0)
    ecx_15 = eax_5

int32_t esi_6

while (true)
    char edx_7 = *ecx_15
    char temp6_1 = *esi_4
    bool c_5 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_15[1]
        char temp7_1 = esi_4[1]
        c_5 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_15 = &ecx_15[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_5) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    eax_5 = sub_63d4e0(&var_18)
    int32_t temp8_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_8dbfb0 = 1
    eax_5.b = 0
    data_8dbfb8 = esi_6
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* esi_7 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_tabLobby")
char* eax_6 = var_18
char* const ecx_21 = &data_801800

if (eax_6 != 0)
    ecx_21 = eax_6

int32_t esi_9

while (true)
    char edx_10 = *ecx_21
    char temp9_1 = *esi_7
    bool c_6 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_21[1]
        char temp10_1 = esi_7[1]
        c_6 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_21 = &ecx_21[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_6) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    eax_6 = sub_63d4e0(&var_18)
    int32_t temp11_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    data_8dbfb0 = 2
    eax_6.b = 0
    data_8dbfb8 = esi_9
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* esi_10 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_tabPrivateTable")
char* eax_7 = var_18
char* const ecx_27 = &data_801800

if (eax_7 != 0)
    ecx_27 = eax_7

int32_t esi_12

while (true)
    char edx_13 = *ecx_27
    char temp12_1 = *esi_10
    bool c_7 = edx_13 u< temp12_1
    
    if (edx_13 == temp12_1)
        if (edx_13 == 0)
            esi_12 = 0
            break
        
        edx_13 = ecx_27[1]
        char temp13_1 = esi_10[1]
        c_7 = edx_13 u< temp13_1
        
        if (edx_13 == temp13_1)
            ecx_27 = &ecx_27[2]
            esi_10 = &esi_10[2]
            
            if (edx_13 != 0)
                continue
            
            esi_12 = 0
            break
    
    esi_12 = sbb.d(esi_10, esi_10, c_7) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    eax_7 = sub_63d4e0(&var_18)
    int32_t temp14_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_10 = 0xffffffff

if (esi_12 == 0)
    data_8dbfb0 = 3
    eax_7.b = 0
    data_8dbfb8 = esi_12
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

char* esi_13 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_createPrivateTableGame")
char* eax_8 = var_18
char* const ecx_33 = &data_801800

if (eax_8 != 0)
    ecx_33 = eax_8

int32_t c

while (true)
    char edx_16 = *ecx_33
    char temp15_1 = *esi_13
    bool c_8 = edx_16 u< temp15_1
    
    if (edx_16 == temp15_1)
        if (edx_16 == 0)
            c = 0
            break
        
        edx_16 = ecx_33[1]
        char temp16_1 = esi_13[1]
        c_8 = edx_16 u< temp16_1
        
        if (edx_16 == temp16_1)
            ecx_33 = &ecx_33[2]
            esi_13 = &esi_13[2]
            
            if (edx_16 != 0)
                continue
            
            c = 0
            break
    
    c = sbb.d(esi_13, esi_13, c_8) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && eax_8 != 0 && *eax_8 != 0)
    char* eax_9 = sub_63d4e0(&var_18)
    int32_t temp17_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_12 = 0xffffffff
char* eax_13

if (c == 0)
    memset(&data_8dbf38, c, 0x78)
    data_8dbf40.d = 1
label_4c71a7:
    data_8dbf38 = 1
label_4c71c0:
    *(sub_4bbdb0() + 0x28) = 0x17
    sub_62b4e0()
    data_8db660 = 0x10
label_4c71d6:
    eax_13.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_13

char* esi_15 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_joinPrivateTableGame")
char* eax_10 = var_18
char* const ecx_37 = &data_801800

if (eax_10 != 0)
    ecx_37 = eax_10

int32_t esi_17

while (true)
    char edx_19 = *ecx_37
    char temp18_1 = *esi_15
    bool c_9 = edx_19 u< temp18_1
    
    if (edx_19 == temp18_1)
        if (edx_19 == 0)
            esi_17 = 0
            break
        
        edx_19 = ecx_37[1]
        char temp19_1 = esi_15[1]
        c_9 = edx_19 u< temp19_1
        
        if (edx_19 == temp19_1)
            ecx_37 = &ecx_37[2]
            esi_15 = &esi_15[2]
            
            if (edx_19 != 0)
                continue
            
            esi_17 = 0
            break
    
    esi_17 = sbb.d(esi_15, esi_15, c_9) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && eax_10 != 0 && *eax_10 != 0)
    char* eax_11 = sub_63d4e0(&var_18)
    int32_t temp20_1 = *(eax_11 + 4)
    *(eax_11 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_14 = 0xffffffff

if (esi_17 == 0)
    void* eax_12 = data_8dc144
    void* ecx_40 = &data_801800
    
    if (eax_12 != 0)
        ecx_40 = eax_12
    
    if (sub_4c5e40(ecx_40).b != 0)
        data_8dc144
        sub_4b8fd0()
        data_8dc148 = 1
        void* eax_15
        eax_15.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    goto label_4c71d6

char* esi_18 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_join_queue")
char* eax_16 = var_18
char* const ecx_45 = &data_801800

if (eax_16 != 0)
    ecx_45 = eax_16

int32_t esi_20

while (true)
    char edx_22 = *ecx_45
    char temp21_1 = *esi_18
    bool c_10 = edx_22 u< temp21_1
    
    if (edx_22 == temp21_1)
        if (edx_22 == 0)
            esi_20 = 0
            break
        
        edx_22 = ecx_45[1]
        char temp22_1 = esi_18[1]
        c_10 = edx_22 u< temp22_1
        
        if (edx_22 == temp22_1)
            ecx_45 = &ecx_45[2]
            esi_18 = &esi_18[2]
            
            if (edx_22 != 0)
                continue
            
            esi_20 = 0
            break
    
    esi_20 = sbb.d(esi_18, esi_18, c_10) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && eax_16 != 0 && *eax_16 != 0)
    char* eax_17 = sub_63d4e0(&var_18)
    int32_t temp23_1 = *(eax_17 + 4)
    *(eax_17 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_16 = 0xffffffff

if (esi_20 == 0)
    sub_4b9da0()
    uint32_t eax_18
    eax_18.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18

char* esi_21 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_quick_edit")
char* eax_19 = var_18
char* const ecx_51 = &data_801800

if (eax_19 != 0)
    ecx_51 = eax_19

int32_t esi_23

while (true)
    char edx_25 = *ecx_51
    char temp24_1 = *esi_21
    bool c_11 = edx_25 u< temp24_1
    
    if (edx_25 == temp24_1)
        if (edx_25 == 0)
            esi_23 = 0
            break
        
        edx_25 = ecx_51[1]
        char temp25_1 = esi_21[1]
        c_11 = edx_25 u< temp25_1
        
        if (edx_25 == temp25_1)
            ecx_51 = &ecx_51[2]
            esi_21 = &esi_21[2]
            
            if (edx_25 != 0)
                continue
            
            esi_23 = 0
            break
    
    esi_23 = sbb.d(esi_21, esi_21, c_11) | 1
    break

int32_t var_8_17 = 8

if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
    eax_19 = sub_63d4e0(&var_18)
    int32_t temp26_1 = *(eax_19 + 4)
    *(eax_19 + 4) -= 1
    
    if (temp26_1 == 1)
        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_18 = 0xffffffff

if (esi_23 == 0)
    data_8db6b0 = 0x7f1
    eax_19.b = 0
    data_ccf6e0 = esi_23
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_19

char* esi_24 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_async_edit")
char* eax_20 = var_18
char* const ecx_57 = &data_801800

if (eax_20 != 0)
    ecx_57 = eax_20

int32_t esi_26

while (true)
    char edx_28 = *ecx_57
    char temp27_1 = *esi_24
    bool c_12 = edx_28 u< temp27_1
    
    if (edx_28 == temp27_1)
        if (edx_28 == 0)
            esi_26 = 0
            break
        
        edx_28 = ecx_57[1]
        char temp28_1 = esi_24[1]
        c_12 = edx_28 u< temp28_1
        
        if (edx_28 == temp28_1)
            ecx_57 = &ecx_57[2]
            esi_24 = &esi_24[2]
            
            if (edx_28 != 0)
                continue
            
            esi_26 = 0
            break
    
    esi_26 = sbb.d(esi_24, esi_24, c_12) | 1
    break

int32_t var_8_19 = 9

if (data_cf65bc != 0 && eax_20 != 0 && *eax_20 != 0)
    eax_20 = sub_63d4e0(&var_18)
    int32_t temp29_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_20 = 0xffffffff

if (esi_26 == 0)
    data_8db6b0 = 0x7f2
    eax_20.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20

char* esi_27 = *(ebx_1 + 4)
sub_63d720(&var_18, "btn_join_async")
char* eax_21 = var_18
char* const ecx_63 = &data_801800

if (eax_21 != 0)
    ecx_63 = eax_21

int32_t esi_29

while (true)
    char edx_31 = *ecx_63
    char temp30_1 = *esi_27
    bool c_13 = edx_31 u< temp30_1
    
    if (edx_31 == temp30_1)
        if (edx_31 == 0)
            esi_29 = 0
            break
        
        edx_31 = ecx_63[1]
        char temp31_1 = esi_27[1]
        c_13 = edx_31 u< temp31_1
        
        if (edx_31 == temp31_1)
            ecx_63 = &ecx_63[2]
            esi_27 = &esi_27[2]
            
            if (edx_31 != 0)
                continue
            
            esi_29 = 0
            break
    
    esi_29 = sbb.d(esi_27, esi_27, c_13) | 1
    break

int32_t var_8_21 = 0xa

if (data_cf65bc != 0 && eax_21 != 0 && *eax_21 != 0)
    char* eax_22 = sub_63d4e0(&var_18)
    int32_t temp32_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp32_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_22 = 0xffffffff

if (esi_29 == 0)
    sub_5f7850()
    void* eax_23
    eax_23.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_23

char* esi_30 = *(ebx_1 + 4)
sub_63d720(&var_18, "btnRight")
char* eax_24 = var_18
char* const ecx_69 = &data_801800

if (eax_24 != 0)
    ecx_69 = eax_24

int32_t esi_32

while (true)
    char edx_34 = *ecx_69
    char temp33_1 = *esi_30
    bool c_14 = edx_34 u< temp33_1
    
    if (edx_34 == temp33_1)
        if (edx_34 == 0)
            esi_32 = 0
            break
        
        edx_34 = ecx_69[1]
        char temp34_1 = esi_30[1]
        c_14 = edx_34 u< temp34_1
        
        if (edx_34 == temp34_1)
            ecx_69 = &ecx_69[2]
            esi_30 = &esi_30[2]
            
            if (edx_34 != 0)
                continue
            
            esi_32 = 0
            break
    
    esi_32 = sbb.d(esi_30, esi_30, c_14) | 1
    break

int32_t var_8_23 = 0xb

if (data_cf65bc != 0 && eax_24 != 0 && *eax_24 != 0)
    eax_24 = sub_63d4e0(&var_18)
    int32_t temp35_1 = *(eax_24 + 4)
    *(eax_24 + 4) -= 1
    
    if (temp35_1 == 1)
        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_24 = 0xffffffff

if (esi_32 == 0)
    data_8dbfb8 += 1
    eax_24.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_24

char* esi_33 = *(ebx_1 + 4)
sub_63d720(&var_18, "btnLeft")
char* eax_25 = var_18
char* const ecx_75 = &data_801800

if (eax_25 != 0)
    ecx_75 = eax_25

int32_t esi_35

while (true)
    char edx_37 = *ecx_75
    char temp36_1 = *esi_33
    bool c_15 = edx_37 u< temp36_1
    
    if (edx_37 == temp36_1)
        if (edx_37 == 0)
            esi_35 = 0
            break
        
        edx_37 = ecx_75[1]
        char temp37_1 = esi_33[1]
        c_15 = edx_37 u< temp37_1
        
        if (edx_37 == temp37_1)
            ecx_75 = &ecx_75[2]
            esi_33 = &esi_33[2]
            
            if (edx_37 != 0)
                continue
            
            esi_35 = 0
            break
    
    esi_35 = sbb.d(esi_33, esi_33, c_15) | 1
    break

int32_t var_8_25 = 0xc

if (data_cf65bc != 0 && eax_25 != 0 && *eax_25 != 0)
    eax_25 = sub_63d4e0(&var_18)
    int32_t temp38_1 = *(eax_25 + 4)
    *(eax_25 + 4) -= 1
    
    if (temp38_1 == 1)
        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_26 = 0xffffffff

if (esi_35 == 0)
    data_8dbfb8 -= 1
    eax_25.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_25

char* ebx_2 = *(ebx_1 + 4)
char* var_1c
sub_63d720(&var_1c, "btnGame")
int32_t var_8_27 = 0xd
char* esi_36 = var_1c
char* var_24_1 = 2
var_20 = 2
char* const eax_26 = &data_801800

if (esi_36 != 0)
    eax_26 = esi_36

int32_t eax_28

while (true)
    char ecx_81 = *eax_26
    char temp39_1 = *ebx_2
    bool c_16 = ecx_81 u< temp39_1
    
    if (ecx_81 == temp39_1)
        if (ecx_81 == 0)
            eax_28 = 0
            break
        
        ecx_81 = eax_26[1]
        char temp40_1 = ebx_2[1]
        c_16 = ecx_81 u< temp40_1
        
        if (ecx_81 == temp40_1)
            eax_26 = &eax_26[2]
            ebx_2 = &ebx_2[2]
            
            if (ecx_81 != 0)
                continue
            
            eax_28 = 0
            break
    
    eax_28 = sbb.d(eax_26, eax_26, c_16) | 1
    break

char edx_40 = 2
int32_t ebx_3 = 2
char var_11_1
char* ebx_5
char* eax_30

if (eax_28 == 0)
    eax_30 = var_18
label_4c68ef:
    var_11_1 = 1
    
    if ((edx_40 & 4) != 0)
        goto label_4c68f8
    
    ebx_5 = var_24_1
else
    char* ebx_4 = *(arg_4 + 4)
    sub_63d720(&var_18, "btnHeader")
    char* ecx_83 = &data_801800
    var_24_1 = 6
    eax_30 = var_18
    
    if (eax_30 != 0)
        ecx_83 = eax_30
    
    int32_t ecx_85
    
    while (true)
        char edx_41 = *ecx_83
        char temp41_1 = *ebx_4
        bool c_17 = edx_41 u< temp41_1
        
        if (edx_41 == temp41_1)
            if (edx_41 == 0)
                ecx_85 = 0
                break
            
            edx_41 = ecx_83[1]
            char temp42_1 = ebx_4[1]
            c_17 = edx_41 u< temp42_1
            
            if (edx_41 == temp42_1)
                ecx_83 = &ecx_83[2]
                ebx_4 = &ebx_4[2]
                
                if (edx_41 != 0)
                    continue
                
                ecx_85 = 0
                break
        
        ecx_85 = sbb.d(ecx_83, ecx_83, c_17) | 1
        break
    
    edx_40 = 6
    ebx_3 = 6
    
    if (ecx_85 == 0)
        goto label_4c68ef
    
    var_11_1 = 0
label_4c68f8:
    ebx_5 = ebx_3 & 0xfffffffb
    var_20 = ebx_5
    int32_t var_8_28 = 0xe
    
    if (data_cf65bc != 0 && eax_30 != 0 && *eax_30 != 0)
        char* eax_31 = sub_63d4e0(&var_18)
        int32_t temp43_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp43_1 == 1)
            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            var_18 = &data_801800
int32_t var_8_29 = 0xffffffff

if ((ebx_5.b & 2) != 0)
    int32_t var_8_30 = 0xf
    
    if (data_cf65bc != 0 && esi_36 != 0 && *esi_36 != 0)
        char* eax_32 = sub_63d4e0(&var_1c)
        int32_t temp45_1 = *(eax_32 + 4)
        *(eax_32 + 4) -= 1
        
        if (temp45_1 == 1)
            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
            var_1c = &data_801800
    
    int32_t var_8_31 = 0xffffffff

char const* const var_40_1
int32_t var_3c_2
char const* const var_38_1
char* eax_33
char* ecx_92

if (var_11_1 == 0)
    char* ebx_7 = arg_4
    char* esi_41 = *(ebx_7 + 4)
    sub_63d720(&arg_4, "btnTrash")
    eax_33 = arg_4
    char* ecx_115 = &data_801800
    
    if (eax_33 != 0)
        ecx_115 = eax_33
    
    int32_t esi_43
    
    while (true)
        char edx_58 = *ecx_115
        char temp44_1 = *esi_41
        bool c_18 = edx_58 u< temp44_1
        
        if (edx_58 == temp44_1)
            if (edx_58 == 0)
                esi_43 = 0
                break
            
            edx_58 = ecx_115[1]
            char temp46_1 = esi_41[1]
            c_18 = edx_58 u< temp46_1
            
            if (edx_58 == temp46_1)
                ecx_115 = &ecx_115[2]
                esi_41 = &esi_41[2]
                
                if (edx_58 != 0)
                    continue
                
                esi_43 = 0
                break
        
        esi_43 = sbb.d(esi_41, esi_41, c_18) | 1
        break
    
    int32_t var_8_34 = 0x18
    
    if (data_cf65bc != 0 && eax_33 != 0 && *eax_33 != 0)
        eax_33 = sub_63d4e0(&arg_4)
        int32_t temp47_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp47_1 == 1)
            eax_33 = sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_35 = 0xffffffff
    
    if (esi_43 != 0)
        char* esi_48 = *(ebx_7 + 4)
        sub_63d720(&arg_4, "btnCreateGame")
        eax_13 = arg_4
        
        if (eax_13 != 0)
            edi = eax_13
        
        int32_t c_1
        
        while (true)
            char ecx_152 = *edi
            char temp48_1 = *esi_48
            bool c_19 = ecx_152 u< temp48_1
            
            if (ecx_152 == temp48_1)
                if (ecx_152 == 0)
                    c_1 = 0
                    break
                
                ecx_152 = edi[1]
                char temp49_1 = esi_48[1]
                c_19 = ecx_152 u< temp49_1
                
                if (ecx_152 == temp49_1)
                    edi = &edi[2]
                    esi_48 = &esi_48[2]
                    
                    if (ecx_152 != 0)
                        continue
                    
                    c_1 = 0
                    break
            
            c_1 = sbb.d(esi_48, esi_48, c_19) | 1
            break
        
        int32_t var_8_36 = 0x19
        
        if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
            eax_13 = sub_63d4e0(&arg_4)
            int32_t temp50_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp50_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        
        int32_t var_8_37 = 0xffffffff
        
        if (c_1 != 0)
            goto label_4c71d6
        
        memset(&data_8dbf38, c_1, 0x78)
        data_8dbf40.d = c_1
        goto label_4c71a7
    
    if (data_8dbfb0 == 1)
        eax_33 = data_8dbfb8
        void* esi_46 = eax_33 * 7 + *(ebx_7 + 8)
        int32_t* esi_47
        
        if (esi_46 s< data_8dc0bc)
            esi_47 = *((esi_46 << 2) + &data_8dbfbc)
        
        if (esi_46 s>= data_8dc0bc || esi_47 == 0)
            var_38_1 = "MultiplayerClick"
            var_3c_2 = 0x1b92
            ecx_92 = "gameIndex != GAMEIDX_NONE"
            var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
        else
            void* ecx_118 = data_cc8d5c
            
            if (ecx_118 == 0)
                goto label_4c6a02
            
            eax_33 = sub_4c52c0(&sub_4bb050(ecx_118 + 0x507c, esi_47)[2])
            data_8dbfb4 = esi_47
            
            if (eax_33 u> 0x13)
            label_4c71ea:
                var_38_1 = "MultiplayerClick"
                var_3c_2 = 0x1bdd
                ecx_92 = "Halt"
            else
                eax_33 = zx.d(*(eax_33 + &lookup_table_4c7270))
                
                switch (eax_33)
                    case nullptr
                        data_8db6b0 = 0x21
                        void* eax_43 =
                            sub_68caf0(eax_33, nullptr, "dom_msg_decline_invite_header", 0)
                        char const* const ecx_121
                        
                        if (eax_43 != 0)
                            char* eax_44 = *eax_43
                            ecx_121 = &data_801800
                            
                            if (eax_44 != 0)
                                ecx_121 = eax_44
                        else
                            ecx_121 = "dom_msg_decline_invite_header"
                        
                        void* eax_46 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_121), nullptr, 
                            "dom_msg_decline_invite_body", 0)
                        char const* const ecx_122
                        
                        if (eax_46 != 0)
                            char* eax_47 = *eax_46
                            ecx_122 = &data_801800
                            
                            if (eax_47 != 0)
                                ecx_122 = eax_47
                        else
                            ecx_122 = "dom_msg_decline_invite_body"
                        
                        void* eax_49 = sub_68caf0(sub_63d8d0(&data_8db754, ecx_122), nullptr, 
                            "dom_msg_decline_forfeit_ok", 0)
                        char const* const ecx_123
                        
                        if (eax_49 != 0)
                            char* eax_50 = *eax_49
                            ecx_123 = &data_801800
                            
                            if (eax_50 != 0)
                                ecx_123 = eax_50
                        else
                            ecx_123 = "dom_msg_decline_forfeit_ok"
                        
                        char** eax_52 =
                            sub_68caf0(sub_63d8d0(&data_8db758, ecx_123), nullptr, &data_801800, 0)
                        
                        if (eax_52 != 0)
                            char* eax_53 = *eax_52
                            
                            if (eax_53 != 0)
                                edi = eax_53
                        else
                            edi = &data_801800
                        
                        sub_63d8d0(&data_8db75c, edi)
                        data_8db760 = sub_4c7290
                        char** eax_54
                        eax_54.b = 0
                        data_8db764 = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_54
                    case 1
                        var_38_1 = "MultiplayerClick"
                        var_3c_2 = 0x1bac
                        ecx_92 = "Halt"
                    case 2
                        data_8db6b0 = 0x21
                        void* eax_55 = sub_68caf0(eax_33, nullptr, "dom_msg_abandon_header", 0)
                        char const* const ecx_126
                        
                        if (eax_55 != 0)
                            char* eax_56 = *eax_55
                            ecx_126 = &data_801800
                            
                            if (eax_56 != 0)
                                ecx_126 = eax_56
                        else
                            ecx_126 = "dom_msg_abandon_header"
                        
                        void* eax_58 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_126), nullptr, 
                            "dom_msg_abandon_body", 0)
                        char const* const ecx_127
                        
                        if (eax_58 != 0)
                            char* eax_59 = *eax_58
                            ecx_127 = &data_801800
                            
                            if (eax_59 != 0)
                                ecx_127 = eax_59
                        else
                            ecx_127 = "dom_msg_abandon_body"
                        
                        void* eax_61 = sub_68caf0(sub_63d8d0(&data_8db754, ecx_127), nullptr, 
                            "dom_msg_abandon_ok", 0)
                        char const* const ecx_128
                        
                        if (eax_61 != 0)
                            char* eax_62 = *eax_61
                            ecx_128 = &data_801800
                            
                            if (eax_62 != 0)
                                ecx_128 = eax_62
                        else
                            ecx_128 = "dom_msg_abandon_ok"
                        
                        char** eax_64 =
                            sub_68caf0(sub_63d8d0(&data_8db758, ecx_128), nullptr, &data_801800, 0)
                        
                        if (eax_64 != 0)
                            char* eax_65 = *eax_64
                            
                            if (eax_65 != 0)
                                edi = eax_65
                        else
                            edi = &data_801800
                        
                        sub_63d8d0(&data_8db75c, edi)
                        data_8db760 = sub_4c72b0
                        char** eax_66
                        eax_66.b = 0
                        data_8db764 = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_66
                    case 3
                        sub_4b8f10(esi_47)
                        sub_4bc4b0(esi_47)
                        int32_t eax_67
                        eax_67.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_67
                    case 4
                        goto label_4c71ea
                    case 5
                        sub_4b8f10(esi_47)
                        sub_4bc4b0(esi_47)
                        int32_t eax_68
                        eax_68.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_68
                    case 6
                        sub_4b8f10(esi_47)
                    label_4c70f9:
                        sub_4bc4b0(esi_47)
                        int32_t eax_82
                        eax_82.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_82
                    case 7
                        goto label_4c70f9
                    case 8
                        data_8db6b0 = 0x21
                        void* eax_70 = sub_68caf0(eax_33, nullptr, "dom_msg_forfeit_header", 0)
                        char const* const ecx_142
                        
                        if (eax_70 != 0)
                            char* eax_71 = *eax_70
                            ecx_142 = &data_801800
                            
                            if (eax_71 != 0)
                                ecx_142 = eax_71
                        else
                            ecx_142 = "dom_msg_forfeit_header"
                        
                        void* eax_73 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_142), nullptr, 
                            "dom_msg_forfeit_body", 0)
                        char const* const ecx_143
                        
                        if (eax_73 != 0)
                            char* eax_74 = *eax_73
                            ecx_143 = &data_801800
                            
                            if (eax_74 != 0)
                                ecx_143 = eax_74
                        else
                            ecx_143 = "dom_msg_forfeit_body"
                        
                        void* eax_76 = sub_68caf0(sub_63d8d0(&data_8db754, ecx_143), nullptr, 
                            "dom_msg_forfeit_ok", 0)
                        char const* const ecx_144
                        
                        if (eax_76 != 0)
                            char* eax_77 = *eax_76
                            ecx_144 = &data_801800
                            
                            if (eax_77 != 0)
                                ecx_144 = eax_77
                        else
                            ecx_144 = "dom_msg_forfeit_ok"
                        
                        char** eax_79 =
                            sub_68caf0(sub_63d8d0(&data_8db758, ecx_144), nullptr, &data_801800, 0)
                        
                        if (eax_79 != 0)
                            char* eax_80 = *eax_79
                            
                            if (eax_80 != 0)
                                edi = eax_80
                        else
                            edi = &data_801800
                        
                        sub_63d8d0(&data_8db75c, edi)
                        data_8db760 = sub_4c72d0
                        char** eax_81
                        eax_81.b = 0
                        data_8db764 = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_81
                    case 9
                        sub_4c5930(esi_47)
                        void* eax_69
                        eax_69.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_69
            
            var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    else
        var_38_1 = "MultiplayerClick"
        var_3c_2 = 0x1b90
        ecx_92 = "gameDescType == GAMEDESC_MINE"
        var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
else
    eax_33 = data_8dbfb8
    int32_t ecx_90
    ecx_90.b = data_8dbfb0 != 1
    void* esi_39 = eax_33 * 7 + *(arg_4 + 8)
    int32_t* esi_40
    
    if (ecx_90 != 1)
        if (esi_39 s< data_8dc0bc)
            esi_40 = *((esi_39 << 2) + &data_8dbfbc)
        else
            esi_40 = nullptr
    else if (esi_39 s< data_8dc140)
        esi_40 = *((esi_39 << 2) + &data_8dc0c0)
    else
        esi_40 = nullptr
    
    if (esi_40 != 0)
        void* ecx_91 = data_cc8d5c
        
        if (ecx_91 != 0)
            void* ebx_6 = sub_4bb050(ecx_91 + 0x507c, esi_40)
            eax_33 = sub_4c52c0(ebx_6 + 8)
            
            if (eax_33 u> 0x13)
                var_38_1 = "MultiplayerClick"
                var_3c_2 = 0x1b8a
                ecx_92 = "Halt"
                var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            else
                switch (eax_33)
                    case nullptr, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xe, 0xf, 0x13
                        memset(&data_8dbf38, 0, 0x78)
                        data_8dbf48 = esi_40
                        data_8dbf38 = 2
                        data_8dbf40.d = 0
                        goto label_4c71c0
                    case 0xd
                        int32_t ecx_99 = *(ebx_6 + 0x11a8)
                        eax_33 = nullptr
                        
                        if (ecx_99 s> 0)
                            while (true)
                                if (*(ebx_6 + 0x68) == 0x3e9)
                                    var_18 = &data_801800
                                    int32_t var_8_32 = 0x10
                                    arg_4 = &data_801800
                                    var_8_32.b = 0x11
                                    sub_4b5b20(ebx_6 + 0x48, 1, 0, ebx_6 + 0x48, &var_18, &arg_4)
                                    sub_63d720(&var_20, &data_801800)
                                    var_8_32.b = 0x12
                                    sub_63d720(&var_1c, &data_801800)
                                    var_8_32.b = 0x13
                                    data_8db6b0 = 0x20
                                    sub_63d850(&data_8db750, &var_18)
                                    sub_63d850(&data_8db754, &arg_4)
                                    sub_63d850(&data_8db758, &var_1c)
                                    sub_63d850(&data_8db75c, &var_20)
                                    data_8db760 = 0
                                    data_8db764 = 0
                                    var_8_32.b = 0x14
                                    
                                    if (data_cf65bc != 0)
                                        char* eax_37 = var_1c
                                        
                                        if (eax_37 != 0 && *eax_37 != 0)
                                            char* eax_38 = sub_63d4e0(&var_1c)
                                            int32_t temp51_1 = *(eax_38 + 4)
                                            *(eax_38 + 4) -= 1
                                            
                                            if (temp51_1 == 1)
                                                sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                                    
                                    var_8_32.b = 0x15
                                    
                                    if (data_cf65bc != 0)
                                        char* eax_39 = var_20
                                        
                                        if (eax_39 != 0 && *eax_39 != 0)
                                            char* eax_40 = sub_63d4e0(&var_20)
                                            int32_t temp52_1 = *(eax_40 + 4)
                                            *(eax_40 + 4) -= 1
                                            
                                            if (temp52_1 == 1)
                                                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                                    
                                    var_8_32.b = 0x11
                                    sub_4b8f10(esi_40)
                                    sub_4bc4b0(esi_40)
                                    var_8_32.b = 0x16
                                    
                                    if (data_cf65bc != 0)
                                        eax_13 = arg_4
                                        
                                        if (eax_13 != 0 && *eax_13 != 0)
                                            eax_13 = sub_63d4e0(&arg_4)
                                            int32_t temp53_1 = *(eax_13 + 4)
                                            *(eax_13 + 4) -= 1
                                            
                                            if (temp53_1 == 1)
                                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                                    
                                    int32_t var_8_33 = 0x17
                                    
                                    if (data_cf65bc != 0)
                                        eax_13 = var_18
                                        
                                        if (eax_13 != 0 && *eax_13 != 0)
                                            eax_13 = sub_63d4e0(&var_18)
                                            int32_t temp54_1 = *(eax_13 + 4)
                                            *(eax_13 + 4) -= 1
                                            
                                            if (temp54_1 == 1)
                                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                                                int32_t* eax_41
                                                eax_41.b = 0
                                                fsbase->NtTib.ExceptionList = ExceptionList
                                                return eax_41
                                    
                                    break
                                
                                eax_33 = &eax_33[1]
                                ebx_6 += 0x22c
                                
                                if (eax_33 s>= ecx_99)
                                    goto label_4c6ab4
                            
                            goto label_4c71d6
                        
                    label_4c6ab4:
                        var_38_1 = "GetPlayerForfeited"
                        var_3c_2 = 0x1a8c
                        ecx_92 = "Halt"
                        var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                    case 0x10, 0x11, 0x12
                        sub_4b0e60(esi_40)
                        char** eax_35
                        eax_35.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_35
        else
        label_4c6a02:
            var_38_1 = "GetClient"
            var_3c_2 = 0x7b
            var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_92 = "gClient"
    else
        var_38_1 = "MultiplayerClick"
        var_3c_2 = 0x1b5e
        ecx_92 = "gameIndex != GAMEIDX_NONE"
        var_40_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"

sub_63b870(eax_33, &data_801800, ecx_92, var_40_1, var_3c_2, var_38_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
