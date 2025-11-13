// 函数: sub_4c4610
// 地址: 0x4c4610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$_Emplace_reallocate@ABI@?$vector@IU?$_Parallelism_allocator@I@std@@@std@@QAEPAIQAIABI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
char* result_1
char* esi = *(result_1 + 4)
char* var_28
sub_63d720(&var_28, "btn_screen")
int32_t var_8_1 = 0
int32_t ebx = 1
char* edi = var_28
char* const eax_3 = &data_801800
int32_t var_18 = 1
int32_t var_1c_1 = 1

if (edi != 0)
    eax_3 = edi

int32_t eax_5

while (true)
    char ecx_2 = *eax_3
    char temp0_1 = *esi
    bool c_1 = ecx_2 u< temp0_1
    
    if (ecx_2 == temp0_1)
        if (ecx_2 == 0)
            eax_5 = 0
            break
        
        ecx_2 = eax_3[1]
        char temp1_1 = esi[1]
        c_1 = ecx_2 u< temp1_1
        
        if (ecx_2 == temp1_1)
            eax_3 = &eax_3[2]
            esi = &esi[2]
            
            if (ecx_2 != 0)
                continue
            
            eax_5 = 0
            break
    
    eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
    break

char edx = 1
char* var_24
char* var_20
char var_11
char* esi_1
char* eax_11

if (eax_5 == 0)
    esi_1 = var_24
    eax_11 = var_20
label_4c476e:
    var_11 = 1
    
    if ((edx & 4) != 0)
        goto label_4c4777
else
    char* ebx_1 = *(result_1 + 4)
    sub_63d720(&var_24, "btn_0_resume")
    int32_t var_8_2 = 1
    esi_1 = var_24
    var_18 = 3
    int32_t var_1c_2 = 3
    char* const eax_7 = &data_801800
    
    if (esi_1 != 0)
        eax_7 = esi_1
    
    int32_t eax_9
    
    while (true)
        char ecx_4 = *eax_7
        char temp2_1 = *ebx_1
        bool c_2 = ecx_4 u< temp2_1
        
        if (ecx_4 == temp2_1)
            if (ecx_4 == 0)
                eax_9 = 0
                break
            
            ecx_4 = eax_7[1]
            char temp3_1 = ebx_1[1]
            c_2 = ecx_4 u< temp3_1
            
            if (ecx_4 == temp3_1)
                eax_7 = &eax_7[2]
                ebx_1 = &ebx_1[2]
                
                if (ecx_4 != 0)
                    continue
                
                eax_9 = 0
                break
        
        eax_9 = sbb.d(eax_7, eax_7, c_2) | 1
        break
    
    edx = 3
    
    if (eax_9 == 0)
        eax_11 = var_20
        ebx = var_18
        goto label_4c476e
    
    char* ebx_2 = *(result_1 + 4)
    sub_63d720(&var_20, "btnBack")
    char* const ecx_6 = &data_801800
    var_18 = 7
    eax_11 = var_20
    
    if (eax_11 != 0)
        ecx_6 = eax_11
    
    int32_t ecx_8
    
    while (true)
        char edx_1 = *ecx_6
        char temp8_1 = *ebx_2
        bool c_3 = edx_1 u< temp8_1
        
        if (edx_1 == temp8_1)
            if (edx_1 == 0)
                ecx_8 = 0
                break
            
            edx_1 = ecx_6[1]
            char temp10_1 = ebx_2[1]
            c_3 = edx_1 u< temp10_1
            
            if (edx_1 == temp10_1)
                ecx_6 = &ecx_6[2]
                ebx_2 = &ebx_2[2]
                
                if (edx_1 != 0)
                    continue
                
                ecx_8 = 0
                break
        
        ecx_8 = sbb.d(ecx_6, ecx_6, c_3) | 1
        break
    
    edx = 7
    
    if (ecx_8 == 0)
        ebx = var_18
        goto label_4c476e
    
    ebx = 7
    
    if (*(result_1 + 0x18) == 2)
        goto label_4c476e
    
    var_11 = 0
label_4c4777:
    ebx &= 0xfffffffb
    var_18 = ebx
    int32_t var_1c_3 = ebx
    int32_t var_8_3 = 2
    
    if (data_cf65bc != 0 && eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_20)
        int32_t temp4_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            var_20 = &data_801800

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    var_18 = ebx
    int32_t var_1c_4 = ebx
    int32_t var_8_4 = 3
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_13 = sub_63d4e0(&var_24)
        int32_t temp5_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            var_24 = &data_801800

int32_t var_8_5 = 0xffffffff

if ((ebx.b & 1) != 0)
    var_18 = ebx & 0xfffffffe
    int32_t var_8_6 = 4
    
    if (data_cf65bc != 0 && edi != 0 && *edi != 0)
        char* eax_14 = sub_63d4e0(&var_28)
        int32_t temp7_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            var_28 = &data_801800
    
    int32_t var_8_7 = 0xffffffff

