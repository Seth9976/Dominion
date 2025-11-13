// 函数: sub_58bee0
// 地址: 0x58bee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = __chkstk(0x1494)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t var_82c
int32_t i_4

while (true)
    int32_t eax_2 = ecx[0x541]
    
    if (eax_2 != 3 && eax_2 != 5)
        sub_5ca1d0(ecx)
    
    if (ecx[0x67a] == 0)
        ecx[0x678] += 1
    
    int32_t ecx_2 = ecx[0x66e]
    int32_t edi_1 = 0
    int32_t edx_1 = ecx[0x673]
    uint32_t eax_3 = 0
    int32_t var_884_1 = 0
    uint32_t var_820_1 = 0
    int32_t var_c84[0x100]
    int32_t eax_5
    
    if (ecx_2 s> 0)
        void* esi_1 = &ecx[0xed6e]
        
        do
            if (*(esi_1 - 4) == 1 && *esi_1 == edx_1)
                eax_5 = *(esi_1 - 0x24) << 0x12
                
                if (eax_5 u>> 0x12 != *(esi_1 - 0x24))
                label_58c7b0:
                    sub_63b870(eax_5, &data_801800, "payload() == arg_payload", 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.h", 0x14d, "AbilityID::set_payload")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                ecx_2 = ecx[0x66e]
                edx_1 = ecx[0x673]
                var_c84[edi_1] = eax_5
                eax_3 = var_820_1
                edi_1 = var_884_1 + 1
                var_884_1 = edi_1
            
            eax_3 += 1
            esi_1 += 0xa8
            var_820_1 = eax_3
        while (eax_3 s< ecx_2)
    
    if (edi_1 == 0)
        sub_58b120(ecx)
        ecx[0x672] = ecx[0x671]
        ecx[0x671] = ecx[0x673]
    else
        int32_t esi_2 = var_c84[0]
        void* eax_6 = sub_576940(eax_3, edx_1, ecx, esi_2)
        int32_t* edx_2 = *(eax_6 + 0x7c)
        
        if (edx_2 != 0)
            int32_t ecx_6 = ecx[0x541]
            
            if (ecx_6 != 3 && ecx_6 != 5 && ecx_6 != 4 && ecx_6 != 6)
                void* var_2c_1
                __builtin_memset(&var_2c_1, 0, 0x1c)
                ecx_6.b = ecx_6 == 2
                int128_t* var_28_1
                int32_t var_24_1
                int32_t var_20_1
                int32_t var_1c_1
                int32_t var_18_1
                int32_t var_14_2
                eax_6, edx_2 = sub_61b1b0(eax_6, 0x1c, ecx_6.b, ecx[0x673], 0x14, edx_2, 
                    *(eax_6 + 0x80), var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_1, var_18_1, 
                    var_14_2)
        
        void* eax_7 = sub_576940(eax_6, edx_2, ecx, esi_2)
        *(eax_7 + 0x54) = 0
        ecx[0x66e] -= 1
        __builtin_memcpy(eax_7, ecx[0x66e] * 0xa8 + 0x3b568 + ecx, 0xa8)
        int32_t eax_8 = ecx[0x541]
        
        if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6 && ecx[0x540].b == 0)
            sub_59f9b0(eax_8, ecx[0x673], ecx, ecx[0x674], 8, ecx[0x67a], nullptr, 0, ecx[0x677], 
                ecx[0x679], 0, 0)
        
        int32_t eax_9 = ecx[0x541]
        
        if (eax_9 != 3 && eax_9 != 5 && eax_9 != 4 && eax_9 != 6 && ecx[0x540].b == 0)
            int32_t edx_4 = ecx[0x673]
            int32_t var_2c_3
            __builtin_memset(&var_2c_3, 0, 0x1c)
            int32_t* var_28_3
            int32_t var_24_3
            int32_t var_20_3
            int32_t var_1c_3
            int32_t var_18_3
            int32_t var_14_5
            eax_9 = sub_59f9b0(eax_9, edx_4, ecx, ecx[0x674], 7, var_2c_3, var_28_3, var_24_3, 
                var_20_3, var_1c_3, var_18_3, var_14_5)
        
        sub_581450(
            sub_581450(
                sub_581450(sub_581450(eax_9, ecx[0x673], ecx, 1, 0xffffffff, 0xffffffff), 
                    ecx[0x673], ecx, 4, 0xffffffff, 0xffffffff), 
                ecx[0x673], ecx, 5, 0xffffffff, 0xffffffff), 
            ecx[0x673], ecx, 9, 0xffffffff, 0xffffffff)
    
    if (ecx[0x67c] == 0)
        int32_t eax_16 = sub_58b620(ecx, &ecx[0x67d])
        ecx[0x67c] = eax_16
        
        if (eax_16 == 0)
        label_58c2e0:
            ecx[0x679] += 1
            int32_t edx_14 = 0
            int32_t ecx_22 = ecx[0x34e]
            ecx[0x674] = ecx[0x673]
            int32_t var_830_1 = 0
            
            if (ecx_22 s<= 0)
            label_58c540:
                int32_t esi_12 = ecx[0x675]
                ecx[0x67a] = 0
                
                if (ecx[0x67c] == 0)
                    ecx[0x673] = esi_12
                    int32_t eax_54
                    int32_t edx_32
                    edx_32:eax_54 = sx.q(esi_12 + 1)
                    int32_t temp0_2 = divs.dp.d(edx_32:eax_54, ecx_22)
                    ecx[0x674] = esi_12
                    ecx[0x675] = mods.dp.d(edx_32:eax_54, ecx_22)
                    
                    if (esi_12 == 0)
                        ecx[0x677] += 1
                    
                    if (ecx[0x541] != 5)
                        continue
                    
                    CookieCheckFunction(temp0_2)
                    return temp0_2
                else
                    int32_t var_828
                    int32_t var_18_15
                    int32_t* var_14_18
                    uint32_t i
                    int32_t temp1_2
                    
                    for (i = sub_576b30(sub_574a80(&var_828, esi_12, ecx, 0xe29, &var_828), esi_12, 
                            ecx, 7, 0xe29, 0, 0); i s>= var_828; i = sub_576b30(
                            sub_574a80(&var_828, temp1_2, ecx, var_18_15, var_14_18), temp1_2, ecx, 
                            7, 0xe29, 0, 0))
                        temp1_2 = mods.dp.d(sx.q(ecx[0x675] + 1), ecx[0x34e])
                        var_14_18 = &var_828
                        var_18_15 = 0xe29
                        ecx[0x675] = temp1_2
                    
                    sub_5911e0(i, ecx[0x675], ecx, 7, 0xe29, 0, 0, 0, 0, 0xffffffff, 0, 0)
                    int32_t ecx_41 = ecx[0x675]
                    ecx[0x673] = ecx_41
                    ecx[0x67a] = 0xe29
                    ecx[0x674] = ecx_41
                    ecx[0x34e]
                    ecx[0x675] = mods.dp.d(sx.q(ecx_41 + 1), ecx[0x34e])
                    continue
            else
                while (true)
                    uint32_t eax_27 = 0
                    int32_t edi_4 = mods.dp.d(sx.q(ecx[0x673] + edx_14), ecx_22)
                    uint32_t var_820_2 = 0
                    int32_t i_1 = 0
                    var_82c = edi_4
                    uint32_t var_14_14 = 0
                    int32_t i_5 = 0
                    int32_t var_414[0xf6]
                    
                    if (ecx[0x66e] s> 0)
                        int32_t* esi_7 = &ecx[0xed6e]
                        
                        do
                            if (esi_7[-1] == 0 && *esi_7 == edi_4)
                                char ecx_23 = (esi_7[2]).b
                                
                                if ((ecx_23 & 4) != 0 && ecx[0x671] == edi_4 && ecx[0x672] == edi_4)
                                label_58c376:
                                    eax_5 = esi_7[-9] << 0x12
                                    
                                    if (eax_5 u>> 0x12 != esi_7[-9])
                                        goto label_58c7b0
                                    
                                    i_1 = i_5
                                    var_414[var_820_2] = eax_5
                                    eax_27 = var_14_14 + 1
                                    var_820_2 = eax_27
                                    var_14_14 = eax_27
                                else if ((ecx_23 & 8) != 0 && ecx[0x671] == edi_4)
                                    goto label_58c376
                            
                            i_1 += 1
                            esi_7 = &esi_7[0x2a]
                            i_5 = i_1
                        while (i_1 s< ecx[0x66e])
                    
                    int32_t ecx_27 = 0
                    int32_t var_824_1 = 0
                    
                    if (eax_27 s> 0)
                        do
                            eax_27, i_1 = sub_576940(eax_27, i_1, ecx, var_414[ecx_27])
                            *(eax_27 + 0x54) = 0
                            ecx[0x66e] -= 1
                            __builtin_memcpy(eax_27, ecx[0x66e] * 0xa8 + 0x3b568 + ecx, 0xa8)
                            ecx_27 = var_824_1 + 1
                            var_824_1 = ecx_27
                        while (ecx_27 s< var_820_2)
                        
                        edi_4 = var_82c
                    
                    int32_t eax_30 = 0
                    int32_t i_2 = 0
                    int32_t var_824_2 = 0
                    int32_t var_c8c_1 = 0
                    int32_t i_6 = 0
                    int32_t var_108c[0x100]
                    
                    if (ecx[0x66e] s> 0)
                        int32_t* esi_11 = &ecx[0xed6e]
                        
                        do
                            if (esi_11[-1] == 0 && *esi_11 == edi_4)
                                char ecx_30 = (esi_11[2]).b
                                
                                if (((ecx_30 & 4) == 0 || ecx[0x671] != edi_4
                                        || ecx[0x672] != edi_4)
                                        && ((ecx_30 & 8) == 0 || ecx[0x671] != edi_4))
                                    eax_5 = esi_11[-9] << 0x12
                                    
                                    if (eax_5 u>> 0x12 != esi_11[-9])
                                        goto label_58c7b0
                                    
                                    i_2 = i_6
                                    var_108c[var_824_2] = eax_5
                                    eax_30 = var_c8c_1 + 1
                                    var_824_2 = eax_30
                                    var_c8c_1 = eax_30
                            
                            i_2 += 1
                            esi_11 = &esi_11[0x2a]
                            i_6 = i_2
                        while (i_2 s< ecx[0x66e])
                    
                    void var_1494
                    int32_t ecx_34 = __builtin_memcpy(&var_1494, &var_108c, 0x404)
                    
                    if (eax_30 s> 0)
                        int32_t var_14_16 = ecx_34
                        int32_t var_41c_1 = 0
                        int32_t var_81c
                        uint32_t eax_34
                        int32_t edx_18
                        eax_34, edx_18 = sub_57f120(&var_1494, ecx[0x673], ecx, &var_1494, &var_81c)
                        uint32_t var_41c_2 = eax_34
                        
                        if (eax_34 s> 1)
                            eax_34, edx_18 = sub_591930()
                        label_58c634:
                            int32_t esi_14 = var_81c
                            uint32_t eax_45
                            int32_t edx_28
                            eax_45, edx_28 = sub_5915b0(eax_34, edx_18, ecx, esi_14)
                            ecx[0x67a] = eax_45
                            int32_t* eax_46 = sub_576940(eax_45, edx_28, ecx, esi_14)
                            
                            if (eax_46[0x13] != 0)
                                sub_591930()
                            
                            uint32_t edx_29 = eax_46[0x14]
                            ecx[0x673] = edx_29
                            int32_t eax_47 = eax_46[0x15]
                            ecx[0x674] = eax_47
                            
                            if ((eax_46[0x16].b & 1) != 0)
                                eax_47 = sub_5911e0(eax_47, edx_29, ecx, 9, nullptr, 1, 0, 0, 0, 
                                    0xffffffff, 0, 0)
                                edx_29 = ecx[0x673]
                            
                            if ((eax_46[0x16].b & 2) != 0)
                                sub_5911e0(eax_47, edx_29, ecx, 0x19, nullptr, 1, 0, 0, 0, 
                                    0xffffffff, 0, 0)
                            
                            int32_t eax_48 = ecx[0x674]
                            int32_t esi_15 = ecx[0x673]
                            
                            if (esi_15 != eax_48)
                                int32_t i_3 = 0
                                
                                if (ecx[0x548] s> 0)
                                    void* ecx_47 = &ecx[0x692] + (eax_48 << 2) + 0x3c
                                    
                                    do
                                        int32_t eax_50 = *((esi_15 << 2) + 0x3c
                                            - ((eax_48 << 2) + 0x3c) + ecx_47)
                                        ecx_47 += 0x64
                                        *(ecx_47 - 0x64) |= eax_50
                                        i_3 += 1
                                    while (i_3 s< ecx[0x548])
                            
                            uint32_t eax_51
                            int32_t edx_31
                            eax_51, edx_31 = sub_57f980(ecx, ecx[0x673])
                            
                            if (*eax_46 != 3)
                                eax_51, edx_31 = sub_591930()
                            
                            void* eax_52 = sub_576940(eax_51, edx_31, ecx, var_81c)
                            *(eax_52 + 0x54) = 0
                            ecx[0x66e] -= 1
                            __builtin_memcpy(eax_52, ecx[0x66e] * 0xa8 + 0x3b568 + ecx, 0xa8)
                            break
                        
                        if (eax_34 != 0)
                            goto label_58c634
                    
                    ecx_22 = ecx[0x34e]
                    edx_14 = var_830_1 + 1
                    var_830_1 = edx_14
                    
                    if (edx_14 s>= ecx_22)
                        goto label_58c540
                
                continue
    
    i_4 = 0
    break

