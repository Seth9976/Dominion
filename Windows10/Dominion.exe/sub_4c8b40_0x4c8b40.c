// 函数: sub_4c8b40
// 地址: 0x4c8b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_cyl_bessel_k@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* result_1 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2
int32_t* result_25 = result_2
char* esi = result_25[1]
sub_63d720(&result_1, "btnBack")
char* result_9 = result_1
char* const result_26 = &data_801800

if (result_9 != 0)
    result_26 = result_9

int32_t ecx_2

while (true)
    char edx_1 = *result_26
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_2 = 0
            break
        
        edx_1 = result_26[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_26 = &result_26[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_26, result_26, c_1) | 1
    break

int32_t ebx

if (ecx_2 == 0 || result_25[6] == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    int32_t eax_4
    
    if (data_8db5c4 != 0x27)
        if (data_8db5d4 == 0x27)
            eax_4 = data_8db5d8
            goto label_4c8c1f
        
        data_8db660 = 4
    else
        eax_4 = data_8db5c8
    label_4c8c1f:
        
        if (eax_4 == 0)
            data_8db660 = 4
        else
            sub_4d46e0(5, 0)

char* esi_1 = result_25[1]
sub_63d720(&result_1, "btnWayButtons")
char* result_10 = result_1
char* const result_27 = &data_801800

if (result_10 != 0)
    result_27 = result_10

int32_t esi_3

while (true)
    char edx_4 = *result_27
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = result_27[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_27 = &result_27[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
    char* eax_5 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    void* eax_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edx_7 = *(eax_6 + 0x42bc)
    int32_t edx_8 = edx_7 & 0xfffffffd
    
    if ((edx_7.b & 2) == 0)
        edx_8 = edx_7 | 2
    
    *(eax_6 + 0x42bc) = edx_8
    data_cc8dc8
    sub_4d8ad0(eax_6 + 0x42bc)

char* esi_5 = result_25[1]
sub_63d720(&result_1, "btnStackHand")
char* result_11 = result_1
char* const result_28 = &data_801800

if (result_11 != 0)
    result_28 = result_11

int32_t esi_7

while (true)
    char edx_9 = *result_28
    char temp6_1 = *esi_5
    bool c_3 = edx_9 u< temp6_1
    
    if (edx_9 == temp6_1)
        if (edx_9 == 0)
            esi_7 = 0
            break
        
        edx_9 = result_28[1]
        char temp7_1 = esi_5[1]
        c_3 = edx_9 u< temp7_1
        
        if (edx_9 == temp7_1)
            result_28 = &result_28[2]
            esi_5 = &esi_5[2]
            
            if (edx_9 != 0)
                continue
            
            esi_7 = 0
            break
    
    esi_7 = sbb.d(esi_5, esi_5, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_11 != 0 && *result_11 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_7 == 0)
    void* eax_10 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edx_12 = *(eax_10 + 0x42bc)
    int32_t edx_13 = edx_12 & 0xfffffffe
    
    if ((edx_12.b & 1) == 0)
        edx_13 = edx_12 | 1
    
    *(eax_10 + 0x42bc) = edx_13
    data_cc8dc8
    sub_4d8ad0(eax_10 + 0x42bc)

char* esi_9 = result_25[1]
sub_63d720(&result_1, "btnCampaignFeatures")
char* result_12 = result_1
char* const result_29 = &data_801800

if (result_12 != 0)
    result_29 = result_12

int32_t esi_11

while (true)
    char edx_14 = *result_29
    char temp9_1 = *esi_9
    bool c_4 = edx_14 u< temp9_1
    
    if (edx_14 == temp9_1)
        if (edx_14 == 0)
            esi_11 = 0
            break
        
        edx_14 = result_29[1]
        char temp10_1 = esi_9[1]
        c_4 = edx_14 u< temp10_1
        
        if (edx_14 == temp10_1)
            result_29 = &result_29[2]
            esi_9 = &esi_9[2]
            
            if (edx_14 != 0)
                continue
            
            esi_11 = 0
            break
    
    esi_11 = sbb.d(esi_9, esi_9, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_12 != 0 && *result_12 != 0)
    char* eax_13 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_13 + 4)
    *(eax_13 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_11 == 0)
    void* eax_14
    eax_14.b = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4240)
    ebx.b = eax_14.b == 0
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4240) = ebx.b
    data_cc8dc8
    sub_4d8ad0(esi_11)

char* esi_12 = result_25[1]
sub_63d720(&result_1, "btnRestoreDefaults")
char* result_13 = result_1
char* const result_30 = &data_801800

if (result_13 != 0)
    result_30 = result_13

int32_t esi_14

while (true)
    char edx_17 = *result_30
    char temp12_1 = *esi_12
    bool c_5 = edx_17 u< temp12_1
    
    if (edx_17 == temp12_1)
        if (edx_17 == 0)
            esi_14 = 0
            break
        
        edx_17 = result_30[1]
        char temp13_1 = esi_12[1]
        c_5 = edx_17 u< temp13_1
        
        if (edx_17 == temp13_1)
            result_30 = &result_30[2]
            esi_12 = &esi_12[2]
            
            if (edx_17 != 0)
                continue
            
            esi_14 = 0
            break
    
    esi_14 = sbb.d(esi_12, esi_12, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_13 != 0 && *result_13 != 0)
    char* eax_16 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_16 + 4)
    *(eax_16 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_10 = 0xffffffff

if (esi_14 == 0)
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42bc) = esi_14
    data_cc8dc8
    sub_4d8ad0(esi_14)

