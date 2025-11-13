// 函数: sub_5da1c0
// 地址: 0x5da1c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769bd7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_44 = arg1
int32_t var_40 = 0
void* result

if (*(arg1 + 0x18) == 1)
    result = sub_5cb070()

if (*(arg1 + 0x18) == 1 && (result == 0 || *(result + 0x10) == 0x18))
    void* eax_3 = data_cc8d5c
    char const* const var_98
    int32_t var_94_1
    char const* const var_90_1
    char* ecx
    
    if (eax_3 == 0)
        var_90_1 = "GetClient"
        var_94_1 = 0x7b
        var_98 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx = "gClient"
    label_5dab1a:
        sub_63b870(eax_3, &data_801800, ecx, var_98, var_94_1, var_90_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(eax_3 + 0x5068) == 0)
        var_90_1 = "GetActiveConfig"
        var_94_1 = 0x33b6
        ecx = "c.activeGame.gameType != GAME_NONE"
    label_5dab10:
        var_98 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        goto label_5dab1a
    
    char const (** const edi_1)[0xb] = &data_7feca8
    
    while (_stricmp(var_44[1], *edi_1) != 0)
        edi_1 = &edi_1[7]
        
        if (edi_1 == &data_7feddc)
            goto label_5da282
    
    char* result_1
    sub_63d720(&result_1, "btn_Deck")
    char* result_3 = result_1
    char const (* edx_1)[0xb] = *edi_1
    char* const result_13 = &data_801800
    
    if (result_3 != 0)
        result_13 = result_3
    
    int32_t ecx_6
    
    while (true)
        result_3.b = *edx_1
        char temp0_1 = *result_13
        bool c_1 = result_3.b u< temp0_1
        bool z_1 = result_3.b == temp0_1
        char var_35_1 = result_3.b
        result_3 = result_1
        
        if (z_1)
            if (var_35_1 == 0)
                ecx_6 = 0
                break
            
            result_3.b = (*edx_1)[1]
            char temp1_1 = result_13[1]
            c_1 = result_3.b u< temp1_1
            bool z_2 = result_3.b == temp1_1
            char var_35_2 = result_3.b
            result_3 = result_1
            
            if (z_2)
                edx_1 = &(*edx_1)[2]
                result_13 = &result_13[2]
                
                if (var_35_2 != 0)
                    continue
                
                ecx_6 = 0
                break
        
        ecx_6 = sbb.d(result_13, result_13, c_1) | 1
        break
    
    char var_35_3
    
    if (ecx_6 == 0)
        var_35_3 = 1
    
    if (ecx_6 != 0 || var_44[6] != 0)
        var_35_3 = 0
    
    int32_t var_40_1 = 0
    int32_t var_14_1 = 0
    
    if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_5 = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_14_2 = 0xffffffff
    void* eax_14
    uint32_t result_8
    
    if (var_35_3 != 0)
        char* eax_6 = sub_5da050(0xbdfb60)
        int32_t eax_7 = sub_5cda30(data_b80b08)
        
        if (eax_7 == 1 || eax_7 == 4 || eax_7 == 5)
        label_5da499:
            result_8 = data_b604e0
        else
            void* i_1 = data_b809e0
            void* i = i_1
            void* eax_9 = data_b809e4 * 0x1c30 + i
            
            if (i u>= eax_9)
            label_5da3c6:
                result_8 = data_b604e0
            else
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= eax_9)
                        goto label_5da3c6_1
                
                if (i == 0xffffffff)
                label_5da3c6_1:
                    result_8 = data_b604e0
                else
                    result_8 = data_b604e0
                    
                    do
                        if (*(i + 0x2c) == 0 && *(i + 0x168) == 0 && *(i + 0xa4) == 0x3eb)
                            result_1 = nullptr
                            uint32_t result_4 = result_8
                            
                            if (result_8 == 0xffffffff)
                                result_4 = result_1
                            
                            if (*(i + 0xa0) == result_4)
                                int32_t eax_10 = sub_5cbb20(i)
                                
                                if (eax_10 != 0
                                        && sub_5754f0(eax_10, eax_10, 0xb80ad8, 0, 0x1000) != 0)
                                    goto label_5da499
                                
                                i_1 = data_b809e0
                                result_8 = data_b604e0
                        
                        i += 0x1c30
                        void* eax_13 = data_b809e4 * 0x1c30 + i_1
                        
                        if (i u>= eax_13)
                            break
                        
                        while ((*(i + 0x1c28) & 0xffff0000) == 0)
                            i += 0x1c30
                            
                            if (i u>= eax_13)
                                goto label_5da3cf
                    while (i != 0xffffffff)
            
        label_5da3cf:
            
            if (eax_6 != 1 && eax_6 != 2)
                goto label_5da9a1
        
        eax_14 = nullptr
        
        if (result_8 == 0xffffffff)
            result_8 = 0
        
        goto label_5da4a7
    
    sub_63d720(&result_1, "btn_Discard")
    char* result_5 = result_1
    char* const result_14 = &data_801800
    char const (* edx_6)[0xb] = *edi_1
    
    if (result_5 != 0)
        result_14 = result_5
    
    int32_t ecx_15
    
    while (true)
        result_5.b = *edx_6
        char temp3_1 = *result_14
        bool c_2 = result_5.b u< temp3_1
        bool z_3 = result_5.b == temp3_1
        char var_35_4 = result_5.b
        result_5 = result_1
        
        if (z_3)
            if (var_35_4 == 0)
                ecx_15 = 0
                break
            
            result_5.b = (*edx_6)[1]
            char temp4_1 = result_14[1]
            c_2 = result_5.b u< temp4_1
            bool z_4 = result_5.b == temp4_1
            char var_35_5 = result_5.b
            result_5 = result_1
            
            if (z_4)
                edx_6 = &(*edx_6)[2]
                result_14 = &result_14[2]
                
                if (var_35_5 != 0)
                    continue
                
                ecx_15 = 0
                break
        
        ecx_15 = sbb.d(result_14, result_14, c_2) | 1
        break
    
    char var_35_6
    
    if (ecx_15 == 0)
        var_35_6 = 1
    
    if (ecx_15 != 0 || var_44[6] != 0)
        var_35_6 = 0
    
    int32_t var_40_3 = 0
    int32_t var_14_3 = 1
    
    if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_16 = sub_63d4e0(&result_1)
        int32_t temp5_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_14_4 = 0xffffffff
    char* eax_18
    
    if (var_35_6 == 0)
        sub_63d720(&result_1, "grpOpponentDeck")
        char* result_6 = result_1
        char* result_15 = &data_801800
        void* edx_10 = *edi_1
        
        if (result_6 != 0)
            result_15 = result_6
        
        int32_t ecx_22
        
        while (true)
            result_6.b = *edx_10
            char temp6_1 = *result_15
            bool c_3 = result_6.b u< temp6_1
            bool z_5 = result_6.b == temp6_1
            char var_35_7 = result_6.b
            result_6 = result_1
            
            if (z_5)
                if (var_35_7 == 0)
                    ecx_22 = 0
                    break
                
                result_6.b = *(edx_10 + 1)
                char temp7_1 = result_15[1]
                c_3 = result_6.b u< temp7_1
                bool z_6 = result_6.b == temp7_1
                char var_35_8 = result_6.b
                result_6 = result_1
                
                if (z_6)
                    edx_10 += 2
                    result_15 = &result_15[2]
                    
                    if (var_35_8 != 0)
                        continue
                    
                    ecx_22 = 0
                    break
            
            ecx_22 = sbb.d(result_15, result_15, c_3) | 1
            break
        
        char var_35_9
        
        if (ecx_22 == 0)
            var_35_9 = 1
        
        if (ecx_22 != 0 || var_44[6] != 0)
            var_35_9 = 0
        
        int32_t var_40_4 = 0
        int32_t var_14_5 = 2
        
        if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
            char* eax_19 = sub_63d4e0(&result_1)
            int32_t temp10_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_14_6 = 0xffffffff
        
        if (var_35_9 == 0)
            sub_63d720(&result_1, "grpOpponentDiscard")
            char* result_7 = result_1
            char* result_16 = &data_801800
            void* edx_14 = *edi_1
            
            if (result_7 != 0)
                result_16 = result_7
            
            int32_t ecx_29
            
            while (true)
                result_7.b = *edx_14
                char temp12_1 = *result_16
                bool c_4 = result_7.b u< temp12_1
                bool z_7 = result_7.b == temp12_1
                char var_35_10 = result_7.b
                result_7 = result_1
                
                if (z_7)
                    if (var_35_10 == 0)
                        ecx_29 = 0
                        break
                    
                    result_7.b = *(edx_14 + 1)
                    char temp13_1 = result_16[1]
                    c_4 = result_7.b u< temp13_1
                    bool z_8 = result_7.b == temp13_1
                    char var_35_11 = result_7.b
                    result_7 = result_1
                    
                    if (z_8)
                        edx_14 += 2
                        result_16 = &result_16[2]
                        
                        if (var_35_11 != 0)
                            continue
                        
                        ecx_29 = 0
                        break
                
                ecx_29 = sbb.d(result_16, result_16, c_4) | 1
                break
            
            char var_35_12
            
            if (ecx_29 == 0)
                var_35_12 = 1
            
            if (ecx_29 != 0 || var_44[6] != 0)
                var_35_12 = 0
            
            int32_t var_40_5 = 0
            int32_t var_14_7 = 3
            
            if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
                char* eax_21 = sub_63d4e0(&result_1)
                int32_t temp14_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp14_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_14_8 = 0xffffffff
            
            if (var_35_12 == 0)
                sub_63d720(&result_1, "grpScore")
                int32_t var_14_9 = 4
                char* result_11 = &data_801800
                char* result_9 = result_1
                char const (* ecx_35)[0xb] = *edi_1
                int32_t var_40_6 = 0x10
                
                if (result_9 != 0)
                    result_11 = result_9
                
                int32_t eax_24
                
                while (true)
                    char const edx_18 = *ecx_35
                    char temp15_1 = *result_11
                    bool c_5 = edx_18 u< temp15_1
                    
                    if (edx_18 == temp15_1)
                        if (edx_18 == 0)
                            eax_24 = 0
                            break
                        
                        edx_18 = (*ecx_35)[1]
                        char temp16_1 = result_11[1]
                        c_5 = edx_18 u< temp16_1
                        
                        if (edx_18 == temp16_1)
                            ecx_35 = &(*ecx_35)[2]
                            result_11 = &result_11[2]
                            
                            if (edx_18 != 0)
                                continue
                            
                            eax_24 = 0
                            break
                    
                    eax_24 = sbb.d(result_11, result_11, c_5) | 1
                    break
                
                char var_35_13
                int32_t eax_25
                
                if (eax_24 == 0)
                    eax_25 = sub_5da0c0(0xbdfb60)
                    var_35_13 = 1
                
                if (eax_24 != 0 || eax_25 != 2)
                    var_35_13 = 0
                
                int32_t var_14_10 = 5
                
                if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
                    char* eax_26 = sub_63d4e0(&result_1)
                    int32_t temp17_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp17_1 == 1)
                        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        result_1 = &data_801800
                
                int32_t var_14_11 = 0xffffffff
                
                if (var_35_13 == 0)
                    sub_63d720(&result_1, "grpOpponentScore")
                    int32_t var_14_12 = 6
                    char* result_12 = &data_801800
                    char* result_10 = result_1
                    char const (* ecx_39)[0xb] = *edi_1
                    int32_t var_40_7 = 0x20
                    
                    if (result_10 != 0)
                        result_12 = result_10
                    
                    while (true)
                        char const edx_21 = *ecx_39
                        char temp18_1 = *result_12
                        bool c_6 = edx_21 u< temp18_1
                        
                        if (edx_21 == temp18_1)
                            if (edx_21 == 0)
                                eax_18 = nullptr
                                break
                            
                            edx_21 = (*ecx_39)[1]
                            char temp19_1 = result_12[1]
                            c_6 = edx_21 u< temp19_1
                            
                            if (edx_21 == temp19_1)
                                ecx_39 = &(*ecx_39)[2]
                                result_12 = &result_12[2]
                                
                                if (edx_21 != 0)
                                    continue
                                
                                eax_18 = nullptr
                                break
                        
                        eax_18 = sbb.d(result_12, result_12, c_6) | 1
                        break
                    
                    char var_35_14
                    
                    if (eax_18 != 0)
                        var_35_14 = 0
                    else
                        var_35_14 = 1
                        
                        if (sub_5da0c0(0xbdfb60) != 2)
                            var_35_14 = 0
                    
                    int32_t var_40_8 = 0
                    int32_t var_14_13 = 7
                    
                    if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
                        eax_18 = sub_63d4e0(&result_1)
                        int32_t temp20_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp20_1 == 1)
                            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_14_14 = 0xffffffff
                    
                    if (var_35_14 == 0)
                        goto label_5da99b
                    
                    int32_t esi_3 = data_b604e0
                    void* edi_4 = var_44[2]
                    
                    if (esi_3 == 0xffffffff)
                        esi_3 = 0
                    
                    void* eax_30 = sub_4b95e0()
                    data_cf6498 = 0
                    void* edx_25 = edi_4 + 1 + esi_3
                    void* ecx_43 = edx_25 - eax_30
                    
                    if (edx_25 s< eax_30)
                        ecx_43 = edx_25
                    
                    data_cf6494 = ecx_43
                else
                    int32_t eax_27 = data_b604e0
                    data_cf6498 = 0
                    
                    if (eax_27 == 0xffffffff)
                        eax_27 = 0
                    
                    data_cf6494 = eax_27
                
                sub_5931d0(0xb80ad8, 0xcd3198)
                data_8db660 = 0x7ec
                result.b = 1
            else
                eax_18 = sub_5da050(0xbdfb60)
                
                if (eax_18 != 1 && eax_18 != 2)
                    goto label_5da99b
                
                int32_t esi_2 = data_b604e0
                int32_t edi_3 = var_44[2]
                
                if (esi_2 == 0xffffffff)
                    esi_2 = 0
                
                eax_14 = sub_4b95e0()
                uint32_t result_18 = edi_3 + 1 + esi_2
                result_8 = result_18 - eax_14
                
                if (result_18 s< eax_14)
                    result_8 = result_18
                
                sub_5ce8b0(sub_5ce6d0(eax_14, 0x3ec, result_8, 0, 0, 0))
                result.b = 1
        else
            eax_18 = sub_5da050(0xbdfb60)
            
            if (eax_18 != 1 && eax_18 != 2)
                goto label_5da99b
            
            int32_t esi_1 = data_b604e0
            int32_t edi_2 = var_44[2]
            
            if (esi_1 == 0xffffffff)
                esi_1 = 0
            
            eax_14 = sub_4b95e0()
            uint32_t result_17 = edi_2 + 1 + esi_1
            result_8 = result_17 - eax_14
            
            if (result_17 s< eax_14)
                result_8 = result_17
            
        label_5da4a7:
            sub_5ce8b0(sub_5ce6d0(eax_14, 0x3eb, result_8, 0, 0, 0))
            result.b = 1
    else
        int32_t eax_17 = sub_5da050(0xbdfb60)
        
        if (sub_5cda30(data_b80b08) == 2 || eax_17 == 1 || eax_17 == 2)
            result_8 = data_b604e0
            
            if (result_8 == 0xffffffff)
                result_8 = 0
            
            sub_5ce8b0(sub_5ce6d0(nullptr, 0x3ec, result_8, 0, 0, 0))
            result.b = 1
        else
        label_5da99b:
            result_8 = data_b604e0
        label_5da9a1:
            eax_18.b = edi_1[6].b
            int32_t edx_26 = edi_1[4]
            char var_35_15 = eax_18.b
            int32_t eax_31 = edi_1[3]
            int32_t eax_32 = edi_1[2]
            int32_t* esi_4 = *edi_1[1]
            eax_3 = *var_44
            data_be220c = esi_4
            
            if (esi_4 == 0)
                var_90_1 = "TaptipDisplayUI"
                var_94_1 = 0x3501
                ecx = "gDomClient.tapTip"
                goto label_5dab10
            
            if (edi_1[5] != 1)
                data_be2210 = 0xffffffff
            else
                result_1 = nullptr
                
                if (result_8 == 0xffffffff)
                    result_8 = result_1
                
                data_be2210 = result_8
            
            data_be2224 = edx_26
            data_be2218 = 1
            data_be221c = 0
            data_be2220 = eax_3
            void var_60
            int128_t var_34 = *sub_67be80(&var_60)
            void var_80
            int128_t* eax_37 = sub_5d8a80(&var_80, esi_4, &var_34, &var_80, edx_26)
            data_be2228 = *eax_37
            int128_t xmm0_3 = eax_37[1]
            data_be2248 = eax_32
            data_be224c = eax_31
            int32_t eax_39
            eax_39.b = var_35_15
            data_be2238 = xmm0_3
            data_be2254 = eax_39.b
            sub_63d720(&result_1, "grpActions")
            result = result_1
            void* result_2 = &data_801800
            char const (* ecx_47)[0xb] = *edi_1
            
            if (result != 0)
                result_2 = result
            
            int32_t esi_6
            
            while (true)
                char const edx_28 = *ecx_47
                char temp8_1 = *result_2
                bool c_7 = edx_28 u< temp8_1
                
                if (edx_28 == temp8_1)
                    if (edx_28 == 0)
                        esi_6 = 0
                        break
                    
                    edx_28 = (*ecx_47)[1]
                    char temp9_1 = *(result_2 + 1)
                    c_7 = edx_28 u< temp9_1
                    
                    if (edx_28 == temp9_1)
                        ecx_47 = &(*ecx_47)[2]
                        result_2 += 2
                        
                        if (edx_28 != 0)
                            continue
                        
                        esi_6 = 0
                        break
                
                esi_6 = sbb.d(result_2, result_2, c_7) | 1
                break
            
            int32_t var_14_15 = 8
            
            if (data_cf65bc != 0 && result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp11_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
            
            int32_t var_14_16 = 0xffffffff
            
            if (esi_6 != 0)
                result.b = 1
            else
                sub_5ee260(esi_6 + 0x1a)
                result.b = 1
else
label_5da282:
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
