// 函数: sub_5875c0
// 地址: 0x5875c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x3af8)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t* var_3a50 = arg4
*arg4 = 0
uint32_t esi = edx
int32_t* eax_3
eax_3.b = 0
uint32_t var_3a40 = esi
void* edi = nullptr
void* var_14a0 = nullptr
char var_3a32 = 0
char var_3a31 = 0
int32_t var_2120[0x320]
char* ecx_1

if (*arg5 != 0)
label_58766f:
    
    if ((arg3 & 2) == 0)
        eax_3 = ecx[0x541]
        
        if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6)
            void* var_30
            __builtin_memset(&var_30, 0, 0x20)
            ecx_1.b = eax_3 == 2
            void* var_2c
            int128_t* var_28
            int32_t var_24
            int32_t var_20
            int32_t var_1c_2
            int32_t var_18_3
            int32_t var_14_3
            eax_3 = sub_61b1b0(eax_3, 0x29, ecx_1.b, esi, 0, 3, var_30, var_2c, var_28, var_24, 
                var_20, var_1c_2, var_18_3, var_14_3)
else
    var_14a0 = sub_575c40(&var_2120, edx, ecx, &var_2120, 2, &var_3a31)
    eax_3, ecx_1 = sub_58ac40(&var_2120, &var_14a0)
    edi = var_14a0
    eax_3.b = var_3a31
    var_3a32 = eax_3.b
    
    if (edi == 0)
        goto label_58766f
void* var_3a68 = edi
uint32_t eax_6 = sub_576b30(eax_3, esi, ecx, 0x17, 0, 0, 0)

if (eax_6 s<= 0)
label_5876f2:
    eax_6 = sub_576b30(eax_6, esi, ecx, 0x19, 0, 0, 0)
    
    if (eax_6 s> 0)
        goto label_5877eb
    
    int32_t edx_5 = ecx[0x66e]
    int32_t ecx_7 = 0
    
    if (edx_5 s> 0)
        void* eax_7 = &ecx[0xed7b]
        
        do
            if (*(eax_7 - 0x6c) == esi && *eax_7 == 0x2c)
                int32_t eax_8 = sub_590ce0(eax_7, esi, ecx, 0x3ea, 0x106)
                int32_t eax_9 = sub_590ce0(eax_8, var_3a40, ecx, 0x3ea, 0x105)
                esi = var_3a40
                
                if (eax_8 == neg.d(eax_9))
                    goto label_587797
                
                int32_t eax_10 = sub_593b10(eax_9, esi, ecx, 0x106)
                
                if (eax_10.b != 0)
                    goto label_587797
                
                eax_6 = sub_593b10(eax_10, esi, ecx, 0x105)
                
                if (eax_6.b == 0)
                    goto label_5877eb
                
                goto label_587797
            
            ecx_7 += 1
            eax_7 += 0xa8
        while (ecx_7 s< edx_5)
    
label_587797:
    
    if (ecx[esi * 0x168c + 0x5d4b] == 0)
        int32_t i = 0
        
        if (ecx[0x66e] s> 0)
            eax_6 = &ecx[0xed7b]
            
            do
                int32_t edx_10 = *(eax_6 - 0x6c)
                
                if ((edx_10 == esi || edx_10 == 0xffffffff) && *eax_6 == 0x54)
                    goto label_5877eb
                
                i += 1
                eax_6 += 0xa8
            while (i s< ecx[0x66e])
else
    eax_6 = sub_5854e0(ecx, esi)
    
    if (eax_6 != 0)
        goto label_5876f2
    
label_5877eb:
    var_3a32 = 0
    
    if (sub_576b30(eax_6, esi, ecx, 0x19, 0, 0, 0) s> 0)
        int32_t eax_14 = ecx[esi * 0x168c + 0x5d4c]
        
        if (eax_14 s< 3)
            void* ecx_13 = 3 - eax_14
            
            if (edi s< ecx_13)
                ecx_13 = edi
            
            var_3a68 = ecx_13
        else
            var_14a0 = nullptr

int32_t var_1018[0x202]
uint32_t eax_16 = sub_587160(&var_1018, esi, ecx, arg2, arg3, &var_1018)
uint32_t edi_1 = 0
uint32_t var_3a64 = 0
int32_t var_810[0x1f4]

