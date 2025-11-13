// 函数: sub_580700
// 地址: 0x580700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x2080)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t* ebx = ecx
int32_t* eax_3 = arg6
int32_t* var_2044 = ebx
int32_t* var_2070 = eax_3

if (arg8 != 0)
    *arg8 = 0

char const* const var_1c_3
int32_t var_18
char const* const var_14
char* ecx_2

if (arg3 s> 0)
    sub_57ff10(eax_3, edx, ebx, *arg2, eax_3, arg7)
    
    if (sub_57fa40(*arg2) != 0)
        int32_t eax_5 = ebx[0x541]
        
        if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6 && ebx[0x540].b == 0)
            int32_t eax_6 = edx
            
            if (edx == ebx[0x673])
                eax_6 = ebx[0x674]
            
            int32_t var_2c
            __builtin_memset(&var_2c, 0, 0x1c)
            int32_t* var_28
            int32_t var_24
            int32_t var_20
            int32_t var_1c_2
            int32_t var_18_2
            int32_t var_14_2
            sub_59f9b0(eax_6, edx, ebx, eax_6, 0x1f, var_2c, var_28, var_24, var_20, var_1c_2, 
                var_18_2, var_14_2)
    
    char var_2039_1 = 0
    int32_t var_1428_1 = 0
    int32_t var_1024_1 = 0
    int32_t var_c20_1 = 0
    int32_t var_81c_1 = 0
    int32_t var_418_1 = 0
    TEB* fsbase
    eax_3 = *(*fsbase->ThreadLocalStoragePointer + 0xf010)
    int32_t var_14_3 = 0
    int32_t var_2060_1 = 0
    int32_t var_207c_1 = 0
    int32_t temp2_1 = data_cc8dd8
    
    if (eax_3 s>= temp2_1)
        if (eax_3 != temp2_1)
            void* eax_9 = sub_5734e0()
            int32_t edx_3 = ebx[0x68a] + 1
            var_2060_1 = edx_3
            int32_t eax_10 = *(eax_9 + 0x38)
            ebx[0x68a] = edx_3
            var_207c_1 = eax_10
            *(eax_9 + 0x38) = edx_3
        
    label_580890:
        int32_t ecx_7 = ebx[0x34e]
        int32_t edx_4 = 0
        char var_203a_1 = 0
        int32_t var_2078_1 = 0
        
        if (ecx_7 s> 0)
        label_5808ba:
            uint32_t var_2040_1 = 0
            int32_t temp1_1 = mods.dp.d(sx.q(ebx[0x673] + edx_4), ecx_7)
            int32_t eax_15
            int32_t edx_7
            edx_7:eax_15 = sx.q(ebx[0x683])
            uint32_t var_2050_1 = 0
            int32_t var_1c38_1 = 0
            int32_t ecx_8 = temp1_1
            int32_t var_205c_1 = edx_7
            void* eax_17 = &(&__saved_ebp)[ecx_8 * 0x101 - 0x609]
            
            while (true)
                int32_t edi_1 = 0
                int32_t var_1830_1 = 0
                int32_t var_1c30[0x100]
                
                do
                    if (edx == ecx_8 || edx == 0xffffffff)
                        sub_57de10(arg2, ebx, &var_1c30, ecx_8, eax_15, edx_7, var_2060_1, 
                            arg2[edi_1], arg4, arg5, var_2070, arg7)
                    else
                        int32_t var_14_4 = edx
                        sub_57e8c0(arg2, ebx, &var_1c30, ecx_8, eax_15, edx_7, var_2060_1, 
                            arg2[edi_1], arg4, ecx_8, var_2070, arg7)
                    
                    ecx_8 = temp1_1
                    edi_1 += 1
                    edx_7 = var_205c_1
                while (edi_1 s< arg3)
                
                sub_57f5b0(sub_57f790(ebx, &var_1c30), &var_1c30, ebx, eax_17, var_2040_1)
                char* eax_21
                
                if (var_1830_1 == 0)
                label_580e75:
                    eax_21.b = var_203a_1
                label_580e81:
                    ecx_7 = ebx[0x34e]
                    edx_4 = var_2078_1 + 1
                    var_2078_1 = edx_4
                    
                    if (edx_4 s< ecx_7)
                        goto label_5808ba
                    
                    edx_4.b = var_2039_1
                    var_2039_1 = edx_4.b
                    
                    if (eax_21.b == 0)
                        break
                    
                    var_2039_1 = edx_4.b
                    goto label_580890
                
                int32_t edx_13
                eax_21, edx_13 = sub_578f60(ebx, &var_1c30)
                
                if (eax_21.b == 0)
                    sub_5ee870()
                
                int32_t esi_3 = var_1830_1
                int32_t edi_2 = 0
                int32_t var_18_16
                char const* const var_14_27
                char* ecx_56
                
                if (esi_3 s> 0)
                    while (true)
                        eax_21 = var_1c30[edi_2]
                        
                        if ((eax_21.b & 0x30) == 0)
                            eax_21, edx_13 = sub_576940(eax_21, edx_13, ebx, eax_21)
                            
                            if (*(eax_21 + 0x4c) == 2 && *eax_21 == 5)
                                int32_t ecx_15 = *(eax_21 + 8)
                                edx_13 = *(eax_21 + 0xc)
                                
                                if ((ecx_15 != eax_15 || edx_13 != var_205c_1)
                                        && (ecx_15 | edx_13) != 0)
                                    var_14_27 = "MarkNextTimeAbilities"
                                    var_18_16 = 0x26cf
                                    ecx_56 = "ab.durationContext == contextId || ab.durationContext "
                                    "== DOMCONTEXT_NONE"
                                    break
                                
                                *(eax_21 + 8) = eax_15
                                *(eax_21 + 0xc) = var_205c_1
                            
                            esi_3 = var_1830_1
                        
                        edi_2 += 1
                        
                        if (edi_2 s>= esi_3)
                            goto label_580a58
                    
                label_581013:
                    sub_63b870(eax_21, &data_801800, ecx_56, 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_18_16, var_14_27)
                    
                    if (sub_63bc30() == 0)
                        sub_63bb00()
                        noreturn
                    
                    breakpoint
                
            label_580a58:
                uint32_t ecx_18 = var_2050_1
                int32_t edx_14 = 0
                int32_t var_2038[0x100]
                
                if (ecx_18 s> 0)
                    do
                        eax_21 = nullptr
                        
                        if (esi_3 s> 0)
                            do
                                if (var_2038[edx_14] == var_1c30[eax_21])
                                    ecx_18 = var_2050_1
                                    goto label_580abe
                                
                                eax_21 = &eax_21[1]
                            while (eax_21 s< esi_3)
                            
                            ecx_18 = var_2050_1
                        
                        edx_14 -= 1
                        var_2038[edx_14] = var_2038[ecx_18 - 1]
                        ecx_18 -= 1
                        var_2050_1 = ecx_18
                    label_580abe:
                        edx_14 += 1
                    while (edx_14 s< ecx_18)
                
                if (esi_3 == 0)
                    goto label_580e75
                
                int32_t edi_4 = 0
                uint32_t ecx_25
                
                if (esi_3 s> 0)
                    do
                        uint32_t eax_22 = var_1c30[edi_4]
                        
                        if ((eax_22.b & 0x30) == 0)
                            void* eax_23
                            eax_23, edx_14 = sub_576940(eax_22, edx_14, var_2044, eax_22)
                            
                            if ((*(eax_23 + 0x60) & 0x1000) != 0)
                                ecx_25 = 1
                                var_2038[0] = var_1c30[edi_4]
                                goto label_580b69
                        
                        edi_4 += 1
                    while (edi_4 s< esi_3)
                    
                    esi_3 = var_1830_1
                    ebx = var_2044
                
                ecx_25 = var_2050_1
                
                if (ecx_25 == 0)
                    int32_t eax_25 = esi_3 << 2 s>> 2
                    sub_594220(eax_25, &var_1c30[esi_3], &var_1c30, eax_25, cmpAddrMapByPos)
                    uint32_t eax_27
                    int32_t edx_17
                    eax_27, edx_17 = sub_57f120(&var_1c30, temp1_1, ebx, &var_1c30, &var_2038)
                    ecx_25 = eax_27
                    
                    if (ecx_25 == 0)
                        if (arg8 != 0)
                            *arg8 = 1
                        
                        eax_21.b = 0
                        int32_t ebx_3 = 0
                        var_203a_1 = 0
                        
                        if (var_1830_1 s<= 0)
                            ebx = var_2044
                            goto label_580e81
                        
                        do
                            eax_21 = var_1c30[ebx_3]
                            char* var_2068_2 = eax_21
                            
                            if ((eax_21.b & 0x30) == 0)
                                eax_21, edx_17 = sub_576940(eax_21, edx_17, var_2044, eax_21)
                                
                                if (*(eax_21 + 0x4c) == 2 && (eax_21[0x60] & 0x10) != 0)
                                    void* eax_42
                                    eax_42, edx_17 =
                                        sub_576940(eax_21, edx_17, var_2044, var_2068_2)
                                    *(eax_42 + 0x54) = 0
                                    var_2044[0x66e] -= 1
                                    __builtin_memcpy(eax_42, 
                                        &var_2044[0xed5a] + var_2044[0x66e] * 0xa8, 0xa8)
                            
                            ebx_3 += 1
                        while (ebx_3 s< var_1830_1)
                        
                        ebx = var_2044
                        goto label_580e75
                
            label_580b69:
                uint32_t var_1c38_3 = ecx_25 - 1
                var_2050_1 = ecx_25 - 1
                eax_21 = var_2038[ecx_25 - 1]
                var_2040_1 = eax_21
                
                if (eax_21 == 0xffffffff)
                    sub_591930()
                    eax_21 = var_2040_1
                
                void* edx_18 = eax_17
                int32_t ecx_27 = *(edx_18 + 0x400)
                
                if (ecx_27 s>= 0x100)
                    var_14_27 = "MarkAbilityTriggered"
                    var_18_16 = 0x23a4
                    ecx_56 = "triggeredAbilities.num < MAX_ABILITIES"
                else
                    *(edx_18 + (ecx_27 << 2)) = eax_21
                    *(edx_18 + 0x400) += 1
                    
                    if ((eax_21.b & 0x30) == 0)
                        void* eax_28
                        eax_28, edx_18 = sub_576940(eax_21, edx_18, var_2044, eax_21)
                        
                        if ((*(eax_28 + 4) & 2) == 0)
                            uint32_t eax_29
                            void* ecx_30
                            eax_29, ecx_30, edx_18 = sub_5916b0(var_2040_1)
                            
                            if (eax_29 != 0)
                                int32_t var_14_12 = 0
                                edx_18 = sub_578d90(eax_29, edx_18, var_2044, eax_29, ecx_30, 1)
                        
                        eax_21 = var_2040_1
                    
                    uint32_t ecx_33 = *arg2
                    uint32_t esi_6
                    
                    if (ecx_33 == 0 || ecx_33 == 1)
                        uint32_t eax_30
                        int32_t edx_19
                        eax_30, edx_19 = sub_5916b0(eax_21)
                        esi_6 = var_2040_1
                        uint32_t var_2074 = eax_30
                        uint32_t eax_31
                        eax_31, edx_18 = sub_5915b0(eax_30, edx_19, var_2044, esi_6)
                        
                        if (eax_31 != 0)
                            eax_21, edx_18 = sub_5754f0(eax_31, eax_31, var_2044, 0, 0x40)
                        
                        if (eax_31 == 0 || eax_21.b == 0)
                            int32_t eax_32 = var_2044[0x541]
                            
                            if (eax_32 != 3 && eax_32 != 5 && eax_32 != 4 && eax_32 != 6)
                                void* var_30_4
                                __builtin_memset(&var_30_4, 0, 0x20)
                                void* var_2c_3
                                int128_t* var_28_3
                                int32_t var_24_3
                                int32_t var_20_4
                                int32_t var_1c_8
                                int32_t var_18_10
                                int32_t var_14_16
                                edx_18 = sub_61b1b0(eax_32, 0xf, eax_32 == 2, edx, var_2074, 
                                    eax_31, var_30_4, var_2c_3, var_28_3, var_24_3, var_20_4, 
                                    var_1c_8, var_18_10, var_14_16)
                            
                            eax_21 = var_2044[0x541]
                            
                            if (eax_21 != 3 && eax_21 != 5 && eax_21 != 4 && eax_21 != 6)
                                if (eax_31 == 0)
                                    sub_63b870(eax_21, &data_801800, "arg1 != 0", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x35, 
                                        "NotifyLog")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                if (var_2044[0x540].b == 0)
                                    int32_t eax_33 = edx
                                    
                                    if (edx == var_2044[0x673])
                                        eax_33 = var_2044[0x674]
                                    
                                    eax_21, edx_18 = sub_59f9b0(eax_33, edx, var_2044, eax_33, 
                                        0x1b, 0, &var_2074, 1, eax_31, 0, 0, 0)
                    else
                        esi_6 = var_2040_1
                    
                    int32_t* ebx_2
                    ebx_2.b = 0
                    uint32_t eax_35
                    int32_t edx_22
                    eax_35, edx_22 = sub_5915b0(eax_21, edx_18, var_2044, esi_6)
                    
                    if (eax_35 == 0x204)
                        ebx_2.b = 1
                    else
                        uint32_t eax_36
                        int32_t edx_23
                        eax_36, edx_23 = sub_5915b0(eax_35, edx_22, var_2044, esi_6)
                        
                        if (eax_36 == 0x111a)
                            int32_t eax_39
                            
                            if ((var_2040_1.b & 0x30) != 0)
                                eax_39 =
                                    *(sub_5769e0(var_2040_1, edx_23, var_2044, var_2040_1) + 0xb0)
                            else
                                eax_39 =
                                    *(sub_576940(var_2040_1, edx_23, var_2044, var_2040_1) + 0x84)
                            
                            esi_6 = var_2040_1
                            
                            if (eax_39 == 0x44)
                                ebx_2.b = 1
                    
                    char eax_41 = sub_579110(esi_6, esi_6, arg5, arg4)
                    
                    if (eax_41 != 0 || edx != temp1_1)
                        eax_41 = 1
                    
                    if (ebx_2.b == 0)
                        var_2039_1 |= eax_41
                    
                    var_203a_1 = 1
                    ebx = var_2044
                    sub_57f980(ebx, temp1_1)
                    ecx_8 = temp1_1
                    edx_7 = var_205c_1
                    continue
                
                goto label_581013
            
            goto label_580eb9
        
    label_580eb9:
        int32_t i = 0
        
        if (ecx_7 s> 0)
            int32_t eax_44
            void* edx_27
            edx_27:eax_44 = sx.q(var_2060_1)
            int32_t* eax_45 = var_2044
            
            do
                sub_581450(eax_45, i, eax_45, 7, eax_44, edx_27)
                eax_45 = var_2044
                i += 1
            while (i s< eax_45[0x34e])
            
            ebx = eax_45
        
        void* edx_29 = *fsbase->ThreadLocalStoragePointer
        eax_3 = *(edx_29 + 0xf010)
        int32_t temp3_1 = data_cc8dd8
        
        if (eax_3 s>= temp3_1)
            if (eax_3 == temp3_1)
                goto label_580f46
            
            if (eax_3 s> 0)
                *(edx_29 + eax_3 * 0x78 - 0x30) = var_207c_1
            label_580f46:
                int32_t result
                
                if (sub_57fa40(*arg2).b != 0)
                    result = ebx[0x541]
                    
                    if (result != 3 && result != 5 && result != 4 && result != 6
                            && ebx[0x540].b == 0)
                        int32_t eax_50 = edx
                        
                        if (edx == ebx[0x673])
                            eax_50 = ebx[0x674]
                        
                        int32_t var_2c_5
                        __builtin_memset(&var_2c_5, 0, 0x1c)
                        int32_t* var_28_5
                        int32_t var_24_5
                        int32_t var_20_6
                        int32_t var_1c_12
                        int32_t var_18_14
                        int32_t var_14_25
                        sub_59f9b0(eax_50, edx, ebx, eax_50, 0x20, var_2c_5, var_28_5, var_24_5, 
                            var_20_6, var_1c_12, var_18_14, var_14_25)
                
                result.b = var_2039_1
                CookieCheckFunction(result)
                return result
            
            var_14 = "DomGetContextW"
            var_18 = 0x7dd
            ecx_2 = "cs.numContexts > 0"
            var_1c_3 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        else
            var_14 = "IsDomContextStackEmpty"
            var_18 = 0x16dd
            var_1c_3 = "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp"
            ecx_2 = "curDepth >= origContextDepth"
    else
        var_14 = "IsDomContextStackEmpty"
        var_18 = 0x16dd
        var_1c_3 = "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp"
        ecx_2 = "curDepth >= origContextDepth"
else
    var_14 = "TriggerEvents"
    var_18 = 0x26e6
    ecx_2 = "numEvents > 0"
    var_1c_3 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"

sub_63b870(eax_3, &data_801800, ecx_2, var_1c_3, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
