// 函数: sub_5fdf40
// 地址: 0x5fdf40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a760
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* edx = __chkstk(0x4d04)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_3350 = arg5
void* var_3344 = arg6
int32_t* var_3354 = arg7
int32_t var_3348 = 0
void* result_2 = sub_4bbdb0()
int32_t esi_2 = *(edx + 0x18)
void var_4d14
int32_t var_3334[0x2f3]
void var_19a4
char* result

if (esi_2 == 9)
    memcpy(&var_3334, 0x8dce08, 0x1990)
    
    if (sub_62bea0(&var_3334, *(edx + 0xc) == 7, esi_2, arg4).b == 0)
        goto label_5ff7d4
    
    memcpy(&var_19a4, sub_4e49d0(esi_2, &var_4d14), 0x1990)
    sub_5f6a90(&var_3334, &var_19a4, result_2, &var_3334)
    sub_4e4cb0(result_2)
    uint32_t eax_10
    int32_t ecx_5
    eax_10, ecx_5 = sub_4daf40(&var_3350, &var_3344)
    int32_t var_24_4 = ecx_5
    sub_4dbef0(eax_10)
    *arg3 = 1
    result.b = 1
    *arg4 = 1
label_5ff7d9:
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

char* result_1
void* ebx
ebx:1.b = sub_4aceb0(data_be153c, &result_1)
char* result_6
void* esi_3

if (esi_2 == 2)
    result_6 = result_1
    esi_3 = edx
    
    if (ebx:1.b != 1)
        ebx.b = 0
    else
        ebx.b = ebx:1.b
