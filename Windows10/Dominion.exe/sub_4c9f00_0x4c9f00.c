// 函数: sub_4c9f00
// 地址: 0x4c9f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fstat@U_stat32@@@@YAHHQAU_stat32@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *(arg1 + 4)
char* result_1
sub_63d720(&result_1, "btnBack")
char* result_3 = result_1
char* const result_2 = &data_801800
char* const result_21 = &data_801800

if (result_3 != 0)
    result_21 = result_3

int32_t ecx_2

while (true)
    char edx_1 = *result_21
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_2 = 0
            break
        
        edx_1 = result_21[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_21 = &result_21[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_21, result_21, c_1) | 1
    break

void* ebx

if (ecx_2 == 0 || *(arg1 + 0x18) == 2)
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

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = data_cc8d84
    int32_t eax_5 = data_cc8d88
    
    if (eax_5 != 0)
        data_8db6b0 = eax_5

void* ebx_1 = arg1
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnRestore")
char* result_4 = result_1
char* const result_22 = &data_801800

if (result_4 != 0)
    result_22 = result_4

int32_t esi_3

while (true)
    char edx_4 = *result_22
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = result_22[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_22 = &result_22[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_6 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    int32_t eax_7 = data_bf23b8
    
    if (eax_7 == 1 || eax_7 == 4)
        sub_63b5f0("GameCenterQueryDLC")
        
        if (data_bf23b8 == 1)
            sub_64b880()

char* esi_4 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_bundleBuy")
char* result_5 = result_1
char* const result_23 = &data_801800

if (result_5 != 0)
    result_23 = result_5

int32_t esi_6

while (true)
    char edx_7 = *result_23
    char temp9_1 = *esi_4
    bool c_3 = edx_7 u< temp9_1
    
    if (edx_7 == temp9_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = result_23[1]
        char temp10_1 = esi_4[1]
        c_3 = edx_7 u< temp10_1
        
        if (edx_7 == temp10_1)
            result_23 = &result_23[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_12 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_12 + 4)
    *(eax_12 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff
int32_t var_58
int32_t* result_20

if (esi_6 == 0)
    int32_t ecx_11 = 0
    int32_t eax_13 = 0
    void* const ecx_12
    
    while (true)
        if (*(eax_13 + &data_780878) == 0x100002)
            ecx_12 = ecx_11 * 0x10c + &data_780878
            break
        
        eax_13 += 0x10c
        ecx_11 += 1
        
        if (eax_13 u>= 0x28d4)
            ecx_12 = &data_780878
            break
    
    int32_t var_4c
    sub_4be540(ecx_12, &var_4c)
    int32_t eax_14 = var_4c
    
    if (eax_14 == 4)
        data_8db6b0 = 0x20
        void* eax_15 =
            sub_68caf0(eax_14, nullptr, "dom_ui_store_confirm_bundle_discount_unlikely_title", 0)
        char const* const ecx_14
        
        if (eax_15 != 0)
            char* eax_16 = *eax_15
            ecx_14 = &data_801800
            
            if (eax_16 != 0)
                ecx_14 = eax_16
        else
            ecx_14 = "dom_ui_store_confirm_bundle_discount_unlikely_title"
        
        void* eax_18 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_14), nullptr, 
            "dom_ui_store_confirm_bundle_discount_unlikely_body", 0)
        char const* const ecx_15
        
        if (eax_18 != 0)
            char* eax_19 = *eax_18
            ecx_15 = &data_801800
            
            if (eax_19 != 0)
                ecx_15 = eax_19
        else
            ecx_15 = "dom_ui_store_confirm_bundle_discount_unlikely_body"
        
        sub_63d8d0(&data_8db754, ecx_15)
        sub_63d8d0(&data_8db758, &data_801800)
        sub_63d8d0(&data_8db75c, &data_801800)
        data_8db760 = sub_4caba0
        data_8db764 = 0
    else if (eax_14 != 6)
        var_58 = 3
        result_20 = 0x100002
        sub_4c9d30(&var_58)
    else
        data_8db6b0 = 0x20
        void* eax_20 = sub_68caf0(eax_14, nullptr, "dom_ui_store_confirm_bundle_steam_title", 0)
        char const* const ecx_16
        
        if (eax_20 != 0)
            char* eax_21 = *eax_20
            ecx_16 = &data_801800
            
            if (eax_21 != 0)
                ecx_16 = eax_21
        else
            ecx_16 = "dom_ui_store_confirm_bundle_steam_title"
        
        void* eax_23 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_16), nullptr, 
            "dom_ui_store_confirm_bundle_steam_body", 0)
        char const* const ecx_17
        
        if (eax_23 != 0)
            char* eax_24 = *eax_23
            ecx_17 = &data_801800
            
            if (eax_24 != 0)
                ecx_17 = eax_24
        else
            ecx_17 = "dom_ui_store_confirm_bundle_steam_body"
        
        sub_63d8d0(&data_8db754, ecx_17)
        sub_63d8d0(&data_8db758, &data_801800)
        sub_63d8d0(&data_8db75c, &data_801800)
        data_8db760 = sub_4caba0
        data_8db764 = 0

char* esi_7 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_Bundle")
char* result_6 = result_1
char* const result_24 = &data_801800

if (result_6 != 0)
    result_24 = result_6

int32_t esi_9

while (true)
    char edx_11 = *result_24
    char temp12_1 = *esi_7
    bool c_4 = edx_11 u< temp12_1
    
    if (edx_11 == temp12_1)
        if (edx_11 == 0)
            esi_9 = 0
            break
        
        edx_11 = result_24[1]
        char temp13_1 = esi_7[1]
        c_4 = edx_11 u< temp13_1
        
        if (edx_11 == temp13_1)
            result_24 = &result_24[2]
            esi_7 = &esi_7[2]
            
            if (edx_11 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_25 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_25 + 4)
    *(eax_25 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    void* eax_26 = data_cc8d94
    
    if (eax_26 == 0)
        eax_26 = sub_4acc60()
        data_cc8d94 = eax_26
    
    data_cc8d98 = 3
    data_cc8d9c = 0x100002
    data_cc8d90 = 0
    data_cc8da0 = 0x15
    data_cc8da4 = 0
    sub_4add50(eax_26)
    data_8db660 = 0x16

char* esi_10 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_tab_moreGames")
char* result_7 = result_1
char* const result_25 = &data_801800

if (result_7 != 0)
    result_25 = result_7

int32_t esi_12

while (true)
    char edx_14 = *result_25
    char temp15_1 = *esi_10
    bool c_5 = edx_14 u< temp15_1
    
    if (edx_14 == temp15_1)
        if (edx_14 == 0)
            esi_12 = 0
            break
        
        edx_14 = result_25[1]
        char temp16_1 = esi_10[1]
        c_5 = edx_14 u< temp16_1
        
        if (edx_14 == temp16_1)
            result_25 = &result_25[2]
            esi_10 = &esi_10[2]
            
            if (edx_14 != 0)
                continue
            
            esi_12 = 0
            break
    
    esi_12 = sbb.d(esi_10, esi_10, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_27 = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(eax_27 + 4)
    *(eax_27 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (esi_12 == 0)
    data_cc8d80 = 1
    data_cc8d8c = esi_12

char* esi_13 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_tab_expansions")
char* result_8 = result_1
char* const result_26 = &data_801800

if (result_8 != 0)
    result_26 = result_8

int32_t esi_15

while (true)
    char edx_17 = *result_26
    char temp18_1 = *esi_13
    bool c_6 = edx_17 u< temp18_1
    
    if (edx_17 == temp18_1)
        if (edx_17 == 0)
            esi_15 = 0
            break
        
        edx_17 = result_26[1]
        char temp19_1 = esi_13[1]
        c_6 = edx_17 u< temp19_1
        
        if (edx_17 == temp19_1)
            result_26 = &result_26[2]
            esi_13 = &esi_13[2]
            
            if (edx_17 != 0)
                continue
            
            esi_15 = 0
            break
    
    esi_15 = sbb.d(esi_13, esi_13, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
    char* eax_28 = sub_63d4e0(&result_1)
    int32_t temp20_1 = *(eax_28 + 4)
    *(eax_28 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)

int32_t var_8_12 = 0xffffffff

if (esi_15 == 0)
    data_cc8d80 = esi_15
    data_cc8d8c = esi_15

char* esi_16 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_tab_promos")
char* result_9 = result_1
char* const result_27 = &data_801800

if (result_9 != 0)
    result_27 = result_9

int32_t esi_18

while (true)
    char edx_20 = *result_27
    char temp21_1 = *esi_16
    bool c_7 = edx_20 u< temp21_1
    
    if (edx_20 == temp21_1)
        if (edx_20 == 0)
            esi_18 = 0
            break
        
        edx_20 = result_27[1]
        char temp22_1 = esi_16[1]
        c_7 = edx_20 u< temp22_1
        
        if (edx_20 == temp22_1)
            result_27 = &result_27[2]
            esi_16 = &esi_16[2]
            
            if (edx_20 != 0)
                continue
            
            esi_18 = 0
            break
    
    esi_18 = sbb.d(esi_16, esi_16, c_7) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
    char* eax_29 = sub_63d4e0(&result_1)
    int32_t temp23_1 = *(eax_29 + 4)
    *(eax_29 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)

int32_t var_8_14 = 0xffffffff

if (esi_18 == 0)
    data_cc8d80 = 2
    data_cc8d8c = esi_18

char* esi_19 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnLeft")
char* result_10 = result_1
char* const result_28 = &data_801800

if (result_10 != 0)
    result_28 = result_10

int32_t esi_21

while (true)
    char edx_23 = *result_28
    char temp24_1 = *esi_19
    bool c_8 = edx_23 u< temp24_1
    
    if (edx_23 == temp24_1)
        if (edx_23 == 0)
            esi_21 = 0
            break
        
        edx_23 = result_28[1]
        char temp25_1 = esi_19[1]
        c_8 = edx_23 u< temp25_1
        
        if (edx_23 == temp25_1)
            result_28 = &result_28[2]
            esi_19 = &esi_19[2]
            
            if (edx_23 != 0)
                continue
            
            esi_21 = 0
            break
    
    esi_21 = sbb.d(esi_19, esi_19, c_8) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
    char* eax_30 = sub_63d4e0(&result_1)
    int32_t temp26_1 = *(eax_30 + 4)
    *(eax_30 + 4) -= 1
    
    if (temp26_1 == 1)
        sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)

int32_t var_8_16 = 0xffffffff

if (esi_21 == 0)
    data_cc8d8c -= 1

char* esi_22 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnRight")
char* result_11 = result_1
char* const result_29 = &data_801800

if (result_11 != 0)
    result_29 = result_11

int32_t esi_24

while (true)
    char edx_26 = *result_29
    char temp27_1 = *esi_22
    bool c_9 = edx_26 u< temp27_1
    
    if (edx_26 == temp27_1)
        if (edx_26 == 0)
            esi_24 = 0
            break
        
        edx_26 = result_29[1]
        char temp28_1 = esi_22[1]
        c_9 = edx_26 u< temp28_1
        
        if (edx_26 == temp28_1)
            result_29 = &result_29[2]
            esi_22 = &esi_22[2]
            
            if (edx_26 != 0)
                continue
            
            esi_24 = 0
            break
    
    esi_24 = sbb.d(esi_22, esi_22, c_9) | 1
    break

int32_t var_8_17 = 8

if (data_cf65bc != 0 && result_11 != 0 && *result_11 != 0)
    char* eax_31 = sub_63d4e0(&result_1)
    int32_t temp29_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)

int32_t var_8_18 = 0xffffffff

if (esi_24 == 0)
    data_cc8d8c += 1

char* esi_25 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnStoreItem")
char* result_12 = result_1
char* const result_30 = &data_801800

if (result_12 != 0)
    result_30 = result_12

int32_t esi_27

while (true)
    char edx_29 = *result_30
    char temp30_1 = *esi_25
    bool c_10 = edx_29 u< temp30_1
    
    if (edx_29 == temp30_1)
        if (edx_29 == 0)
            esi_27 = 0
            break
        
        edx_29 = result_30[1]
        char temp31_1 = esi_25[1]
        c_10 = edx_29 u< temp31_1
        
        if (edx_29 == temp31_1)
            result_30 = &result_30[2]
            esi_25 = &esi_25[2]
            
            if (edx_29 != 0)
                continue
            
            esi_27 = 0
            break
    
    esi_27 = sbb.d(esi_25, esi_25, c_10) | 1
    break

int32_t var_8_19 = 9

if (data_cf65bc != 0 && result_12 != 0 && *result_12 != 0)
    result_12 = sub_63d4e0(&result_1)
    int32_t temp32_1 = *(result_12 + 4)
    *(result_12 + 4) -= 1
    
    if (temp32_1 == 1)
        result_12 = sub_64c080(result_12, *(result_12 + 0xc) + 0x10)

int32_t var_8_20 = 0xffffffff

if (esi_27 == 0)
    int32_t eax_32
    int32_t* result_34
    eax_32, result_34 = sub_4c9c50(result_12, *(ebx_1 + 8), data_cc8d80, data_cc8d8c)
    result_20 = result_34
    
    if (sub_4be8d0(result_34)[1] == 1)
        void* eax_34 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result_1 = 1
        sub_4bb260(eax_34 + 0x7200, &result_20, &result_1)
        data_cc8dc8
        sub_4d8ad0(result_34)
    
    void* eax_35 = data_cc8d94
    
    if (eax_35 == 0)
        eax_35 = sub_4acc60()
        data_cc8d94 = eax_35
    
    data_cc8d98 = eax_32
    data_cc8d9c = result_34
    data_cc8d90 = 0
    data_cc8da0 = 0x15
    data_cc8da4 = 0
    sub_4add50(eax_35)
    ebx_1 = arg1
    data_8db660 = 0x16

char* esi_29 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnStoreItem2")
char* result_13 = result_1
char* const result_31 = &data_801800

if (result_13 != 0)
    result_31 = result_13

int32_t esi_31

while (true)
    char edx_33 = *result_31
    char temp33_1 = *esi_29
    bool c_11 = edx_33 u< temp33_1
    
    if (edx_33 == temp33_1)
        if (edx_33 == 0)
            esi_31 = 0
            break
        
        edx_33 = result_31[1]
        char temp34_1 = esi_29[1]
        c_11 = edx_33 u< temp34_1
        
        if (edx_33 == temp34_1)
            result_31 = &result_31[2]
            esi_29 = &esi_29[2]
            
            if (edx_33 != 0)
                continue
            
            esi_31 = 0
            break
    
    esi_31 = sbb.d(esi_29, esi_29, c_11) | 1
    break

int32_t var_8_21 = 0xa

if (data_cf65bc != 0 && result_13 != 0 && *result_13 != 0)
    result_13 = sub_63d4e0(&result_1)
    int32_t temp35_1 = *(result_13 + 4)
    *(result_13 + 4) -= 1
    
    if (temp35_1 == 1)
        result_13 = sub_64c080(result_13, *(result_13 + 0xc) + 0x10)

int32_t var_8_22 = 0xffffffff

if (esi_31 == 0)
    int32_t eax_36
    char* result_16
    eax_36, result_16 = sub_4c9c50(result_13, *(ebx_1 + 8), esi_31 + 1, data_cc8d8c)
    void* eax_37 = data_cc8d94
    
    if (eax_37 == 0)
        eax_37 = sub_4acc60()
        data_cc8d94 = eax_37
    
    data_cc8d98 = eax_36
    data_cc8d9c = result_16
    data_cc8d90 = 0
    data_cc8da0 = 0x15
    data_cc8da4 = 0
    sub_4add50(eax_37)
    data_8db660 = 0x16
    result_1 = result_16
    
    if (sub_4be8d0(result_16)[1] == 1)
        void* eax_39 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result_20 = 1
        sub_4bb260(eax_39 + 0x7200, &result_1, &result_20)
        data_cc8dc8
        sub_4d8ad0(result_16)
    
    ebx_1 = arg1

char* esi_33 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnStoreItemPanel")
char* result_14 = result_1
char* result_32 = &data_801800

if (result_14 != 0)
    result_32 = result_14

int32_t esi_35

while (true)
    char edx_37 = *result_32
    char temp36_1 = *esi_33
    bool c_12 = edx_37 u< temp36_1
    
    if (edx_37 == temp36_1)
        if (edx_37 == 0)
            esi_35 = 0
            break
        
        edx_37 = result_32[1]
        char temp37_1 = esi_33[1]
        c_12 = edx_37 u< temp37_1
        
        if (edx_37 == temp37_1)
            result_32 = &result_32[2]
            esi_33 = &esi_33[2]
            
            if (edx_37 != 0)
                continue
            
            esi_35 = 0
            break
    
    esi_35 = sbb.d(esi_33, esi_33, c_12) | 1
    break

int32_t var_8_23 = 0xb

if (data_cf65bc != 0 && result_14 != 0 && *result_14 != 0)
    result_14 = sub_63d4e0(&result_1)
    int32_t temp38_1 = *(result_14 + 4)
    *(result_14 + 4) -= 1
    
    if (temp38_1 == 1)
        result_14 = sub_64c080(result_14, *(result_14 + 0xc) + 0x10)

int32_t var_8_24 = 0xffffffff

if (esi_35 == 0)
    int32_t eax_40
    int32_t* result_17
    eax_40, result_17 = sub_4c9c50(result_14, *(ebx_1 + 8), 0, data_cc8d8c)
    var_58 = eax_40
    result_20 = result_17
    sub_4c9d30(&var_58)
    result_1 = result_17
    
    if (sub_4be8d0(result_17)[1] == 1)
        void* eax_42 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result_20 = 1
        sub_4bb260(eax_42 + 0x7200, &result_1, &result_20)
        data_cc8dc8
        sub_4d8ad0(result_17)

char* esi_37 = *(ebx_1 + 4)
sub_63d720(&result_1, "btnStoreItemPanel2")
char* result_15 = result_1
char* result_33 = &data_801800

if (result_15 != 0)
    result_33 = result_15

int32_t esi_39

while (true)
    char edx_41 = *result_33
    char temp39_1 = *esi_37
    bool c_13 = edx_41 u< temp39_1
    
    if (edx_41 == temp39_1)
        if (edx_41 == 0)
            esi_39 = 0
            break
        
        edx_41 = result_33[1]
        char temp40_1 = esi_37[1]
        c_13 = edx_41 u< temp40_1
        
        if (edx_41 == temp40_1)
            result_33 = &result_33[2]
            esi_37 = &esi_37[2]
            
            if (edx_41 != 0)
                continue
            
            esi_39 = 0
            break
    
    esi_39 = sbb.d(esi_37, esi_37, c_13) | 1
    break

int32_t var_8_25 = 0xc

if (data_cf65bc != 0 && result_15 != 0 && *result_15 != 0)
    result_15 = sub_63d4e0(&result_1)
    int32_t temp41_1 = *(result_15 + 4)
    *(result_15 + 4) -= 1
    
    if (temp41_1 == 1)
        result_15 = sub_64c080(result_15, *(result_15 + 0xc) + 0x10)

int32_t var_8_26 = 0xffffffff

if (esi_39 == 0)
    int32_t eax_43
    int32_t* result_18
    eax_43, result_18 = sub_4c9c50(result_15, *(ebx_1 + 8), esi_39 + 1, data_cc8d8c)
    var_58 = eax_43
    result_20 = result_18
    sub_4c9d30(&var_58)
    result_1 = result_18
    
    if (sub_4be8d0(result_18)[1] == 1)
        void* eax_45 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result_20 = 1
        sub_4bb260(eax_45 + 0x7200, &result_1, &result_20)
        data_cc8dc8
        sub_4d8ad0(result_18)

char* esi_41 = *(ebx_1 + 4)
sub_63d720(&result_1, "btn_callToAction")
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_43

while (true)
    char ecx_78 = *result_2
    char temp42_1 = *esi_41
    bool c_14 = ecx_78 u< temp42_1
    
    if (ecx_78 == temp42_1)
        if (ecx_78 == 0)
            esi_43 = 0
            break
        
        ecx_78 = result_2[1]
        char temp43_1 = esi_41[1]
        c_14 = ecx_78 u< temp43_1
        
        if (ecx_78 == temp43_1)
            result_2 = &result_2[2]
            esi_41 = &esi_41[2]
            
            if (ecx_78 != 0)
                continue
            
            esi_43 = 0
            break
    
    esi_43 = sbb.d(esi_41, esi_41, c_14) | 1
    break

int32_t var_8_27 = 0xd

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp44_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp44_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_28 = 0xffffffff

if (esi_43 == 0)
    int32_t eax_46
    int32_t* result_19
    eax_46, result_19 = sub_4c9c50(result, *(ebx_1 + 8), data_cc8d80, data_cc8d8c)
    var_58 = eax_46
    result_20 = result_19
    sub_4c9d30(&var_58)
    result_1 = result_19
    
    if (*(sub_4be8d0(result_19) + 4) == 1)
        void* eax_47 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result_20 = 1
        sub_4bb260(eax_47 + 0x7200, &result_1, &result_20)
        data_cc8dc8
        sub_4d8ad0(result_19)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