if (var_3a32 != 0)
    int32_t ecx_15 = ecx[0x541]
    
    if (ecx_15 == 1 || ecx_15 == 2)
        int32_t eax_18 = data_19e39a0 + 1
        data_19e39a0 = eax_18
        int32_t var_18_9
        char const* const var_14_11
        char* ecx_16
        
        if (eax_18 != 1)
            var_14_11 = "DoBuy"
            var_18_9 = 0x3455
            ecx_16 = "depth == 1"
        label_58831d:
            sub_63b870(eax_18, &data_801800, ecx_16, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                var_18_9, var_14_11)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_4ebd20(eax_18, ecx, 0x1a22630, esi)
        eax_18 = data_1a39b5c
        
        if (eax_18 != ecx[0x5d4b])
            var_14_11 = "DoBuy"
            var_18_9 = 0x3459
            ecx_16 = "sim.players[0].numCardsPlayedThisTurn == g.players[0].numCardsPlayedThisTurn"
            goto label_58831d
        
        eax_18 = data_1a2401c
        
        if (eax_18 != ecx[0x67b])
            var_14_11 = "DoBuy"
            var_18_9 = 0x345a
            ecx_16 = "sim.phase == g.phase"
            goto label_58831d
        
        char var_14_13 = 4
        data_1a23b34 = 6
        sub_587020(esi, var_14_13)
        int32_t var_2928[0x200]
        uint32_t eax_20 = sub_587160(&var_2928, esi, 0x1a22630, arg2, arg3, &var_2928)
        sub_587020(esi, 2)
        int32_t var_35b0[0x200]
        uint32_t eax_22 = sub_587160(&var_35b0, esi, 0x1a22630, arg2, arg3, &var_35b0)
        
        if (eax_22 s> 0)
            __builtin_memcpy(&var_810, &var_35b0, (eax_22 & 0x1fffffff) * 8)
            esi = var_3a40
            edi_1 = eax_22
            var_3a64 = edi_1
        
        int32_t edx_18 = 0
        
        if (eax_20 s> 0)
            do
                int32_t eax_23 = 0
                
                if (edi_1 s<= 0)
                label_5879b5:
                    var_35ac
                    int32_t ecx_23 = *(&var_35ac + (edx_18 << 3))
                    var_810[edi_1 * 2] = var_35b0[edx_18 * 2]
                    var_80c
                    *(&var_80c + (edi_1 << 3)) = ecx_23
                    edi_1 += 1
                else
                    while (var_810[eax_23 * 2] != var_2928[edx_18 * 2])
                        eax_23 += 1
                        
                        if (eax_23 s>= edi_1)
                            goto label_5879b5
                
                edx_18 += 1
            while (edx_18 s< eax_20)
            
            esi = var_3a40
            var_3a64 = edi_1
        
        data_19e39a0 -= 1

void* eax_26 = var_14a0 + eax_16
int32_t eax_27 = sub_583fc0(eax_26, esi, ecx, 0xc00)
int32_t eax_28 = ecx[esi * 0x168c + 0x5d3d]
int32_t eax_29 = sub_583fc0(eax_28, esi, ecx, 0xa00)
uint32_t eax_30 = sub_576b30(eax_29, esi, ecx, 0x29, 0, 0, 0)
int32_t ecx_30

if (eax_30 s<= 0)
    ecx_30 = eax_29
else
    ecx_30 = eax_29 + sub_583fc0(eax_30, esi, ecx, 0x601)

int32_t ecx_31 = ecx_30 + eax_28
int32_t var_3a5c = ecx_31
void* result

