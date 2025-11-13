// 函数: sub_4b5230
// 地址: 0x4b5230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))

if ((*arg1 | arg1[1]) == 0 && (*(eax_2 + 0x4260) | *(eax_2 + 0x4264)) == 0)
    int32_t eax_3
    uint32_t edx_2
    eax_3, edx_2 = _Xtime_get_ticks()
    uint32_t eax_4
    int32_t edx_3
    eax_4, edx_3 = __alldiv(eax_3, edx_2, 0x989680, 0)
    *(eax_2 + 0x4260) = eax_4
    *(eax_2 + 0x4264) = edx_3

if ((arg1[2] | arg1[3]) == 0 && (*(eax_2 + 0x4268) | *(eax_2 + 0x426c)) == 0)
    int32_t eax_9
    uint32_t edx_4
    eax_9, edx_4 = _Xtime_get_ticks()
    uint32_t eax_10
    int32_t edx_5
    eax_10, edx_5 = __alldiv(eax_9, edx_4, 0x989680, 0)
    *(eax_2 + 0x4268) = eax_10
    *(eax_2 + 0x426c) = edx_5

if ((arg1[4] | arg1[5]) == 0 && (*(eax_2 + 0x4270) | *(eax_2 + 0x4274)) == 0)
    int32_t eax_15
    uint32_t edx_6
    eax_15, edx_6 = _Xtime_get_ticks()
    uint32_t eax_16
    int32_t edx_7
    eax_16, edx_7 = __alldiv(eax_15, edx_6, 0x989680, 0)
    *(eax_2 + 0x4270) = eax_16
    *(eax_2 + 0x4274) = edx_7

if ((arg1[6] | arg1[7]) == 0 && (*(eax_2 + 0x4278) | *(eax_2 + 0x427c)) == 0)
    int32_t eax_21
    uint32_t edx_8
    eax_21, edx_8 = _Xtime_get_ticks()
    uint32_t eax_22
    int32_t edx_9
    eax_22, edx_9 = __alldiv(eax_21, edx_8, 0x989680, 0)
    *(eax_2 + 0x4278) = eax_22
    *(eax_2 + 0x427c) = edx_9

if ((arg1[8] | arg1[9]) == 0 && (*(eax_2 + 0x4280) | *(eax_2 + 0x4284)) == 0)
    int32_t eax_27
    uint32_t edx_10
    eax_27, edx_10 = _Xtime_get_ticks()
    uint32_t eax_28
    int32_t edx_11
    eax_28, edx_11 = __alldiv(eax_27, edx_10, 0x989680, 0)
    *(eax_2 + 0x4280) = eax_28
    *(eax_2 + 0x4284) = edx_11

if ((arg1[0xa] | arg1[0xb]) == 0 && (*(eax_2 + 0x4288) | *(eax_2 + 0x428c)) == 0)
    int32_t eax_33
    uint32_t edx_12
    eax_33, edx_12 = _Xtime_get_ticks()
    uint32_t eax_34
    int32_t edx_13
    eax_34, edx_13 = __alldiv(eax_33, edx_12, 0x989680, 0)
    *(eax_2 + 0x4288) = eax_34
    *(eax_2 + 0x428c) = edx_13

int32_t esi = *(eax_2 + 0x4264)
int32_t edx_14 = arg1[1]
int32_t ecx_4 = *(eax_2 + 0x4260)
int32_t eax_35 = *arg1
char var_2e1 = 0
char* var_2d8
void* _Destination
void* result

if (esi u> edx_14)
label_4b5419:
    var_2e1 = 1
    int32_t eax_36
    uint32_t edx_16
    eax_36, edx_16 = _Xtime_get_ticks()
    uint32_t eax_37
    int32_t edx_17
    eax_37, edx_17 = __alldiv(eax_36, edx_16, 0x989680, 0)
    *(eax_2 + 0x4260) = eax_37
    char* _Source = &data_801800
    var_2d8 = eax_37
    *(eax_2 + 0x4264) = edx_17
    char* _Source_1 = *eax_2
    
    if (_Source_1 != 0)
        _Source = _Source_1
    
    int32_t var_2d4_1 = edx_17
    strncpy(&_Destination, _Source, 0x10)
    result = data_cc8d5c
    char var_2c1_1 = 0
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_9 = *(result + 0x14)
    void* edx_18 = data_147abf4
    
    if (ecx_9 == 0)
        goto label_4b54c7
    
    uint32_t esi_2 = zx.d(ecx_9.w)
    
    if (esi_2 u>= *(edx_18 + 4))
        goto label_4b54c7
    
    void* esi_4 = esi_2 * 0x64 + *edx_18
    
    if (*(esi_4 + 0x60) != ecx_9 || esi_4 == 0)
        goto label_4b54c7
    
    int32_t var_2f4_2 = 0xf42bf
    sub_689e00(result, 0x18, esi_4 + 0x50)
    sub_689be0(&var_2d8, 0x18, esi_4 + 0x50, &var_2d8)
    goto label_4b54c2