if (ecx[0x34e] s> 0)
    do
        int32_t var_834
        
        if (sub_576b30(sub_574a80(&var_834, i_4, ecx, 0xe29, &var_834), i_4, ecx, 7, 0xe29, 0, 0)
                s< var_834)
            goto label_58c2e0
        
        i_4 += 1
    while (i_4 s< ecx[0x34e])

uint32_t count = 0x48
ecx[9] = 0
ecx[0x681].b = 1
void var_87c
memset(&var_87c, 0, count)
var_82c = 0x1e
sub_580700(i_4, &var_82c, 1, &var_87c, 0, nullptr, 0, nullptr)
int32_t esi_6 = ecx[0x67c]
int32_t ecx_18 = 3

if (esi_6 != 3)
    ecx_18 = 0

if (esi_6 == 4)
    ecx_18 = 4

int32_t eax_20 = ecx[0x541]

if (eax_20 != 3 && eax_20 != 5 && eax_20 != 4 && eax_20 != 6 && ecx[0x540].b == 0)
    int32_t edx_13 = 0xffffffff
    
    if (ecx[0x673] == 0xffffffff)
        edx_13 = ecx[0x674]
    
    sub_59f9b0(&ecx[0x67d], 0xffffffff, ecx, edx_13, 9, 0, &ecx[0x67d], ecx_18, esi_6, 0, 0, 0)

void* eax_22 = ecx[0x541]

if (eax_22 != 3 && eax_22 != 5 && eax_22 != 4 && eax_22 != 6)
    void* var_30_5
    __builtin_memset(&var_30_5, 0, 0x20)
    ecx_18.b = eax_22 == 2
    void* var_2c_6
    int128_t* var_28_7
    int32_t var_24_7
    int32_t var_20_7
    int32_t var_1c_12
    int32_t var_18_12
    int32_t var_14_13
    eax_22 = sub_61b1b0(eax_22, 0x1f, ecx_18.b, 0xffffffff, 0, ecx[0x67c], var_30_5, var_2c_6, 
        var_28_7, var_24_7, var_20_7, var_1c_12, var_18_12, var_14_13)

CookieCheckFunction(eax_22)
return eax_22