char* esi_15 = result_25[1]
sub_63d720(&result_1, "btn_tabBasic")
char* result_14 = result_1
char* const result_31 = &data_801800

if (result_14 != 0)
    result_31 = result_14

int32_t esi_17

while (true)
    char edx_20 = *result_31
    char temp15_1 = *esi_15
    bool c_6 = edx_20 u< temp15_1
    
    if (edx_20 == temp15_1)
        if (edx_20 == 0)
            esi_17 = 0
            break
        
        edx_20 = result_31[1]
        char temp16_1 = esi_15[1]
        c_6 = edx_20 u< temp16_1
        
        if (edx_20 == temp16_1)
            result_31 = &result_31[2]
            esi_15 = &esi_15[2]
            
            if (edx_20 != 0)
                continue
            
            esi_17 = 0
            break
    
    esi_17 = sbb.d(esi_15, esi_15, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result_14 != 0 && *result_14 != 0)
    char* eax_18 = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_12 = 0xffffffff

if (esi_17 == 0)
    data_cc8db8 = esi_17

char* esi_18 = result_25[1]
sub_63d720(&result_1, "btn_tabAdvanced")
char* result_15 = result_1
char* const result_32 = &data_801800

if (result_15 != 0)
    result_32 = result_15

int32_t esi_20

while (true)
    char edx_23 = *result_32
    char temp18_1 = *esi_18
    bool c_7 = edx_23 u< temp18_1
    
    if (edx_23 == temp18_1)
        if (edx_23 == 0)
            esi_20 = 0
            break
        
        edx_23 = result_32[1]
        char temp19_1 = esi_18[1]
        c_7 = edx_23 u< temp19_1
        
        if (edx_23 == temp19_1)
            result_32 = &result_32[2]
            esi_18 = &esi_18[2]
            
            if (edx_23 != 0)
                continue
            
            esi_20 = 0
            break
    
    esi_20 = sbb.d(esi_18, esi_18, c_7) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && result_15 != 0 && *result_15 != 0)
    char* eax_19 = sub_63d4e0(&result_1)
    int32_t temp20_1 = *(eax_19 + 4)
    *(eax_19 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_14 = 0xffffffff

if (esi_20 == 0)
    data_cc8db8 = 1

char* esi_21 = result_25[1]
sub_63d720(&result_1, "btn_language")
char* result_16 = result_1
char* const result_33 = &data_801800

if (result_16 != 0)
    result_33 = result_16

int32_t esi_23

while (true)
    char edx_26 = *result_33
    char temp21_1 = *esi_21
    bool c_8 = edx_26 u< temp21_1
    
    if (edx_26 == temp21_1)
        if (edx_26 == 0)
            esi_23 = 0
            break
        
        edx_26 = result_33[1]
        char temp22_1 = esi_21[1]
        c_8 = edx_26 u< temp22_1
        
        if (edx_26 == temp22_1)
            result_33 = &result_33[2]
            esi_21 = &esi_21[2]
            
            if (edx_26 != 0)
                continue
            
            esi_23 = 0
            break
    
    esi_23 = sbb.d(esi_21, esi_21, c_8) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && result_16 != 0 && *result_16 != 0)
    char* eax_20 = sub_63d4e0(&result_1)
    int32_t temp23_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_16 = 0xffffffff