else
    sub_63d720(&result_1, "btn_zoom_dismiss")
    esi_3 = edx
    result_6 = result_1
    var_3348 = 1
    char* const result_32 = &data_801800
    
    if (result_6 != 0)
        result_32 = result_6
    
    char* edx_6 = *(esi_3 + 4)
    int32_t ecx_10
    
    while (true)
        ebx.b = *edx_6
        char temp0_1 = *result_32
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_10 = 0
                break
            
            ebx.b = edx_6[1]
            char temp1_1 = result_32[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx_6 = &edx_6[2]
                result_32 = &result_32[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_10 = 0
                break
        
        ecx_10 = sbb.d(result_32, result_32, c_1) | 1
        break
    
    if (ecx_10 == 0 && ebx:1.b == 1)
        ebx.b = ebx:1.b
    else
        ebx.b = 0

if ((var_3348.b & 1) != 0)
    var_3348 &= 0xfffffffe
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_12 = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_2 = 0xffffffff

if (ebx.b == 0)
    char* result_7
    
    if (*(esi_3 + 0x18) == 2)
        result_7 = result_1
        ebx.b = 1
    else
        sub_63d720(&result_1, "btnBack")
        result_7 = result_1
        char* result_33 = &data_801800
        var_3348 |= 2
        void* edx_9 = *(esi_3 + 4)
        
        if (result_7 != 0)
            result_33 = result_7
        
        int32_t ecx_18
        
        while (true)
            ebx.b = *edx_9
            char temp3_1 = *result_33
            bool c_2 = ebx.b u< temp3_1
            
            if (ebx.b == temp3_1)
                if (ebx.b == 0)
                    ecx_18 = 0
                    break
                
                ebx.b = *(edx_9 + 1)
                char temp5_1 = result_33[1]
                c_2 = ebx.b u< temp5_1
                
                if (ebx.b == temp5_1)
                    edx_9 += 2
                    result_33 = &result_33[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_18 = 0
                    break
            
            ecx_18 = sbb.d(result_33, result_33, c_2) | 1
            break
        
        if (ecx_18 == 0)
            ebx.b = 1
        else
            ebx.b = 0
    
    if ((var_3348.b & 2) != 0)
        int32_t var_8_3 = 1
        
        if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
            char* eax_13 = sub_63d4e0(&result_1)
            int32_t temp7_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_4 = 0xffffffff
    
    if (ebx.b != 0)
        void* eax_14 = var_3350
        
        if (*eax_14 == 0)
            if (arg1 == 0)
                data_8db660 = 3
            else
                sub_4c5830(1)
            
            data_cc8dc8
            sub_4d8ad0(esi_3)
        else
            *eax_14 = 0
else
    sub_4ad010(data_be153c, 0xffffffff)

sub_63d720(&result_1, "btn_exitSet")
char* result_8 = result_1
char* const result_34 = &data_801800
char* edx_12 = *(esi_3 + 4)

if (result_8 != 0)
    result_34 = result_8

int32_t esi_4

while (true)
    ebx.b = *edx_12
    char temp4_1 = *result_34
    bool c_3 = ebx.b u< temp4_1
    
    if (ebx.b == temp4_1)
        if (ebx.b == 0)
            esi_4 = 0
            break
        
        ebx.b = edx_12[1]
        char temp6_1 = result_34[1]
        c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            edx_12 = &edx_12[2]
            result_34 = &result_34[2]
            
            if (ebx.b != 0)
                continue
            
            esi_4 = 0
            break
    
    esi_4 = sbb.d(esi_3, esi_3, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
    char* eax_15 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_4 == 0)
    *(result_2 + 0xc) = esi_4
    *(result_2 + 0x10) = esi_4

sub_63d720(&result_1, "btn_editSet")
char* const result_35 = &data_801800
char* edx_15 = *(edx + 4)
char* result_9 = result_1

if (result_9 != 0)
    result_35 = result_9

int32_t esi_6

while (true)
    ebx.b = *edx_15
    char temp9_1 = *result_35
    bool c_4 = ebx.b u< temp9_1
    
    if (ebx.b == temp9_1)
        if (ebx.b == 0)
            esi_6 = 0
            break
        
        ebx.b = edx_15[1]
        char temp10_1 = result_35[1]
        c_4 = ebx.b u< temp10_1
        
        if (ebx.b == temp10_1)
            edx_15 = &edx_15[2]
            result_35 = &result_35[2]
            
            if (ebx.b != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
    char* eax_18 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_6 != 0)
    goto label_5fe3f9

result = result_2
char const* const var_2c_14
int32_t var_28_5
char const* const var_24_5
char* ecx_29

if (*(result + 0xc) == 1)
    sub_5fdeb0(2, *(result + 0x10))
label_5fe3f9:
    sub_63d720(&result_1, "btn_realtime")
    char* const result_36 = &data_801800
    char* edx_19 = *(edx + 4)
    char* result_10 = result_1
    
    if (result_10 != 0)
        result_36 = result_10
    
    int32_t esi_8
    
    while (true)
        ebx.b = *edx_19
        char temp12_1 = *result_36
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_8 = 0
                break
            
            ebx.b = edx_19[1]
            char temp13_1 = result_36[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                edx_19 = &edx_19[2]
                result_36 = &result_36[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_8 = 0
                break
        
        esi_8 = sbb.d(esi_6, esi_6, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_20 = sub_63d4e0(&result_1)
        int32_t temp14_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_8 == 0)
        *(result_2 + 0x20) = 5
    
    sub_63d720(&result_1, "btn_one_week")
    char* const result_37 = &data_801800
    char* edx_22 = *(edx + 4)
    char* result_11 = result_1
    
    if (result_11 != 0)
        result_37 = result_11
    
    int32_t esi_10
    
    while (true)
        ebx.b = *edx_22
        char temp15_1 = *result_37
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                esi_10 = 0
                break
            
            ebx.b = edx_22[1]
            char temp16_1 = result_37[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                edx_22 = &edx_22[2]
                result_37 = &result_37[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_10 = 0
                break
        
        esi_10 = sbb.d(esi_8, esi_8, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_cf65bc != 0 && result_11 != 0 && *result_11 != 0)
        char* eax_22 = sub_63d4e0(&result_1)
        int32_t temp17_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_10 == 0)
        *(result_2 + 0x20) = 1
    
    sub_63d720(&result_1, "btn_one_month")
    char* const result_38 = &data_801800
    char* edx_25 = *(edx + 4)
    char* result_12 = result_1
    
    if (result_12 != 0)
        result_38 = result_12
    
    int32_t esi_12
    
    while (true)
        ebx.b = *edx_25
        char temp18_1 = *result_38
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                esi_12 = 0
                break
            
            ebx.b = edx_25[1]
            char temp19_1 = result_38[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                edx_25 = &edx_25[2]
                result_38 = &result_38[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_12 = 0
                break
        
        esi_12 = sbb.d(esi_10, esi_10, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cf65bc != 0 && result_12 != 0 && *result_12 != 0)
        char* eax_25 = sub_63d4e0(&result_1)
        int32_t temp20_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_14 = 0xffffffff
    
    if (esi_12 == 0)
        *(result_2 + 0x20) = 2
    
    sub_63d720(&result_1, "btn_unlimited")
    char* const result_39 = &data_801800
    char* edx_28 = *(edx + 4)
    char* result_13 = result_1
    
    if (result_13 != 0)
        result_39 = result_13
    
    int32_t esi_14
    
    while (true)
        ebx.b = *edx_28
        char temp21_1 = *result_39
        bool c_8 = ebx.b u< temp21_1
        
        if (ebx.b == temp21_1)
            if (ebx.b == 0)
                esi_14 = 0
                break
            
            ebx.b = edx_28[1]
            char temp22_1 = result_39[1]
            c_8 = ebx.b u< temp22_1
            
            if (ebx.b == temp22_1)
                edx_28 = &edx_28[2]
                result_39 = &result_39[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_14 = 0
                break
        
        esi_14 = sbb.d(esi_12, esi_12, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_cf65bc != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_28 = sub_63d4e0(&result_1)
        int32_t temp23_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_16 = 0xffffffff
    
    if (esi_14 == 0)
        *(result_2 + 0x20) = 3
    
    sub_63d720(&result_1, "btn_standard")
    char* const result_40 = &data_801800
    char* edx_31 = *(edx + 4)
    char* result_14 = result_1
    
    if (result_14 != 0)
        result_40 = result_14
    
    int32_t esi_16
    
    while (true)
        ebx.b = *edx_31
        char temp24_1 = *result_40
        bool c_9 = ebx.b u< temp24_1
        
        if (ebx.b == temp24_1)
            if (ebx.b == 0)
                esi_16 = 0
                break
            
            ebx.b = edx_31[1]
            char temp25_1 = result_40[1]
            c_9 = ebx.b u< temp25_1
            
            if (ebx.b == temp25_1)
                edx_31 = &edx_31[2]
                result_40 = &result_40[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_16 = 0
                break
        
        esi_16 = sbb.d(esi_14, esi_14, c_9) | 1
        break
    
    int32_t var_8_17 = 8
    
    if (data_cf65bc != 0 && result_14 != 0 && *result_14 != 0)
        char* eax_31 = sub_63d4e0(&result_1)
        int32_t temp26_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_18 = 0xffffffff
    
    if (esi_16 == 0)
        memcpy(&var_3334, sub_4e49d0(esi_16, &var_4d14), 0x1990)
        int32_t var_1c3c_1 = esi_16
        sub_4e4cb0(result_2)
    
    sub_63d720(&result_1, "btn_learning")
    char* const result_41 = &data_801800
    char* edx_34 = *(edx + 4)
    char* result_15 = result_1
    
    if (result_15 != 0)
        result_41 = result_15
    
    int32_t esi_18
    
    while (true)
        ebx.b = *edx_34
        char temp27_1 = *result_41
        bool c_10 = ebx.b u< temp27_1
        
        if (ebx.b == temp27_1)
            if (ebx.b == 0)
                esi_18 = 0
                break
            
            ebx.b = edx_34[1]
            char temp28_1 = result_41[1]
            c_10 = ebx.b u< temp28_1
            
            if (ebx.b == temp28_1)
                edx_34 = &edx_34[2]
                result_41 = &result_41[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_18 = 0
                break
        
        esi_18 = sbb.d(esi_16, esi_16, c_10) | 1
        break
    
    int32_t var_8_19 = 9
    
    if (data_cf65bc != 0 && result_15 != 0 && *result_15 != 0)
        char* eax_34 = sub_63d4e0(&result_1)
        int32_t temp29_1 = *(eax_34 + 4)
        *(eax_34 + 4) -= 1
        
        if (temp29_1 == 1)
            sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_18 == 0)
        memcpy(&var_3334, sub_4e49d0(esi_18, &var_4d14), 0x1990)
        int32_t var_1c3c_2 = 1
        sub_4e4cb0(result_2)
    
    sub_63d720(&result_1, "btn_friendly")
    char* const result_42 = &data_801800
    char* edx_37 = *(edx + 4)
    char* result_16 = result_1
    
    if (result_16 != 0)
        result_42 = result_16
    
    int32_t esi_20
    
    while (true)
        ebx.b = *edx_37
        char temp30_1 = *result_42
        bool c_11 = ebx.b u< temp30_1
        
        if (ebx.b == temp30_1)
            if (ebx.b == 0)
                esi_20 = 0
                break
            
            ebx.b = edx_37[1]
            char temp31_1 = result_42[1]
            c_11 = ebx.b u< temp31_1
            
            if (ebx.b == temp31_1)
                edx_37 = &edx_37[2]
                result_42 = &result_42[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_20 = 0
                break
        
        esi_20 = sbb.d(esi_18, esi_18, c_11) | 1
        break
    
    int32_t var_8_21 = 0xa
    
    if (data_cf65bc != 0 && result_16 != 0 && *result_16 != 0)
        char* eax_37 = sub_63d4e0(&result_1)
        int32_t temp32_1 = *(eax_37 + 4)
        *(eax_37 + 4) -= 1
        
        if (temp32_1 == 1)
            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_20 == 0)
        memcpy(&var_3334, sub_4e49d0(esi_20, &var_4d14), 0x1990)
        int32_t var_1c3c_3 = 2
        sub_4e4cb0(result_2)
    
    sub_63d720(&result_1, "btn_strict")
    char* const result_43 = &data_801800
    char* edx_40 = *(edx + 4)
    char* result_17 = result_1
    
    if (result_17 != 0)
        result_43 = result_17
    
    int32_t esi_22
    
    while (true)
        ebx.b = *edx_40
        char temp33_1 = *result_43
        bool c_12 = ebx.b u< temp33_1
        
        if (ebx.b == temp33_1)
            if (ebx.b == 0)
                esi_22 = 0
                break
            
            ebx.b = edx_40[1]
            char temp34_1 = result_43[1]
            c_12 = ebx.b u< temp34_1
            
            if (ebx.b == temp34_1)
                edx_40 = &edx_40[2]
                result_43 = &result_43[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_22 = 0
                break
        
        esi_22 = sbb.d(esi_20, esi_20, c_12) | 1
        break
    
    int32_t var_8_23 = 0xb
    
    if (data_cf65bc != 0 && result_17 != 0 && *result_17 != 0)
        char* eax_40 = sub_63d4e0(&result_1)
        int32_t temp35_1 = *(eax_40 + 4)
        *(eax_40 + 4) -= 1
        
        if (temp35_1 == 1)
            sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_24 = 0xffffffff
    
    if (esi_22 == 0)
        memcpy(&var_3334, sub_4e49d0(esi_22, &var_4d14), 0x1990)
        int32_t var_1c3c_4 = 3
        sub_4e4cb0(result_2)
    
    sub_63d720(&result_1, "btn_custom_rules")
    char* result_44 = &data_801800
    char* edx_43 = *(edx + 4)
    char* result_18 = result_1
    
    if (result_18 != 0)
        result_44 = result_18
    
    int32_t esi_24
    
    while (true)
        ebx.b = *edx_43
        char temp36_1 = *result_44
        bool c_13 = ebx.b u< temp36_1
        
        if (ebx.b == temp36_1)
            if (ebx.b == 0)
                esi_24 = 0
                break
            
            ebx.b = edx_43[1]
            char temp37_1 = result_44[1]
            c_13 = ebx.b u< temp37_1
            
            if (ebx.b == temp37_1)
                edx_43 = &edx_43[2]
                result_44 = &result_44[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_24 = 0
                break
        
        esi_24 = sbb.d(esi_22, esi_22, c_13) | 1
        break
    
    int32_t var_8_25 = 0xc
    
    if (data_cf65bc != 0 && result_18 != 0 && *result_18 != 0)
        char* eax_43 = sub_63d4e0(&result_1)
        int32_t temp38_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp38_1 == 1)
            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_26 = 0xffffffff
    
    if (esi_24 == 0)
        memcpy(&var_3334, sub_4e49d0(esi_24, &var_4d14), 0x1990)
        int32_t var_1c3c_5 = 4
        sub_4e4cb0(result_2)
    
    sub_63d720(&result_1, "btn_custom_edit")
    char* result_45 = &data_801800
    char* edx_46 = *(edx + 4)
    char* result_19 = result_1
    
    if (result_19 != 0)
        result_45 = result_19
    
    int32_t esi_26
    
    while (true)
        ebx.b = *edx_46
        char temp39_1 = *result_45
        bool c_14 = ebx.b u< temp39_1
        
        if (ebx.b == temp39_1)
            if (ebx.b == 0)
                esi_26 = 0
                break
            
            ebx.b = edx_46[1]
            char temp40_1 = result_45[1]
            c_14 = ebx.b u< temp40_1
            
            if (ebx.b == temp40_1)
                edx_46 = &edx_46[2]
                result_45 = &result_45[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_26 = 0
                break
        
        esi_26 = sbb.d(esi_24, esi_24, c_14) | 1
        break
    
    int32_t var_8_27 = 0xd
    
    if (data_cf65bc != 0 && result_19 != 0 && *result_19 != 0)
        char* eax_46 = sub_63d4e0(&result_1)
        int32_t temp41_1 = *(eax_46 + 4)
        *(eax_46 + 4) -= 1
        
        if (temp41_1 == 1)
            sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_28 = 0xffffffff
    
    if (esi_26 == 0)
        data_8db6b0 = 0x7ed
    
    sub_63d720(&result_1, "btn_KingdomExpansions")
    char* result_46 = &data_801800
    char* edx_49 = *(edx + 4)
    char* result_20 = result_1
    
    if (result_20 != 0)
        result_46 = result_20
    
    int32_t esi_28
    
    while (true)
        ebx.b = *edx_49
        char temp42_1 = *result_46
        bool c_15 = ebx.b u< temp42_1
        
        if (ebx.b == temp42_1)
            if (ebx.b == 0)
                esi_28 = 0
                break
            
            ebx.b = edx_49[1]
            char temp43_1 = result_46[1]
            c_15 = ebx.b u< temp43_1
            
            if (ebx.b == temp43_1)
                edx_49 = &edx_49[2]
                result_46 = &result_46[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_28 = 0
                break
        
        esi_28 = sbb.d(esi_26, esi_26, c_15) | 1
        break
    
    int32_t var_8_29 = 0xe
    
    if (data_cf65bc != 0 && result_20 != 0 && *result_20 != 0)
        char* eax_48 = sub_63d4e0(&result_1)
        int32_t temp44_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp44_1 == 1)
            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_30 = 0xffffffff
    
    if (esi_28 == 0)
        data_ccf6dc = esi_28
        data_8db6b0 = 0x7ee
    
    sub_63d720(&result_1, "btn_KingdomModifiers")
    char* result_47 = &data_801800
    char* edx_52 = *(edx + 4)
    char* result_21 = result_1
    
    if (result_21 != 0)
        result_47 = result_21
    
    int32_t esi_30
    
    while (true)
        ebx.b = *edx_52
        char temp45_1 = *result_47
        bool c_16 = ebx.b u< temp45_1
        
        if (ebx.b == temp45_1)
            if (ebx.b == 0)
                esi_30 = 0
                break
            
            ebx.b = edx_52[1]
            char temp46_1 = result_47[1]
            c_16 = ebx.b u< temp46_1
            
            if (ebx.b == temp46_1)
                edx_52 = &edx_52[2]
                result_47 = &result_47[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_30 = 0
                break
        
        esi_30 = sbb.d(esi_28, esi_28, c_16) | 1
        break
    
    int32_t var_8_31 = 0xf
    
    if (data_cf65bc != 0 && result_21 != 0 && *result_21 != 0)
        char* eax_50 = sub_63d4e0(&result_1)
        int32_t temp47_1 = *(eax_50 + 4)
        *(eax_50 + 4) -= 1
        
        if (temp47_1 == 1)
            sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_32 = 0xffffffff
    
    if (esi_30 == 0)
        data_8db6b0 = 0x7ef
    
    sub_63d720(&result_1, "btnSave")
    char* result_48 = &data_801800
    char* edx_55 = *(edx + 4)
    char* result_22 = result_1
    
    if (result_22 != 0)
        result_48 = result_22
    
    int32_t esi_32
    
    while (true)
        ebx.b = *edx_55
        char temp48_1 = *result_48
        bool c_17 = ebx.b u< temp48_1
        
        if (ebx.b == temp48_1)
            if (ebx.b == 0)
                esi_32 = 0
                break
            
            ebx.b = edx_55[1]
            char temp49_1 = result_48[1]
            c_17 = ebx.b u< temp49_1
            
            if (ebx.b == temp49_1)
                edx_55 = &edx_55[2]
                result_48 = &result_48[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_32 = 0
                break
        
        esi_32 = sbb.d(esi_30, esi_30, c_17) | 1
        break
    
    int32_t var_8_33 = 0x10
    
    if (data_cf65bc != 0 && result_22 != 0 && *result_22 != 0)
        char* eax_52 = sub_63d4e0(&result_1)
        int32_t temp50_1 = *(eax_52 + 4)
        *(eax_52 + 4) -= 1
        
        if (temp50_1 == 1)
            sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_34 = 0xffffffff
    
    if (esi_32 == 0)
        void* eax_53 = data_be4a38
        data_be4a3c = esi_32
        data_be4a40 = 0xffffffff
        
        if (eax_53 != 0 && eax_53 != &data_801800)
            if (data_cf65bc != esi_32 && *eax_53 != 0)
                char* eax_54 = sub_63d4e0(&data_be4a38)
                int32_t temp53_1 = *(eax_54 + 4)
                *(eax_54 + 4) -= 1
                
                if (temp53_1 == 1)
                    sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
            
            data_be4a38 = &data_801800
        
        data_8db6b0 = 0x7f0
    
    sub_63d720(&result_1, "btn_advanced_close")
    char* const result_3 = &data_801800
    char* edx_60 = *(edx + 4)
    result = result_1
    
    if (result != 0)
        result_3 = result
    
    int32_t esi_34
    
    while (true)
        ebx.b = *edx_60
        char temp51_1 = *result_3
        bool c_18 = ebx.b u< temp51_1
        
        if (ebx.b == temp51_1)
            if (ebx.b == 0)
                esi_34 = 0
                break
            
            ebx.b = edx_60[1]
            char temp52_1 = result_3[1]
            c_18 = ebx.b u< temp52_1
            
            if (ebx.b == temp52_1)
                edx_60 = &edx_60[2]
                result_3 = &result_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_34 = 0
                break
        
        esi_34 = sbb.d(esi_32, esi_32, c_18) | 1
        break
    
    int32_t var_8_35 = 0x11
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp54_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp54_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_36 = 0xffffffff
    
    if (esi_34 != 0)
        goto label_5fee98
    
    if (*arg4 != 0)
        *arg4 = 0
    label_5fee98:
        sub_63d720(&result_1, "btn_advanced")
        char* const result_4 = &data_801800
        char* edx_63 = *(edx + 4)
        result = result_1
        
        if (result != 0)
            result_4 = result
        
        int32_t esi_36
        
        while (true)
            ebx.b = *edx_63
            char temp55_1 = *result_4
            bool c_19 = ebx.b u< temp55_1
            
            if (ebx.b == temp55_1)
                if (ebx.b == 0)
                    esi_36 = 0
                    break
                
                ebx.b = edx_63[1]
                char temp56_1 = result_4[1]
                c_19 = ebx.b u< temp56_1
                
                if (ebx.b == temp56_1)
                    edx_63 = &edx_63[2]
                    result_4 = &result_4[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    esi_36 = 0
                    break
            
            esi_36 = sbb.d(esi_34, esi_34, c_19) | 1
            break
        
        int32_t var_8_37 = 0x12
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp57_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp57_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_38 = 0xffffffff
        
        if (esi_36 != 0)
            goto label_5fef4e
        
        if (*arg4 == 0)
            *arg4 = 1
        label_5fef4e:
            sub_63d720(&result_1, "btn_addLandscape")
            char* result_49 = &data_801800
            char* edx_66 = *(edx + 4)
            char* result_23 = result_1
            
            if (result_23 != 0)
                result_49 = result_23
            
            int32_t esi_38
            
            while (true)
                ebx.b = *edx_66
                char temp58_1 = *result_49
                bool c_20 = ebx.b u< temp58_1
                
                if (ebx.b == temp58_1)
                    if (ebx.b == 0)
                        esi_38 = 0
                        break
                    
                    ebx.b = edx_66[1]
                    char temp59_1 = result_49[1]
                    c_20 = ebx.b u< temp59_1
                    
                    if (ebx.b == temp59_1)
                        edx_66 = &edx_66[2]
                        result_49 = &result_49[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_38 = 0
                        break
                
                esi_38 = sbb.d(esi_36, esi_36, c_20) | 1
                break
            
            int32_t var_8_39 = 0x13
            
            if (data_cf65bc != 0 && result_23 != 0 && *result_23 != 0)
                char* eax_58 = sub_63d4e0(&result_1)
                int32_t temp60_1 = *(eax_58 + 4)
                *(eax_58 + 4) -= 1
                
                if (temp60_1 == 1)
                    sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t* result_31 = result_2
            int32_t var_8_40 = 0xffffffff
            
            if (esi_38 == 0)
                memcpy(&var_19a4, sub_4e49d0(esi_38, &var_4d14), 0x1990)
                void var_1904
                void* eax_60 = &var_1904
                int32_t edx_69 = 0
                int32_t ecx_91 = 0
                
                while (*eax_60 != 0)
                    ecx_91 += 1
                    edx_69 += 1
                    eax_60 += 0x48
                    
                    if (ecx_91 s>= 4)
                        break
                
                int32_t var_dd8
                int32_t ecx_92 = var_dd8
                int32_t var_dd4
                int32_t var_dcc
                int32_t var_dc4
                int32_t var_dbc
                int32_t var_db4
                int32_t edx_70 = edx_69 + var_db4 + var_dbc + var_dc4 + var_dcc + var_dd4
                int32_t eax_66 = ecx_92
                
                if (edx_70 s> ecx_92)
                    eax_66 = edx_70
                
                if (eax_66 s> 4)
                    ecx_92 = 4
                else if (edx_70 s> ecx_92)
                    ecx_92 = edx_70
                
                int32_t var_dd8_1 = ecx_92 + 1
                sub_4e4cb0(result_31)
            
            sub_63d720(&result_1, "btn_tabPlayers")
            char* result_50 = &data_801800
            char* edx_71 = *(edx + 4)
            char* result_24 = result_1
            
            if (result_24 != 0)
                result_50 = result_24
            
            int32_t esi_40
            
            while (true)
                ebx.b = *edx_71
                char temp61_1 = *result_50
                bool c_21 = ebx.b u< temp61_1
                
                if (ebx.b == temp61_1)
                    if (ebx.b == 0)
                        esi_40 = 0
                        break
                    
                    ebx.b = edx_71[1]
                    char temp62_1 = result_50[1]
                    c_21 = ebx.b u< temp62_1
                    
                    if (ebx.b == temp62_1)
                        edx_71 = &edx_71[2]
                        result_50 = &result_50[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_40 = 0
                        break
                
                esi_40 = sbb.d(esi_38, esi_38, c_21) | 1
                break
            
            int32_t var_8_41 = 0x14
            
            if (data_cf65bc != 0 && result_24 != 0 && *result_24 != 0)
                char* eax_68 = sub_63d4e0(&result_1)
                int32_t temp63_1 = *(eax_68 + 4)
                *(eax_68 + 4) -= 1
                
                if (temp63_1 == 1)
                    sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_42 = 0xffffffff
            
            if (esi_40 == 0)
                *arg3 = esi_40
            
            sub_63d720(&result_1, "btn_tabKingdom")
            char* result_51 = &data_801800
            char* edx_74 = *(edx + 4)
            char* result_25 = result_1
            
            if (result_25 != 0)
                result_51 = result_25
            
            int32_t esi_42
            
            while (true)
                ebx.b = *edx_74
                char temp64_1 = *result_51
                bool c_22 = ebx.b u< temp64_1
                
                if (ebx.b == temp64_1)
                    if (ebx.b == 0)
                        esi_42 = 0
                        break
                    
                    ebx.b = edx_74[1]
                    char temp65_1 = result_51[1]
                    c_22 = ebx.b u< temp65_1
                    
                    if (ebx.b == temp65_1)
                        edx_74 = &edx_74[2]
                        result_51 = &result_51[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_42 = 0
                        break
                
                esi_42 = sbb.d(esi_40, esi_40, c_22) | 1
                break
            
            int32_t var_8_43 = 0x15
            
            if (data_cf65bc != 0 && result_25 != 0 && *result_25 != 0)
                char* eax_71 = sub_63d4e0(&result_1)
                int32_t temp66_1 = *(eax_71 + 4)
                *(eax_71 + 4) -= 1
                
                if (temp66_1 == 1)
                    sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_44 = 0xffffffff
            
            if (esi_42 == 0)
                *arg3 = 1
            
            sub_63d720(&result_1, "btn_tabTime")
            char* result_52 = &data_801800
            char* edx_77 = *(edx + 4)
            char* result_26 = result_1
            
            if (result_26 != 0)
                result_52 = result_26
            
            int32_t esi_44
            
            while (true)
                ebx.b = *edx_77
                char temp67_1 = *result_52
                bool c_23 = ebx.b u< temp67_1
                
                if (ebx.b == temp67_1)
                    if (ebx.b == 0)
                        esi_44 = 0
                        break
                    
                    ebx.b = edx_77[1]
                    char temp68_1 = result_52[1]
                    c_23 = ebx.b u< temp68_1
                    
                    if (ebx.b == temp68_1)
                        edx_77 = &edx_77[2]
                        result_52 = &result_52[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_44 = 0
                        break
                
                esi_44 = sbb.d(esi_42, esi_42, c_23) | 1
                break
            
            int32_t var_8_45 = 0x16
            
            if (data_cf65bc != 0 && result_26 != 0 && *result_26 != 0)
                char* eax_74 = sub_63d4e0(&result_1)
                int32_t temp69_1 = *(eax_74 + 4)
                *(eax_74 + 4) -= 1
                
                if (temp69_1 == 1)
                    sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_46 = 0xffffffff
            
            if (esi_44 == 0)
                *arg3 = 2
            
            sub_63d720(&result_1, "btn_tabRules")
            char* result_53 = &data_801800
            void* edx_80 = *(edx + 4)
            char* result_27 = result_1
            
            if (result_27 != 0)
                result_53 = result_27
            
            int32_t esi_46
            
            while (true)
                ebx.b = *edx_80
                char temp70_1 = *result_53
                bool c_24 = ebx.b u< temp70_1
                
                if (ebx.b == temp70_1)
                    if (ebx.b == 0)
                        esi_46 = 0
                        break
                    
                    ebx.b = *(edx_80 + 1)
                    char temp71_1 = result_53[1]
                    c_24 = ebx.b u< temp71_1
                    
                    if (ebx.b == temp71_1)
                        edx_80 += 2
                        result_53 = &result_53[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_46 = 0
                        break
                
                esi_46 = sbb.d(esi_44, esi_44, c_24) | 1
                break
            
            int32_t var_8_47 = 0x17
            
            if (data_cf65bc != 0 && result_27 != 0 && *result_27 != 0)
                char* eax_77 = sub_63d4e0(&result_1)
                int32_t temp72_1 = *(eax_77 + 4)
                *(eax_77 + 4) -= 1
                
                if (temp72_1 == 1)
                    sub_64c080(eax_77, *(eax_77 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_48 = 0xffffffff
            
            if (esi_46 == 0)
                *arg3 = 3
            
            char* esi_48 = *(edx + 4)
            sub_63d720(&result_1, "btnKingdomList")
            char* result_28 = result_1
            char* result_54 = &data_801800
            
            if (result_28 != 0)
                result_54 = result_28
            
            int32_t esi_50
            
            while (true)
                char edx_83 = *result_54
                char temp73_1 = *esi_48
                bool c_25 = edx_83 u< temp73_1
                
                if (edx_83 == temp73_1)
                    if (edx_83 == 0)
                        esi_50 = 0
                        break
                    
                    edx_83 = result_54[1]
                    char temp74_1 = esi_48[1]
                    c_25 = edx_83 u< temp74_1
                    
                    if (edx_83 == temp74_1)
                        result_54 = &result_54[2]
                        esi_48 = &esi_48[2]
                        
                        if (edx_83 != 0)
                            continue
                        
                        esi_50 = 0
                        break
                
                esi_50 = sbb.d(esi_48, esi_48, c_25) | 1
                break
            
            int32_t var_8_49 = 0x18
            
            if (data_cf65bc != 0 && result_28 != 0 && *result_28 != 0)
                result_28 = sub_63d4e0(&result_1)
                int32_t temp75_1 = *(result_28 + 4)
                *(result_28 + 4) -= 1
                
                if (temp75_1 == 1)
                    result_28 = sub_64c080(result_28, *(result_28 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_50 = 0xffffffff
            
            if (esi_50 != 0)
                char* esi_51 = *(edx + 4)
                sub_63d720(&result_1, "btnCardList")
                result_28 = result_1
                char* result_55 = &data_801800
                
                if (result_28 != 0)
                    result_55 = result_28
                
                int32_t esi_53
                
                while (true)
                    char edx_86 = *result_55
                    char temp76_1 = *esi_51
                    bool c_26 = edx_86 u< temp76_1
                    
                    if (edx_86 == temp76_1)
                        if (edx_86 == 0)
                            esi_53 = 0
                            break
                        
                        edx_86 = result_55[1]
                        char temp77_1 = esi_51[1]
                        c_26 = edx_86 u< temp77_1
                        
                        if (edx_86 == temp77_1)
                            result_55 = &result_55[2]
                            esi_51 = &esi_51[2]
                            
                            if (edx_86 != 0)
                                continue
                            
                            esi_53 = 0
                            break
                    
                    esi_53 = sbb.d(esi_51, esi_51, c_26) | 1
                    break
                
                int32_t var_8_51 = 0x19
                
                if (data_cf65bc != 0 && result_28 != 0 && *result_28 != 0)
                    result_28 = sub_63d4e0(&result_1)
                    int32_t temp80_1 = *(result_28 + 4)
                    *(result_28 + 4) -= 1
                    
                    if (temp80_1 == 1)
                        result_28 = sub_64c080(result_28, *(result_28 + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_8_52 = 0xffffffff
                
                if (esi_53 != 0)
                    char* esi_54 = *(edx + 4)
                    sub_63d720(&result_1, "btnRemove")
                    char* result_29 = result_1
                    char* result_56 = &data_801800
                    
                    if (result_29 != 0)
                        result_56 = result_29
                    
                    int32_t esi_56
                    
                    while (true)
                        char edx_89 = *result_56
                        char temp81_1 = *esi_54
                        bool c_27 = edx_89 u< temp81_1
                        
                        if (edx_89 == temp81_1)
                            if (edx_89 == 0)
                                esi_56 = 0
                                break
                            
                            edx_89 = result_56[1]
                            char temp83_1 = esi_54[1]
                            c_27 = edx_89 u< temp83_1
                            
                            if (edx_89 == temp83_1)
                                result_56 = &result_56[2]
                                esi_54 = &esi_54[2]
                                
                                if (edx_89 != 0)
                                    continue
                                
                                esi_56 = 0
                                break
                        
                        esi_56 = sbb.d(esi_54, esi_54, c_27) | 1
                        break
                    
                    int32_t var_8_53 = 0x1a
                    
                    if (data_cf65bc != 0 && result_29 != 0 && *result_29 != 0)
                        char* eax_79 = sub_63d4e0(&result_1)
                        int32_t temp86_1 = *(eax_79 + 4)
                        *(eax_79 + 4) -= 1
                        
                        if (temp86_1 == 1)
                            sub_64c080(eax_79, *(eax_79 + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_8_54 = 0xffffffff
                    int32_t* eax_81
                    
                    if (esi_56 != 0)
                        char* esi_60 = *(edx + 4)
                        sub_63d720(&result_1, "btnRemoveLandscape")
                        result_28 = result_1
                        char* result_58 = &data_801800
                        
                        if (result_28 != 0)
                            result_58 = result_28
                        
                        int32_t esi_62
                        
                        while (true)
                            char edx_96 = *result_58
                            char temp87_1 = *esi_60
                            bool c_29 = edx_96 u< temp87_1
                            
                            if (edx_96 == temp87_1)
                                if (edx_96 == 0)
                                    esi_62 = 0
                                    break
                                
                                edx_96 = result_58[1]
                                char temp89_1 = esi_60[1]
                                c_29 = edx_96 u< temp89_1
                                
                                if (edx_96 == temp89_1)
                                    result_58 = &result_58[2]
                                    esi_60 = &esi_60[2]
                                    
                                    if (edx_96 != 0)
                                        continue
                                    
                                    esi_62 = 0
                                    break
                            
                            esi_62 = sbb.d(esi_60, esi_60, c_29) | 1
                            break
                        
                        int32_t var_8_55 = 0x1b
                        
                        if (data_cf65bc != 0 && result_28 != 0 && *result_28 != 0)
                            result_28 = sub_63d4e0(&result_1)
                            int32_t temp91_1 = *(result_28 + 4)
                            *(result_28 + 4) -= 1
                            
                            if (temp91_1 == 1)
                                result_28 = sub_64c080(result_28, *(result_28 + 0xc) + 0x10)
                                result_1 = &data_801800
                        
                        int32_t var_8_56 = 0xffffffff
                        
                        if (esi_62 == 0)
                            memcpy(&var_3334, sub_4e49d0(esi_62, &var_4d14), 0x1990)
                            int32_t esi_63 = *(edx + 8)
                            int32_t var_134[0x20]
                            memset(&var_134, 0, 0x120)
                            sub_5f8c00(&var_3334, &var_134)
                            int32_t eax_83 = esi_63 * 9
                            eax_81 = &(&__saved_ebp)[eax_83 * 2 - 0x4c]
                            
                            if (var_134[eax_83 * 2] != 0)
                                result_28 = sub_5f5f40(eax_81, &var_3334, result_31, eax_81)
                            else
                                int32_t* var_2768
                                
                                if (esi_63 s>= 2)
                                    eax_81 = var_2768
                                
                                if (esi_63 s< 2 || eax_81 s<= 2)
                                    sub_63b870(eax_81, &data_801800, "Halt", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x8ee9, 
                                        "DomCreateClick")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                void* var_2768_1 = eax_81 - 1
                                result_28 = sub_4e4cb0(result_31)
                    else
                        memcpy(&var_3334, sub_4e49d0(esi_56, &var_4d14), 0x1990)
                        int32_t esi_57 = *(edx + 8)
                        void var_b4
                        memset(&var_b4, 0, 0xa0)
                        sub_5f8d20(&var_3334, &var_b4)
                        eax_81 = &var_b4 + (esi_57 << 4)
                        result_28 = sub_5f5f40(eax_81, &var_3334, result_31, eax_81)
                else
                    int32_t ecx_114 = data_c23be0
                    
                    if (ecx_114 != 0)
                        result_28 = sub_66ca90(result_28, 0, ecx_114, 1)
                    
                    data_ccf6f0 = 2
                    data_ccf6f4 = 0
                    data_ccf6e8 = 0
                    data_ccf6ec = 0
                    data_8db6b0 = 0x7e6
            else
                int32_t ecx_110 = data_c23be0
                
                if (ecx_110 != 0)
                    result_28 = sub_66ca90(result_28, 0, ecx_110, 1)
                
                data_ccf6a8 = 2
                data_ccf6ac = 0
                data_8db6b0 = 0x7e7
            
            sub_4bc620(result_28, result_31, edx, var_3350, var_3344, var_3354)
            char* esi_59 = *(edx + 4)
            sub_63d720(&result_1, "btn_clear")
            char* result_30 = result_1
            char* result_57 = &data_801800
            
            if (result_30 != 0)
                result_57 = result_30
            
            int32_t esi_65
            
            while (true)
                char edx_95 = *result_57
                char temp78_1 = *esi_59
                bool c_28 = edx_95 u< temp78_1
                
                if (edx_95 == temp78_1)
                    if (edx_95 == 0)
                        esi_65 = 0
                        break
                    
                    edx_95 = result_57[1]
                    char temp79_1 = esi_59[1]
                    c_28 = edx_95 u< temp79_1
                    
                    if (edx_95 == temp79_1)
                        result_57 = &result_57[2]
                        esi_59 = &esi_59[2]
                        
                        if (edx_95 != 0)
                            continue
                        
                        esi_65 = 0
                        break
                
                esi_65 = sbb.d(esi_59, esi_59, c_28) | 1
                break
            
            int32_t var_8_57 = 0x1c
            
            if (data_cf65bc != 0 && result_30 != 0 && *result_30 != 0)
                char* eax_85 = sub_63d4e0(&result_1)
                int32_t temp82_1 = *(eax_85 + 4)
                *(eax_85 + 4) -= 1
                
                if (temp82_1 == 1)
                    sub_64c080(eax_85, *(eax_85 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_58 = 0xffffffff
            
            if (esi_65 != 0)
                char* esi_67 = *(edx + 4)
                sub_63d720(&result_1, "btn_create")
                result = result_1
                char* result_5 = &data_801800
                
                if (result != 0)
                    result_5 = result
                
                int32_t esi_69
                
                while (true)
                    char edx_107 = *result_5
                    char temp84_1 = *esi_67
                    bool c_30 = edx_107 u< temp84_1
                    
                    if (edx_107 == temp84_1)
                        if (edx_107 == 0)
                            esi_69 = 0
                            break
                        
                        edx_107 = result_5[1]
                        char temp85_1 = esi_67[1]
                        c_30 = edx_107 u< temp85_1
                        
                        if (edx_107 == temp85_1)
                            result_5 = &result_5[2]
                            esi_67 = &esi_67[2]
                            
                            if (edx_107 != 0)
                                continue
                            
                            esi_69 = 0
                            break
                    
                    esi_69 = sbb.d(esi_67, esi_67, c_30) | 1
                    break
                
                int32_t var_8_59 = 0x1d
                
                if (data_cf65bc != 0 && result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp88_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp88_1 == 1)
                        sub_64c080(result, *(result + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_8_60 = 0xffffffff
                
                if (esi_69 != 0)
                    goto label_5ff7d4
                
                if (arg2 != 0)
                    result = sub_4bc380(result_31)
                    
                    switch (result)
                        case nullptr
                            var_24_5 = "DomCreateClick"
                            var_28_5 = 0x8f4e
                            ecx_29 = "Halt"
                            var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        case 2, 3
                            void* ecx_158 = data_cc8d5c
                            char* var_3384
                            
                            if (ecx_158 != 0)
                                int32_t* eax_98 = sub_4bb050(ecx_158 + 0x507c, arg8)
                                void* ecx_160 = data_cc8dc8
                                var_3384 = *eax_98
                                void* eax_100 = sub_4d8f30(*(ecx_160 + 0x1e1a4))
                                char* const var_337c_1 = &data_801800
                                int32_t edx_115 = 0
                                void* esi_72 = eax_100 + 0x58ec
                                void* var_3374_1 = esi_72
                                int32_t ecx_162 = *(eax_100 + 0x63dc)
                                int32_t var_336c_1 = ecx_162
                                int32_t i_5 = ecx_162 << 2
                                
                                if (i_5 != 0)
                                    int32_t i
                                    
                                    do
                                        char eax_101 = *esi_72
                                        esi_72 += 1
                                        edx_115 = edx_115 u>> 8 ^ *(
                                            ((zx.d(eax_101) ^ zx.d(edx_115.b)) << 2) + &data_7ffd70)
                                        i = i_5
                                        i_5 -= 1
                                    while (i != 1)
                                
                                void* esi_73 = eax_100 + 0x56e8
                                int32_t var_3368_1 = edx_115
                                void* var_3364_1 = esi_73
                                int32_t ecx_163 = 0
                                int32_t eax_104 = *(eax_100 + 0x58e8)
                                int32_t var_335c_1 = eax_104
                                int32_t i_7 = eax_104 << 3
                                
                                if (i_7 != 0)
                                    int32_t i_1
                                    
                                    do
                                        char eax_105 = *esi_73
                                        esi_73 += 1
                                        ecx_163 = ecx_163 u>> 8 ^ *(
                                            ((zx.d(eax_105) ^ zx.d(ecx_163.b)) << 2) + &data_7ffd70)
                                        i_1 = i_7
                                        i_7 -= 1
                                    while (i_1 != 1)
                                
                                result = data_cc8d5c
                                int32_t var_3358_1 = ecx_163
                            
                            if (ecx_158 != 0 && result != 0)
                                if (*(result + 0x18) == 3)
                                    sub_68b720(result, 0xf42ab, *(result + 0x14), data_1597d20, 
                                        &var_3384)
                                    result = data_cc8d5c
                                
                                goto label_5ffc4a
                            
                            sub_63b870(result, &data_801800, "gClient", 
                                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
                                "GetClient")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        case 5
                            void* ecx_167 = data_cc8d5c
                            
                            if (ecx_167 == 0)
                                goto label_5ff88c
                            
                            var_3344 = *sub_4bb050(ecx_167 + 0x507c, arg8)
                            result = data_cc8d5c
                            
                            if (result == 0)
                                goto label_5ff88c
                            
                            if (*(result + 0x18) == 3)
                                result = *(result + 0x14)
                                void* ecx_169 = data_147abf4
                                
                                if (result != 0)
                                    uint32_t edx_119 = zx.d(result.w)
                                    
                                    if (edx_119 u< *(ecx_169 + 4))
                                        void* esi_75 = edx_119 * 0x64 + *ecx_169
                                        
                                        if (*(esi_75 + 0x60) == result && esi_75 != 0)
                                            int32_t var_24_26 = 0xf42ac
                                            sub_689e00(result, 4, esi_75 + 0x50)
                                            sub_689be0(&var_3344, 4, esi_75 + 0x50, &var_3344)
                            
                            data_8dbf44 = 1
                            goto label_5ff7d4
                        case 8
                            sub_4b0e60(arg8)
                            goto label_5ff7d4
                        default
                            var_24_5 = "DomCreateClick"
                            var_28_5 = 0x8f60
                            ecx_29 = "Halt"
                            var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else
                    data_cc8dc8
                    result = sub_4d8ad0(esi_69)
                    
                    if (arg1 == 0)
                        result = data_cc8d5c
                        
                        if (result == 0)
                            goto label_5ff88c
                        
                        *(result + 0x5044) = 1
                        sub_4d46e0(esi_69 + 5, 0)
                        goto label_5ff7d4
                    
                    if (result_31[0x15] == 1)
                        result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                        
                        if (result_31[0x16] == *(result + 0x4250))
                            uint32_t eax_89
                            int32_t ecx_147
                            eax_89, ecx_147 = sub_4daf40(&var_3344, &var_3354)
                            int32_t var_24_20 = ecx_147
                            sub_4dbef0(eax_89)
                            char* var_11e4
                            memset(&var_11e4, 0, 0x11d0)
                            uint32_t count = 0x11b0
                            sub_4b3b80(result_31)
                            memcpy(&var_11e4, &data_19e2790, count)
                            int32_t var_11c0_1 = 0x17
                            void* eax_90 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                            int32_t edx_113 = 0
                            void* esi_70 = eax_90 + 0x58ec
                            void* var_34_2 = esi_70
                            int32_t ecx_152 = *(eax_90 + 0x63dc)
                            int32_t var_2c_17 = ecx_152
                            int32_t i_4 = ecx_152 << 2
                            
                            if (i_4 != 0)
                                int32_t i_2
                                
                                do
                                    char eax_91 = *esi_70
                                    esi_70 += 1
                                    edx_113 = edx_113 u>> 8
                                        ^ *(((zx.d(eax_91) ^ zx.d(edx_113.b)) << 2) + &data_7ffd70)
                                    i_2 = i_4
                                    i_4 -= 1
                                while (i_2 != 1)
                            
                            void* esi_71 = eax_90 + 0x56e8
                            int32_t var_28_27 = edx_113
                            void* var_24_21 = esi_71
                            int32_t ecx_153 = 0
                            int32_t eax_94 = *(eax_90 + 0x58e8)
                            var_1c = eax_94
                            int32_t i_6 = eax_94 << 3
                            
                            if (i_6 != 0)
                                int32_t i_3
                                
                                do
                                    char eax_95 = *esi_71
                                    esi_71 += 1
                                    ecx_153 = ecx_153 u>> 8
                                        ^ *(((zx.d(eax_95) ^ zx.d(ecx_153.b)) << 2) + &data_7ffd70)
                                    i_3 = i_6
                                    i_6 -= 1
                                while (i_3 != 1)
                            
                            result = data_cc8d5c
                            var_18 = ecx_153
                            
                            if (result == 0)
                                sub_63b870(result, &data_801800, "gClient", 
                                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
                                    "GetClient")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            if (*(result + 0x18) == 3)
                                sub_68b720(result, 0xf42c9, *(result + 0x14), data_1597d18, 
                                    &var_11e4)
                                result = data_cc8d5c
                            
                            if ((*(result_2 + 0x18) & 0x20) != 0)
                                *arg3 = 0
                                result.b = 1
                                goto label_5ff7d9
                            
                        label_5ffc4a:
                            int32_t* ecx_136 = data_8dc144
                            data_8db660 = 0x13
                            data_8dbfb0 = 1
                            data_8dbfb8 = 0
                            
                            if (ecx_136 != 0 && ecx_136 != &data_801800)
                                if (data_cf65bc != 0 && *ecx_136 != 0)
                                    int32_t* eax_108 = sub_63d4e0(&data_8dc144)
                                    int32_t temp96_1 = eax_108[1]
                                    eax_108[1] -= 1
                                    
                                    if (temp96_1 == 1)
                                        sub_64c080(eax_108, eax_108[3] + 0x10)
                                    
                                    result = data_cc8d5c
                                
                                data_8dc144 = &data_801800
                            
                        label_5ff884:
                            
                            if (result != 0)
                                if (*(result + 0x18) == 3)
                                    ecx_136.b = 1
                                    sub_4af000(ecx_136)
                                
                                goto label_5ff7d4
                            
                        label_5ff88c:
                            var_24_5 = "GetClient"
                            var_28_5 = 0x7b
                            var_2c_14 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                            ecx_29 = "gClient"
                        else
                            var_24_5 = "DomCreateClick"
                            var_28_5 = 0x8f35
                            ecx_29 = "gameSetup.players[0].inviteAccountId == GetActiveProfile().accountId"
                            var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_24_5 = "DomCreateClick"
                        var_28_5 = 0x8f34
                        ecx_29 = "gameSetup.players[0].playerType == DBGAMEPLAYERTYPE_ACCOUNT"
                        var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            else
                if (arg2 == 0)
                    sub_5f7090(esi_65)
                label_5ff7d4:
                    result.b = 0
                    goto label_5ff7d9
                
                result = sub_4bc380(result_31) - 2
                
                if (result u> 5)
                label_5ff8b6:
                    var_24_5 = "DomCreateClick"
                    var_28_5 = 0x8f20
                    ecx_29 = "Halt"
                    var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else
                    switch (result)
                        case 1
                            goto label_5ff8b6
                        case 5
                            sub_4b8f10(arg8)
                            sub_4bc4b0(arg8)
                            void* eax_87 = data_8dc144
                            data_8db660 = 0x13
                            data_8dbfb0 = 1
                            data_8dbfb8 = 0
                            
                            if (eax_87 != 0 && eax_87 != &data_801800)
                                if (data_cf65bc != 0 && *eax_87 != 0)
                                    char* eax_88 = sub_63d4e0(&data_8dc144)
                                    int32_t temp90_1 = *(eax_88 + 4)
                                    *(eax_88 + 4) -= 1
                                    
                                    if (temp90_1 == 1)
                                        sub_64c080(eax_88, *(eax_88 + 0xc) + 0x10)
                                
                                data_8dc144 = &data_801800
                            
                            result = data_cc8d5c
                            goto label_5ff884
        else
            var_24_5 = "DomCreateClick"
            var_28_5 = 0x8e99
            ecx_29 = "!isAdvanced"
            var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_24_5 = "DomCreateClick"
        var_28_5 = 0x8e93
        ecx_29 = "isAdvanced"
        var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_24_5 = "DomCreateClick"
    var_28_5 = 0x8e40
    ecx_29 = "gameSetup.config.set.type == GAMESET_SAVED"
    var_2c_14 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(result, &data_801800, ecx_29, var_2c_14, var_28_5, var_24_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
