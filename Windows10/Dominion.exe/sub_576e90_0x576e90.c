// 函数: sub_576e90
// 地址: 0x576e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_3 = sub_571b30(arg5, *(arg2 + 0xd48))
int32_t ecx_1 = *(eax_3 + 0x90)
int32_t var_4e4 = ecx_1
uint32_t var_460[0x6]
uint32_t* eax_4 = sub_576c00(&var_460, ecx_1)
arg6 &= 1
char var_4b0 = (eax_4[4]).b
int128_t var_480 = *eax_4
char var_4c9 = 0
int32_t eax_6 = sub_576ce0(eax_3)
int32_t var_4b4

if (eax_6 != 0 && arg6 == 0)
    TEB* fsbase
    void* edx_1 = *fsbase->ThreadLocalStoragePointer
    void* var_4b0_1 = edx_1
    
    if (*(edx_1 + 0xf010) s>= 0x200)
        sub_591930()
        edx_1 = var_4b0_1
    
    void* eax_16 = *(edx_1 + 0xf010)
    int32_t temp0_1 = data_cc8dd8
    char const* const var_4ec_1
    int32_t var_4e8_1
    char const* const var_4e4_2
    char* ecx_3
    
    if (eax_16 s< temp0_1)
        var_4e4_2 = "IsDomContextStackEmpty"
        var_4e8_1 = 0x16dd
        var_4ec_1 = "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp"
        ecx_3 = "curDepth >= origContextDepth"
    label_5775da:
        sub_63b870(eax_16, &data_801800, ecx_3, var_4ec_1, var_4e8_1, var_4e4_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* edi_1
    
    if (eax_16 != temp0_1)
        edi_1 = eax_16 * 0x78 + 0xffffff98 + edx_1
    else
        edi_1 = nullptr
    
    *(var_4b0_1 + 0xf010) = eax_16 + 1
    *(edx_1 + eax_16 * 0x78 + 0x10) = 2
    *(edx_1 + eax_16 * 0x78 + 0x14) = arg2
    *(edx_1 + eax_16 * 0x78 + 0x18) = edi_1
    *(edx_1 + eax_16 * 0x78 + 0x1c) = arg4
    *(edx_1 + eax_16 * 0x78 + 0x20) = 0
    *(edx_1 + eax_16 * 0x78 + 0x24) = 0
    *(edx_1 + eax_16 * 0x78 + 0x2c) = 0
    *(edx_1 + eax_16 * 0x78 + 0x30) = 0
    *(edx_1 + eax_16 * 0x78 + 0x54) = 0
    *(edx_1 + eax_16 * 0x78 + 0x34) = 0
    *(edx_1 + eax_16 * 0x78 + 0x44) = 0
    int32_t eax_12
    
    if (edi_1 != 0)
        eax_12 = *(edi_1 + 0x38)
    else
        eax_12 = 0
    
    *(edx_1 + eax_16 * 0x78 + 0x48) = eax_12
    int32_t eax_13
    
    if (*(arg2 + 0x1a70) != 0xffffffff || edi_1 == 0)
        eax_13 = 0
    else
        eax_13 = *(edi_1 + 0x30)
    
    *(edx_1 + eax_16 * 0x78 + 0x40) = eax_13
    eax_6(&var_4b4, &var_4c9)
    uint32_t var_448[0x6]
    uint32_t* eax_14 = sub_576c00(&var_448, var_4b4)
    int32_t eax_15 = eax_14[4]
    var_4b0 = eax_15.b
    int32_t var_470_1 = eax_15
    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    var_480 = *eax_14
    eax_16 = *ThreadLocalStoragePointer
    int32_t ecx_9 = *(eax_16 + 0xf010)
    
    if (ecx_9 s<= 0)
        var_4e4_2 = "DomPopContext"
        var_4e8_1 = 0x792
        var_4ec_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        ecx_3 = "cs.numContexts > 0"
        goto label_5775da
    
    bool cond:7_1 = var_4c9 == 0
    *(eax_16 + 0xf010) = ecx_9 - 1
    
    if (not(cond:7_1))
        sub_576c70(arg3, &var_480)
        uint32_t eax_17 = arg3
        CookieCheckFunction(eax_17)
        return eax_17

int32_t eax_18 = sub_57da30(arg2, arg5)
var_4b4 = eax_18
int32_t var_4b8

if (eax_18 != 0)
    int32_t edi_3 = 7
    void* eax_19 = arg2 + 0x1594
    var_4b8 = 7
    
    while (true)
        if (*eax_19 == eax_18)
            var_4b8 = edi_3
            break
        
        if (*(eax_19 + 4) == eax_18)
            break
        
        edi_3 += 1
        eax_19 += 0x10
        var_4b8 = edi_3
        
        if (edi_3 s>= 0x48)
            var_4b8 = 0
            break
else
    var_4b8 = eax_18

int32_t var_4e4_4 = eax_18
int32_t var_430[0x100]
int32_t edx_7 = sub_576540(&var_430, arg4, arg2, &var_430)
int32_t ecx_17 = 0
int32_t i_2 = var_480.d
int32_t var_4c8_1 = 0
int32_t var_4c0 = var_480:8.d
int32_t var_30

if (var_30 s> 0)
    do
        uint32_t esi_1 = var_430[ecx_17]
        uint32_t eax_23 = esi_1 & 0x30
        uint32_t eax_26
        
        if (eax_23 != 0)
            void* eax_25
            eax_25, edx_7 = sub_5769e0(eax_23, edx_7, arg2, esi_1)
            eax_26 = *(eax_25 + 0x14)
        else
            void* eax_24
            eax_24, edx_7 = sub_576940(eax_23, edx_7, arg2, esi_1)
            
            if (*(eax_24 + 0x4c) != 3)
                edx_7 = sub_591930()
            
            eax_26 = *(eax_24 + 0x50)
        
        if (eax_26 == 0x2c)
            int16_t eax_29
            
            if (eax_23 != 0)
                void* eax_28
                eax_28, edx_7 = sub_5769e0(eax_26, edx_7, arg2, esi_1)
                eax_29 = (*(eax_28 + 0x9c)).w
            else
                void* eax_27
                eax_27, edx_7 = sub_576940(eax_26, edx_7, arg2, esi_1)
                
                if (*(eax_27 + 0x4c) != 3)
                    edx_7 = sub_591930()
                
                eax_29 = (*(eax_27 + 0x54)).w
            
            if (zx.d(eax_29) == var_4b4)
                var_4c0 += i_2
                i_2 = 0
        
        ecx_17 = var_4c8_1 + 1
        var_4c8_1 = ecx_17
    while (ecx_17 s< var_30)

int32_t ecx_25 = var_30
int32_t eax_31 = 0
int32_t i_3 = i_2
int32_t var_4c8_2 = 0

if (ecx_25 s> 0)
    do
        uint32_t esi_3 = var_430[eax_31]
        uint32_t eax_33 = esi_3 & 0x30
        uint32_t eax_36
        
        if (eax_33 != 0)
            void* eax_35
            eax_35, edx_7 = sub_5769e0(eax_33, edx_7, arg2, esi_3)
            eax_36 = *(eax_35 + 0x14)
        else
            void* eax_34
            eax_34, edx_7 = sub_576940(eax_33, edx_7, arg2, esi_3)
            
            if (*(eax_34 + 0x4c) != 3)
                edx_7 = sub_591930()
            
            eax_36 = *(eax_34 + 0x50)
        
        if (eax_36 == 0x20)
            int32_t ecx_23
            
            if (eax_33 != 0)
                void* eax_38
                eax_38, edx_7 = sub_5769e0(eax_36, edx_7, arg2, esi_3)
                ecx_23 = *(eax_38 + 0x9c)
            else
                void* eax_37
                eax_37, edx_7 = sub_576940(eax_36, edx_7, arg2, esi_3)
                
                if (*(eax_37 + 0x4c) != 3)
                    edx_7 = sub_591930()
                
                ecx_23 = *(eax_37 + 0x54)
            
            if (zx.d(ecx_23.w) == var_4b4)
                int32_t ecx_24 = ecx_23 s>> 0x10
                int32_t i_5 = i_2
                i_2 -= ecx_24
                
                if (i_5 - ecx_24 s< 0)
                    i_2 = 0
        
        ecx_25 = var_30
        eax_31 = var_4c8_2 + 1
        var_4c8_2 = eax_31
    while (eax_31 s< ecx_25)
    
    i_3 = i_2

int32_t eax_41 = 0
int32_t var_4c8_3 = 0

if (ecx_25 s> 0)
    do
        uint32_t esi_5 = var_430[eax_41]
        uint32_t eax_43 = esi_5 & 0x30
        uint32_t eax_46
        
        if (eax_43 != 0)
            void* eax_45
            eax_45, edx_7 = sub_5769e0(eax_43, edx_7, arg2, esi_5)
            eax_46 = *(eax_45 + 0x14)
        else
            void* eax_44
            eax_44, edx_7 = sub_576940(eax_43, edx_7, arg2, esi_5)
            
            if (*(eax_44 + 0x4c) != 3)
                edx_7 = sub_591930()
            
            eax_46 = *(eax_44 + 0x50)
        
        if (eax_46 == 0x2e)
            int32_t ecx_28
            
            if (eax_43 != 0)
                void* eax_48
                eax_48, edx_7 = sub_5769e0(eax_46, edx_7, arg2, esi_5)
                ecx_28 = *(eax_48 + 0x9c)
            else
                void* eax_47
                eax_47, edx_7 = sub_576940(eax_46, edx_7, arg2, esi_5)
                
                if (*(eax_47 + 0x4c) != 3)
                    edx_7 = sub_591930()
                
                ecx_28 = *(eax_47 + 0x54)
            
            if (zx.d(ecx_28.w) == var_4b4)
                int32_t ecx_29 = ecx_28 s>> 0x10
                int32_t eax_51 = var_4c0 - ecx_29
                
                if (var_4c0 - ecx_29 s< 0)
                    eax_51 = 0
                
                var_4c0 = eax_51
        
        eax_41 = var_4c8_3 + 1
        var_4c8_3 = eax_41
    while (eax_41 s< var_30)
    
    i_2 = i_3

void* esi_8 = arg2
int32_t var_24[0x4]
int32_t eax_54 = sub_577b50(&var_24, var_4b4, esi_8 + 0xd4c, &var_24)
int32_t ecx_31 = 0

if (eax_54 s> 0)
    do
        if (var_24[ecx_31] == 0x1147)
            bool cond:4_1 = i_2 - 1 s< 0
            i_2 -= 1
            
            if (cond:4_1)
                i_2 = 0
            
            break
        
        ecx_31 += 1
    while (ecx_31 s< eax_54)

int32_t eax_56 = var_4b8

if (eax_56 == 0x476)
    eax_56 = 6

int32_t i_1 = *(esi_8 + 0x19a4)
int32_t ecx_32 = 0

if (i_1 s> 0)
    void* eax_57 = esi_8 + 0x152cc
    int32_t i
    
    do
        if (*(eax_57 + 4) == eax_56 && *eax_57 == 0xffffffff && *(eax_57 - 4) == 0x1000)
            ecx_32 += *(eax_57 + 0x10)
        
        eax_57 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    esi_8 = arg2
    
    if (ecx_32 s> 0)
        int32_t i_6 = i_2
        i_2 -= ecx_32
        
        if (i_6 - ecx_32 s< 0)
            i_2 = i_1

void* eax_59 = sub_571b30(*(eax_3 + 0x8c), *(esi_8 + 0xd48))
int32_t eax_61 = *(eax_59 + 0x9c) & 0x940

if (((*(eax_59 + 0x98) & 0x7f000400) | eax_61) == 0)
    int32_t eax_62 = sub_576d20(eax_61, &var_430, esi_8, 0x33)
    int32_t i_4 = i_2
    i_2 -= eax_62
    
    if (i_4 - eax_62 s< 0)
        i_2 = 0

int32_t* ecx_39
int32_t eax_63

if (arg6 == 0)
    int32_t eax_69 = *(esi_8 + 0x19cc)
    
    if (*(esi_8 + 0x19a4) s>= 0x100)
        sub_591930()
    
    int32_t edx_11 = *(esi_8 + 0x19a4)
    int32_t ecx_42 = 0
    
    if (edx_11 s> 0)
        void* eax_70 = esi_8 + 0x152c8
        
        do
            if (*eax_70 == 0xb07)
                esi_8 = arg2
                
                if (*(eax_70 + 4) == eax_69)
                    if (ecx_42 != 0xffffffff && *((ecx_42 << 5) + esi_8 + 0x152d0) == var_4b8)
                        bool cond:17_1 = i_2 - 2 s< 0
                        i_2 -= 2
                        
                        if (cond:17_1)
                            i_2 = 0
                    
                    break
            
            ecx_42 += 1
            eax_70 += 0x20
        while (ecx_42 s< edx_11)
    
    if (arg5 != 0)
        uint32_t eax_74 = sub_5754f0(arg5, arg5, esi_8, 4, 0)
        
        if (eax_74.b != 0)
            int32_t eax_75 = sub_576d20(eax_74, &var_430, esi_8, 3)
            int32_t i_8 = i_2
            i_2 -= eax_75
            
            if (i_8 - eax_75 s< 0)
                i_2 = 0
    
    void* eax_77 = sub_571b30(*(eax_3 + 0x8c), *(esi_8 + 0xd48))
    int32_t eax_79 = *(eax_77 + 0x9c) & 0x940
    
    if (((*(eax_77 + 0x98) & 0x7f000400) | eax_79) == 0)
        int32_t eax_80 = sub_576d20(eax_79, &var_430, esi_8, 2)
        int32_t i_7 = i_2
        i_2 -= eax_80
        
        if (i_7 - eax_80 s< 0)
            i_2 = 0
    
    ecx_39 = arg3
    eax_63 = var_480:4.d
    *ecx_39 = i_2
    
    if (eax_63 != 0)
        if (eax_63 != 1)
            goto label_5775aa
        
        i_2 |= 0x10000
else
    ecx_39 = arg3
    eax_63 = var_480:4.d
    *ecx_39 = i_2
    
    if (eax_63 != 0)
        if (eax_63 != 1)
        label_5775aa:
            sub_63b870(eax_63, &data_801800, "cost.potions == 1", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xfb1, "CardCostMerge")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        i_2 |= 0x10000
int32_t eax_66 = var_4c0 << 0x18 | i_2
*ecx_39 = eax_66

if (var_4b0 != 0)
    *ecx_39 = eax_66 | 0x40000

CookieCheckFunction(ecx_39)
return ecx_39