if (var_11 != 0)
    sub_4d46e0(5, 0)

char* result_3 = result_1
char* esi_2 = *(result_3 + 4)
sub_63d720(&var_28, "BtnOptions")
char* eax_15 = var_28
char* const result_2 = &data_801800
char* const ecx_17 = &data_801800

if (eax_15 != 0)
    ecx_17 = eax_15

int32_t esi_4

while (true)
    char edx_8 = *ecx_17
    char temp6_1 = *esi_2
    bool c_4 = edx_8 u< temp6_1
    
    if (edx_8 == temp6_1)
        if (edx_8 == 0)
            esi_4 = 0
            break
        
        edx_8 = ecx_17[1]
        char temp9_1 = esi_2[1]
        c_4 = edx_8 u< temp9_1
        
        if (edx_8 == temp9_1)
            ecx_17 = &ecx_17[2]
            esi_2 = &esi_2[2]
            
            if (edx_8 != 0)
                continue
            
            esi_4 = 0
            break
    
    esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
    break

int32_t var_8_8 = 5

if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
    char* eax_16 = sub_63d4e0(&var_28)
    int32_t temp11_1 = *(eax_16 + 4)
    *(eax_16 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        var_28 = &data_801800

int32_t var_8_9 = 0xffffffff

if (esi_4 == 0)
    data_8db660 = 0xe

char* esi_5 = *(result_3 + 4)
sub_63d720(&var_28, "BtnOptions")
char* eax_17 = var_28
char* const ecx_21 = &data_801800

if (eax_17 != 0)
    ecx_21 = eax_17

int32_t esi_7

while (true)
    char edx_11 = *ecx_21
    char temp12_1 = *esi_5
    bool c_5 = edx_11 u< temp12_1
    
    if (edx_11 == temp12_1)
        if (edx_11 == 0)
            esi_7 = 0
            break
        
        edx_11 = ecx_21[1]
        char temp13_1 = esi_5[1]
        c_5 = edx_11 u< temp13_1
        
        if (edx_11 == temp13_1)
            ecx_21 = &ecx_21[2]
            esi_5 = &esi_5[2]
            
            if (edx_11 != 0)
                continue
            
            esi_7 = 0
            break
    
    esi_7 = sbb.d(esi_5, esi_5, c_5) | 1
    break

int32_t var_8_10 = 6

if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
    char* eax_18 = sub_63d4e0(&var_28)
    int32_t temp14_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        var_28 = &data_801800

int32_t var_8_11 = 0xffffffff

if (esi_7 == 0)
    data_8db660 = 0xe

char* esi_8 = *(result_3 + 4)
sub_63d720(&var_28, "BtnRules")
char* eax_19 = var_28
char* const ecx_25 = &data_801800

if (eax_19 != 0)
    ecx_25 = eax_19

int32_t esi_10

while (true)
    char edx_14 = *ecx_25
    char temp15_1 = *esi_8
    bool c_6 = edx_14 u< temp15_1
    
    if (edx_14 == temp15_1)
        if (edx_14 == 0)
            esi_10 = 0
            break
        
        edx_14 = ecx_25[1]
        char temp16_1 = esi_8[1]
        c_6 = edx_14 u< temp16_1
        
        if (edx_14 == temp16_1)
            ecx_25 = &ecx_25[2]
            esi_8 = &esi_8[2]
            
            if (edx_14 != 0)
                continue
            
            esi_10 = 0
            break
    
    esi_10 = sbb.d(esi_8, esi_8, c_6) | 1
    break

int32_t var_8_12 = 7

if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
    char* eax_20 = sub_63d4e0(&var_28)
    int32_t temp17_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        var_28 = &data_801800

int32_t var_8_13 = 0xffffffff

if (esi_10 == 0)
    data_8db660 = 0x17

char* esi_11 = *(result_3 + 4)
sub_63d720(&var_28, "BtnLog")
char* eax_21 = var_28
char* const ecx_29 = &data_801800

if (eax_21 != 0)
    ecx_29 = eax_21

int32_t esi_13

while (true)
    char edx_17 = *ecx_29
    char temp18_1 = *esi_11
    bool c_7 = edx_17 u< temp18_1
    
    if (edx_17 == temp18_1)
        if (edx_17 == 0)
            esi_13 = 0
            break
        
        edx_17 = ecx_29[1]
        char temp19_1 = esi_11[1]
        c_7 = edx_17 u< temp19_1
        
        if (edx_17 == temp19_1)
            ecx_29 = &ecx_29[2]
            esi_11 = &esi_11[2]
            
            if (edx_17 != 0)
                continue
            
            esi_13 = 0
            break
    
    esi_13 = sbb.d(esi_11, esi_11, c_7) | 1
    break

int32_t var_8_14 = 8

if (data_cf65bc != 0 && eax_21 != 0 && *eax_21 != 0)
    char* eax_22 = sub_63d4e0(&var_28)
    int32_t temp20_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        var_28 = &data_801800

int32_t var_8_15 = 0xffffffff

if (esi_13 == 0)
    data_8db660 = 0x28

char* edi_1 = *(result_3 + 4)
sub_63d720(&var_28, "BtnForfeit")
int32_t var_8_16 = 9
char* const eax_23 = &data_801800
char* esi_14 = var_28
char* edx_21 = var_18 | 8
void* var_18_1 = edx_21
char* var_1c_5 = edx_21

if (esi_14 != 0)
    eax_23 = esi_14

int32_t eax_25

while (true)
    char ecx_33 = *eax_23
    char temp21_1 = *edi_1
    bool c_8 = ecx_33 u< temp21_1
    
    if (ecx_33 == temp21_1)
        if (ecx_33 == 0)
            eax_25 = 0
            break
        
        ecx_33 = eax_23[1]
        char temp22_1 = edi_1[1]
        c_8 = ecx_33 u< temp22_1
        
        if (ecx_33 == temp22_1)
            eax_23 = &eax_23[2]
            edi_1 = &edi_1[2]
            
            if (ecx_33 != 0)
                continue
            
            eax_25 = 0
            break
    
    eax_25 = sbb.d(eax_23, eax_23, c_8) | 1
    break

char ecx_38 = edx_21.b
char var_11_1
char* eax_29

if (eax_25 == 0)
    eax_29 = var_24
    var_11_1 = 1
else
    char* edi_2 = *(result_1 + 4)
    sub_63d720(&var_24, "BtnResign")
    char* ecx_35 = &data_801800
    void* eax_28 = var_18_1 | 0x10
    var_18_1 = eax_28
    var_20 = eax_28
    eax_29 = var_24
    
    if (eax_29 != 0)
        ecx_35 = eax_29
    
    int32_t ecx_37
    
    while (true)
        char edx_22 = *ecx_35
        char temp23_1 = *edi_2
        bool c_9 = edx_22 u< temp23_1
        
        if (edx_22 == temp23_1)
            if (edx_22 == 0)
                ecx_37 = 0
                break
            
            edx_22 = ecx_35[1]
            char temp24_1 = edi_2[1]
            c_9 = edx_22 u< temp24_1
            
            if (edx_22 == temp24_1)
                ecx_35 = &ecx_35[2]
                edi_2 = &edi_2[2]
                
                if (edx_22 != 0)
                    continue
                
                ecx_37 = 0
                break
        
        ecx_37 = sbb.d(ecx_35, ecx_35, c_9) | 1
        break
    
    char edx_23 = var_18_1.b
    
    if (ecx_37 == 0)
        ecx_38 = edx_23
        edx_21 = var_20
        var_11_1 = 1
    else
        ecx_38 = edx_23
        var_11_1 = 0
        edx_21 = var_20

void* ecx_40

if ((ecx_38 & 0x10) == 0)
    ecx_40 = var_18_1
else
    ecx_40 = edx_21 & 0xffffffef
    void* var_1c_7 = ecx_40
    int32_t var_8_17 = 0xa
    
    if (data_cf65bc != 0 && eax_29 != 0 && *eax_29 != 0)
        char* eax_30 = sub_63d4e0(&var_24)
        int32_t temp25_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp25_1 == 1)
            sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            var_24 = &data_801800
        
        ecx_40 = ecx_40

