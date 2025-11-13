// 函数: sub_60f1c0
// 地址: 0x60f1c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x4ce4)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t entry_ebx
int32_t var_14_1 = entry_ebx
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* const result_1
entry_ebx.b = sub_4aceb0(data_be1538, &result_1)
sub_63d720(&result_1, "btnBack")
char* result_10 = result_1
char* const result_19 = &data_801800
char* esi = *(arg1 + 4)

if (result_10 != 0)
    result_19 = result_10

int32_t eax_6

while (true)
    int32_t eax_4
    eax_4.b = *esi
    char temp0_1 = *result_19
    bool c_1 = eax_4.b u< temp0_1
    
    if (eax_4.b == temp0_1)
        if (eax_4.b == 0)
            eax_6 = 0
            break
        
        eax_4.b = esi[1]
        char temp1_1 = result_19[1]
        c_1 = eax_4.b u< temp1_1
        
        if (eax_4.b == temp1_1)
            esi = &esi[2]
            result_19 = &result_19[2]
            
            if (eax_4.b != 0)
                continue
            
            eax_6 = 0
            break
    
    eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
    break

if (eax_6 == 0 || (*(arg1 + 0x18) == 2 && entry_ebx.b == 0))
    entry_ebx.b = 1
else
    entry_ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
    char* eax_7 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (entry_ebx.b != 0)
    result_19.b = 0
    sub_4d46e0(7, result_19.b)
    data_8db660 = 0x10

sub_63d720(&result_1, "btnExp")
char* const result_3 = result_1
char* const result_11 = &data_801800
char* edx_3 = *(arg1 + 4)

if (result_3 != 0)
    result_11 = result_3

int32_t esi_1

