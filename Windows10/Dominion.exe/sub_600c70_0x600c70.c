// 函数: sub_600c70
// 地址: 0x600c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) =
    __ehhandler$?AddToRunnables@InternalContextBase@details@Concurrency@@MAEXVlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3

if (sub_5da1c0(arg2).b == 0)
    sub_629b70(arg2)
    char* esi_1 = *(arg2 + 4)
    char* var_24
    sub_63d720(&var_24, "btn_shadow")
    char* eax_4 = var_24
    char* const edi = &data_801800
    char* const ecx_3 = &data_801800
    
    if (eax_4 != 0)
        ecx_3 = eax_4
    
    char* esi_3
    
    while (true)
        char edx_1 = *ecx_3
        char temp0_1 = *esi_1
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                esi_3 = nullptr
                break
            
            edx_1 = ecx_3[1]
            char temp1_1 = esi_1[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                ecx_3 = &ecx_3[2]
                esi_1 = &esi_1[2]
                
                if (edx_1 != 0)
                    continue
                
                esi_3 = nullptr
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_1) | 1
        break
    
    int32_t var_14_1 = 0
    
    if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_24)
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_2 = 0xffffffff
    char const* const var_78_1
    int32_t var_74_2
    char const* const var_70_2
    int32_t var_2c
    int32_t* eax_7
    char* ecx_8
    
    if (esi_3 == 0)
        void var_28
        eax_7 = sub_600ad0(&var_24, &var_28, &var_2c, esi_3, &var_24)
        
        if (eax_7 != 1)
            uint32_t ecx_11 = data_b604e0
            
            if (ecx_11 == 0xffffffff)
                ecx_11 = 0
            
            sub_5ce8b0(sub_5ce6d0(0, 0x3eb, ecx_11, 0, 0, 0))
            goto label_600de5
        
        char* ecx_7 = var_24
        
        if (ecx_7 != 0)
            int32_t var_70_3 = 0
            uint32_t eax_8
            eax_8.b = sub_617bb0(eax_7, &data_7ffb14, ecx_7, 1, ecx_7) != 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
        
        var_70_2 = "DomMainLayoutButtons"
        var_74_2 = 0x92c4
        var_78_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_8 = "gfxShadow"
        goto label_6022a6
    