char const* const var_30
int32_t var_2c
char const* const var_28
char* result
char* ecx_43

if (esi_23 != 0)
label_4c91a9:
    char* esi_25 = result_25[1]
    sub_63d720(&result_1, "btnGraphics")
    result = result_1
    char* const result_3 = &data_801800
    
    if (result != 0)
        result_3 = result
    
    int32_t esi_27
    
    while (true)
        char edx_30 = *result_3
        char temp24_1 = *esi_25
        bool c_9 = edx_30 u< temp24_1
        
        if (edx_30 == temp24_1)
            if (edx_30 == 0)
                esi_27 = 0
                break
            
            edx_30 = result_3[1]
            char temp25_1 = esi_25[1]
            c_9 = edx_30 u< temp25_1
            
            if (edx_30 == temp25_1)
                result_3 = &result_3[2]
                esi_25 = &esi_25[2]
                
                if (edx_30 != 0)
                    continue
                
                esi_27 = 0
                break
        
        esi_27 = sbb.d(esi_25, esi_25, c_9) | 1
        break
    
    int32_t var_8_17 = 8
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp26_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp26_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_18 = 0xffffffff
    
    if (esi_27 != 0)
        goto label_4c9265
    
    void* ecx_48 = data_cc8dc0
    
    if (ecx_48 != 0)
        int32_t eax_26
        eax_26.b = *(ecx_48 + 0xc) != 1
        *(ecx_48 + 0xc) = eax_26
        sub_4d6a20()
    label_4c9265:
        char* esi_28 = result_25[1]
        sub_63d720(&result_1, "btnGameSpeed")
        char* result_17 = result_1
        char* const result_34 = &data_801800
        
        if (result_17 != 0)
            result_34 = result_17
        
        int32_t esi_30
        
        while (true)
            char edx_33 = *result_34
            char temp27_1 = *esi_28
            bool c_10 = edx_33 u< temp27_1
            
            if (edx_33 == temp27_1)
                if (edx_33 == 0)
                    esi_30 = 0
                    break
                
                edx_33 = result_34[1]
                char temp28_1 = esi_28[1]
                c_10 = edx_33 u< temp28_1
                
                if (edx_33 == temp28_1)
                    result_34 = &result_34[2]
                    esi_28 = &esi_28[2]
                    
                    if (edx_33 != 0)
                        continue
                    
                    esi_30 = 0
                    break
            
            esi_30 = sbb.d(esi_28, esi_28, c_10) | 1
            break
        
        int32_t var_8_19 = 9
        
        if (data_cf65bc != 0 && result_17 != 0 && *result_17 != 0)
            char* eax_27 = sub_63d4e0(&result_1)
            int32_t temp29_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp29_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_20 = 0xffffffff
        
        if (esi_30 != 0)
        label_4c9324:
            char* esi_31 = result_25[1]
            sub_63d720(&result_1, "btnAutomation")
            char* result_18 = result_1
            char* const result_35 = &data_801800
            
            if (result_18 != 0)
                result_35 = result_18
            
            int32_t esi_33
            
            while (true)
                char edx_36 = *result_35
                char temp30_1 = *esi_31
                bool c_11 = edx_36 u< temp30_1
                
                if (edx_36 == temp30_1)
                    if (edx_36 == 0)
                        esi_33 = 0
                        break
                    
                    edx_36 = result_35[1]
                    char temp31_1 = esi_31[1]
                    c_11 = edx_36 u< temp31_1
                    
                    if (edx_36 == temp31_1)
                        result_35 = &result_35[2]
                        esi_31 = &esi_31[2]
                        
                        if (edx_36 != 0)
                            continue
                        
                        esi_33 = 0
                        break
                
                esi_33 = sbb.d(esi_31, esi_31, c_11) | 1
                break
            
            int32_t var_8_21 = 0xa
            
            if (data_cf65bc != 0 && result_18 != 0 && *result_18 != 0)
                char* eax_28 = sub_63d4e0(&result_1)
                int32_t temp32_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp32_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_22 = 0xffffffff
            
            if (esi_33 != 0)
            label_4c93e3:
                char* esi_34 = result_25[1]
                sub_63d720(&result_1, "btnJumbo")
                char* result_19 = result_1
                char* const result_36 = &data_801800
                
                if (result_19 != 0)
                    result_36 = result_19
                
                int32_t esi_36
                
                while (true)
                    char edx_39 = *result_36
                    char temp33_1 = *esi_34
                    bool c_12 = edx_39 u< temp33_1
                    
                    if (edx_39 == temp33_1)
                        if (edx_39 == 0)
                            esi_36 = 0
                            break
                        
                        edx_39 = result_36[1]
                        char temp34_1 = esi_34[1]
                        c_12 = edx_39 u< temp34_1
                        
                        if (edx_39 == temp34_1)
                            result_36 = &result_36[2]
                            esi_34 = &esi_34[2]
                            
                            if (edx_39 != 0)
                                continue
                            
                            esi_36 = 0
                            break
                    
                    esi_36 = sbb.d(esi_34, esi_34, c_12) | 1
                    break
                
                int32_t var_8_23 = 0xb
                
                if (data_cf65bc != 0 && result_19 != 0 && *result_19 != 0)
                    char* eax_29 = sub_63d4e0(&result_1)
                    int32_t temp35_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp35_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_8_24 = 0xffffffff
                
                if (esi_36 == 0)
                    sub_4c8ac0()
                
                char* esi_37 = result_25[1]
                sub_63d720(&result_1, "btnLanguage")
                char* result_20 = result_1
                char* const result_37 = &data_801800
                
                if (result_20 != 0)
                    result_37 = result_20
                
                int32_t esi_39
                
                while (true)
                    char edx_42 = *result_37
                    char temp36_1 = *esi_37
                    bool c_13 = edx_42 u< temp36_1
                    
                    if (edx_42 == temp36_1)
                        if (edx_42 == 0)
                            esi_39 = 0
                            break
                        
                        edx_42 = result_37[1]
                        char temp37_1 = esi_37[1]
                        c_13 = edx_42 u< temp37_1
                        
                        if (edx_42 == temp37_1)
                            result_37 = &result_37[2]
                            esi_37 = &esi_37[2]
                            
                            if (edx_42 != 0)
                                continue
                            
                            esi_39 = 0
                            break
                    
                    esi_39 = sbb.d(esi_37, esi_37, c_13) | 1
                    break
                
                int32_t var_8_25 = 0xc
                
                if (data_cf65bc != 0 && result_20 != 0 && *result_20 != 0)
                    char* eax_30 = sub_63d4e0(&result_1)
                    int32_t temp38_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp38_1 == 1)
                        sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_8_26 = 0xffffffff
                
                if (esi_39 == 0)
                    sub_67aca0(sub_64e7a0(*result_25))
                
                char* esi_40 = result_25[1]
                sub_63d720(&result_1, "btnControls")
                result = result_1
                char* result_4 = &data_801800
                
                if (result != 0)
                    result_4 = result
                
                int32_t esi_42
                
                while (true)
                    char edx_45 = *result_4
                    char temp39_1 = *esi_40
                    bool c_14 = edx_45 u< temp39_1
                    
                    if (edx_45 == temp39_1)
                        if (edx_45 == 0)
                            esi_42 = 0
                            break
                        
                        edx_45 = result_4[1]
                        char temp40_1 = esi_40[1]
                        c_14 = edx_45 u< temp40_1
                        
                        if (edx_45 == temp40_1)
                            result_4 = &result_4[2]
                            esi_40 = &esi_40[2]
                            
                            if (edx_45 != 0)
                                continue
                            
                            esi_42 = 0
                            break
                    
                    esi_42 = sbb.d(esi_40, esi_40, c_14) | 1
                    break
                
                int32_t var_8_27 = 0xd
                
                if (data_cf65bc != 0 && result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp41_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp41_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_8_28 = 0xffffffff
                
                if (esi_42 != 0)
                    goto label_4c95ca
                
                void* esi_43 = data_cc8dc0
                
                if (esi_43 != 0)
                    int32_t ecx_66
                    ecx_66.b = sub_4dad50() != 2
                    *(esi_43 + 0x24) = ecx_66 + 1
                    sub_4d6a20()
                label_4c95ca:
                    char* esi_44 = result_25[1]
                    sub_63d720(&result_1, "btnWidescreen")
                    char* result_21 = result_1
                    char* result_38 = &data_801800
                    
                    if (result_21 != 0)
                        result_38 = result_21
                    
                    int32_t esi_46
                    
                    while (true)
                        char edx_48 = *result_38
                        char temp42_1 = *esi_44
                        bool c_15 = edx_48 u< temp42_1
                        
                        if (edx_48 == temp42_1)
                            if (edx_48 == 0)
                                esi_46 = 0
                                break
                            
                            edx_48 = result_38[1]
                            char temp43_1 = esi_44[1]
                            c_15 = edx_48 u< temp43_1
                            
                            if (edx_48 == temp43_1)
                                result_38 = &result_38[2]
                                esi_44 = &esi_44[2]
                                
                                if (edx_48 != 0)
                                    continue
                                
                                esi_46 = 0
                                break
                        
                        esi_46 = sbb.d(esi_44, esi_44, c_15) | 1
                        break
                    
                    int32_t var_8_29 = 0xe
                    
                    if (data_cf65bc != 0 && result_21 != 0 && *result_21 != 0)
                        char* eax_33 = sub_63d4e0(&result_1)
                        int32_t temp44_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp44_1 == 1)
                            sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_8_30 = 0xffffffff
                    
                    if (esi_46 == 0)
                        sub_4aedf0()
                    
                    char* esi_47 = result_25[1]
                    sub_63d720(&result_1, "btnFullscreen")
                    char* result_22 = result_1
                    char* result_39 = &data_801800
                    
                    if (result_22 != 0)
                        result_39 = result_22
                    
                    int32_t esi_49
                    
                    while (true)
                        char edx_51 = *result_39
                        char temp45_1 = *esi_47
                        bool c_16 = edx_51 u< temp45_1
                        
                        if (edx_51 == temp45_1)
                            if (edx_51 == 0)
                                esi_49 = 0
                                break
                            
                            edx_51 = result_39[1]
                            char temp46_1 = esi_47[1]
                            c_16 = edx_51 u< temp46_1
                            
                            if (edx_51 == temp46_1)
                                result_39 = &result_39[2]
                                esi_47 = &esi_47[2]
                                
                                if (edx_51 != 0)
                                    continue
                                
                                esi_49 = 0
                                break
                        
                        esi_49 = sbb.d(esi_47, esi_47, c_16) | 1
                        break
                    
                    int32_t var_8_31 = 0xf
                    
                    if (data_cf65bc != 0 && result_22 != 0 && *result_22 != 0)
                        char* eax_34 = sub_63d4e0(&result_1)
                        int32_t temp47_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp47_1 == 1)
                            sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_8_32 = 0xffffffff
                    
                    if (esi_49 == 0)
                        sub_4aed40()
                    
                    char* esi_50 = result_25[1]
                    sub_63d720(&result_1, "btnColorblind")
                    result = result_1
                    char* result_5 = &data_801800
                    
                    if (result != 0)
                        result_5 = result
                    
                    int32_t esi_52
                    
                    while (true)
                        char edx_54 = *result_5
                        char temp48_1 = *esi_50
                        bool c_17 = edx_54 u< temp48_1
                        
                        if (edx_54 == temp48_1)
                            if (edx_54 == 0)
                                esi_52 = 0
                                break
                            
                            edx_54 = result_5[1]
                            char temp49_1 = esi_50[1]
                            c_17 = edx_54 u< temp49_1
                            
                            if (edx_54 == temp49_1)
                                result_5 = &result_5[2]
                                esi_50 = &esi_50[2]
                                
                                if (edx_54 != 0)
                                    continue
                                
                                esi_52 = 0
                                break
                        
                        esi_52 = sbb.d(esi_50, esi_50, c_17) | 1
                        break
                    
                    int32_t var_8_33 = 0x10
                    
                    if (data_cf65bc != 0 && result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp50_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp50_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_8_34 = 0xffffffff
                    
                    if (esi_52 != 0)
                        goto label_4c979e
                    
                    void* ecx_77 = data_cc8dc0
                    
                    if (ecx_77 != 0)
                        result.b = *(ecx_77 + 0x30) == 0
                        *(ecx_77 + 0x30) = result.b
                        sub_4d6a20()
                    label_4c979e:
                        char* esi_53 = result_25[1]
                        sub_63d720(&result_1, "btnColorScheme")
                        result = result_1
                        char* result_6 = &data_801800
                        
                        if (result != 0)
                            result_6 = result
                        
                        int32_t esi_55
                        
                        while (true)
                            char edx_57 = *result_6
                            char temp51_1 = *esi_53
                            bool c_18 = edx_57 u< temp51_1
                            
                            if (edx_57 == temp51_1)
                                if (edx_57 == 0)
                                    esi_55 = 0
                                    break
                                
                                edx_57 = result_6[1]
                                char temp52_1 = esi_53[1]
                                c_18 = edx_57 u< temp52_1
                                
                                if (edx_57 == temp52_1)
                                    result_6 = &result_6[2]
                                    esi_53 = &esi_53[2]
                                    
                                    if (edx_57 != 0)
                                        continue
                                    
                                    esi_55 = 0
                                    break
                            
                            esi_55 = sbb.d(esi_53, esi_53, c_18) | 1
                            break
                        
                        int32_t var_8_35 = 0x11
                        
                        if (data_cf65bc != 0 && result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp53_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp53_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_1 = &data_801800
                        
                        int32_t var_8_36 = 0xffffffff
                        
                        if (esi_55 != 0)
                            goto label_4c985d
                        
                        void* ecx_81 = data_cc8dc0
                        
                        if (ecx_81 != 0)
                            result.b = *(ecx_81 + 0x31) == 0
                            *(ecx_81 + 0x31) = result.b
                            sub_4d6a20()
                        label_4c985d:
                            char* esi_56 = result_25[1]
                            sub_63d720(&result_1, "btnSlider")
                            char* result_23 = result_1
                            char* result_40 = &data_801800
                            
                            if (result_23 != 0)
                                result_40 = result_23
                            
                            void* esi_58
                            
                            while (true)
                                char edx_60 = *result_40
                                char temp54_1 = *esi_56
                                bool c_19 = edx_60 u< temp54_1
                                
                                if (edx_60 == temp54_1)
                                    if (edx_60 == 0)
                                        esi_58 = nullptr
                                        break
                                    
                                    edx_60 = result_40[1]
                                    char temp55_1 = esi_56[1]
                                    c_19 = edx_60 u< temp55_1
                                    
                                    if (edx_60 == temp55_1)
                                        result_40 = &result_40[2]
                                        esi_56 = &esi_56[2]
                                        
                                        if (edx_60 != 0)
                                            continue
                                        
                                        esi_58 = nullptr
                                        break
                                
                                esi_58 = sbb.d(esi_56, esi_56, c_19) | 1
                                break
                            
                            int32_t var_8_37 = 0x12
                            
                            if (data_cf65bc != 0 && result_23 != 0 && *result_23 != 0)
                                char* eax_35 = sub_63d4e0(&result_1)
                                int32_t temp56_1 = *(eax_35 + 4)
                                *(eax_35 + 4) -= 1
                                
                                if (temp56_1 == 1)
                                    sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                                    result_1 = &data_801800
                            
                            int32_t var_8_38 = 0xffffffff
                            
                            if (esi_58 != 0)
                            label_4c9b52:
                                char* esi_62 = result_25[1]
                                sub_63d720(&result_2, "btnSmartplays")
                                result = result_2
                                char* result_7 = &data_801800
                                
                                if (result != 0)
                                    result_7 = result
                                
                                int32_t esi_64
                                
                                while (true)
                                    char edx_65 = *result_7
                                    char temp57_1 = *esi_62
                                    bool c_21 = edx_65 u< temp57_1
                                    
                                    if (edx_65 == temp57_1)
                                        if (edx_65 == 0)
                                            esi_64 = 0
                                            break
                                        
                                        edx_65 = result_7[1]
                                        char temp58_1 = esi_62[1]
                                        c_21 = edx_65 u< temp58_1
                                        
                                        if (edx_65 == temp58_1)
                                            result_7 = &result_7[2]
                                            esi_62 = &esi_62[2]
                                            
                                            if (edx_65 != 0)
                                                continue
                                            
                                            esi_64 = 0
                                            break
                                    
                                    esi_64 = sbb.d(esi_62, esi_62, c_21) | 1
                                    break
                                
                                int32_t var_8_42 = 0x15
                                
                                if (data_cf65bc != 0 && result != 0 && *result != 0)
                                    result = sub_63d4e0(&result_2)
                                    int32_t temp61_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp61_1 == 1)
                                        sub_64c080(result, *(result + 0xc) + 0x10)
                                        result_2 = &data_801800
                                
                                int32_t var_8_43 = 0xffffffff
                                
                                if (esi_64 != 0)
                                label_4c9c0c:
                                    result.b = 0
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return result
                                
                                result = data_cc8d5c
                                
                                if (result != 0)
                                    bool cond:1_1 = *(result + 0x5068) == esi_64
                                    data_cd3190 = esi_64
                                    data_8db660 = 0x7e5
                                    data_cd318c = esi_64
                                    
                                    if (not(cond:1_1))
                                        data_cd318c = 1
                                    
                                    goto label_4c9c0c
                                
                                var_28 = "GetClient"
                                var_2c = 0x7b
                                var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                                ecx_43 = "gClient"
                            else
                                int32_t ecx_85 = *result_25
                                
                                if (ecx_85 != 0)
                                    esi_58 = *(sub_64e7a0(ecx_85) + 0x1718)
                                    
                                    if (esi_58 != 0)
                                        esi_58 = *(esi_58 + 0x18c8)
                                
                                sub_63d720(&result_1, "sliderMusic")
                                int32_t var_8_39 = 0x13
                                char* const ecx_88 = &data_801800
                                char* result_8 = &data_801800
                                char* eax_38 = *(sub_64e7a0(esi_58) + 0x15e0)
                                
                                if (eax_38 != 0)
                                    ecx_88 = eax_38
                                
                                result = result_1
                                
                                if (result != 0)
                                    result_8 = result
                                
                                int32_t esi_59
                                
                                while (true)
                                    ebx.b = *ecx_88
                                    char temp59_1 = *result_8
                                    bool c_20 = ebx.b u< temp59_1
                                    
                                    if (ebx.b == temp59_1)
                                        if (ebx.b == 0)
                                            esi_59 = 0
                                            break
                                        
                                        ebx.b = ecx_88[1]
                                        char temp60_1 = result_8[1]
                                        c_20 = ebx.b u< temp60_1
                                        
                                        if (ebx.b == temp60_1)
                                            ecx_88 = &ecx_88[2]
                                            result_8 = &result_8[2]
                                            
                                            if (ebx.b != 0)
                                                continue
                                            
                                            esi_59 = 0
                                            break
                                    
                                    esi_59 = sbb.d(esi_58, esi_58, c_20) | 1
                                    break
                                
                                int32_t var_8_40 = 0x14
                                
                                if (data_cf65bc != 0 && result != 0 && *result != 0)
                                    result = sub_63d4e0(&result_1)
                                    int32_t temp62_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp62_1 == 1)
                                        result = sub_64c080(result, *(result + 0xc) + 0x10)
                                        result_1 = &data_801800
                                
                                int32_t var_8_41 = 0xffffffff
                                int32_t* esi_61 = data_cc8dc0
                                int32_t xmm0_8
                                int32_t xmm1_1
                                float xmm3_1
                                float xmm4_1
                                
                                if (esi_59 != 0)
                                    if (esi_61 != 0)
                                        int32_t edi_1 = result_25[2]
                                        float xmm0_11 = sub_4d5cf0(esi_61[1] f* 8f)
                                        float xmm0_12
                                        
                                        if (0 f<= xmm0_11)
                                            xmm0_12 = xmm0_11 + 0.5f
                                        else
                                            xmm0_12 = xmm0_11 - 0.5f
                                        
                                        if (int.d(xmm0_12) s<= edi_1 || edi_1 != 0)
                                            data_cc8db4 = 0
                                            edi_1 += 1
                                        else
                                            data_cc8db4 = 1
                                        
                                        data_171e6b0
                                        float xmm0_14 = _mm_cvtepi32_ps(zx.o(edi_1))
                                        data_cc8db0 = 1
                                        esi_61[1] = xmm0_14 * 0.125f
                                        sub_688a10()
                                        xmm4_1 = esi_61[1]
                                        xmm0_8 = (zx.o(0)).d
                                        xmm3_1 = *esi_61
                                        
                                        if (0f <= xmm4_1)
                                        label_4c9b2b:
                                            xmm1_1 = _mm_min_ss(0x3f800000, xmm4_1)
                                            goto label_4c9b32
                                        
                                        xmm1_1 = (zx.o(0)).d
                                    label_4c9b32:
                                        void* eax_41 = data_147abf0
                                        *(eax_41 + 0x1c) = xmm1_1
                                        
                                        if (not(0f > xmm3_1))
                                            xmm0_8 = _mm_min_ss(0x3f800000, xmm3_1)
                                        
                                        *(eax_41 + 0x20) = xmm0_8
                                        sub_4d6a20()
                                        result_25 = result_2
                                        goto label_4c9b52
                                    
                                    var_28 = "GetLocalSettings"
                                    var_2c = 0x5fb
                                    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                    ecx_43 = "gGameSettings.localSettings"
                                else
                                    if (esi_61 != 0)
                                        int32_t edi = result_25[2]
                                        float xmm0_3 = sub_4d5cf0(*esi_61 * 8f)
                                        float xmm0_4
                                        
                                        if (0 f<= xmm0_3)
                                            xmm0_4 = xmm0_3 + 0.5f
                                        else
                                            xmm0_4 = xmm0_3 - 0.5f
                                        
                                        if (int.d(xmm0_4) s<= edi || edi != 0)
                                            data_cc8dac = 0
                                            edi += 1
                                        else
                                            data_cc8dac = 1
                                        
                                        data_171e6b0
                                        float xmm0_6 = _mm_cvtepi32_ps(zx.o(edi))
                                        data_cc8da8 = 1
                                        *esi_61 = xmm0_6 * 0.125f
                                        sub_688a10()
                                        xmm4_1 = esi_61[1]
                                        xmm0_8 = (zx.o(0)).d
                                        xmm3_1 = *esi_61
                                        
                                        if (0f <= xmm4_1)
                                            goto label_4c9b2b
                                        
                                        xmm1_1 = (zx.o(0)).d
                                        goto label_4c9b32
                                    
                                    var_28 = "GetLocalSettings"
                                    var_2c = 0x5fb
                                    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                    ecx_43 = "gGameSettings.localSettings"
                        else
                            var_28 = "GetLocalSettings"
                            var_2c = 0x5fb
                            var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                            ecx_43 = "gGameSettings.localSettings"
                    else
                        var_28 = "GetLocalSettings"
                        var_2c = 0x5fb
                        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                        ecx_43 = "gGameSettings.localSettings"
                else
                    var_28 = "GetLocalSettings"
                    var_2c = 0x5fb
                    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_43 = "gGameSettings.localSettings"
            else
                result = data_cc8dc0
                
                if (result != 0)
                    *(result + 0x34) += 1
                    
                    if (*(result + 0x34) s>= 2)
                        *(result + 0x34) = 0
                    
                    sub_4d6a20()
                    goto label_4c93e3
                
                var_28 = "GetLocalSettings"
                var_2c = 0x5fb
                var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                ecx_43 = "gGameSettings.localSettings"
        else
            result = data_cc8dc0
            
            if (result != 0)
                *(result + 8) += 1
                
                if (*(result + 8) s>= 2)
                    *(result + 8) = 0
                
                sub_4d6a20()
                goto label_4c9324
            
            var_28 = "GetLocalSettings"
            var_2c = 0x5fb
            var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx_43 = "gGameSettings.localSettings"
    else
        var_28 = "GetLocalSettings"
        var_2c = 0x5fb
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_43 = "gGameSettings.localSettings"
else
    void* ecx_42 = data_147abfc
    int32_t eax_21 = result_25[2]
    int32_t edx_29
    char* result_24
    
    if (ecx_42 == 0)
        result_24 = result_2
        edx_29 = 0
    else
        result_24 = *(ecx_42 + 0x204)
        edx_29 = *(ecx_42 + 0x208)
    
    if (eax_21 s< 0 || eax_21 s>= edx_29)
        goto label_4c916b
    
    result = data_cc8dc0
    
    if (result != 0)
        *(result + 0x10) = *(result_24 + (eax_21 << 3))
        result = data_cc8dc0
        
        if (result != 0)
            *(ecx_42 + 0x1f8) = *(result + 0x10)
            sub_4d6a20()
            sub_6378e0(&data_be3598)
        label_4c916b:
            int32_t ecx_44 = data_c23bec
            
            if (ecx_44 != 0)
                uint32_t eax_23 = zx.d(ecx_44.w)
                
                if (eax_23 u< data_c23bac)
                    void* eax_25 = eax_23 * 0x18d0 + data_c23ba8
                    
                    if (*(eax_25 + 0x18c8) == ecx_44 && eax_25 != 0)
                        *(eax_25 + 0x13c1) = 0
                
                data_c23bec = 0
            
            goto label_4c91a9
        
        var_28 = "GetLocalSettings"
        var_2c = 0x5fb
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_43 = "gGameSettings.localSettings"
    else
        var_28 = "GetLocalSettings"
        var_2c = 0x5fb
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_43 = "gGameSettings.localSettings"

sub_63b870(result, &data_801800, ecx_43, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
