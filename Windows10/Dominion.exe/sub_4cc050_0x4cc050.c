// 函数: sub_4cc050
// 地址: 0x4cc050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAAVios_base@2@AAHAAO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *(arg1 + 4)
char* result_1
sub_63d720(&result_1, "btnBack")
char* result_3 = result_1
char* const result_2 = &data_801800
char* const result_10 = &data_801800

if (result_3 != 0)
    result_10 = result_3

int32_t ecx_2

while (true)
    char edx_1 = *result_10
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_2 = 0
            break
        
        edx_1 = result_10[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_10 = &result_10[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_10, result_10, c_1) | 1
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
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = data_cc8da0
    int32_t eax_5 = data_cc8da4
    
    if (eax_5 != 0)
        data_8db6b0 = eax_5

char* esi_1 = *(arg1 + 4)
sub_63d720(&result_1, "btnBuy")
char* result_4 = result_1
char* const result_11 = &data_801800

if (result_4 != 0)
    result_11 = result_4

int32_t esi_3

while (true)
    char edx_4 = *result_11
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = result_11[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_11 = &result_11[2]
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
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    if (data_cc8d98 != 3)
        sub_4c9d30(&data_cc8d98)
    else
        int32_t ecx_8 = 0
        int32_t eax_7 = 0
        void* const ecx_9
        
        while (true)
            if (*(eax_7 + &data_780878) == 0x100002)
                ecx_9 = ecx_8 * 0x10c + &data_780878
                break
            
            eax_7 += 0x10c
            ecx_8 += 1
            
            if (eax_7 u>= 0x28d4)
                ecx_9 = &data_780878
                break
        
        int32_t var_4c
        sub_4be540(ecx_9, &var_4c)
        int32_t eax_8 = var_4c
        
        if (eax_8 == 4)
            data_8db6b0 = 0x20
            void* eax_16 = sub_68caf0(eax_8 - 4, nullptr, 
                "dom_ui_store_confirm_bundle_discount_unlikely_title", 0)
            char const* const ecx_13
            
            if (eax_16 != 0)
                char* eax_17 = *eax_16
                ecx_13 = &data_801800
                
                if (eax_17 != 0)
                    ecx_13 = eax_17
            else
                ecx_13 = "dom_ui_store_confirm_bundle_discount_unlikely_title"
            
            void* eax_19 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_13), nullptr, 
                "dom_ui_store_confirm_bundle_discount_unlikely_body", 0)
            char const* const ecx_14
            
            if (eax_19 != 0)
                char* eax_20 = *eax_19
                ecx_14 = &data_801800
                
                if (eax_20 != 0)
                    ecx_14 = eax_20
            else
                ecx_14 = "dom_ui_store_confirm_bundle_discount_unlikely_body"
            
            sub_63d8d0(&data_8db754, ecx_14)
            sub_63d8d0(&data_8db758, &data_801800)
            sub_63d8d0(&data_8db75c, &data_801800)
            data_8db760 = 0x4cc7a0
            data_8db764 = 0
        else if (eax_8 != 6)
            sub_4c9d30(&data_cc8d98)
        else
            data_8db6b0 = 0x20
            void* eax_11 =
                sub_68caf0(eax_8 - 6, nullptr, "dom_ui_store_confirm_bundle_steam_title", eax_8 - 6)
            char const* const ecx_11
            
            if (eax_11 != 0)
                char* eax_12 = *eax_11
                ecx_11 = &data_801800
                
                if (eax_12 != 0)
                    ecx_11 = eax_12
            else
                ecx_11 = "dom_ui_store_confirm_bundle_steam_title"
            
            void* eax_14 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_11), nullptr, 
                "dom_ui_store_confirm_bundle_steam_body", 0)
            char const* const ecx_12
            
            if (eax_14 != 0)
                char* eax_15 = *eax_14
                ecx_12 = &data_801800
                
                if (eax_15 != 0)
                    ecx_12 = eax_15
            else
                ecx_12 = "dom_ui_store_confirm_bundle_steam_body"
            
            sub_63d8d0(&data_8db754, ecx_12)
            sub_63d8d0(&data_8db758, &data_801800)
            sub_63d8d0(&data_8db75c, &data_801800)
            data_8db760 = 0x4cc7a0
            data_8db764 = 0