if (eax_26 != 0)
label_587a9a:
    void* ecx_32 = var_14a0
    int32_t var_3a58_1 = 2
    
    if (*arg5 != 0 || ecx_32 == 0)
        *arg5 = 1
        var_3a58_1 = 3
        var_3a68 = 1
    
    uint32_t i_6 = 3
    
    if (ecx_32 != 0)
        i_6 = 2
    
    uint32_t i_2 = i_6
    
    if (eax_26 != 0)
        int32_t result_4 = 0
        int32_t edx_25 = 0
        int32_t result_3 = 0
        int32_t result_5 = 0
        uint32_t i_3
        
        if (ecx_32 s> 0)
            do
                int32_t eax_35 = var_2120[edx_25]
                edx_25 += 1
                (&i_3)[result_4] = eax_35
                result_4 = result_5 + 1
                result_5 = result_4
            while (edx_25 s< ecx_32)
            
            result_3 = result_4
        
        int32_t eax_36 = 0
        int32_t var_3a38_3 = 0
        
        if (eax_16 s> 0)
            do
                int32_t ecx_38 = var_1018[eax_36 * 2]
                
                if (result_4 s>= 0x320)
                    sub_591930()
                    eax_36 = var_3a38_3
                
                (&i_3)[result_4] = ecx_38
                eax_36 += 1
                result_4 = result_5 + 1
                var_3a38_3 = eax_36
                result_5 = result_4
            while (eax_36 s< eax_16)
            
            edi_1 = var_3a64
            result_3 = result_4
        
        int32_t eax_37 = 0
        int32_t esi_6 = 0
        int32_t var_2db0_1 = 0
        int32_t var_3a30[0x120]
        
        if (edi_1 s> 0)
            do
                int32_t ecx_39 = var_810[esi_6 * 2]
                
                if (eax_37 s>= 0x320)
                    sub_591930()
                    eax_37 = var_2db0_1
                    ecx_39 = var_810[esi_6 * 2]
                
                var_3a30[eax_37] = ecx_39
                esi_6 += 1
                eax_37 = var_2db0_1 + 1
                var_2db0_1 = eax_37
            while (esi_6 s< edi_1)
        
        __builtin_memcpy(&var_3a30, &var_2120, 0xc84)
        sub_5874f0(sub_5874f0(eax_37, &var_1018, &var_3a30, eax_16, 0), &var_810, &var_3a30, 
            var_3a64, 0x20000)
        void* ecx_42 = nullptr
        
        if (var_3a32 != 0)
            ecx_42 = 1
        
        char var_3a38_4 = ecx_42.b
        
        if (eax_27 s> 0 && var_3a5c s> 0)
            ecx_42 |= 2
            var_3a38_4 = ecx_42.b
        
        char edx_28 = arg3
        int32_t var_3a60 = 0
        var_3a5c = 0
        
        if ((edx_28 & 2) != 0)
            var_3a60 = 2
            var_3a5c = arg6
        
        uint32_t i_4 = i_2
        int32_t result_1 = result_3
        int32_t (* var_3a94_1)[0x120] = &var_3a30
        int32_t var_3a90_1 = 0
        int32_t var_3a8c_1 = var_2db0_1
        int32_t var_3a84
        __builtin_memset(&var_3a84, 0, 0x1c)
        int128_t var_3ae0 = i_4.o
        int128_t var_3ad0_1 = ecx_42.o
        int64_t var_3a78
        int128_t var_3ac0_1 = var_3a78.o
        int32_t result_2
        uint32_t edi_3
        
        if (result_1 != 0)
            uint32_t edi_4 = zx.d(i_3.w)
            
            if (edi_4 u>= 0x320)
                sub_591930()
            
            int32_t edi_5 = 1
            int32_t eax_44 = ecx[edi_4 * 0x19 + 0x693]
            
            if (result_1 s<= 1)
            label_587df3:
                ecx_42 = var_3a68
                
                if (ecx_42 == 0)
                    edi_3 = var_3a40
                    result_1 = 0
                    result_2 = 0
                    edx_28 = arg3
                    goto label_587eca
            else
                int32_t ecx_43 = eax_44
                
                while (true)
                    uint32_t eax_45 = zx.d((&i_3)[edi_5].w)
                    
                    if (eax_45 u>= 0x320)
                        sub_591930()
                        eax_45 = zx.d((&i_3)[edi_5].w)
                        ecx_43 = eax_44
                    
                    if (ecx[eax_45 * 0x19 + 0x693] != ecx_43)
                        ecx_42 = var_3a68
                        break
                    
                    edi_5 += 1
                    
                    if (edi_5 s>= result_1)
                        goto label_587df3
            
            edi_3 = var_3a40
            int32_t eax_47
            
            if (edi_3 != ecx[0x673])
                eax_47 = edi_3
            else
                eax_47 = ecx[0x674]
            
            result, ecx_42 = sub_623300(eax_47, &var_3a60, ecx, edi_3, eax_47, 1, &i_3, result_1, 
                ecx_42, 0, 5, &var_3ae0, var_3a58_1, 0, 0)
            result_1 = result
            result_2 = result_1
            
            if (result_1 s>= 0xfffffffe)
                result_1 = result
                result_2 = result_1
                
                if (result != 0xfffffffe)
                    if (result_1 != 0)
                        goto label_587e72
                    
                    edx_28 = arg3
                    goto label_587eca
                
                result_2 = result_1
                
                if ((var_3a38_4 & 2) != 0)
                    goto label_587e72
            else
                sub_591930()
            label_587e72:
                result = arg5
            label_587e7c:
                
                if (ecx[0x18] == 0x64)
                    *result = 1
                
                result = ecx[9]
                int32_t var_18_15
                char const* const var_14_26
                char* ecx_45
                
                if (result == 5)
                    var_14_26 = "DoBuy"
                    var_18_15 = 0x34f4
                    ecx_45 = "g.yld.choice != CHOICE_NUMBER"
                label_5882ed:
                    sub_63b870(result, &data_801800, ecx_45, 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_18_15, var_14_26)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* ecx_63
                
                if (result != 9)
                    void* eax_54
                    uint32_t i_1
                    
                    if (result == 0xa)
                        if (ecx[0x23] != 1)
                            var_14_26 = "DoBuy"
                            var_18_15 = 0x350a
                            ecx_45 = "g.yld.numChoices == 1"
                            goto label_5882ed
                        
                        int32_t eax_48 = sub_583fc0(result, edi_3, ecx, 0xc00)
                        int32_t var_14_30 = 0xa00
                        int32_t eax_49 = ecx[edi_3 * 0x168c + 0x5d3d]
                        var_3a5c = eax_49
                        int32_t eax_50 = sub_583fc0(eax_49, edi_3, ecx, var_14_30)
                        int32_t esi_8 = eax_50
                        uint32_t eax_51 = sub_576b30(eax_50, edi_3, ecx, 0x29, 0, 0, 0)
                        
                        if (eax_51 s> 0)
                            esi_8 += sub_583fc0(eax_51, edi_3, ecx, 0x601)
                        
                        var_3a31 = 0
                        eax_54 = sub_575c40(&var_2120, edi_3, ecx, &var_2120, 1, &var_3a31)
                        var_14a0 = eax_54
                        
                        if (var_3a31 != 0)
                            uint32_t eax_56 = zx.d(i_3.w)
                            uint32_t var_3a58_2 = eax_56
                            
                            if (eax_56 u>= 0x320)
                                sub_591930()
                                eax_56 = var_3a58_2
                            
                            void* eax_59 = eax_56 * 0x64 + 0x1a4c + ecx
                            sub_576e90(eax_59, ecx, &i_2, edi_3, *eax_59, 0)
                            uint32_t var_3af8[0x6]
                            uint32_t* eax_60 = sub_576c00(&var_3af8, i_2)
                            int128_t xmm0_4 = *eax_60
                            int32_t var_3a9c_1 = eax_60[4]
                            int128_t var_3aac = xmm0_4
                            int32_t eax_63 = xmm0_4 - var_3a5c
                            int32_t eax_64 = eax_63 + eax_48
                            
                            if (eax_63 + eax_48 s< 0)
                                eax_64 = 0
                            
                            var_3aac.d = eax_64
                            sub_576c70(&var_3a5c, &var_3aac)
                            
                            if (var_3a58_2 u>= 0x320)
                                sub_591930()
                            
                            i_2.b = *eax_59 == 0x614
                            void var_1498
                            __builtin_memcpy(&var_2120, 
                                sub_5840a0(esi_8, &var_1498, &var_2120, var_3a5c, i_2.b, esi_8), 
                                0xc84)
                            edi_3 = var_3a40
                            eax_54 = sub_586880(&var_2120, edi_3, ecx, &var_2120, var_14a0, -0x40)
                        
                        i_1 = i_3
                        goto label_5881b0
                    
                    if (result == 0xb)
                        if (ecx[0x23] != 1)
                            var_14_26 = "DoBuy"
                            var_18_15 = 0x3513
                            ecx_45 = "g.yld.numChoices == 1"
                            goto label_5882ed
                        
                        i_1 = i_3
                        uint32_t i_5 = zx.d(i_1.w)
                        i_2 = i_5
                        
                        if (i_5 u>= 0x320)
                            sub_591930()
                            i_5 = i_2
                        
                        int32_t ecx_59
                        ecx_59.b = ecx[i_5 * 0x19 + 0x693] == 0x614
                        eax_54 = sub_587020(i_1, (ecx_59 << 1).b + 2)
                        goto label_5881b0
                    
                    if (result_1 s> 1)
                        void* ecx_64 = var_14a0
                        int32_t esi_10 = 0
                        
                        do
                            int32_t eax_69 = 0
                            
                            if (ecx_64 s<= 0)
                            label_5881fe:
                                sub_591930()
                                ecx_64 = var_14a0
                            else
                                while (var_2120[eax_69] != (&i_3)[esi_10])
                                    eax_69 += 1
                                    
                                    if (eax_69 s>= ecx_64)
                                        goto label_5881fe
                            
                            esi_10 += 1
                        while (esi_10 s< result_2)
                        
                        sub_586880(&i_3, var_3a40, ecx, &i_3, result_2, -0x80)
                        sub_583350(ecx)
                        goto label_588295
                    
                    if (result_1 == 1)
                        eax_54 = var_14a0
                        int32_t ecx_67 = 0
                        i_1 = i_3
                        
                        if (eax_54 s<= 0)
                        label_5881b0:
                            sub_587410(eax_54, edi_3, ecx, i_1, arg3.d)
                            ecx_63 = var_3a50
                            *ecx_63 = i_1
                            *arg5 = 1
                            goto label_58829b
                        
                        while (var_2120[ecx_67] != i_1)
                            ecx_67 += 1
                            
                            if (ecx_67 s>= eax_54)
                                goto label_5881b0
                        
                        char var_14_41 = 0
                        i_2 = i_1
                        sub_586880(&i_2, edi_3, ecx, &i_2, 1, var_14_41)
                        goto label_588295
                    
                    if (result_1 == 0xffffffff)
                        sub_587020(result_1, 0)
                        goto label_588295
                    
                    if (result_1 != 0)
                        var_14_26 = "DoBuy"
                        var_18_15 = 0x3560
                        ecx_45 = "Halt"
                        goto label_5882ed
                else
                    sub_586650(result, edi_3, ecx, result_1)
                label_588295:
                    ecx_63 = var_3a50
                label_58829b:
                    
                    if ((arg3 & 2) == 0)
                        goto label_587b2e
                    
                    if (*ecx_63 == 0)
                        result.b = 0
                        CookieCheckFunction(result)
                        return result
        else
            edi_3 = var_3a40
            result_2 = result_1
        label_587eca:
            result = arg5
            
            if (*result != 0)
                goto label_587e7c
            
            *result = 1
            
            if ((edx_28 & 2) == 0)
                result = ecx[0x541]
                ecx[0x67b] = 3
                
                if (result != 3 && result != 5 && result != 4 && result != 6)
                    void* var_30_2
                    __builtin_memset(&var_30_2, 0, 0x20)
                    ecx_42.b = result == 2
                    void* var_2c_2
                    int128_t* var_28_2
                    int32_t var_24_2
                    int32_t var_20_8
                    int32_t var_1c_13
                    int32_t var_18_16
                    int32_t var_14_27
                    sub_61b1b0(result, 0x29, ecx_42.b, edi_3, 0, 3, var_30_2, var_2c_2, var_28_2, 
                        var_24_2, var_20_8, var_1c_13, var_18_16, var_14_27)
            
            if (ecx[0x18] != 3)
                result.b = 0
                CookieCheckFunction(result)
                return result
    else
        int32_t eax_33 = sub_586ae0(sub_5ee870(), esi, ecx, 6)
        sub_574780(eax_33, esi, ecx, eax_33)
        int32_t var_14_23 = 0xc00
        *arg5 = 1
        
        if (sub_583fc0(arg5, esi, ecx, var_14_23) s<= 0)
        label_587b2e:
            result.b = 0
            CookieCheckFunction(result)
            return result
else if (eax_27 != eax_26 && ecx_31 != 0)
    goto label_587a9a

result.b = 1
CookieCheckFunction(result)
return result
