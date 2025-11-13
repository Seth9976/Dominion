// 函数: sub_608520
// 地址: 0x608520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Handle_message@?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@AAEXPAV?$message@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t var_2c
int32_t ebx
ebx:1.b = sub_4aceb0(data_be1538, &var_2c)
char var_12 = ebx:1.b
char* var_20
sub_63d720(&var_20, "btnBack")
void* edi = arg1
char* const ecx_2 = &data_801800
char* eax_4 = var_20

if (eax_4 != 0)
    ecx_2 = eax_4

char* edx_1 = *(edi + 4)
int32_t ecx_4

while (true)
    ebx.b = *edx_1
    char temp0_1 = *ecx_2
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_4 = 0
            break
        
        ebx.b = edx_1[1]
        char temp1_1 = ecx_2[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx_1 = &edx_1[2]
            ecx_2 = &ecx_2[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_4 = 0
            break
    
    ecx_4 = sbb.d(ecx_2, ecx_2, c_1) | 1
    break

if (ecx_4 == 0 || (*(edi + 0x18) == 2 && ebx:1.b == 0))
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    int32_t* eax_5 = sub_63d4e0(&var_20)
    int32_t temp2_1 = eax_5[1]
    eax_5[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_5, eax_5[3] + 0x10)
        var_20 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    if (data_ccf6e8 != 0)
        data_8db660 = 4
    else
        edx_1.b = 0
        sub_4d46e0(7, edx_1.b)
        data_8db660 = 0x10

sub_63d720(&var_20, "btn_zoom_dismiss")
char* eax_6 = var_20
char* const ecx_8 = &data_801800
char* edx_4 = *(edi + 4)

if (eax_6 != 0)
    ecx_8 = eax_6

int32_t ecx_10

while (true)
    ebx.b = *edx_4
    char temp3_1 = *ecx_8
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            ecx_10 = 0
            break
        
        ebx.b = edx_4[1]
        char temp4_1 = ecx_8[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_4 = &edx_4[2]
            ecx_8 = &ecx_8[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_10 = 0
            break
    
    ecx_10 = sbb.d(ecx_8, ecx_8, c_2) | 1
    break

if (ecx_10 == 0 || (*(edi + 0x18) == 2 && ebx:1.b == 1))
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&var_20)
    int32_t temp5_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_4 = 0xffffffff

if (ebx.b != 0)
    void* ecx_13 = data_be1538
    data_ccf6fc = 0
    data_ccf6f8 = 0
    sub_4ad010(ecx_13, 0xffffffff)
    uint32_t result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_18
var_2c = sub_6062d0(&var_18, data_ccf6f4 + 1, data_ccf6f0, &var_18, &var_20)
sub_63d720(&var_20, "btn_buy")
char* ecx_18 = var_20
char* const edx_9 = &data_801800
char* esi = *(edi + 4)

if (ecx_18 != 0)
    edx_9 = ecx_18

int32_t esi_2

while (true)
    char eax_10 = *esi
    char temp6_1 = *edx_9
    bool c_3 = eax_10 u< temp6_1
    
    if (eax_10 == temp6_1)
        if (eax_10 == 0)
            esi_2 = 0
            break
        
        eax_10 = esi[1]
        char temp7_1 = edx_9[1]
        c_3 = eax_10 u< temp7_1
        
        if (eax_10 == temp7_1)
            esi = &esi[2]
            edx_9 = &edx_9[2]
            
            if (eax_10 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && ecx_18 != 0 && *ecx_18 != 0)
    char* eax_11 = sub_63d4e0(&var_20)
    int32_t temp8_1 = *(eax_11 + 4)
    *(eax_11 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_2 == 0)
    int32_t eax_13 = sub_6062d0(&var_18, data_ccf6f4, data_ccf6f0, &var_18, &var_20)
    int32_t ecx_23 = *(data_be1538 + 0xbd4)
    
    if (ecx_23 != 0xffffffff && ecx_23 s< eax_13)
        *(var_18 + (ecx_23 << 2))
    
    int32_t eax_15
    int32_t edx_14
    eax_15, edx_14 = sub_607140()
    esi_2 = eax_15
    void* eax_16 = data_cc8d94
    
    if (eax_16 == 0)
        eax_16 = sub_4acc60()
        data_cc8d94 = eax_16
    
    data_cc8d98 = esi_2
    data_cc8d9c = edx_14
    data_cc8d90 = 0
    data_cc8da0 = 0x7e6
    data_cc8da4 = 0
    sub_4add50(eax_16)
    edi = arg1
    data_8db660 = 0x16

sub_63d720(&var_20, "btn_show_back")
char* eax_17 = var_20
char* const ecx_27 = &data_801800
char* edx_15 = *(edi + 4)

if (eax_17 != 0)
    ecx_27 = eax_17

int32_t esi_3

while (true)
    ebx.b = *edx_15
    char temp9_1 = *ecx_27
    bool c_4 = ebx.b u< temp9_1
    
    if (ebx.b == temp9_1)
        if (ebx.b == 0)
            esi_3 = 0
            break
        
        ebx.b = edx_15[1]
        char temp10_1 = ecx_27[1]
        c_4 = ebx.b u< temp10_1
        
        if (ebx.b == temp10_1)
            edx_15 = &edx_15[2]
            ecx_27 = &ecx_27[2]
            
            if (ebx.b != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_2, esi_2, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
    char* eax_18 = sub_63d4e0(&var_20)
    int32_t temp11_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_3 == 0)
    data_ccf6f8 = data_ccf6f8 == 0

sub_63d720(&var_20, "btn_card_prev")
char* eax_19 = var_20
char* const ecx_31 = &data_801800
char* edx_18 = *(edi + 4)

if (eax_19 != 0)
    ecx_31 = eax_19

int32_t ecx_33

while (true)
    ebx.b = *edx_18
    char temp12_1 = *ecx_31
    bool c_5 = ebx.b u< temp12_1
    
    if (ebx.b == temp12_1)
        if (ebx.b == 0)
            ecx_33 = 0
            break
        
        ebx.b = edx_18[1]
        char temp13_1 = ecx_31[1]
        c_5 = ebx.b u< temp13_1
        
        if (ebx.b == temp13_1)
            edx_18 = &edx_18[2]
            ecx_31 = &ecx_31[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_33 = 0
            break
    
    ecx_33 = sbb.d(ecx_31, ecx_31, c_5) | 1
    break

if (ecx_33 == 0 ||
        (*(edi + 0x18) == 4 && ebx:1.b != 0 && (data_ccf6f4 != 0 || *(data_be1538 + 0xbd4) != 0)))
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
    char* eax_20 = sub_63d4e0(&var_20)
    int32_t temp14_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_10 = 0xffffffff

if (ebx.b != 0)
    data_ccf6f8 = 0
    sub_608460()

sub_63d720(&var_20, "btn_card_next")
int32_t var_8_11 = 5
char* const eax_21 = &data_801800
char* esi_5 = var_20
char* ecx_38 = *(edi + 4)
int32_t var_1c_1 = 8

if (esi_5 != 0)
    eax_21 = esi_5

int32_t eax_23

while (true)
    char edx_21 = *ecx_38
    char temp15_1 = *eax_21
    bool c_6 = edx_21 u< temp15_1
    
    if (edx_21 == temp15_1)
        if (edx_21 == 0)
            eax_23 = 0
            break
        
        edx_21 = ecx_38[1]
        char temp16_1 = eax_21[1]
        c_6 = edx_21 u< temp16_1
        
        if (edx_21 == temp16_1)
            ecx_38 = &ecx_38[2]
            eax_21 = &eax_21[2]
            
            if (edx_21 != 0)
                continue
            
            eax_23 = 0
            break
    
    eax_23 = sbb.d(eax_21, eax_21, c_6) | 1
    break

void* var_28

if (eax_23 == 0)
    ebx.b = 1
else if (*(edi + 0x18) != 4 || ebx:1.b == 0)
    ebx.b = 0
else
    void var_24
    int32_t eax_25 = sub_6062d0(&var_28, data_ccf6f4, data_ccf6f0, &var_28, &var_24)
    
    if (*(data_be1538 + 0xbd4) s< eax_25 - 1)
        ebx.b = 1
    else if (sub_6062d0(&var_28, data_ccf6f4 + 1, data_ccf6f0, &var_28, &var_24) != 0)
        ebx.b = 1
    else
        ebx.b = 0

int32_t var_1c_2 = 0
int32_t var_8_12 = 6

if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
    char* eax_29 = sub_63d4e0(&var_20)
    int32_t temp17_1 = *(eax_29 + 4)
    *(eax_29 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_13 = 0xffffffff

if (ebx.b != 0)
    data_ccf6f8 = 0
    sub_6084c0()

char var_11
char* eax_30

if (var_2c == 0)
    eax_30 = var_20
    var_11 = 0
else
    sub_63d720(&var_20, "btnRight")
    eax_30 = var_20
    char* edx_27 = *(edi + 4)
    var_1c_2 = 0x10
    char* const ecx_45 = &data_801800
    
    if (eax_30 != 0)
        ecx_45 = eax_30
    
    int32_t ecx_47
    
    while (true)
        ebx.b = *edx_27
        char temp18_1 = *ecx_45
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                ecx_47 = 0
                break
            
            ebx.b = edx_27[1]
            char temp19_1 = ecx_45[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                edx_27 = &edx_27[2]
                ecx_45 = &ecx_45[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_47 = 0
                break
        
        ecx_47 = sbb.d(ecx_45, ecx_45, c_7) | 1
        break
    
    if (ecx_47 == 0 || (*(edi + 0x18) == 4 && ebx:1.b == 0))
        var_11 = 1
    else
        var_11 = 0

int32_t ebx_1 = var_1c_2

if ((ebx_1.b & 0x10) != 0)
    ebx_1 &= 0xffffffef
    var_1c_2 = ebx_1
    int32_t var_8_14 = 7
    
    if (data_cf65bc != 0 && eax_30 != 0 && *eax_30 != 0)
        char* eax_31 = sub_63d4e0(&var_20)
        int32_t temp20_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_15 = 0xffffffff

if (var_11 != 0)
    data_ccf6f4 += 1
    data_ccf6fc = 0
    data_ccf6f8 = 0

char* eax_32

if (data_ccf6f4 == 0)
    eax_32 = var_20
    ebx_1.b = 0
else
    sub_63d720(&var_20, "btnLeft")
    eax_32 = var_20
    char* edx_30 = *(edi + 4)
    char* const ecx_51 = &data_801800
    var_1c_2 = ebx_1 | 0x20
    
    if (eax_32 != 0)
        ecx_51 = eax_32
    
    int32_t ecx_53
    
    while (true)
        ebx_1.b = *edx_30
        char temp21_1 = *ecx_51
        bool c_8 = ebx_1.b u< temp21_1
        
        if (ebx_1.b == temp21_1)
            if (ebx_1.b == 0)
                ecx_53 = 0
                break
            
            ebx_1.b = edx_30[1]
            char temp22_1 = ecx_51[1]
            c_8 = ebx_1.b u< temp22_1
            
            if (ebx_1.b == temp22_1)
                edx_30 = &edx_30[2]
                ecx_51 = &ecx_51[2]
                
                if (ebx_1.b != 0)
                    continue
                
                ecx_53 = 0
                break
        
        ecx_53 = sbb.d(ecx_51, ecx_51, c_8) | 1
        break
    
    if (ecx_53 == 0 || (*(edi + 0x18) == 3 && var_12 == 0))
        ebx_1.b = 1
    else
        ebx_1.b = 0

if ((var_1c_2.b & 0x20) != 0)
    int32_t var_8_16 = 8
    
    if (data_cf65bc != 0 && eax_32 != 0 && *eax_32 != 0)
        char* eax_33 = sub_63d4e0(&var_20)
        int32_t temp24_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp24_1 == 1)
            sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_17 = 0xffffffff

if (ebx_1.b != 0)
    data_ccf6f4 -= 1
    data_ccf6fc = 0
    data_ccf6f8 = 0

sub_63d720(&var_20, "btn_ban")
char* eax_34 = var_20
char* const ecx_58 = &data_801800
char* edx_33 = *(edi + 4)

if (eax_34 != 0)
    ecx_58 = eax_34

char* i

while (true)
    ebx_1.b = *edx_33
    char temp23_1 = *ecx_58
    bool c_9 = ebx_1.b u< temp23_1
    
    if (ebx_1.b == temp23_1)
        if (ebx_1.b == 0)
            i = nullptr
            break
        
        ebx_1.b = edx_33[1]
        char temp25_1 = ecx_58[1]
        c_9 = ebx_1.b u< temp25_1
        
        if (ebx_1.b == temp25_1)
            edx_33 = &edx_33[2]
            ecx_58 = &ecx_58[2]
            
            if (ebx_1.b != 0)
                continue
            
            i = nullptr
            break
    
    i = sbb.d(esi_5, esi_5, c_9) | 1
    break

int32_t var_8_18 = 9

if (data_cf65bc != 0 && eax_34 != 0 && *eax_34 != 0)
    char* eax_35 = sub_63d4e0(&var_20)
    int32_t temp26_1 = *(eax_35 + 4)
    *(eax_35 + 4) -= 1
    
    if (temp26_1 == 1)
        sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_19 = 0xffffffff

if (i == 0)
    int32_t eax_37 = sub_6062d0(&var_18, data_ccf6f4, data_ccf6f0, &var_18, &var_20)
    int32_t ecx_63 = *(data_be1538 + 0xbd4)
    
    if (ecx_63 != 0xffffffff && ecx_63 s< eax_37)
        i = *(var_18 + (ecx_63 << 2))
    
    sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    void* eax_40 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_68 = 0
    int32_t edx_37 = *(eax_40 + 0x6ed0)
    
    if (edx_37 s<= 0)
    label_608d54:
        ebx_1:1.b = 0
    else
        while (*(eax_40 + (ecx_68 << 2) + 0x63e0) != i)
            ecx_68 += 1
            
            if (ecx_68 s>= edx_37)
                goto label_608d54
        
        ebx_1:1.b = 1
    
    void* eax_41 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_71 = 0
    int32_t edx_38 = *(eax_41 + 0x63dc)
    
    if (edx_38 s<= 0)
    label_608d81:
        ebx_1.b = 0
    else
        while (*(eax_41 + (ecx_71 << 2) + 0x58ec) != i)
            ecx_71 += 1
            
            if (ecx_71 s>= edx_38)
                goto label_608d81
        
        ebx_1.b = 1
    
    if (ebx_1:1.b != 0)
        int32_t var_40_6 = 0
        sub_608220(i, nullptr)
        
        if (ebx_1.b != 0)
        label_608db8:
            int32_t var_40_7 = 5
            sub_608220(i, 5)
    else
        if (ebx_1.b != 0)
            goto label_608db8
        
        int32_t var_40_5 = 0
        sub_608220(i, nullptr)
    
    edi = arg1

sub_63d720(&var_20, "btn_mpBan")
char* eax_42 = var_20
char* ecx_75 = &data_801800
char* edx_42 = *(edi + 4)

if (eax_42 != 0)
    ecx_75 = eax_42

char* esi_7

while (true)
    ebx_1.b = *edx_42
    char temp27_1 = *ecx_75
    bool c_10 = ebx_1.b u< temp27_1
    
    if (ebx_1.b == temp27_1)
        if (ebx_1.b == 0)
            esi_7 = nullptr
            break
        
        ebx_1.b = edx_42[1]
        char temp28_1 = ecx_75[1]
        c_10 = ebx_1.b u< temp28_1
        
        if (ebx_1.b == temp28_1)
            edx_42 = &edx_42[2]
            ecx_75 = &ecx_75[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_7 = nullptr
            break
    
    esi_7 = sbb.d(i, i, c_10) | 1
    break

int32_t var_8_20 = 0xa

if (data_cf65bc != 0 && eax_42 != 0 && *eax_42 != 0)
    char* eax_43 = sub_63d4e0(&var_20)
    int32_t temp29_1 = *(eax_43 + 4)
    *(eax_43 + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_21 = 0xffffffff

if (esi_7 == 0)
    int32_t eax_45 = sub_6062d0(&var_18, data_ccf6f4, data_ccf6f0, &var_18, &var_20)
    int32_t ecx_80 = *(data_be1538 + 0xbd4)
    
    if (ecx_80 != 0xffffffff && ecx_80 s< eax_45)
        esi_7 = *(var_18 + (ecx_80 << 2))
    
    sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t var_40_9 = 5
    sub_608220(esi_7, 5)

sub_63d720(&var_20, "btn_localBan")
char* eax_48 = var_20
char* ecx_85 = &data_801800
char* edx_47 = *(edi + 4)

if (eax_48 != 0)
    ecx_85 = eax_48

char* esi_9

while (true)
    ebx_1.b = *edx_47
    char temp30_1 = *ecx_85
    bool c_11 = ebx_1.b u< temp30_1
    
    if (ebx_1.b == temp30_1)
        if (ebx_1.b == 0)
            esi_9 = nullptr
            break
        
        ebx_1.b = edx_47[1]
        char temp31_1 = ecx_85[1]
        c_11 = ebx_1.b u< temp31_1
        
        if (ebx_1.b == temp31_1)
            edx_47 = &edx_47[2]
            ecx_85 = &ecx_85[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_9 = nullptr
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_11) | 1
    break

int32_t var_8_22 = 0xb

if (data_cf65bc != 0 && eax_48 != 0 && *eax_48 != 0)
    char* eax_49 = sub_63d4e0(&var_20)
    int32_t temp32_1 = *(eax_49 + 4)
    *(eax_49 + 4) -= 1
    
    if (temp32_1 == 1)
        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_23 = 0xffffffff

if (esi_9 == 0)
    int32_t eax_51 = sub_6062d0(&var_18, data_ccf6f4, data_ccf6f0, &var_18, &var_20)
    int32_t ecx_90 = *(data_be1538 + 0xbd4)
    
    if (ecx_90 != 0xffffffff && ecx_90 s< eax_51)
        esi_9 = *(var_18 + (ecx_90 << 2))
    
    sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t var_40_11 = 0
    sub_608220(esi_9, nullptr)

sub_63d720(&var_20, "btnExp")
char* eax_54 = var_20
char* ecx_95 = &data_801800
char* edx_52 = *(edi + 4)

if (eax_54 != 0)
    ecx_95 = eax_54

int32_t esi_11

while (true)
    ebx_1.b = *edx_52
    char temp33_1 = *ecx_95
    bool c_12 = ebx_1.b u< temp33_1
    
    if (ebx_1.b == temp33_1)
        if (ebx_1.b == 0)
            esi_11 = 0
            break
        
        ebx_1.b = edx_52[1]
        char temp34_1 = ecx_95[1]
        c_12 = ebx_1.b u< temp34_1
        
        if (ebx_1.b == temp34_1)
            edx_52 = &edx_52[2]
            ecx_95 = &ecx_95[2]
            
            if (ebx_1.b != 0)
                continue
            
            esi_11 = 0
            break
    
    esi_11 = sbb.d(esi_9, esi_9, c_12) | 1
    break

int32_t var_8_24 = 0xc

if (data_cf65bc != 0 && eax_54 != 0 && *eax_54 != 0)
    eax_54 = sub_63d4e0(&var_20)
    int32_t temp35_1 = *(eax_54 + 4)
    *(eax_54 + 4) -= 1
    
    if (temp35_1 == 1)
        eax_54 = sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_25 = 0xffffffff

if (esi_11 != 0)
    goto label_609084

int32_t ecx_98 = *(edi + 8)
char const* const var_48_5
int32_t var_44_8
char const* const var_40_12
char* ecx_99

if (ecx_98 s< 0x12)
    data_ccf6f0 = *(ecx_98 * 0x1c + &data_77fca8)
    data_ccf6f4 = 0
    data_ccf6f8 = 0
    data_ccf6fc = 0
label_609084:
    sub_63d720(&var_20, "btn_store")
    eax_54 = var_20
    char* ecx_101 = &data_801800
    char* edx_55 = *(edi + 4)
    
    if (eax_54 != 0)
        ecx_101 = eax_54
    
    int32_t esi_13
    
    while (true)
        ebx_1.b = *edx_55
        char temp36_1 = *ecx_101
        bool c_13 = ebx_1.b u< temp36_1
        
        if (ebx_1.b == temp36_1)
            if (ebx_1.b == 0)
                esi_13 = 0
                break
            
            ebx_1.b = edx_55[1]
            char temp37_1 = ecx_101[1]
            c_13 = ebx_1.b u< temp37_1
            
            if (ebx_1.b == temp37_1)
                edx_55 = &edx_55[2]
                ecx_101 = &ecx_101[2]
                
                if (ebx_1.b != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_13) | 1
        break
    
    int32_t var_8_26 = 0xd
    
    if (data_cf65bc != 0 && eax_54 != 0 && *eax_54 != 0)
        eax_54 = sub_63d4e0(&var_20)
        int32_t temp38_1 = *(eax_54 + 4)
        *(eax_54 + 4) -= 1
        
        if (temp38_1 == 1)
            eax_54, edx_55 = sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_27 = 0xffffffff
    
    if (esi_13 != 0)
    label_6091e5:
        char eax_63 = sub_4adda0(&var_28, &var_2c)
        int32_t ecx_107
        
        if (*(edi + 0x18) != 5 || eax_63 != 0)
            ecx_107 = data_ccf6f0
        else
            ecx_107 = data_ccf6f0
            
            if (ecx_107 != 2)
                ecx_107 -= 1
                data_ccf6f4 = 0
                data_ccf6f0 = ecx_107
                data_ccf6fc = 0
                data_ccf6f8 = eax_63
        
        if (*(edi + 0x18) == 6 && eax_63 == 0 && ecx_107 != 0x13)
            data_ccf6f4 = 0
            data_ccf6f0 = ecx_107 + 1
            data_ccf6fc = 0
            data_ccf6f8 = eax_63
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t ecx_104 = *(edi + 8)
    
    if (ecx_104 s>= 0)
        if (ecx_104 u< 0x12)
            edx_55.b = 0
            int32_t esi_15 = *(ecx_104 * 0x1c + &data_77fca8)
            int32_t eax_60 = sub_4d46e0(7, edx_55.b)
            
            if (esi_15 != 0x13)
                int32_t eax_61
                int32_t edx_59
                eax_61, edx_59 = sub_4c9c50(eax_60, *(edi + 8), 0, 0)
                void* eax_62 = data_cc8d94
                
                if (eax_62 == 0)
                    eax_62 = sub_4acc60()
                    data_cc8d94 = eax_62
                
                data_cc8d98 = eax_61
                data_cc8d9c = edx_59
                data_cc8d90 = 0
                data_cc8da0 = 0x7e6
                data_cc8da4 = 0
                sub_4add50(eax_62)
                edi = arg1
                data_8db660 = 0x16
            else
                data_cc8d80 = 2
                data_cc8d84 = 0x7e6
                data_cc8d88 = 0
                data_8db660 = 0x15
            
            goto label_6091e5
        
        var_40_12 = "DomExpDefGetByIndex"
        var_44_8 = 0x118c
        ecx_99 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        var_48_5 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
    else
        var_40_12 = "DomExpDefGetByIndex"
        var_44_8 = 0x118b
        ecx_99 = "i >= 0"
        var_48_5 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
else
    var_40_12 = "CardGalleryClick"
    var_44_8 = 0xa6ad
    var_48_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_99 = "info.index < numDefs"

sub_63b870(eax_54, &data_801800, ecx_99, var_48_5, var_44_8, var_40_12)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