char* esi_4 = *(arg1 + 4)
sub_63d720(&result_1, "btnCardList")
char* result_5 = result_1
char* const result_12 = &data_801800

if (result_5 != 0)
    result_12 = result_5

int32_t esi_6

while (true)
    char edx_8 = *result_12
    char temp6_1 = *esi_4
    bool c_3 = edx_8 u< temp6_1
    
    if (edx_8 == temp6_1)
        if (edx_8 == 0)
            esi_6 = 0
            break
        
        edx_8 = result_12[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_8 u< temp7_1
        
        if (edx_8 == temp7_1)
            result_12 = &result_12[2]
            esi_4 = &esi_4[2]
            
            if (edx_8 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_21 = sub_63d4e0(&result_1)
    int32_t temp12_1 = *(eax_21 + 4)
    *(eax_21 + 4) -= 1
    
    if (temp12_1 == 1)
        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    int32_t eax_22 = sub_4be4c0(&data_cc8d98)
    int32_t eax_23 = eax_22 - esi_6
    
    if (eax_22 != esi_6 && eax_23 != 1)
        sub_63b870(eax_23 - 1, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x2549, "StoreItemClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    data_cc8d90 = data_cc8d90 == 0

char* esi_7 = *(arg1 + 4)
sub_63d720(&result_1, "btn_zoom_dismiss")
char* result_6 = result_1
char* const result_13 = &data_801800

if (result_6 != 0)
    result_13 = result_6

int32_t esi_9

while (true)
    char edx_11 = *result_13
    char temp13_1 = *esi_7
    bool c_4 = edx_11 u< temp13_1
    
    if (edx_11 == temp13_1)
        if (edx_11 == 0)
            esi_9 = 0
            break
        
        edx_11 = result_13[1]
        char temp14_1 = esi_7[1]
        c_4 = edx_11 u< temp14_1
        
        if (edx_11 == temp14_1)
            result_13 = &result_13[2]
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
    int32_t temp15_1 = *(eax_25 + 4)
    *(eax_25 + 4) -= 1
    
    if (temp15_1 == 1)
        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    sub_4ad010(data_cc8d94, 0xffffffff)

char* esi_10 = *(arg1 + 4)
sub_63d720(&result_1, "btn_zoomed_lArrow")
char* result_7 = result_1
char* const result_14 = &data_801800

if (result_7 != 0)
    result_14 = result_7

int32_t esi_12

while (true)
    char edx_14 = *result_14
    char temp16_1 = *esi_10
    bool c_5 = edx_14 u< temp16_1
    
    if (edx_14 == temp16_1)
        if (edx_14 == 0)
            esi_12 = 0
            break
        
        edx_14 = result_14[1]
        char temp17_1 = esi_10[1]
        c_5 = edx_14 u< temp17_1
        
        if (edx_14 == temp17_1)
            result_14 = &result_14[2]
            esi_10 = &esi_10[2]
            
            if (edx_14 != 0)
                continue
            
            esi_12 = 0
            break
    
    esi_12 = sbb.d(esi_10, esi_10, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_26 = sub_63d4e0(&result_1)
    int32_t temp19_1 = *(eax_26 + 4)
    *(eax_26 + 4) -= 1
    
    if (temp19_1 == 1)
        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (esi_12 == 0)
    void* esi_13 = data_cc8d94
    int32_t edx_17 = *(esi_13 + 0xbd4)
    int32_t edx_18 = edx_17 - 1
    
    if (edx_17 - 1 s< 0)
    label_4cc558:
        edx_18 = 0xffffffff
    else
        void* eax_30 = (edx_18 << 4) + 0x25c + esi_13
        
        while (true)
            if (edx_18 s>= *(esi_13 + 0xbbc))
                goto label_4cc558
            
            if (*eax_30 != 0)
                break
            
            eax_30 -= 0x10
            int32_t temp22_1 = edx_18
            edx_18 -= 1
            
            if (temp22_1 - 1 s< 0)
                goto label_4cc558
    
    sub_4ad010(esi_13, edx_18)

char* esi_14 = *(arg1 + 4)
sub_63d720(&result_1, "btn_zoomed_rArrow")
char* result_8 = result_1
char* result_15 = &data_801800

if (result_8 != 0)
    result_15 = result_8

int32_t esi_16

while (true)
    char edx_19 = *result_15
    char temp20_1 = *esi_14
    bool c_6 = edx_19 u< temp20_1
    
    if (edx_19 == temp20_1)
        if (edx_19 == 0)
            esi_16 = 0
            break
        
        edx_19 = result_15[1]
        char temp21_1 = esi_14[1]
        c_6 = edx_19 u< temp21_1
        
        if (edx_19 == temp21_1)
            result_15 = &result_15[2]
            esi_14 = &esi_14[2]
            
            if (edx_19 != 0)
                continue
            
            esi_16 = 0
            break
    
    esi_16 = sbb.d(esi_14, esi_14, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
    char* eax_31 = sub_63d4e0(&result_1)
    int32_t temp24_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp24_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)

int32_t var_8_12 = 0xffffffff
char* result

if (esi_16 != 0)
    char* esi_18 = *(arg1 + 4)
    sub_63d720(&result_1, "btnRight")
    char* result_9 = result_1
    char* result_16 = &data_801800
    
    if (result_9 != 0)
        result_16 = result_9
    
    int32_t esi_20
    
    while (true)
        char edx_24 = *result_16
        char temp25_1 = *esi_18
        bool c_7 = edx_24 u< temp25_1
        
        if (edx_24 == temp25_1)
            if (edx_24 == 0)
                esi_20 = 0
                break
            
            edx_24 = result_16[1]
            char temp26_1 = esi_18[1]
            c_7 = edx_24 u< temp26_1
            
            if (edx_24 == temp26_1)
                result_16 = &result_16[2]
                esi_18 = &esi_18[2]
                
                if (edx_24 != 0)
                    continue
                
                esi_20 = 0
                break
        
        esi_20 = sbb.d(esi_18, esi_18, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_36 = sub_63d4e0(&result_1)
        int32_t temp28_1 = *(eax_36 + 4)
        *(eax_36 + 4) -= 1
        
        if (temp28_1 == 1)
            sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
    
    int32_t var_8_14 = 0xffffffff
    int32_t edx_27
    
    if (esi_20 != 0)
        char* esi_21 = *(arg1 + 4)
        sub_63d720(&result_1, "btnLeft")
        result = result_1
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_23
        
        while (true)
            char ecx_36 = *result_2
            char temp29_1 = *esi_21
            bool c_8 = ecx_36 u< temp29_1
            
            if (ecx_36 == temp29_1)
                if (ecx_36 == 0)
                    esi_23 = 0
                    break
                
                ecx_36 = result_2[1]
                char temp30_1 = esi_21[1]
                c_8 = ecx_36 u< temp30_1
                
                if (ecx_36 == temp30_1)
                    result_2 = &result_2[2]
                    esi_21 = &esi_21[2]
                    
                    if (ecx_36 != 0)
                        continue
                    
                    esi_23 = 0
                    break
            
            esi_23 = sbb.d(esi_21, esi_21, c_8) | 1
            break
        
        int32_t var_8_15 = 7
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp31_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp31_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_16 = 0xffffffff
        
        if (esi_23 == 0)
            result, edx_27 = sub_4cbfa0(&data_cc8d98)
            data_cc8d9c = edx_27
            data_cc8d98 = result
    else
        result, edx_27 = sub_4cbf00(&data_cc8d98)
        data_cc8d9c = edx_27
        data_cc8d98 = result
else
    void* esi_17 = data_cc8d94
    int32_t edx_22 = *(esi_17 + 0xbd4)
    int32_t edx_23 = edx_22 + 1
    
    if (edx_22 + 1 s< 0)
    label_4cc618:
        edx_23 = 0xffffffff
    else
        void* eax_35 = (edx_23 << 4) + 0x25c + esi_17
        
        while (true)
            if (edx_23 s>= *(esi_17 + 0xbbc))
                goto label_4cc618
            
            if (*eax_35 != 0)
                break
            
            eax_35 += 0x10
            int32_t temp27_1 = edx_23
            edx_23 += 1
            
            if (temp27_1 + 1 s< 0)
                goto label_4cc618
    
    sub_4ad010(esi_17, edx_23)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
