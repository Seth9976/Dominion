// 函数: sub_5d92d0
// 地址: 0x5d92d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?push_back@TokenRegistrationContainer@_CancellationTokenState@details@Concurrency@@QAEXPAV_CancellationTokenRegistration@34@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t var_20 = arg1
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_cf64a8
char* const result_1
sub_63d720(&result_1, "btn_add_friend")
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_12 = &data_801800
char* edx_1 = *(arg2 + 4)

if (result_3 != 0)
    result_12 = result_3

void* esi

while (true)
    ebx.b = *edx_1
    char temp0_1 = *result_12
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            esi = nullptr
            break
        
        ebx.b = edx_1[1]
        char temp1_1 = result_12[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx_1 = &edx_1[2]
            result_12 = &result_12[2]
            
            if (ebx.b != 0)
                continue
            
            esi = nullptr
            break
    
    esi = sbb.d(arg1, arg1, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    goto label_5d93e5

void* eax_6 = sub_4b9680(&sub_4b9480()[2], eax_3)
esi = eax_6
int32_t var_30
char const* const ecx_5

if (*(esi + 0x14) == 1)
    eax_6 = sub_4d6250(esi)
    
    if (eax_6.b != 0)
        sub_4b40b0(*(esi + 0x18), 0)
    label_5d93e5:
        sub_63d720(&result_1, "btn_block")
        char* const result_13 = &data_801800
        char* edx_5 = *(arg2 + 4)
        char* const result_4 = result_1
        
        if (result_4 != 0)
            result_13 = result_4
        
        int32_t esi_2
        
        while (true)
            ebx.b = *edx_5
            char temp3_1 = *result_13
            bool c_2 = ebx.b u< temp3_1
            
            if (ebx.b == temp3_1)
                if (ebx.b == 0)
                    esi_2 = 0
                    break
                
                ebx.b = edx_5[1]
                char temp4_1 = result_13[1]
                c_2 = ebx.b u< temp4_1
                
                if (ebx.b == temp4_1)
                    edx_5 = &edx_5[2]
                    result_13 = &result_13[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    esi_2 = 0
                    break
            
            esi_2 = sbb.d(esi, esi, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
            char* eax_8 = sub_63d4e0(&result_1)
            int32_t temp5_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_4 = 0xffffffff
        
        if (esi_2 != 0)
            goto label_5d9498
        
        eax_6 = sub_4b9680(&sub_4b9480()[2], eax_3)
        
        if (*(eax_6 + 0x14) == 1)
            sub_4b40b0(*(eax_6 + 0x18), esi_2 + 4)
        label_5d9498:
            sub_63d720(&result_1, "btn_ai_very_easy")
            char* const result_14 = &data_801800
            char* edx_10 = *(arg2 + 4)
            char* const result_5 = result_1
            
            if (result_5 != 0)
                result_14 = result_5
            
            int32_t esi_4
            
            while (true)
                ebx.b = *edx_10
                char temp6_1 = *result_14
                bool c_3 = ebx.b u< temp6_1
                
                if (ebx.b == temp6_1)
                    if (ebx.b == 0)
                        esi_4 = 0
                        break
                    
                    ebx.b = edx_10[1]
                    char temp7_1 = result_14[1]
                    c_3 = ebx.b u< temp7_1
                    
                    if (ebx.b == temp7_1)
                        edx_10 = &edx_10[2]
                        result_14 = &result_14[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_4 = 0
                        break
                
                esi_4 = sbb.d(esi_2, esi_2, c_3) | 1
                break
            
            int32_t var_8_5 = 2
            
            if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
                char* eax_11 = sub_63d4e0(&result_1)
                int32_t temp8_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0xffffffff
            
            if (esi_4 == 0)
                sub_5d9050(eax_3, esi_4 + 3)
            
            sub_63d720(&result_1, "btn_ai_easy")
            char* const result_15 = &data_801800
            char* edx_14 = *(arg2 + 4)
            char* const result_6 = result_1
            
            if (result_6 != 0)
                result_15 = result_6
            
            int32_t esi_6
            
            while (true)
                ebx.b = *edx_14
                char temp9_1 = *result_15
                bool c_4 = ebx.b u< temp9_1
                
                if (ebx.b == temp9_1)
                    if (ebx.b == 0)
                        esi_6 = 0
                        break
                    
                    ebx.b = edx_14[1]
                    char temp10_1 = result_15[1]
                    c_4 = ebx.b u< temp10_1
                    
                    if (ebx.b == temp10_1)
                        edx_14 = &edx_14[2]
                        result_15 = &result_15[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_6 = 0
                        break
                
                esi_6 = sbb.d(esi_4, esi_4, c_4) | 1
                break
            
            int32_t var_8_7 = 3
            
            if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
                char* eax_13 = sub_63d4e0(&result_1)
                int32_t temp11_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xffffffff
            
            if (esi_6 == 0)
                sub_5d9050(eax_3, 0)
            
            sub_63d720(&result_1, "btn_ai_medium")
            char* const result_16 = &data_801800
            char* edx_17 = *(arg2 + 4)
            char* const result_7 = result_1
            
            if (result_7 != 0)
                result_16 = result_7
            
            int32_t esi_8
            
            while (true)
                ebx.b = *edx_17
                char temp12_1 = *result_16
                bool c_5 = ebx.b u< temp12_1
                
                if (ebx.b == temp12_1)
                    if (ebx.b == 0)
                        esi_8 = 0
                        break
                    
                    ebx.b = edx_17[1]
                    char temp13_1 = result_16[1]
                    c_5 = ebx.b u< temp13_1
                    
                    if (ebx.b == temp13_1)
                        edx_17 = &edx_17[2]
                        result_16 = &result_16[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_8 = 0
                        break
                
                esi_8 = sbb.d(esi_6, esi_6, c_5) | 1
                break
            
            int32_t var_8_9 = 4
            
            if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
                char* eax_15 = sub_63d4e0(&result_1)
                int32_t temp14_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp14_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0xffffffff
            
            if (esi_8 == 0)
                sub_5d9050(eax_3, esi_8 + 1)
            
            sub_63d720(&result_1, "btn_ai_hard")
            char* const result_17 = &data_801800
            char* edx_21 = *(arg2 + 4)
            char* const result_8 = result_1
            
            if (result_8 != 0)
                result_17 = result_8
            
            int32_t esi_10
            
            while (true)
                ebx.b = *edx_21
                char temp15_1 = *result_17
                bool c_6 = ebx.b u< temp15_1
                
                if (ebx.b == temp15_1)
                    if (ebx.b == 0)
                        esi_10 = 0
                        break
                    
                    ebx.b = edx_21[1]
                    char temp16_1 = result_17[1]
                    c_6 = ebx.b u< temp16_1
                    
                    if (ebx.b == temp16_1)
                        edx_21 = &edx_21[2]
                        result_17 = &result_17[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_10 = 0
                        break
                
                esi_10 = sbb.d(esi_8, esi_8, c_6) | 1
                break
            
            int32_t var_8_11 = 5
            
            if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
                char* eax_17 = sub_63d4e0(&result_1)
                int32_t temp17_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp17_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            
            int32_t var_8_12 = 0xffffffff
            
            if (esi_10 == 0)
                sub_5d9050(eax_3, esi_10 + 2)
            
            sub_63d720(&result_1, "img_checkbox_veryeasy")
            char* const result_18 = &data_801800
            char* edx_25 = *(arg2 + 4)
            char* const result_9 = result_1
            
            if (result_9 != 0)
                result_18 = result_9
            
            int32_t esi_12
            
            while (true)
                ebx.b = *edx_25
                char temp18_1 = *result_18
                bool c_7 = ebx.b u< temp18_1
                
                if (ebx.b == temp18_1)
                    if (ebx.b == 0)
                        esi_12 = 0
                        break
                    
                    ebx.b = edx_25[1]
                    char temp19_1 = result_18[1]
                    c_7 = ebx.b u< temp19_1
                    
                    if (ebx.b == temp19_1)
                        edx_25 = &edx_25[2]
                        result_18 = &result_18[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_12 = 0
                        break
                
                esi_12 = sbb.d(esi_10, esi_10, c_7) | 1
                break
            
            int32_t var_8_13 = 6
            
            if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
                char* eax_19 = sub_63d4e0(&result_1)
                int32_t temp20_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp20_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            
            int32_t var_8_14 = 0xffffffff
            char* result
            
            if (esi_12 != 0)
                sub_63d720(&result_1, "img_checkbox_easy")
                char* const result_19 = &data_801800
                char* edx_28 = *(arg2 + 4)
                char* const result_10 = result_1
                
                if (result_10 != 0)
                    result_19 = result_10
                
                int32_t esi_14
                
                while (true)
                    ebx.b = *edx_28
                    char temp21_1 = *result_19
                    bool c_8 = ebx.b u< temp21_1
                    
                    if (ebx.b == temp21_1)
                        if (ebx.b == 0)
                            esi_14 = 0
                            break
                        
                        ebx.b = edx_28[1]
                        char temp22_1 = result_19[1]
                        c_8 = ebx.b u< temp22_1
                        
                        if (ebx.b == temp22_1)
                            edx_28 = &edx_28[2]
                            result_19 = &result_19[2]
                            
                            if (ebx.b != 0)
                                continue
                            
                            esi_14 = 0
                            break
                    
                    esi_14 = sbb.d(esi_12, esi_12, c_8) | 1
                    break
                
                int32_t var_8_15 = 7
                
                if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
                    char* eax_21 = sub_63d4e0(&result_1)
                    int32_t temp23_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp23_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                
                int32_t var_8_16 = 0xffffffff
                
                if (esi_14 != 0)
                    sub_63d720(&result_1, "img_checkbox_medium")
                    char* const result_20 = &data_801800
                    char* edx_31 = *(arg2 + 4)
                    char* const result_11 = result_1
                    
                    if (result_11 != 0)
                        result_20 = result_11
                    
                    int32_t esi_16
                    
                    while (true)
                        ebx.b = *edx_31
                        char temp24_1 = *result_20
                        bool c_9 = ebx.b u< temp24_1
                        
                        if (ebx.b == temp24_1)
                            if (ebx.b == 0)
                                esi_16 = 0
                                break
                            
                            ebx.b = edx_31[1]
                            char temp25_1 = result_20[1]
                            c_9 = ebx.b u< temp25_1
                            
                            if (ebx.b == temp25_1)
                                edx_31 = &edx_31[2]
                                result_20 = &result_20[2]
                                
                                if (ebx.b != 0)
                                    continue
                                
                                esi_16 = 0
                                break
                        
                        esi_16 = sbb.d(esi_14, esi_14, c_9) | 1
                        break
                    
                    int32_t var_8_17 = 8
                    
                    if (data_cf65bc != 0 && result_11 != 0 && *result_11 != 0)
                        char* eax_23 = sub_63d4e0(&result_1)
                        int32_t temp26_1 = *(eax_23 + 4)
                        *(eax_23 + 4) -= 1
                        
                        if (temp26_1 == 1)
                            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                    
                    int32_t var_8_18 = 0xffffffff
                    
                    if (esi_16 != 0)
                        sub_63d720(&result_1, "img_checkbox_hard")
                        char* ecx_39 = *(arg2 + 4)
                        result = result_1
                        
                        if (result != 0)
                            result_2 = result
                        
                        int32_t esi_18
                        
                        while (true)
                            char edx_34 = *ecx_39
                            char temp27_1 = *result_2
                            bool c_10 = edx_34 u< temp27_1
                            
                            if (edx_34 == temp27_1)
                                if (edx_34 == 0)
                                    esi_18 = 0
                                    break
                                
                                edx_34 = ecx_39[1]
                                char temp28_1 = result_2[1]
                                c_10 = edx_34 u< temp28_1
                                
                                if (edx_34 == temp28_1)
                                    ecx_39 = &ecx_39[2]
                                    result_2 = &result_2[2]
                                    
                                    if (edx_34 != 0)
                                        continue
                                    
                                    esi_18 = 0
                                    break
                            
                            esi_18 = sbb.d(esi_16, esi_16, c_10) | 1
                            break
                        
                        int32_t var_8_19 = 9
                        
                        if (data_cf65bc != 0 && result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp29_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp29_1 == 1)
                                sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        int32_t var_8_20 = 0xffffffff
                        
                        if (esi_18 == 0)
                            sub_5d9210(esi_18 + 2)
                    else
                        sub_5d9210(esi_16 + 1)
                else
                    sub_5d9210(0)
            else
                sub_5d9210(esi_12 + 3)
            
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        char const* const var_2c_2 = "PlayerInfoFloatingClick"
        var_30 = 0x3231
        ecx_5 = "playerConfig.playerType == DBGAMEPLAYERTYPE_ACCOUNT"
    else
        char const* const var_2c_1 = "PlayerInfoFloatingClick"
        var_30 = 0x3229
        ecx_5 = "GameCanAddFriend(playerConfig)"
else
    char const* const var_2c = "PlayerInfoFloatingClick"
    var_30 = 0x3227
    ecx_5 = "playerConfig.playerType == DBGAMEPLAYERTYPE_ACCOUNT"

sub_63b870(eax_6, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_30, 
    "PlayerInfoFloatingClick")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