label_600de5:
    char* esi_5 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_logNewest")
    char* eax_10 = var_24
    char* const ecx_14 = &data_801800
    
    if (eax_10 != 0)
        ecx_14 = eax_10
    
    int32_t esi_7
    
    while (true)
        char edx_5 = *ecx_14
        char temp3_1 = *esi_5
        bool c_2 = edx_5 u< temp3_1
        
        if (edx_5 == temp3_1)
            if (edx_5 == 0)
                esi_7 = 0
                break
            
            edx_5 = ecx_14[1]
            char temp4_1 = esi_5[1]
            c_2 = edx_5 u< temp4_1
            
            if (edx_5 == temp4_1)
                ecx_14 = &ecx_14[2]
                esi_5 = &esi_5[2]
                
                if (edx_5 != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_2) | 1
        break
    
    int32_t var_14_3 = 1
    
    if (data_cf65bc != 0 && eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(&var_24)
        int32_t temp5_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_4 = 0xffffffff
    
    if (esi_7 == 0)
        data_1724a50 = 0xffffffff
        data_1724a4c = 0
    
    char* esi_8 = *(arg2 + 4)
    sub_63d720(&var_24, "btnSave")
    char* eax_13 = var_24
    char* const ecx_18 = &data_801800
    
    if (eax_13 != 0)
        ecx_18 = eax_13
    
    int32_t esi_10
    
    while (true)
        char edx_8 = *ecx_18
        char temp6_1 = *esi_8
        bool c_3 = edx_8 u< temp6_1
        
        if (edx_8 == temp6_1)
            if (edx_8 == 0)
                esi_10 = 0
                break
            
            edx_8 = ecx_18[1]
            char temp7_1 = esi_8[1]
            c_3 = edx_8 u< temp7_1
            
            if (edx_8 == temp7_1)
                ecx_18 = &ecx_18[2]
                esi_8 = &esi_8[2]
                
                if (edx_8 != 0)
                    continue
                
                esi_10 = 0
                break
        
        esi_10 = sbb.d(esi_8, esi_8, c_3) | 1
        break
    
    int32_t var_14_5 = 2
    
    if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&var_24)
        int32_t temp8_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_6 = 0xffffffff
    
    if (esi_10 == 0)
        void* eax_15 = data_be4a38
        data_be4a3c = 1
        data_be4a40 = 0xffffffff
        
        if (eax_15 != 0 && eax_15 != &data_801800)
            if (data_cf65bc != esi_10 && *eax_15 != 0)
                char* eax_16 = sub_63d4e0(&data_be4a38)
                int32_t temp11_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
            
            data_be4a38 = &data_801800
        
        int32_t ecx_22 = data_c23bec
        data_8db6b0 = 0x7f0
        
        if (ecx_22 != 0)
            uint32_t eax_17 = zx.d(ecx_22.w)
            
            if (eax_17 u< data_c23bac)
                void* eax_19 = eax_17 * 0x18d0 + data_c23ba8
                
                if (*(eax_19 + 0x18c8) == ecx_22 && eax_19 != 0)
                    *(eax_19 + 0x13c1) = 0
            
            data_c23bec = 0
    
    sub_63d720(&var_24, "btn_endTurn")
    int32_t var_14_7 = 3
    
    if (data_cf65bc != 0)
        char* eax_20 = var_24
        
        if (eax_20 != 0 && *eax_20 != 0)
            char* eax_21 = sub_63d4e0(&var_24)
            int32_t temp10_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                var_24 = &data_801800
    
    int32_t var_14_8 = 0xffffffff
    char* esi_11 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_log")
    char* eax_23 = var_24
    char* const ecx_27 = &data_801800
    
    if (eax_23 != 0)
        ecx_27 = eax_23
    
    int32_t esi_13
    
    while (true)
        char edx_15 = *ecx_27
        char temp9_1 = *esi_11
        bool c_4 = edx_15 u< temp9_1
        
        if (edx_15 == temp9_1)
            if (edx_15 == 0)
                esi_13 = 0
                break
            
            edx_15 = ecx_27[1]
            char temp12_1 = esi_11[1]
            c_4 = edx_15 u< temp12_1
            
            if (edx_15 == temp12_1)
                ecx_27 = &ecx_27[2]
                esi_11 = &esi_11[2]
                
                if (edx_15 != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_4) | 1
        break
    
    int32_t var_14_9 = 4
    
    if (data_cf65bc != 0 && eax_23 != 0 && *eax_23 != 0)
        char* eax_24 = sub_63d4e0(&var_24)
        int32_t temp13_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp13_1 == 1)
            sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_10 = 0xffffffff
    
    if (esi_13 != 0)
        goto label_60112c
    
    eax_7 = data_cc8dc0
    
    if (eax_7 == 0)
        var_70_2 = "GetLocalSettings"
        var_74_2 = 0x5fb
        var_78_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_8 = "gGameSettings.localSettings"
    label_6022a6:
        sub_63b870(eax_7, &data_801800, ecx_8, var_78_1, var_74_2, var_70_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_25
    
    if (eax_7[0xe].b != 0)
        eax_25 = sub_5cb070()
    
    if (eax_7[0xe].b != 0 && eax_25 == 0)
        eax_7 = data_cc8dc0
        
        if (eax_7 == 0)
            var_70_2 = "GetLocalSettings"
            var_74_2 = 0x5fb
            var_78_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx_8 = "gGameSettings.localSettings"
            goto label_6022a6
        
        eax_7[0xe].b = 0
        sub_4d6a20()
        
        if (data_8db5c4 == 0x27)
            int32_t ecx_30 = data_8db5c8
            
            if (ecx_30 != 0)
                uint32_t eax_27 = sub_64e7a0(sub_67bd70(ecx_30, "tbl_center_holder"))
                sub_65bf00(eax_27)
                sub_65bf40(eax_27)
        
        goto label_60112c
    
    data_8db660 = 0x28
    data_b80998 = 3
label_60112c:
    char* esi_14 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_undo_game")
    char* eax_29 = var_24
    char* const ecx_34 = &data_801800
    
    if (eax_29 != 0)
        ecx_34 = eax_29
    
    int32_t esi_16
    
    while (true)
        char edx_18 = *ecx_34
        char temp14_1 = *esi_14
        bool c_5 = edx_18 u< temp14_1
        
        if (edx_18 == temp14_1)
            if (edx_18 == 0)
                esi_16 = 0
                break
            
            edx_18 = ecx_34[1]
            char temp15_1 = esi_14[1]
            c_5 = edx_18 u< temp15_1
            
            if (edx_18 == temp15_1)
                ecx_34 = &ecx_34[2]
                esi_14 = &esi_14[2]
                
                if (edx_18 != 0)
                    continue
                
                esi_16 = 0
                break
        
        esi_16 = sbb.d(esi_14, esi_14, c_5) | 1
        break
    
    int32_t var_14_11 = 5
    
    if (data_cf65bc != 0 && eax_29 != 0 && *eax_29 != 0)
        char* eax_30 = sub_63d4e0(&var_24)
        int32_t temp16_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp16_1 == 1)
            sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_12 = 0xffffffff
    
    if (esi_16 != 0)
        goto label_60123b
    
    char eax_31
    uint32_t ecx_37
    eax_31, ecx_37 = sub_4b9510()
    
    if (eax_31 == 0)
        eax_7 = sub_624730(ecx_37)
        
        if (eax_7.b == 0)
            goto label_60123b
        
        void* ecx_39 = data_cc8d5c
        
        if (ecx_39 != 0)
            sub_600830(sub_5a0c70(*(ecx_39 + 0x7590), &var_24), var_24)
            goto label_60123b
        
    label_602293:
        var_70_2 = "GetClient"
        var_74_2 = 0x7b
        ecx_8 = "gClient"
        var_78_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        goto label_6022a6
    
    int32_t eax_32 = sub_5a0c70(0xffffffff, &var_2c)
    sub_5cbf20()
    sub_4d46e0(2, 0)
    sub_4d46e0(5, data_8db664 != 0x29)
    int32_t* eax_33 = sub_4b9480()
    int128_t var_60
    sub_4b4cc0(eax_33, eax_32, eax_33, &var_60)