if (esi u>= edx_14 && ecx_4 u>= eax_35)
    if (esi u< edx_14 || (esi u<= edx_14 && ecx_4 u<= eax_35))
        goto label_4b54c2
    
    goto label_4b5419

result = data_cc8d5c

if (result != 0)
    int32_t edx_15 = *(result + 0x14)
    void* esi_1 = data_147abf4
    
    if (edx_15 == 0)
        goto label_4b54c7
    
    uint32_t ecx_5 = zx.d(edx_15.w)
    
    if (ecx_5 u>= *(esi_1 + 4))
        goto label_4b54c7
    
    void* ecx_7 = ecx_5 * 0x64 + *esi_1
    
    if (*(ecx_7 + 0x60) != edx_15 || ecx_7 == 0)
        goto label_4b54c7
    
    int32_t var_2f4_1 = 0xf42be
    sub_689e00(result, 0, ecx_7 + 0x50)
label_4b54c2:
    result = data_cc8d5c
label_4b54c7:
    int32_t esi_5 = arg1[3]
    int32_t edx_19 = *(eax_2 + 0x4268)
    int32_t ecx_12 = arg1[2]
    int32_t temp0_1 = *(eax_2 + 0x426c)
    char* var_2c0
    
    if (temp0_1 u> esi_5)
    label_4b5546:
        var_2e1 = 1
        int32_t eax_40
        uint32_t edx_21
        eax_40, edx_21 = _Xtime_get_ticks()
        uint32_t eax_41
        int32_t edx_22
        eax_41, edx_22 = __alldiv(eax_40, edx_21, 0x989680, 0)
        *(eax_2 + 0x4268) = eax_41
        var_2c0 = eax_41
        int32_t var_2b8_1 = *(eax_2 + 8)
        result = data_cc8d5c
        *(eax_2 + 0x426c) = edx_22
        int32_t var_2bc_1 = edx_22
        
        if (result != 0)
            int32_t eax_43 = *(result + 0x14)
            void* ecx_17 = data_147abf4
            
            if (eax_43 != 0)
                uint32_t edx_23 = zx.d(eax_43.w)
                
                if (edx_23 u< *(ecx_17 + 4))
                    void* esi_7 = edx_23 * 0x64 + *ecx_17
                    
                    if (*(esi_7 + 0x60) == eax_43 && esi_7 != 0)
                        int32_t var_2f4_5 = 0xf42c1
                        sub_689e00(eax_43, 0x10, esi_7 + 0x50)
                        sub_689be0(&var_2c0, 0x10, esi_7 + 0x50, &var_2c0)
            
            goto label_4b55e0
    else if (temp0_1 u>= esi_5 && edx_19 u>= ecx_12)
        int32_t temp1_1 = *(eax_2 + 0x426c)
        
        if (temp1_1 u>= esi_5 && (temp1_1 u> esi_5 || edx_19 u> ecx_12))
            goto label_4b5546
        
    label_4b55e0:
        void var_290
        memset(&var_290, 0, 0x280)
        int32_t eax_45 = sub_4b9b40(&var_290)
        int32_t var_298_1 = eax_45
        void* var_2a0_1 = &var_290
        int32_t var_2e0
        int32_t eax_46 = sub_4e4260(eax_45, eax_45, &var_290, &var_2e0)
        int32_t esi_8 = var_2e0
        char* var_2a8
        
        if (eax_46 != *(eax_2 + 0x6ed4) || esi_8 != *(eax_2 + 0x6ed8)
                || *(eax_2 + 0x4270) != arg1[4] || *(eax_2 + 0x4274) != arg1[5])
            int32_t eax_49
            uint32_t edx_25
            eax_49, edx_25 = _Xtime_get_ticks()
            uint32_t eax_50
            int32_t edx_26
            eax_50, edx_26 = __alldiv(eax_49, edx_25, 0x989680, 0)
            *(eax_2 + 0x6ed4) = eax_46
            void* ecx_23 = data_cc8d5c
            *(eax_2 + 0x4270) = eax_50
            *(eax_2 + 0x4274) = edx_26
            *(eax_2 + 0x6ed8) = esi_8
            var_2a8 = eax_50
            int32_t var_2a4_1 = edx_26
            
            if (ecx_23 == 0)
                sub_63b870(eax_50, &data_801800, "gClient", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_68b720(&var_2a8, 0xf42c2, *(ecx_23 + 0x14), data_1597d58, &var_2a8)
            var_2e1 = 1
        
        int32_t esi_9 = *(eax_2 + 0x427c)
        int32_t edx_27 = arg1[7]
        int32_t ecx_25 = *(eax_2 + 0x4278)
        int32_t eax_52 = arg1[6]
        
        if (esi_9 u> edx_27)
        label_4b5729:
            var_2e1 = 1
            int32_t eax_53
            uint32_t edx_29
            eax_53, edx_29 = _Xtime_get_ticks()
            uint32_t eax_54
            int32_t edx_30
            eax_54, edx_30 = __alldiv(eax_53, edx_29, 0x989680, 0)
            *(eax_2 + 0x4278) = eax_54
            void* esi_11 = eax_2 + 0x58ec
            var_2c0 = eax_54
            int32_t ecx_30 = 0
            int32_t eax_55 = *(eax_2 + 0x63dc)
            *(eax_2 + 0x427c) = edx_30
            int32_t var_2bc_2 = edx_30
            int32_t i_2 = eax_55 << 2
            
            if (i_2 != 0)
                int32_t i
                
                do
                    char eax_56 = *esi_11
                    esi_11 += 1
                    ecx_30 = ecx_30 u>> 8 ^ *(((zx.d(eax_56) ^ zx.d(ecx_30.b)) << 2) + &data_7ffd70)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                eax_55 = *(eax_2 + 0x63dc)
            
            int32_t var_2ac_1 = ecx_30
            void* var_2b8_2 = eax_2 + 0x58ec
            void* ecx_33 = data_cc8d5c
            int32_t var_2b0_1 = eax_55
            
            if (ecx_33 != 0)
                sub_68b720(&var_2c0, 0xf42c4, *(ecx_33 + 0x14), data_1597d48, &var_2c0)
                goto label_4b57cb
            
            sub_63b870(eax_55, &data_801800, "gClient", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (esi_9 u>= edx_27 && ecx_25 u>= eax_52)
            if (esi_9 u< edx_27 || (esi_9 u<= edx_27 && ecx_25 u<= eax_52))
                goto label_4b57cb
            
            goto label_4b5729
        
        result = data_cc8d5c
        
        if (result != 0)
            int32_t edx_28 = *(result + 0x14)
            void* esi_10 = data_147abf4
            
            if (edx_28 != 0)
                uint32_t ecx_26 = zx.d(edx_28.w)
                
                if (ecx_26 u< *(esi_10 + 4))
                    void* ecx_28 = ecx_26 * 0x64 + *esi_10
                    
                    if (*(ecx_28 + 0x60) == edx_28 && ecx_28 != 0)
                        int32_t var_2f4_9 = 0xf42c3
                        sub_689e00(result, 0, ecx_28 + 0x50)
                    label_4b57cb:
                        result = data_cc8d5c
            
            int32_t esi_12 = arg1[9]
            int32_t edx_31 = *(eax_2 + 0x4280)
            int32_t ecx_35 = arg1[8]
            int32_t temp3_1 = *(eax_2 + 0x4284)
            
            if (temp3_1 u> esi_12)
            label_4b5852:
                var_2e1 = 1
                int32_t eax_60
                uint32_t edx_33
                eax_60, edx_33 = _Xtime_get_ticks()
                uint32_t eax_61
                int32_t edx_34
                eax_61, edx_34 = __alldiv(eax_60, edx_33, 0x989680, 0)
                *(eax_2 + 0x4280) = eax_61
                void* esi_14 = eax_2 + 0x56e8
                var_2d8 = eax_61
                int32_t ecx_40 = 0
                int32_t eax_62 = *(eax_2 + 0x58e8)
                *(eax_2 + 0x4284) = edx_34
                int32_t var_2d4_2 = edx_34
                int32_t i_3 = eax_62 << 3
                
                if (i_3 != 0)
                    int32_t i_1
                    
                    do
                        char eax_63 = *esi_14
                        esi_14 += 1
                        ecx_40 =
                            ecx_40 u>> 8 ^ *(((zx.d(eax_63) ^ zx.d(ecx_40.b)) << 2) + &data_7ffd70)
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    eax_62 = *(eax_2 + 0x58e8)
                
                int32_t var_2c4_1 = ecx_40
                _Destination = eax_2 + 0x56e8
                void* ecx_43 = data_cc8d5c
                int32_t var_2c8_1 = eax_62
                
                if (ecx_43 != 0)
                    sub_68b720(&var_2d8, 0xf42c6, *(ecx_43 + 0x14), data_1597d50, &var_2d8)
                    goto label_4b58f3
                
                sub_63b870(eax_62, &data_801800, "gClient", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (temp3_1 u>= esi_12 && edx_31 u>= ecx_35)
                int32_t temp5_1 = *(eax_2 + 0x4284)
                
                if (temp5_1 u< esi_12 || (temp5_1 u<= esi_12 && edx_31 u<= ecx_35))
                    goto label_4b58f8
                
                goto label_4b5852
            
            if (result != 0)
                int32_t edx_32 = *(result + 0x14)
                void* esi_13 = data_147abf4
                
                if (edx_32 == 0)
                    goto label_4b58f8
                
                uint32_t ecx_36 = zx.d(edx_32.w)
                
                if (ecx_36 u>= *(esi_13 + 4))
                    goto label_4b58f8
                
                void* ecx_38 = ecx_36 * 0x64 + *esi_13
                
                if (*(ecx_38 + 0x60) != edx_32 || ecx_38 == 0)
                    goto label_4b58f8
                
                int32_t var_2f4_11 = 0xf42c5
                sub_689e00(result, 0, ecx_38 + 0x50)
            label_4b58f3:
                result = data_cc8d5c
            label_4b58f8:
                void* esi_15 = arg1[0xb]
                int32_t ecx_45 = arg1[0xa]
                int32_t ebx_1 = *(eax_2 + 0x428c)
                int32_t edx_35 = *(eax_2 + 0x4288)
                
                if (ebx_1 u> esi_15)
                label_4b5982:
                    int32_t eax_67
                    uint32_t edx_37
                    eax_67, edx_37 = _Xtime_get_ticks()
                    uint32_t eax_68
                    int32_t edx_38
                    eax_68, edx_38 = __alldiv(eax_67, edx_37, 0x989680, 0)
                    int64_t xmm0_1 = *(eax_2 + 0x71f4)
                    *(eax_2 + 0x4288) = eax_68
                    var_2a8 = eax_68
                    int32_t var_298_2 = *(eax_2 + 0x71fc)
                    result = data_cc8d5c
                    *(eax_2 + 0x428c) = edx_38
                    int32_t var_2a4_2 = edx_38
                    var_2a0_1.q = xmm0_1
                    
                    if (result != 0)
                        int32_t eax_70 = *(result + 0x14)
                        void* ecx_53 = data_147abf4
                        
                        if (eax_70 != 0)
                            uint32_t edx_39 = zx.d(eax_70.w)
                            
                            if (edx_39 u< *(ecx_53 + 4))
                                esi_15 = edx_39 * 0x64 + *ecx_53
                                
                                if (*(esi_15 + 0x60) == eax_70 && esi_15 != 0)
                                    int32_t var_2f4_14 = 0xf42c8
                                    sub_689e00(eax_70, 0x18, esi_15 + 0x50)
                                    sub_689be0(&var_2a8, 0x18, esi_15 + 0x50, &var_2a8)
                        
                        goto label_4b5958
                else
                    if (ebx_1 u>= esi_15 && edx_35 u>= ecx_45)
                        if (ebx_1 u>= esi_15 && (ebx_1 u> esi_15 || edx_35 u> ecx_45))
                            goto label_4b5982
                        
                    label_4b5951:
                        
                        if (var_2e1 == 0)
                            CookieCheckFunction(result)
                            return result
                        
                    label_4b5958:
                        data_cc8dc8
                        result = sub_4d8ad0(esi_15)
                        CookieCheckFunction(result)
                        return result
                    
                    if (result != 0)
                        result = *(result + 0x14)
                        void* edx_36 = data_147abf4
                        
                        if (result != 0)
                            uint32_t ecx_46 = zx.d(result.w)
                            
                            if (ecx_46 u< *(edx_36 + 4))
                                void* ecx_48 = ecx_46 * 0x64 + *edx_36
                                
                                if (*(ecx_48 + 0x60) == result && ecx_48 != 0)
                                    int32_t var_2f4_13 = 0xf42c7
                                    result = sub_689e00(result, 0, ecx_48 + 0x50)
                        
                        goto label_4b5951
    else if (result != 0)
        int32_t eax_39 = *(result + 0x14)
        void* edx_20 = data_147abf4
        
        if (eax_39 != 0)
            uint32_t ecx_13 = zx.d(eax_39.w)
            
            if (ecx_13 u< *(edx_20 + 4))
                void* ecx_15 = ecx_13 * 0x64 + *edx_20
                
                if (*(ecx_15 + 0x60) == eax_39 && ecx_15 != 0)
                    int32_t var_2f4_4 = 0xf42c0
                    sub_689e00(eax_39, 0, ecx_15 + 0x50)
        
        goto label_4b55e0

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