int32_t var_8_18 = 0xffffffff

if ((ecx_40.b & 8) != 0)
    int32_t var_8_19 = 0xb
    
    if (data_cf65bc != 0 && esi_14 != 0 && *esi_14 != 0)
        char* eax_31 = sub_63d4e0(&var_28)
        int32_t temp27_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp27_1 == 1)
            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            var_28 = &data_801800
    
    int32_t var_8_20 = 0xffffffff

int32_t* eax_32

if (var_11_1 == 0)
label_4c4d6d:
    char* esi_15 = *(result_1 + 4)
    sub_63d720(&var_28, "btn_exit")
    char* eax_47 = var_28
    char* ecx_51 = &data_801800
    
    if (eax_47 != 0)
        ecx_51 = eax_47
    
    int32_t esi_17
    
    while (true)
        char edx_28 = *ecx_51
        char temp26_1 = *esi_15
        bool c_10 = edx_28 u< temp26_1
        
        if (edx_28 == temp26_1)
            if (edx_28 == 0)
                esi_17 = 0
                break
            
            edx_28 = ecx_51[1]
            char temp28_1 = esi_15[1]
            c_10 = edx_28 u< temp28_1
            
            if (edx_28 == temp28_1)
                ecx_51 = &ecx_51[2]
                esi_15 = &esi_15[2]
                
                if (edx_28 != 0)
                    continue
                
                esi_17 = 0
                break
        
        esi_17 = sbb.d(esi_15, esi_15, c_10) | 1
        break
    
    int32_t var_8_21 = 0xc
    
    if (data_cf65bc != 0 && eax_47 != 0 && *eax_47 != 0)
        char* eax_48 = sub_63d4e0(&var_28)
        int32_t temp29_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp29_1 == 1)
            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
            var_28 = &data_801800
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_17 != 0)
        goto label_4c4e54
    
    int32_t* eax_49 = sub_4b9480()
    
    if (sub_5f1a50(eax_49) != 0)
        sub_4c3620()
    
    int32_t edi_4 = *eax_49
    int32_t esi_18 = 0
    int32_t ecx_55
    
    while (true)
        if (*(sub_61dad0() + esi_18 + 8) == edi_4)
            ecx_55 = 2
            break
        
        esi_18 += 0xc
        
        if (esi_18 s>= 0x78)
            ecx_55 = 0
            break
    
    eax_32 = data_cc8d5c
    
    if (eax_32 != 0)
        eax_32[0x1411] = 7
        eax_32[0x1419] = 0
        eax_32[0x1418] = ecx_55
    label_4c4e54:
        char* esi_19 = *(result_1 + 4)
        sub_63d720(&result_1, "BtnLog")
        char* result = result_1
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_21
        
        while (true)
            char ecx_57 = *result_2
            char temp30_1 = *esi_19
            bool c_11 = ecx_57 u< temp30_1
            
            if (ecx_57 == temp30_1)
                if (ecx_57 == 0)
                    esi_21 = 0
                    break
                
                ecx_57 = result_2[1]
                char temp31_1 = esi_19[1]
                c_11 = ecx_57 u< temp31_1
                
                if (ecx_57 == temp31_1)
                    result_2 = &result_2[2]
                    esi_19 = &esi_19[2]
                    
                    if (ecx_57 != 0)
                        continue
                    
                    esi_21 = 0
                    break
            
            esi_21 = sbb.d(esi_19, esi_19, c_11) | 1
            break
        
        int32_t var_8_23 = 0xd
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp32_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp32_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
        
        if (esi_21 == 0)
            data_b80998 = 3
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    edx_21.b = 0
    sub_4d46e0(5, edx_21.b)
    eax_32 = sub_4b9480()
    void* ecx_45 = data_cc8d5c
    
    if (ecx_45 != 0)
        if (*(ecx_45 + 0x5068) != 2 || eax_32[9] != 3)
        label_4c4c8b:
            data_8db6b0 = 0x20
            void* eax_35 = sub_68caf0(eax_32, nullptr, "dom_msg_resign_header", 0)
            char const* const ecx_46
            
            if (eax_35 != 0)
                char* eax_36 = *eax_35
                ecx_46 = &data_801800
                
                if (eax_36 != 0)
                    ecx_46 = eax_36
            else
                ecx_46 = "dom_msg_resign_header"
            
            void* eax_38 =
                sub_68caf0(sub_63d8d0(&data_8db750, ecx_46), nullptr, "dom_msg_resign_body", 0)
            char const* const ecx_47
            
            if (eax_38 != 0)
                char* eax_39 = *eax_38
                ecx_47 = &data_801800
                
                if (eax_39 != 0)
                    ecx_47 = eax_39
            else
                ecx_47 = "dom_msg_resign_body"
            
            void* eax_41 =
                sub_68caf0(sub_63d8d0(&data_8db754, ecx_47), nullptr, "dom_msg_resign_ok", 0)
            char const* const ecx_48
            
            if (eax_41 != 0)
                char* eax_42 = *eax_41
                ecx_48 = &data_801800
                
                if (eax_42 != 0)
                    ecx_48 = eax_42
            else
                ecx_48 = "dom_msg_resign_ok"
            
            void* eax_44 = sub_68caf0(sub_63d8d0(&data_8db758, ecx_48), nullptr, &data_801800, 0)
            char* const ecx_49
            
            if (eax_44 != 0)
                char* eax_45 = *eax_44
                ecx_49 = &data_801800
                
                if (eax_45 != 0)
                    ecx_49 = eax_45
            else
                ecx_49 = &data_801800
            
            sub_63d8d0(&data_8db75c, ecx_49)
            data_8db760 = 0x4c4f10
            data_8db764 = 0
        else
            eax_32 = sub_4b9480()[0x46a] * 2
            
            if (data_b809c8 s>= eax_32)
                goto label_4c4c8b
            
            data_8db6b0 = 0x7f7
        
        goto label_4c4d6d

sub_63b870(eax_32, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