label_60123b:
    char* esi_18 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_deckStyle")
    eax_7 = var_24
    int32_t* ecx_43 = &data_801800
    
    if (eax_7 != 0)
        ecx_43 = eax_7
    
    int32_t esi_20
    
    while (true)
        char edx_27 = *ecx_43
        char temp17_1 = *esi_18
        bool c_6 = edx_27 u< temp17_1
        
        if (edx_27 == temp17_1)
            if (edx_27 == 0)
                esi_20 = 0
                break
            
            edx_27 = *(ecx_43 + 1)
            char temp18_1 = esi_18[1]
            c_6 = edx_27 u< temp18_1
            
            if (edx_27 == temp18_1)
                ecx_43 += 2
                esi_18 = &esi_18[2]
                
                if (edx_27 != 0)
                    continue
                
                esi_20 = 0
                break
        
        esi_20 = sbb.d(esi_18, esi_18, c_6) | 1
        break
    
    int32_t var_14_13 = 6
    
    if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
        eax_7 = sub_63d4e0(&var_24)
        int32_t temp19_1 = eax_7[1]
        eax_7[1] -= 1
        
        if (temp19_1 == 1)
            eax_7 = sub_64c080(eax_7, eax_7[3] + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_14 = 0xffffffff
    
    if (esi_20 == 0)
        void* ecx_46 = data_cc8dc0
        
        if (ecx_46 == 0)
            var_70_2 = "GetLocalSettings"
            var_74_2 = 0x5fb
            var_78_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx_8 = "gGameSettings.localSettings"
            goto label_6022a6
        
        int32_t eax_36
        eax_36.b = *(ecx_46 + 0x2c) != 1
        *(ecx_46 + 0x2c) = eax_36
        sub_4d6a20()
    
    char* esi_21 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_reveal_slid_minimize")
    char* eax_38 = var_24
    char* const ecx_48 = &data_801800
    
    if (eax_38 != 0)
        ecx_48 = eax_38
    
    int32_t esi_23
    
    while (true)
        char edx_30 = *ecx_48
        char temp20_1 = *esi_21
        bool c_7 = edx_30 u< temp20_1
        
        if (edx_30 == temp20_1)
            if (edx_30 == 0)
                esi_23 = 0
                break
            
            edx_30 = ecx_48[1]
            char temp21_1 = esi_21[1]
            c_7 = edx_30 u< temp21_1
            
            if (edx_30 == temp21_1)
                ecx_48 = &ecx_48[2]
                esi_21 = &esi_21[2]
                
                if (edx_30 != 0)
                    continue
                
                esi_23 = 0
                break
        
        esi_23 = sbb.d(esi_21, esi_21, c_7) | 1
        break
    
    int32_t var_14_15 = 7
    
    if (data_cf65bc != 0 && eax_38 != 0 && *eax_38 != 0)
        char* eax_39 = sub_63d4e0(&var_24)
        int32_t temp22_1 = *(eax_39 + 4)
        *(eax_39 + 4) -= 1
        
        if (temp22_1 == 1)
            sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_16 = 0xffffffff
    
    if (esi_23 == 0)
        sub_5cbf20()
    
    char* esi_24 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_nextGame")
    char* eax_41 = var_24
    char* const ecx_52 = &data_801800
    
    if (eax_41 != 0)
        ecx_52 = eax_41
    
    int32_t esi_26
    
    while (true)
        char edx_33 = *ecx_52
        char temp23_1 = *esi_24
        bool c_8 = edx_33 u< temp23_1
        
        if (edx_33 == temp23_1)
            if (edx_33 == 0)
                esi_26 = 0
                break
            
            edx_33 = ecx_52[1]
            char temp24_1 = esi_24[1]
            c_8 = edx_33 u< temp24_1
            
            if (edx_33 == temp24_1)
                ecx_52 = &ecx_52[2]
                esi_24 = &esi_24[2]
                
                if (edx_33 != 0)
                    continue
                
                esi_26 = 0
                break
        
        esi_26 = sbb.d(esi_24, esi_24, c_8) | 1
        break
    
    int32_t var_14_17 = 8
    
    if (data_cf65bc != 0 && eax_41 != 0 && *eax_41 != 0)
        char* eax_42 = sub_63d4e0(&var_24)
        int32_t temp25_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp25_1 == 1)
            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
            var_24 = &data_801800
    
    int32_t var_14_18 = 0xffffffff
    int32_t var_30
    
    if (esi_26 == 0 && sub_4c5510(&var_30) != 0)
        if (var_30 != 1)
            sub_4b0e60(var_2c)
        else
            int32_t ecx_58 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c0)
            eax_7 = data_cc8d5c
            
            if (eax_7 == 0)
                goto label_602293
            
            eax_7[0x1411] = 5
            eax_7[0x1416] = ecx_58
    
    char* esi_27 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_zoom_action")
    char* eax_46 = var_24
    char* const ecx_61 = &data_801800
    
    if (eax_46 != 0)
        ecx_61 = eax_46
    
    int32_t esi_29
    
    while (true)
        char edx_36 = *ecx_61
        char temp26_1 = *esi_27
        bool c_9 = edx_36 u< temp26_1
        
        if (edx_36 == temp26_1)
            if (edx_36 == 0)
                esi_29 = 0
                break
            
            edx_36 = ecx_61[1]
            char temp27_1 = esi_27[1]
            c_9 = edx_36 u< temp27_1
            
            if (edx_36 == temp27_1)
                ecx_61 = &ecx_61[2]
                esi_27 = &esi_27[2]
                
                if (edx_36 != 0)
                    continue
                
                esi_29 = 0
                break
        
        esi_29 = sbb.d(esi_27, esi_27, c_9) | 1
        break
    
    int32_t var_14_19 = 9
    
    if (data_cf65bc != 0 && eax_46 != 0 && *eax_46 != 0)
        char* eax_47 = sub_63d4e0(&var_24)
        int32_t temp28_1 = *(eax_47 + 4)
        *(eax_47 + 4) -= 1
        
        if (temp28_1 == 1)
            sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
    
    int32_t var_14_20 = 0xffffffff
    
    if (esi_29 == 0)
        sub_5cb070()
        int32_t ecx_64 = data_b7d434
        uint32_t eax_48 = sub_5cba00(ecx_64)
        int32_t var_70_5 = 0
        *(eax_48 + 0x1b28) = *(eax_48 + 0x1ac8)
        *(eax_48 + 0x1b38) = *(eax_48 + 0x1ad8)
        *(eax_48 + 0x1b48) = *(eax_48 + 0x1ae8)
        *(eax_48 + 0x1b58) = *(eax_48 + 0x1af8)
        *(eax_48 + 0x1b68) = *(eax_48 + 0x1b08)
        *(eax_48 + 0x1b78) = *(eax_48 + 0x1b18)
        data_b7d434 = 0
        data_b7d424 = 0
        uint32_t eax_50
        int128_t* ecx_66
        eax_50, ecx_66 = sub_617bb0(eax_48 + 0x1ac8, &data_7ffb14, eax_48, nullptr, ecx_64)
        
        if (eax_50 == 2)
            int32_t var_44
            __builtin_memset(&var_44, 0, 0x14)
            int32_t var_70_6 = eax_48 + 0x1ac8
            var_60 = eax_48.o
            int32_t var_38
            int64_t var_50_1 = var_38.q
            sub_5cb7c0(eax_48 + 0x1ac8, &var_60, eax_48 + 0x258, ecx_66)
    
    if (*(arg2 + 0x18) == 2)
        void* eax_52 = sub_5cb070()
        
        if (data_ccf768 != 0)
            sub_5ec880()
        else if (data_b7d424 == 0 || (eax_52 != 0 && *(eax_52 + 0x10) != 0x12))
            data_8db660 = 0x11
        else
            sub_614ca0()
    
    char* esi_32 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_kingdom")
    char* eax_53 = var_24
    char* const ecx_69 = &data_801800
    
    if (eax_53 != 0)
        ecx_69 = eax_53
    
    int32_t esi_34
    
    while (true)
        char edx_40 = *ecx_69
        char temp29_1 = *esi_32
        bool c_10 = edx_40 u< temp29_1
        
        if (edx_40 == temp29_1)
            if (edx_40 == 0)
                esi_34 = 0
                break
            
            edx_40 = ecx_69[1]
            char temp30_1 = esi_32[1]
            c_10 = edx_40 u< temp30_1
            
            if (edx_40 == temp30_1)
                ecx_69 = &ecx_69[2]
                esi_32 = &esi_32[2]
                
                if (edx_40 != 0)
                    continue
                
                esi_34 = 0
                break
        
        esi_34 = sbb.d(esi_32, esi_32, c_10) | 1
        break
    
    int32_t var_14_21 = 0xa
    
    if (data_cf65bc != 0 && eax_53 != 0 && *eax_53 != 0)
        char* eax_54 = sub_63d4e0(&var_24)
        int32_t temp31_1 = *(eax_54 + 4)
        *(eax_54 + 4) -= 1
        
        if (temp31_1 == 1)
            sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
    
    int32_t var_14_22 = 0xffffffff
    
    if (esi_34 == 0)
        sub_5ebc50(0xb80ad8, &data_ccf768)
        data_ccf768.w = 1
        sub_5ec8d0(esi_34, &data_801800, (zx.o(0)).d)
    
    char* esi_35 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_menu")
    char* eax_56 = var_24
    char* const ecx_73 = &data_801800
    
    if (eax_56 != 0)
        ecx_73 = eax_56
    
    int32_t esi_37
    
    while (true)
        char edx_43 = *ecx_73
        char temp32_1 = *esi_35
        bool c_11 = edx_43 u< temp32_1
        
        if (edx_43 == temp32_1)
            if (edx_43 == 0)
                esi_37 = 0
                break
            
            edx_43 = ecx_73[1]
            char temp33_1 = esi_35[1]
            c_11 = edx_43 u< temp33_1
            
            if (edx_43 == temp33_1)
                ecx_73 = &ecx_73[2]
                esi_35 = &esi_35[2]
                
                if (edx_43 != 0)
                    continue
                
                esi_37 = 0
                break
        
        esi_37 = sbb.d(esi_35, esi_35, c_11) | 1
        break
    
    int32_t var_14_23 = 0xb
    
    if (data_cf65bc != 0 && eax_56 != 0 && *eax_56 != 0)
        char* eax_57 = sub_63d4e0(&var_24)
        int32_t temp34_1 = *(eax_57 + 4)
        *(eax_57 + 4) -= 1
        
        if (temp34_1 == 1)
            sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
    
    int32_t var_14_24 = 0xffffffff
    
    if (esi_37 == 0)
        data_8db660 = 0x11
    
    char* esi_38 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_ok")
    char* eax_59 = var_24
    char* const ecx_77 = &data_801800
    
    if (eax_59 != 0)
        ecx_77 = eax_59
    
    int32_t esi_40
    
    while (true)
        char edx_46 = *ecx_77
        char temp35_1 = *esi_38
        bool c_12 = edx_46 u< temp35_1
        
        if (edx_46 == temp35_1)
            if (edx_46 == 0)
                esi_40 = 0
                break
            
            edx_46 = ecx_77[1]
            char temp36_1 = esi_38[1]
            c_12 = edx_46 u< temp36_1
            
            if (edx_46 == temp36_1)
                ecx_77 = &ecx_77[2]
                esi_38 = &esi_38[2]
                
                if (edx_46 != 0)
                    continue
                
                esi_40 = 0
                break
        
        esi_40 = sbb.d(esi_38, esi_38, c_12) | 1
        break
    
    int32_t var_14_25 = 0xc
    
    if (data_cf65bc != 0 && eax_59 != 0 && *eax_59 != 0)
        char* eax_60 = sub_63d4e0(&var_24)
        int32_t temp37_1 = *(eax_60 + 4)
        *(eax_60 + 4) -= 1
        
        if (temp37_1 == 1)
            sub_64c080(eax_60, *(eax_60 + 0xc) + 0x10)
    
    int32_t var_14_26 = 0xffffffff
    
    if (esi_40 == 0)
        *(arg2 + 8)
        sub_5f3030(eax_2, arg1)
    
    char* esi_41 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_trash")
    char* eax_63 = var_24
    char* const ecx_82 = &data_801800
    
    if (eax_63 != 0)
        ecx_82 = eax_63
    
    int32_t esi_43
    
    while (true)
        char edx_49 = *ecx_82
        char temp38_1 = *esi_41
        bool c_13 = edx_49 u< temp38_1
        
        if (edx_49 == temp38_1)
            if (edx_49 == 0)
                esi_43 = 0
                break
            
            edx_49 = ecx_82[1]
            char temp39_1 = esi_41[1]
            c_13 = edx_49 u< temp39_1
            
            if (edx_49 == temp39_1)
                ecx_82 = &ecx_82[2]
                esi_41 = &esi_41[2]
                
                if (edx_49 != 0)
                    continue
                
                esi_43 = 0
                break
        
        esi_43 = sbb.d(esi_41, esi_41, c_13) | 1
        break
    
    int32_t var_14_27 = 0xd
    
    if (data_cf65bc != 0 && eax_63 != 0 && *eax_63 != 0)
        eax_63 = sub_63d4e0(&var_24)
        int32_t temp40_1 = *(eax_63 + 4)
        *(eax_63 + 4) -= 1
        
        if (temp40_1 == 1)
            eax_63 = sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
    
    int32_t var_14_28 = 0xffffffff
    
    if (esi_43 == 0)
        sub_5ce8b0(sub_5ce6d0(eax_63, esi_43 + 2, 0xffffffff, esi_43, esi_43, esi_43))
    
    char* esi_44 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_deck")
    char* eax_66 = var_24
    char* const ecx_87 = &data_801800
    
    if (eax_66 != 0)
        ecx_87 = eax_66
    
    int32_t esi_46
    
    while (true)
        char edx_53 = *ecx_87
        char temp41_1 = *esi_44
        bool c_14 = edx_53 u< temp41_1
        
        if (edx_53 == temp41_1)
            if (edx_53 == 0)
                esi_46 = 0
                break
            
            edx_53 = ecx_87[1]
            char temp42_1 = esi_44[1]
            c_14 = edx_53 u< temp42_1
            
            if (edx_53 == temp42_1)
                ecx_87 = &ecx_87[2]
                esi_44 = &esi_44[2]
                
                if (edx_53 != 0)
                    continue
                
                esi_46 = 0
                break
        
        esi_46 = sbb.d(esi_44, esi_44, c_14) | 1
        break
    
    int32_t var_14_29 = 0xe
    
    if (data_cf65bc != 0 && eax_66 != 0 && *eax_66 != 0)
        char* eax_67 = sub_63d4e0(&var_24)
        int32_t temp43_1 = *(eax_67 + 4)
        *(eax_67 + 4) -= 1
        
        if (temp43_1 == 1)
            sub_64c080(eax_67, *(eax_67 + 0xc) + 0x10)
    
    int32_t var_14_30 = 0xffffffff
    
    if (esi_46 == 0)
        uint32_t ecx_90 = data_b604e0
        
        if (ecx_90 == 0xffffffff)
            ecx_90 = 0
        
        sub_5ce8b0(sub_5ce6d0(0, 0x3eb, ecx_90, 0, 0, 0))
    
    char* esi_47 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_discard")
    char* eax_70 = var_24
    char* const ecx_93 = &data_801800
    
    if (eax_70 != 0)
        ecx_93 = eax_70
    
    int32_t esi_49
    
    while (true)
        char edx_56 = *ecx_93
        char temp44_1 = *esi_47
        bool c_15 = edx_56 u< temp44_1
        
        if (edx_56 == temp44_1)
            if (edx_56 == 0)
                esi_49 = 0
                break
            
            edx_56 = ecx_93[1]
            char temp45_1 = esi_47[1]
            c_15 = edx_56 u< temp45_1
            
            if (edx_56 == temp45_1)
                ecx_93 = &ecx_93[2]
                esi_47 = &esi_47[2]
                
                if (edx_56 != 0)
                    continue
                
                esi_49 = 0
                break
        
        esi_49 = sbb.d(esi_47, esi_47, c_15) | 1
        break
    
    int32_t var_14_31 = 0xf
    
    if (data_cf65bc != 0 && eax_70 != 0 && *eax_70 != 0)
        char* eax_71 = sub_63d4e0(&var_24)
        int32_t temp46_1 = *(eax_71 + 4)
        *(eax_71 + 4) -= 1
        
        if (temp46_1 == 1)
            sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
    
    int32_t var_14_32 = 0xffffffff
    
    if (esi_49 == 0)
        uint32_t ecx_96 = data_b604e0
        
        if (ecx_96 == 0xffffffff)
            ecx_96 = 0
        
        sub_5ce8b0(sub_5ce6d0(0, 0x3ec, ecx_96, 0, 0, 0))
    
    char* esi_50 = *(arg2 + 4)
    sub_63d720(&var_24, "grpOpponentDeck")
    char* eax_74 = var_24
    char* const ecx_99 = &data_801800
    
    if (eax_74 != 0)
        ecx_99 = eax_74
    
    int32_t esi_52
    
    while (true)
        char edx_59 = *ecx_99
        char temp47_1 = *esi_50
        bool c_16 = edx_59 u< temp47_1
        
        if (edx_59 == temp47_1)
            if (edx_59 == 0)
                esi_52 = 0
                break
            
            edx_59 = ecx_99[1]
            char temp48_1 = esi_50[1]
            c_16 = edx_59 u< temp48_1
            
            if (edx_59 == temp48_1)
                ecx_99 = &ecx_99[2]
                esi_50 = &esi_50[2]
                
                if (edx_59 != 0)
                    continue
                
                esi_52 = 0
                break
        
        esi_52 = sbb.d(esi_50, esi_50, c_16) | 1
        break
    
    int32_t var_14_33 = 0x10
    
    if (data_cf65bc != 0 && eax_74 != 0 && *eax_74 != 0)
        char* eax_75 = sub_63d4e0(&var_24)
        int32_t temp49_1 = *(eax_75 + 4)
        *(eax_75 + 4) -= 1
        
        if (temp49_1 == 1)
            sub_64c080(eax_75, *(eax_75 + 0xc) + 0x10)
    
    int32_t var_14_34 = 0xffffffff
    
    if (esi_52 == 0)
        int32_t esi_53 = data_b604e0
        int32_t edi_1 = *(arg2 + 8)
        
        if (esi_53 == 0xffffffff)
            esi_53 = 0
        
        void* eax_77 = sub_4b95e0()
        uint32_t esi_54 = esi_53 + edi_1 + 1
        uint32_t ecx_103 = esi_54 - eax_77
        
        if (esi_54 s< eax_77)
            ecx_103 = esi_54
        
        sub_5ce8b0(sub_5ce6d0(eax_77, 0x3eb, ecx_103, 0, 0, 0))
        edi = &data_801800
    
    char* esi_55 = *(arg2 + 4)
    sub_63d720(&var_24, "grpOpponentDiscard")
    char* eax_80 = var_24
    char* const ecx_106 = &data_801800
    
    if (eax_80 != 0)
        ecx_106 = eax_80
    
    int32_t esi_57
    
    while (true)
        char edx_62 = *ecx_106
        char temp50_1 = *esi_55
        bool c_17 = edx_62 u< temp50_1
        
        if (edx_62 == temp50_1)
            if (edx_62 == 0)
                esi_57 = 0
                break
            
            edx_62 = ecx_106[1]
            char temp51_1 = esi_55[1]
            c_17 = edx_62 u< temp51_1
            
            if (edx_62 == temp51_1)
                ecx_106 = &ecx_106[2]
                esi_55 = &esi_55[2]
                
                if (edx_62 != 0)
                    continue
                
                esi_57 = 0
                break
        
        esi_57 = sbb.d(esi_55, esi_55, c_17) | 1
        break
    
    int32_t var_14_35 = 0x11
    
    if (data_cf65bc != 0 && eax_80 != 0 && *eax_80 != 0)
        char* eax_81 = sub_63d4e0(&var_24)
        int32_t temp52_1 = *(eax_81 + 4)
        *(eax_81 + 4) -= 1
        
        if (temp52_1 == 1)
            sub_64c080(eax_81, *(eax_81 + 0xc) + 0x10)
    
    int32_t var_14_36 = 0xffffffff
    
    if (esi_57 == 0)
        int32_t esi_58 = data_b604e0
        int32_t edi_3 = *(arg2 + 8)
        
        if (esi_58 == 0xffffffff)
            esi_58 = 0
        
        void* eax_83 = sub_4b95e0()
        uint32_t esi_59 = esi_58 + edi_3 + 1
        uint32_t ecx_110 = esi_59 - eax_83
        
        if (esi_59 s< eax_83)
            ecx_110 = esi_59
        
        sub_5ce8b0(sub_5ce6d0(eax_83, 0x3ec, ecx_110, 0, 0, 0))
        edi = &data_801800
    
    char* esi_60 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_reveal_minimize")
    char* eax_86 = var_24
    char* const ecx_113 = &data_801800
    
    if (eax_86 != 0)
        ecx_113 = eax_86
    
    int32_t esi_62
    
    while (true)
        char edx_65 = *ecx_113
        char temp53_1 = *esi_60
        bool c_18 = edx_65 u< temp53_1
        
        if (edx_65 == temp53_1)
            if (edx_65 == 0)
                esi_62 = 0
                break
            
            edx_65 = ecx_113[1]
            char temp54_1 = esi_60[1]
            c_18 = edx_65 u< temp54_1
            
            if (edx_65 == temp54_1)
                ecx_113 = &ecx_113[2]
                esi_60 = &esi_60[2]
                
                if (edx_65 != 0)
                    continue
                
                esi_62 = 0
                break
        
        esi_62 = sbb.d(esi_60, esi_60, c_18) | 1
        break
    
    int32_t var_14_37 = 0x12
    
    if (data_cf65bc != 0 && eax_86 != 0 && *eax_86 != 0)
        char* eax_87 = sub_63d4e0(&var_24)
        int32_t temp55_1 = *(eax_87 + 4)
        *(eax_87 + 4) -= 1
        
        if (temp55_1 == 1)
            sub_64c080(eax_87, *(eax_87 + 0xc) + 0x10)
    
    int32_t var_14_38 = 0xffffffff
    
    if (esi_62 == 0)
        sub_5cbf20()
    
    char* esi_63 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_zoom_dismiss")
    char* eax_89 = var_24
    char* ecx_117 = &data_801800
    
    if (eax_89 != 0)
        ecx_117 = eax_89
    
    int32_t esi_65
    
    while (true)
        char edx_68 = *ecx_117
        char temp56_1 = *esi_63
        bool c_19 = edx_68 u< temp56_1
        
        if (edx_68 == temp56_1)
            if (edx_68 == 0)
                esi_65 = 0
                break
            
            edx_68 = ecx_117[1]
            char temp57_1 = esi_63[1]
            c_19 = edx_68 u< temp57_1
            
            if (edx_68 == temp57_1)
                ecx_117 = &ecx_117[2]
                esi_63 = &esi_63[2]
                
                if (edx_68 != 0)
                    continue
                
                esi_65 = 0
                break
        
        esi_65 = sbb.d(esi_63, esi_63, c_19) | 1
        break
    
    int32_t var_14_39 = 0x13
    
    if (data_cf65bc != 0 && eax_89 != 0 && *eax_89 != 0)
        char* eax_90 = sub_63d4e0(&var_24)
        int32_t temp58_1 = *(eax_90 + 4)
        *(eax_90 + 4) -= 1
        
        if (temp58_1 == 1)
            sub_64c080(eax_90, *(eax_90 + 0xc) + 0x10)
    
    int32_t var_14_40 = 0xffffffff
    
    if (esi_65 == 0)
        sub_614ca0()
    
    sub_63d720(&var_24, "btn_zoom_dismiss_tray")
    int32_t var_14_41 = 0x14
    
    if (data_cf65bc != 0)
        char* eax_91 = var_24
        
        if (eax_91 != 0 && *eax_91 != 0)
            char* eax_92 = sub_63d4e0(&var_24)
            int32_t temp60_1 = *(eax_92 + 4)
            *(eax_92 + 4) -= 1
            
            if (temp60_1 == 1)
                sub_64c080(eax_92, *(eax_92 + 0xc) + 0x10)
    
    int32_t var_14_42 = 0xffffffff
    char* esi_66 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_avatar")
    char* eax_94 = var_24
    char* ecx_124 = &data_801800
    
    if (eax_94 != 0)
        ecx_124 = eax_94
    
    int32_t esi_68
    
    while (true)
        char edx_73 = *ecx_124
        char temp59_1 = *esi_66
        bool c_20 = edx_73 u< temp59_1
        
        if (edx_73 == temp59_1)
            if (edx_73 == 0)
                esi_68 = 0
                break
            
            edx_73 = ecx_124[1]
            char temp61_1 = esi_66[1]
            c_20 = edx_73 u< temp61_1
            
            if (edx_73 == temp61_1)
                ecx_124 = &ecx_124[2]
                esi_66 = &esi_66[2]
                
                if (edx_73 != 0)
                    continue
                
                esi_68 = 0
                break
        
        esi_68 = sbb.d(esi_66, esi_66, c_20) | 1
        break
    
    int32_t var_14_43 = 0x15
    
    if (data_cf65bc != 0 && eax_94 != 0 && *eax_94 != 0)
        char* eax_95 = sub_63d4e0(&var_24)
        int32_t temp62_1 = *(eax_95 + 4)
        *(eax_95 + 4) -= 1
        
        if (temp62_1 == 1)
            sub_64c080(eax_95, *(eax_95 + 0xc) + 0x10)
    
    int32_t var_14_44 = 0xffffffff
    
    if (esi_68 == 0)
        int32_t esi_69 = data_b604e0
        void* edi_5 = *(arg2 + 8)
        
        if (esi_69 == 0xffffffff)
            esi_69 = 0
        
        void* eax_97 = sub_4b95e0()
        void* ecx_128 = edi_5 + 1 + esi_69
        void* esi_71 = ecx_128 - eax_97
        
        if (ecx_128 s< eax_97)
            esi_71 = ecx_128
        
        data_cf64a8 = esi_71
        int32_t ecx_130
        ecx_130.b = *(sub_4b9680(&sub_4b9480()[2], esi_71) + 0x14) == 3
        data_8db660 = ecx_130 + 0x7f3
        void* eax_100 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_100 + 0x42d4) |= 4
        data_cc8dc8
        sub_4d8ad0(esi_71)
        edi = &data_801800
    
    char* esi_72 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_playerAvatar")
    char* eax_102 = var_24
    char* ecx_136 = &data_801800
    
    if (eax_102 != 0)
        ecx_136 = eax_102
    
    int32_t esi_74
    
    while (true)
        char edx_77 = *ecx_136
        char temp63_1 = *esi_72
        bool c_21 = edx_77 u< temp63_1
        
        if (edx_77 == temp63_1)
            if (edx_77 == 0)
                esi_74 = 0
                break
            
            edx_77 = ecx_136[1]
            char temp64_1 = esi_72[1]
            c_21 = edx_77 u< temp64_1
            
            if (edx_77 == temp64_1)
                ecx_136 = &ecx_136[2]
                esi_72 = &esi_72[2]
                
                if (edx_77 != 0)
                    continue
                
                esi_74 = 0
                break
        
        esi_74 = sbb.d(esi_72, esi_72, c_21) | 1
        break
    
    int32_t var_14_45 = 0x16
    
    if (data_cf65bc != 0 && eax_102 != 0 && *eax_102 != 0)
        char* eax_103 = sub_63d4e0(&var_24)
        int32_t temp65_1 = *(eax_103 + 4)
        *(eax_103 + 4) -= 1
        
        if (temp65_1 == 1)
            sub_64c080(eax_103, *(eax_103 + 0xc) + 0x10)
    
    int32_t var_14_46 = 0xffffffff
    
    if (esi_74 == 0)
        int32_t esi_75 = data_b604e0
        
        if (esi_75 == 0xffffffff)
            esi_75 = 0
        
        data_cf64a8 = esi_75
        int32_t ecx_140
        ecx_140.b = *(sub_4b9680(&sub_4b9480()[2], esi_75) + 0x14) == 3
        data_8db660 = ecx_140 + 0x7f3
    
    char* esi_76 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_zoom")
    char* eax_107 = var_24
    char* ecx_143 = &data_801800
    
    if (eax_107 != 0)
        ecx_143 = eax_107
    
    int32_t esi_78
    
    while (true)
        char edx_81 = *ecx_143
        char temp66_1 = *esi_76
        bool c_22 = edx_81 u< temp66_1
        
        if (edx_81 == temp66_1)
            if (edx_81 == 0)
                esi_78 = 0
                break
            
            edx_81 = ecx_143[1]
            char temp67_1 = esi_76[1]
            c_22 = edx_81 u< temp67_1
            
            if (edx_81 == temp67_1)
                ecx_143 = &ecx_143[2]
                esi_76 = &esi_76[2]
                
                if (edx_81 != 0)
                    continue
                
                esi_78 = 0
                break
        
        esi_78 = sbb.d(esi_76, esi_76, c_22) | 1
        break
    
    int32_t var_14_47 = 0x17
    
    if (data_cf65bc != 0 && eax_107 != 0 && *eax_107 != 0)
        char* eax_108 = sub_63d4e0(&var_24)
        int32_t temp68_1 = *(eax_108 + 4)
        *(eax_108 + 4) -= 1
        
        if (temp68_1 == 1)
            sub_64c080(eax_108, *(eax_108 + 0xc) + 0x10)
    
    int32_t var_14_48 = 0xffffffff
    
    if (esi_78 == 0)
        int32_t esi_79 = data_b604e0
        void* edi_6 = *(arg2 + 8)
        
        if (esi_79 == 0xffffffff)
            esi_79 = 0
        
        void* eax_110 = sub_4b95e0()
        edi = &data_801800
        void* ecx_147 = edi_6 + 1 + esi_79
        void* edx_85 = ecx_147 - eax_110
        
        if (ecx_147 s< eax_110)
            edx_85 = ecx_147
        
        if (data_b604e4 == edx_85)
            edx_85 = 0xffffffff
        
        data_b604e4 = edx_85
    
    char* esi_80 = *(arg2 + 4)
    sub_63d720(&var_24, "btnLeft")
    char* eax_112 = var_24
    char* ecx_149 = &data_801800
    
    if (eax_112 != 0)
        ecx_149 = eax_112
    
    int32_t esi_82
    
    while (true)
        char edx_86 = *ecx_149
        char temp69_1 = *esi_80
        bool c_23 = edx_86 u< temp69_1
        
        if (edx_86 == temp69_1)
            if (edx_86 == 0)
                esi_82 = 0
                break
            
            edx_86 = ecx_149[1]
            char temp70_1 = esi_80[1]
            c_23 = edx_86 u< temp70_1
            
            if (edx_86 == temp70_1)
                ecx_149 = &ecx_149[2]
                esi_80 = &esi_80[2]
                
                if (edx_86 != 0)
                    continue
                
                esi_82 = 0
                break
        
        esi_82 = sbb.d(esi_80, esi_80, c_23) | 1
        break
    
    int32_t var_14_49 = 0x18
    
    if (data_cf65bc != 0 && eax_112 != 0 && *eax_112 != 0)
        char* eax_113 = sub_63d4e0(&var_24)
        int32_t temp71_1 = *(eax_113 + 4)
        *(eax_113 + 4) -= 1
        
        if (temp71_1 == 1)
            sub_64c080(eax_113, *(eax_113 + 0xc) + 0x10)
    
    int32_t var_14_50 = 0xffffffff
    
    if (esi_82 == 0)
        sub_5f4e70(nullptr)
    
    char* esi_83 = *(arg2 + 4)
    sub_63d720(&var_24, "btnRight")
    char* eax_115 = var_24
    char* ecx_153 = &data_801800
    
    if (eax_115 != 0)
        ecx_153 = eax_115
    
    void* esi_85
    
    while (true)
        char edx_89 = *ecx_153
        char temp72_1 = *esi_83
        bool c_24 = edx_89 u< temp72_1
        
        if (edx_89 == temp72_1)
            if (edx_89 == 0)
                esi_85 = nullptr
                break
            
            edx_89 = ecx_153[1]
            char temp73_1 = esi_83[1]
            c_24 = edx_89 u< temp73_1
            
            if (edx_89 == temp73_1)
                ecx_153 = &ecx_153[2]
                esi_83 = &esi_83[2]
                
                if (edx_89 != 0)
                    continue
                
                esi_85 = nullptr
                break
        
        esi_85 = sbb.d(esi_83, esi_83, c_24) | 1
        break
    
    int32_t var_14_51 = 0x19
    
    if (data_cf65bc != 0 && eax_115 != 0 && *eax_115 != 0)
        char* eax_116 = sub_63d4e0(&var_24)
        int32_t temp74_1 = *(eax_116 + 4)
        *(eax_116 + 4) -= 1
        
        if (temp74_1 == 1)
            sub_64c080(eax_116, *(eax_116 + 0xc) + 0x10)
    
    int32_t var_14_52 = 0xffffffff
    
    if (esi_85 == 0)
        sub_5f4e70(esi_85 + 1)
    
    char* esi_86 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_more_icons")
    char* eax_118 = var_24
    char* ecx_158 = &data_801800
    
    if (eax_118 != 0)
        ecx_158 = eax_118
    
    int32_t esi_88
    
    while (true)
        char edx_92 = *ecx_158
        char temp75_1 = *esi_86
        bool c_25 = edx_92 u< temp75_1
        
        if (edx_92 == temp75_1)
            if (edx_92 == 0)
                esi_88 = 0
                break
            
            edx_92 = ecx_158[1]
            char temp76_1 = esi_86[1]
            c_25 = edx_92 u< temp76_1
            
            if (edx_92 == temp76_1)
                ecx_158 = &ecx_158[2]
                esi_86 = &esi_86[2]
                
                if (edx_92 != 0)
                    continue
                
                esi_88 = 0
                break
        
        esi_88 = sbb.d(esi_86, esi_86, c_25) | 1
        break
    
    int32_t var_14_53 = 0x1a
    
    if (data_cf65bc != 0 && eax_118 != 0 && *eax_118 != 0)
        char* eax_119 = sub_63d4e0(&var_24)
        int32_t temp77_1 = *(eax_119 + 4)
        *(eax_119 + 4) -= 1
        
        if (temp77_1 == 1)
            sub_64c080(eax_119, *(eax_119 + 0xc) + 0x10)
    
    int32_t var_14_54 = 0xffffffff
    
    if (esi_88 == 0)
        data_b7d424 = 2
    
    char* esi_89 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_show_back")
    char* eax_121 = var_24
    char* ecx_162 = &data_801800
    
    if (eax_121 != 0)
        ecx_162 = eax_121
    
    int32_t esi_91
    
    while (true)
        char edx_95 = *ecx_162
        char temp78_1 = *esi_89
        bool c_26 = edx_95 u< temp78_1
        
        if (edx_95 == temp78_1)
            if (edx_95 == 0)
                esi_91 = 0
                break
            
            edx_95 = ecx_162[1]
            char temp79_1 = esi_89[1]
            c_26 = edx_95 u< temp79_1
            
            if (edx_95 == temp79_1)
                ecx_162 = &ecx_162[2]
                esi_89 = &esi_89[2]
                
                if (edx_95 != 0)
                    continue
                
                esi_91 = 0
                break
        
        esi_91 = sbb.d(esi_89, esi_89, c_26) | 1
        break
    
    int32_t var_14_55 = 0x1b
    
    if (data_cf65bc != 0 && eax_121 != 0 && *eax_121 != 0)
        char* eax_122 = sub_63d4e0(&var_24)
        int32_t temp80_1 = *(eax_122 + 4)
        *(eax_122 + 4) -= 1
        
        if (temp80_1 == 1)
            sub_64c080(eax_122, *(eax_122 + 0xc) + 0x10)
    
    int32_t var_14_56 = 0xffffffff
    
    if (esi_91 == 0)
        data_b7d41c ^= (data_8937c0.o).d
    
    char* esi_92 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_more_extras")
    char* eax_124 = var_24
    char* ecx_166 = &data_801800
    
    if (eax_124 != 0)
        ecx_166 = eax_124
    
    int32_t esi_94
    
    while (true)
        char edx_98 = *ecx_166
        char temp81_1 = *esi_92
        bool c_27 = edx_98 u< temp81_1
        
        if (edx_98 == temp81_1)
            if (edx_98 == 0)
                esi_94 = 0
                break
            
            edx_98 = ecx_166[1]
            char temp82_1 = esi_92[1]
            c_27 = edx_98 u< temp82_1
            
            if (edx_98 == temp82_1)
                ecx_166 = &ecx_166[2]
                esi_92 = &esi_92[2]
                
                if (edx_98 != 0)
                    continue
                
                esi_94 = 0
                break
        
        esi_94 = sbb.d(esi_92, esi_92, c_27) | 1
        break
    
    int32_t var_14_57 = 0x1c
    
    if (data_cf65bc != 0 && eax_124 != 0 && *eax_124 != 0)
        char* eax_125 = sub_63d4e0(&var_24)
        int32_t temp83_1 = *(eax_125 + 4)
        *(eax_125 + 4) -= 1
        
        if (temp83_1 == 1)
            sub_64c080(eax_125, *(eax_125 + 0xc) + 0x10)
    
    int32_t var_14_58 = 0xffffffff
    
    if (esi_94 == 0)
        data_b7d424 = 3
    
    char* esi_95 = *(arg2 + 4)
    sub_63d720(&var_24, "btn_tip_daily_difficulty_close")
    eax_3 = var_24
    
    if (eax_3 != 0)
        edi = eax_3
    
    int32_t esi_97
    
    while (true)
        char ecx_170 = *edi
        char temp84_1 = *esi_95
        bool c_28 = ecx_170 u< temp84_1
        
        if (ecx_170 == temp84_1)
            if (ecx_170 == 0)
                esi_97 = 0
                break
            
            ecx_170 = edi[1]
            char temp85_1 = esi_95[1]
            c_28 = ecx_170 u< temp85_1
            
            if (ecx_170 == temp85_1)
                edi = &edi[2]
                esi_95 = &esi_95[2]
                
                if (ecx_170 != 0)
                    continue
                
                esi_97 = 0
                break
        
        esi_97 = sbb.d(esi_95, esi_95, c_28) | 1
        break
    
    int32_t var_14_59 = 0x1d
    
    if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_63d4e0(&var_24)
        int32_t temp86_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp86_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_14_60 = 0xffffffff
    
    if (esi_97 == 0)
        void* eax_127 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_127 + 0x42d4) |= 4
        data_cc8dc8
        sub_4d8ad0(esi_97)

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