while (true)
    entry_ebx.b = *edx_3
    char temp3_1 = *result_11
    bool c_2 = entry_ebx.b u< temp3_1
    
    if (entry_ebx.b == temp3_1)
        if (entry_ebx.b == 0)
            esi_1 = 0
            break
        
        entry_ebx.b = edx_3[1]
        char temp4_1 = result_11[1]
        c_2 = entry_ebx.b u< temp4_1
        
        if (entry_ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            result_11 = &result_11[2]
            
            if (entry_ebx.b != 0)
                continue
            
            esi_1 = 0
            break
    
    esi_1 = sbb.d(esi, esi, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    result_3 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(result_3 + 4)
    *(result_3 + 4) -= 1
    
    if (temp5_1 == 1)
        result_3 = sub_64c080(result_3, *(result_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff
char const* const var_2c_1
int32_t var_28_1
char const* const var_24_1
char* ecx_8

if (esi_1 != 0)
label_60f3b3:
    sub_63d720(&result_1, "btn_tab_saved")
    char* const result_4 = result_1
    char* const result_12 = &data_801800
    char* edx_6 = *(arg1 + 4)
    
    if (result_4 != 0)
        result_12 = result_4
    
    int32_t esi_3
    
    while (true)
        entry_ebx.b = *edx_6
        char temp6_1 = *result_12
        bool c_3 = entry_ebx.b u< temp6_1
        
        if (entry_ebx.b == temp6_1)
            if (entry_ebx.b == 0)
                esi_3 = 0
                break
            
            entry_ebx.b = edx_6[1]
            char temp7_1 = result_12[1]
            c_3 = entry_ebx.b u< temp7_1
            
            if (entry_ebx.b == temp7_1)
                edx_6 = &edx_6[2]
                result_12 = &result_12[2]
                
                if (entry_ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_11 = sub_63d4e0(&result_1)
        int32_t temp8_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_3 == 0)
        data_ccf6a4 = 1
    
    sub_63d720(&result_1, "btn_paginate")
    char* const result_5 = result_1
    char* const result_13 = &data_801800
    char* edx_9 = *(arg1 + 4)
    
    if (result_5 != 0)
        result_13 = result_5
    
    int32_t esi_5
    
    while (true)
        entry_ebx.b = *edx_9
        char temp9_1 = *result_13
        bool c_4 = entry_ebx.b u< temp9_1
        
        if (entry_ebx.b == temp9_1)
            if (entry_ebx.b == 0)
                esi_5 = 0
                break
            
            entry_ebx.b = edx_9[1]
            char temp10_1 = result_13[1]
            c_4 = entry_ebx.b u< temp10_1
            
            if (entry_ebx.b == temp10_1)
                edx_9 = &edx_9[2]
                result_13 = &result_13[2]
                
                if (entry_ebx.b != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_12 = sub_63d4e0(&result_1)
        int32_t temp12_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp12_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_8 = 0xffffffff
    void var_d4
    
    if (esi_5 == 0)
        int32_t eax_13
        int32_t ecx_16
        eax_13, ecx_16 = sub_60f100(&var_d4)
        int32_t var_24_2 = ecx_16
        int32_t eax_14 = sub_60ecc0(eax_13, data_ccf6a8, data_ccf6a4, eax_13, &var_d4)
        int32_t ecx_18 = data_ccf6ac
        int32_t edx_13 = 0
        
        if (eax_14 - 8 s> 0)
            edx_13 = eax_14 - 8
        
        int32_t ecx_19 = ecx_18 - 4
        
        if (ecx_18 - 4 s< 0)
            ecx_19 = 0
        else if (ecx_19 s> edx_13)
            ecx_19 = edx_13
        
        data_ccf6ac = *(arg1 + 8) + ecx_19
    
    sub_63d720(&result_1, "btn_store")
    result_3 = result_1
    char* const result_14 = &data_801800
    char* edx_14 = *(arg1 + 4)
    
    if (result_3 != 0)
        result_14 = result_3
    
    int32_t esi_7
    
    while (true)
        entry_ebx.b = *edx_14
        char temp13_1 = *result_14
        bool c_5 = entry_ebx.b u< temp13_1
        
        if (entry_ebx.b == temp13_1)
            if (entry_ebx.b == 0)
                esi_7 = 0
                break
            
            entry_ebx.b = edx_14[1]
            char temp14_1 = result_14[1]
            c_5 = entry_ebx.b u< temp14_1
            
            if (entry_ebx.b == temp14_1)
                edx_14 = &edx_14[2]
                result_14 = &result_14[2]
                
                if (entry_ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
        result_3 = sub_63d4e0(&result_1)
        int32_t temp15_1 = *(result_3 + 4)
        *(result_3 + 4) -= 1
        
        if (temp15_1 == 1)
            result_3, edx_14 = sub_64c080(result_3, *(result_3 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_7 != 0)
    label_60f6a1:
        sub_63d720(&result_1, "btn_tab_recommended")
        char* const result_6 = result_1
        char* const result_15 = &data_801800
        char* edx_19 = *(arg1 + 4)
        
        if (result_6 != 0)
            result_15 = result_6
        
        int32_t esi_9
        
        while (true)
            entry_ebx.b = *edx_19
            char temp16_1 = *result_15
            bool c_6 = entry_ebx.b u< temp16_1
            
            if (entry_ebx.b == temp16_1)
                if (entry_ebx.b == 0)
                    esi_9 = 0
                    break
                
                entry_ebx.b = edx_19[1]
                char temp17_1 = result_15[1]
                c_6 = entry_ebx.b u< temp17_1
                
                if (entry_ebx.b == temp17_1)
                    edx_19 = &edx_19[2]
                    result_15 = &result_15[2]
                    
                    if (entry_ebx.b != 0)
                        continue
                    
                    esi_9 = 0
                    break
            
            esi_9 = sbb.d(esi_7, esi_7, c_6) | 1
            break
        
        int32_t var_8_11 = 5
        
        if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
            char* eax_23 = sub_63d4e0(&result_1)
            int32_t temp18_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp18_1 == 1)
                sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_12 = 0xffffffff
        
        if (esi_9 == 0)
            data_ccf6a4 = esi_9
            
            if (data_ccf6a8 == esi_9)
                data_ccf6a8 = 2
        
        sub_63d720(&result_1, "btn_tab_mySets")
        char* const result_7 = result_1
        char* const result_16 = &data_801800
        char* edx_22 = *(arg1 + 4)
        
        if (result_7 != 0)
            result_16 = result_7
        
        int32_t esi_11
        
        while (true)
            entry_ebx.b = *edx_22
            char temp19_1 = *result_16
            bool c_7 = entry_ebx.b u< temp19_1
            
            if (entry_ebx.b == temp19_1)
                if (entry_ebx.b == 0)
                    esi_11 = 0
                    break
                
                entry_ebx.b = edx_22[1]
                char temp20_1 = result_16[1]
                c_7 = entry_ebx.b u< temp20_1
                
                if (entry_ebx.b == temp20_1)
                    edx_22 = &edx_22[2]
                    result_16 = &result_16[2]
                    
                    if (entry_ebx.b != 0)
                        continue
                    
                    esi_11 = 0
                    break
            
            esi_11 = sbb.d(esi_9, esi_9, c_7) | 1
            break
        
        int32_t var_8_13 = 6
        
        if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
            char* eax_24 = sub_63d4e0(&result_1)
            int32_t temp21_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp21_1 == 1)
                sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_14 = 0xffffffff
        
        if (esi_11 == 0)
            data_ccf6a8 = esi_11
            data_ccf6a4 = 1
        
        sub_63d720(&result_1, "btnLeft")
        char* const result_8 = result_1
        char* const result_17 = &data_801800
        char* edx_25 = *(arg1 + 4)
        
        if (result_8 != 0)
            result_17 = result_8
        
        int32_t esi_13
        
        while (true)
            entry_ebx.b = *edx_25
            char temp22_1 = *result_17
            bool c_8 = entry_ebx.b u< temp22_1
            
            if (entry_ebx.b == temp22_1)
                if (entry_ebx.b == 0)
                    esi_13 = 0
                    break
                
                entry_ebx.b = edx_25[1]
                char temp23_1 = result_17[1]
                c_8 = entry_ebx.b u< temp23_1
                
                if (entry_ebx.b == temp23_1)
                    edx_25 = &edx_25[2]
                    result_17 = &result_17[2]
                    
                    if (entry_ebx.b != 0)
                        continue
                    
                    esi_13 = 0
                    break
            
            esi_13 = sbb.d(esi_11, esi_11, c_8) | 1
            break
        
        int32_t var_8_15 = 7
        
        if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
            char* eax_25 = sub_63d4e0(&result_1)
            int32_t temp24_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp24_1 == 1)
                sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_16 = 0xffffffff
        
        if (esi_13 == 0)
            data_ccf6ac -= 1
        
        sub_63d720(&result_1, "btnRight")
        char* const result_9 = result_1
        char* const result_18 = &data_801800
        char* edx_28 = *(arg1 + 4)
        
        if (result_9 != 0)
            result_18 = result_9
        
        int32_t esi_15
        
        while (true)
            entry_ebx.b = *edx_28
            char temp25_1 = *result_18
            bool c_9 = entry_ebx.b u< temp25_1
            
            if (entry_ebx.b == temp25_1)
                if (entry_ebx.b == 0)
                    esi_15 = 0
                    break
                
                entry_ebx.b = edx_28[1]
                char temp26_1 = result_18[1]
                c_9 = entry_ebx.b u< temp26_1
                
                if (entry_ebx.b == temp26_1)
                    edx_28 = &edx_28[2]
                    result_18 = &result_18[2]
                    
                    if (entry_ebx.b != 0)
                        continue
                    
                    esi_15 = 0
                    break
            
            esi_15 = sbb.d(esi_13, esi_13, c_9) | 1
            break
        
        int32_t var_8_17 = 8
        
        if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
            char* eax_26 = sub_63d4e0(&result_1)
            int32_t temp27_1 = *(eax_26 + 4)
            *(eax_26 + 4) -= 1
            
            if (temp27_1 == 1)
                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_18 = 0xffffffff
        
        if (esi_15 == 0)
            data_ccf6ac += 1
        
        sub_63d720(&result_1, "btn_set")
        char* result = result_1
        char* result_2 = &data_801800
        char* edx_31 = *(arg1 + 4)
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_17
        
        while (true)
            entry_ebx.b = *edx_31
            char temp28_1 = *result_2
            bool c_10 = entry_ebx.b u< temp28_1
            
            if (entry_ebx.b == temp28_1)
                if (entry_ebx.b == 0)
                    esi_17 = 0
                    break
                
                entry_ebx.b = edx_31[1]
                char temp29_1 = result_2[1]
                c_10 = entry_ebx.b u< temp29_1
                
                if (entry_ebx.b == temp29_1)
                    edx_31 = &edx_31[2]
                    result_2 = &result_2[2]
                    
                    if (entry_ebx.b != 0)
                        continue
                    
                    esi_17 = 0
                    break
            
            esi_17 = sbb.d(esi_15, esi_15, c_10) | 1
            break
        
        int32_t var_8_19 = 9
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp30_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp30_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_20 = 0xffffffff
        
        if (esi_17 == 0)
            int32_t eax_27
            int32_t ecx_41
            eax_27, ecx_41 = sub_60f100(&var_d4)
            int32_t edx_34 = data_ccf6ac
            int32_t var_24_4 = ecx_41
            int32_t var_34[0x2]
            int32_t (* var_28_3)[0x2] = &var_34
            void* var_2c_3 = &var_d4
            int32_t ecx_42 = data_ccf6a4
            var_34[1] = eax_27
            var_34[0] = data_ccf6a8
            sub_60ee00(eax_27, edx_34, ecx_42, var_34[0], var_34[1], var_2c_3, var_28_3)
            void* eax_28 = sub_4bbdb0()
            void var_3354
            void var_19c4
            memcpy(&var_3354, sub_4e49d0(esi_17, &var_19c4), 0x1990)
            *(arg1 + 8)
            void var_4cf4
            memcpy(&var_19c4, sub_60ef80(&var_4cf4), 0x1990)
            __builtin_memcpy(&var_3354, &var_19c4, 0x9c8)
            int32_t var_dc8
            int32_t var_2758_1 = var_dc8
            int32_t var_dc4
            int32_t var_2754_1 = var_dc4
            void* eax_34 = arg1
            int32_t edx_35 = *(eax_34 + 8)
            int32_t ecx_45 = (&var_34)[edx_35][0]
            var_30
            
            if (ecx_45 == 1)
                eax_34 = *(*(&var_30 + (edx_35 << 3)) + 4)
            
            void* eax_37
            int32_t ecx_46
            
            if (ecx_45 == 1 && (eax_34 == 0x1ad || eax_34 == 0x1b1))
                void var_298c
                void var_ffc
                __builtin_memcpy(&var_298c, &var_ffc, 0x200)
                int32_t var_1c60_1 = 0
            label_60fac0:
                void* eax_36 = *(&var_30 + (edx_35 << 3))
                
                if (eax_36 != 0)
                    eax_37 = *(eax_36 + 4)
                    ecx_46 = 2
                else
                    int64_t var_3364_1 = 0
                    eax_37 = arg1
                    ecx_46 = 0
            else
                int32_t var_1c60_2 = 0
                int64_t var_3364_2 = 0
                
                if (ecx_45 != 0)
                    if (ecx_45 == 1)
                        goto label_60fac0
                    
                    sub_63b870(eax_34, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xb3a3, "ToGameSet")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                eax_37 = *(&var_30 + (edx_35 << 3))
                ecx_46 = 1
            
            *(eax_28 + 0xc) = ecx_46
            *(eax_28 + 0x10) = eax_37
            sub_4e4cb0(eax_28)
            sub_4d46e0(7, 0)
            data_8db660 = 0x10
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t ecx_23 = *(arg1 + 8)
    
    if (ecx_23 s>= 0)
        if (ecx_23 u< 0x12)
            edx_14.b = 0
            esi_7 = *(ecx_23 * 0x1c + &data_77fca8)
            int32_t eax_20 = sub_4d46e0(7, edx_14.b)
            
            if (esi_7 != 0x13)
                int32_t eax_21
                int32_t edx_18
                eax_21, edx_18 = sub_4c9c50(eax_20, *(arg1 + 8), 0, 0)
                esi_7 = eax_21
                void* eax_22 = data_cc8d94
                
                if (eax_22 == 0)
                    eax_22 = sub_4acc60()
                    data_cc8d94 = eax_22
                
                data_cc8d98 = esi_7
                data_cc8d9c = edx_18
                data_cc8d90 = 0
                data_cc8da0 = 0x7e7
                data_cc8da4 = 0
                sub_4add50(eax_22)
                data_8db660 = 0x16
            else
                data_cc8d80 = 2
                data_cc8d84 = 0x7e7
                data_cc8d88 = 0
                data_8db660 = 0x15
            
            goto label_60f6a1
        
        var_24_1 = "DomExpDefGetByIndex"
        var_28_1 = 0x118c
        ecx_8 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        var_2c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
    else
        var_24_1 = "DomExpDefGetByIndex"
        var_28_1 = 0x118b
        ecx_8 = "i >= 0"
        var_2c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
else
    int32_t ecx_7 = *(arg1 + 8)
    
    if (ecx_7 s< 0x12)
        data_ccf6ac = 0
        int32_t eax_10 = *(ecx_7 * 0x1c + &data_77fca8)
        
        if (data_ccf6a8 == eax_10)
            eax_10 = 0
        
        data_ccf6a8 = eax_10
        goto label_60f3b3
    
    var_24_1 = "SetGalleryClick"
    var_28_1 = 0xb3bf
    var_2c_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_8 = "info.index < numDefs"

sub_63b870(result_3, &data_801800, ecx_8, var_2c_1, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
