// 函数: sub_58a230
// 地址: 0x58a230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x2614)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t* ebx = ecx
uint32_t esi
uint32_t var_c = esi
uint32_t edi = edx
void* eax_2 = ebx[0x541]
uint32_t var_25b8 = edi

if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
    void* var_30
    __builtin_memset(&var_30, 0, 0x20)
    ecx.b = eax_2 == 2
    void* var_2c
    int128_t* var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    eax_2 = sub_61b1b0(eax_2, 0x29, ecx.b, edi, 0, 5, var_30, var_2c, var_28, var_24, var_20, 
        var_1c, var_18, var_14)

void* var_14_1 = 0xffffffff
int32_t var_18_1 = 0xffffffff
int32_t var_1c_1 = 9
ebx[0x67b] = 5
sub_581450(eax_2, edi, ebx, var_1c_1, var_18_1, var_14_1)
void var_2614
memset(&var_2614, 0, 0x48)
uint32_t var_25bc = 3
sub_580700(esi, &var_25bc, 1, &var_2614, 0, nullptr, 0, nullptr)
int32_t ecx_3 = ebx[0x34e]
uint32_t eax_3 = 0
var_25bc = 0
uint32_t var_25a0

if (ecx_3 s<= 0)
label_58a95c:
    memset(&var_2614, 0, 0x48)
    var_25a0 = 0x12
    sub_580700(esi, &var_25a0, 1, &var_2614, 0, nullptr, 0, nullptr)
    sub_588ee0(ebx, edi)
    memset(&var_2614, 0, 0x48)
    var_25a0 = 4
    int32_t eax_47 = sub_580700(esi, &var_25a0, 1, &var_2614, 0, nullptr, 0, nullptr)
    
    if (ebx[0x352] s>= 0x16)
        eax_47 = edi * 0x5a30
        
        if (*(eax_47 + ebx + 0x174f4) s> 0)
            eax_47 = sub_589f70(eax_47, edi, ebx, 6)
    
    sub_581450(
        sub_581450(sub_581450(eax_47, edi, ebx, 1, 0xffffffff, 0xffffffff), edi, ebx, 4, 
            0xffffffff, 0xffffffff), 
        edi, ebx, 5, 0xffffffff, 0xffffffff)
    void* eax_50
    int32_t ecx_35
    eax_50, ecx_35 = sub_5811f0(ebx, edi)
    int32_t i = 0
    int32_t i_2 = 0
    
    if (ebx[0x66e] s> 0)
        int32_t* edi_8 = &ebx[0xed5a]
        int32_t* var_25a4_3 = edi_8
        
        do
            if ((edi_8[1].b & 4) == 0)
                int32_t edx_25 = edi_8[7]
                int16_t var_14_28
                
                if (edx_25 == 0)
                label_58aad5:
                    
                    if (edi_8[0x11] != 0)
                        eax_50, ecx_35 = sub_5757f0(eax_50, (edi_8[7]).w, ebx, 0x80, 0)
                        
                        if (eax_50.b != 0)
                            if (edi_8[0x12] == 0)
                            label_58ab41:
                                var_14_28 = (edi_8[0x11]).w
                                goto label_58ab48
                            
                            uint32_t eax_52 = zx.d(edi_8[0x11].w)
                            var_25a0 = eax_52
                            
                            if (eax_52 u>= 0x320)
                                sub_591930()
                                eax_52 = var_25a0
                            
                            ecx_35 = eax_52 * 0x64
                            eax_50 = *(ecx_35 + ebx + 0x1a54)
                            
                            if (eax_50 != edi_8[0x12])
                                goto label_58ab41
                            
                            eax_50 = *(ecx_35 + ebx + 0x1a50)
                            
                            if (eax_50 != 0x3e9 && eax_50 != 0x451)
                                goto label_58ab41
                else
                    eax_50, ecx_35 = sub_5757f0(eax_50, edx_25.w, ebx, 0x80, 0)
                    
                    if (eax_50.b == 0)
                        goto label_58aad5
                    
                    if (edi_8[8] != 0)
                        uint32_t eax_51 = zx.d(edi_8[7].w)
                        var_25a0 = eax_51
                        
                        if (eax_51 u>= 0x320)
                            sub_591930()
                            eax_51 = var_25a0
                        
                        ecx_35 = eax_51 * 0x64
                        eax_50 = *(ecx_35 + ebx + 0x1a54)
                        
                        if (eax_50 != edi_8[8])
                            goto label_58aad1
                        
                        eax_50 = *(ecx_35 + ebx + 0x1a50)
                        
                        if (eax_50 == 0x3e9 || eax_50 == 0x451)
                            goto label_58aad5
                        
                        goto label_58aad1
                    
                label_58aad1:
                    var_14_28 = 0
                label_58ab48:
                    eax_50 = sub_58a020(eax_50, edi_8, ebx, var_14_28)
                    edi_8[0x15] = 0
                    ebx[0x66e] -= 1
                    __builtin_memcpy(edi_8, ebx[0x66e] * 0xa8 + 0x3b568 + ebx, 0xa8)
                    i = i_2 - 1
                    edi_8 = var_25a4_3 - 0xa8
            
            i += 1
            edi_8 = &edi_8[0x2a]
            i_2 = i
            var_25a4_3 = edi_8
        while (i s< ebx[0x66e])
        
        edi = var_25b8
    
    void* result = ebx[0x541]
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        int32_t var_38_5
        __builtin_memset(&var_38_5, 0, 0x28)
        ecx_35.b = result == 2
        int32_t* var_34_5
        void* var_30_4
        void* var_2c_8
        int128_t* var_28_8
        int32_t var_24_8
        int32_t var_20_11
        int32_t var_1c_19
        int32_t var_18_23
        int32_t var_14_30
        result = sub_61b1b0(result, 0x29, ecx_35.b, edi, var_38_5, var_34_5, var_30_4, var_2c_8, 
            var_28_8, var_24_8, var_20_11, var_1c_19, var_18_23, var_14_30)
    
    ebx[0x67b] = 0
    CookieCheckFunction(result)
    return result

label_58a312:
char var_25b0 = 0
int32_t temp1_1 = mods.dp.d(sx.q(eax_3 + edi), ecx_3)
uint32_t eax_7 = sub_576b30(temp1_1, temp1_1, ebx, 0x1f, 0, 0, 0)
int32_t var_1914[0x320]

if (eax_7 s<= 0)
    void* var_c94_1 = nullptr
    int32_t* var_25a4_1 = nullptr
    int32_t* var_191c_1 = nullptr
    int32_t* eax_8 = sub_5722c0(0, 0x3e9, ebx, temp1_1)
    int32_t esi_1 = *eax_8
    uint32_t edi_1
    int32_t edi_2
    
    if (esi_1 != 0)
        edi_1 = zx.d(esi_1.w)
    label_58a374:
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        eax_8 = edi_1 * 0x64
        edi_2 = *(eax_8 + ebx + 0x1aa4)
        goto label_58a392
    
    while (true)
        edi_2 = 0
    label_58a392:
        int32_t var_259c[0x320]
        
        if (esi_1 == 0)
            int32_t esi_3 = *sub_5722c0(eax_8, 0x451, ebx, temp1_1)
            uint32_t edi_3
            int32_t edi_4
            
            if (esi_3 != 0)
                edi_3 = zx.d(esi_3.w)
            label_58a447:
                
                if (edi_3 u>= 0x320)
                    sub_591930()
                
                edi_4 = ebx[edi_3 * 0x19 + 0x6a9]
                goto label_58a462
            
            while (true)
                edi_4 = 0
            label_58a462:
                
                if (esi_3 == 0)
                    char ecx_9 = var_25b0
                    
                    if (var_c94_1 != 0)
                        ecx_9 = 1
                    
                    var_25b0 = ecx_9
                    eax_7 =
                        sub_582eb0(&var_1914, var_c94_1, 0x3e9, 0xb, 9, 0, 0, 0, nullptr, nullptr)
                    int32_t esi_5 = 0
                    int32_t var_c94_2 = 0
                    int32_t var_25ac_2 = 0
                    
                    if (var_25a4_1 s> 0)
                        do
                            uint32_t esi_6 = zx.d((var_259c[esi_5]).w)
                            
                            if (esi_6 u>= 0x320)
                                sub_591930()
                            
                            int32_t var_14_8 = 0x3e9
                            int32_t edx_8 = var_259c[var_25ac_2]
                            var_25a0 = ebx[esi_6 * 0x19 + 0x695]
                            int32_t var_25c0_1 = 0
                            int32_t var_25a8_1 = 0
                            
                            if (sub_582de0(0, edx_8, ebx, var_14_8) == 0)
                                int32_t var_c8c
                                int32_t eax_24 = sub_590990(&var_c8c, 0xffffffff, ebx, 5, &var_c8c)
                                
                                if (eax_24 != 0)
                                    if (eax_24 != 1)
                                        sub_591930()
                                    
                                    eax_24 = var_c8c
                                
                                if (var_259c[var_25ac_2] == eax_24)
                                    sub_591930()
                                
                                int32_t eax_25 = var_259c[var_25ac_2]
                                void* var_38_3
                                __builtin_memset(&var_38_3, 0, 0x28)
                                int32_t var_34_3
                                int32_t var_30_2
                                int32_t var_2c_3
                                int32_t var_28_3
                                int32_t var_24_3
                                char* var_20_4
                                int32_t var_1c_6
                                void* var_18_7
                                void* var_14_10
                                sub_5822e0(eax_25, temp1_1, ebx, eax_25, 8, 0x451, var_38_3, 
                                    var_34_3, var_30_2, var_2c_3, var_28_3, var_24_3, var_20_4, 
                                    var_1c_6, var_18_7, var_14_10)
                            
                            uint32_t eax_26 = var_25a0
                            
                            if (ebx[esi_6 * 0x19 + 0x695] != eax_26)
                                sub_63b870(eax_26, &data_801800, "c.moveIdx == idxBefore", 
                                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x38c3, 
                                    "CleanupPhase")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            void* eax_28
                            
                            if (sub_5757f0(eax_26, (var_259c[var_25ac_2]).w, ebx, 0x80, 0) != 0)
                                if (esi_6 u>= 0x320)
                                    sub_591930()
                                
                                int32_t i_1 = 0
                                int32_t var_25c4_1 = ebx[esi_6 * 0x19 + 0x695]
                                eax_28 = nullptr
                                void* var_25a8_2 = nullptr
                                int32_t var_25c8 = var_259c[var_25ac_2]
                                
                                if (ebx[0x66e] s> 0)
                                    void* esi_7 = &ebx[0xed61]
                                    
                                    do
                                        int32_t eax_30 = *(esi_7 - 0x1c)
                                        int32_t eax_31
                                        
                                        if (eax_30 != 1 && eax_30 != 4 && eax_30 != 5)
                                            eax_31 = *(esi_7 + 0x34)
                                        
                                        if (eax_30 == 1 || eax_30 == 4 || eax_30 == 5 || eax_31 == 2
                                                || eax_31 == 3 || (*(esi_7 - 0x18) & 6) != 0
                                                || *esi_7 == 0)
                                            eax_28 = var_25a8_2
                                        else
                                            eax_28 = var_25a8_2
                                            
                                            if (sub_5941b0(esi_7, &var_25c8) != 0)
                                                eax_28 += 1
                                                var_25a8_2 = eax_28
                                        
                                        i_1 += 1
                                        esi_7 += 0xa8
                                    while (i_1 s< ebx[0x66e])
                            else
                                eax_28 = nullptr
                            
                            int32_t eax_33 = var_259c[var_25ac_2]
                            eax_7 = sub_578d00(eax_33, 0xffffffff, ebx, eax_33, nullptr, nullptr, 
                                eax_28)
                            esi_5 = var_25ac_2 + 1
                            var_25ac_2 = esi_5
                        while (esi_5 s< var_25a4_1)
                    
                    break
                
                uint32_t eax_15 = zx.d(esi_3.w)
                
                if (eax_15 u>= 0x320)
                    sub_591930()
                
                if (sub_578e10(ebx, esi_3) == 0)
                    void* eax_17 = var_c94_1
                    
                    if (eax_17 s>= 0x320)
                        sub_591930()
                        eax_17 = var_c94_1
                    
                    var_1914[eax_17] = esi_3
                    var_c94_1 += 1
                    
                    if (eax_15 u>= 0x320)
                        sub_591930()
                    
                    ebx[eax_15 * 0x19 + 0x69b] &= 0xfffffff3
                
                esi_3 = edi_4
                
                if (edi_4 != 0)
                    edi_3 = zx.d(edi_4.w)
                    goto label_58a447
            
            break
        
        if (sub_578e10(ebx, esi_1) == 0)
            void* eax_12 = var_c94_1
            
            if (eax_12 s>= 0x320)
                sub_591930()
                eax_12 = var_c94_1
            
            var_1914[eax_12] = esi_1
            var_c94_1 += 1
            uint32_t esi_2 = zx.d(esi_1.w)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            eax_8 = esi_2 * 0x64
            *(eax_8 + ebx + 0x1a6c) &= 0xfffffff3
        else
            int32_t* eax_10 = var_25a4_1
            
            if (eax_10 s>= 0x320)
                sub_591930()
                eax_10 = var_25a4_1
            
            var_259c[eax_10] = esi_1
            eax_8 = var_191c_1 + 1
            var_25a4_1 = eax_8
            var_191c_1 = eax_8
        
        esi_1 = edi_2
        
        if (edi_2 != 0)
            edi_1 = zx.d(edi_2.w)
            goto label_58a374

int32_t* ecx_21 = ebx
int32_t* eax_34
int32_t edx_14
eax_34, edx_14 = sub_5722c0(eax_7, 0x463, ecx_21, temp1_1)
uint32_t eax_35 = *eax_34
uint32_t var_25a4_2 = eax_35

if (eax_35 == 0)
    esi = 0
    goto label_58a787

uint32_t esi_9 = zx.d(eax_35.w)

if (esi_9 u>= 0x320)
    edx_14 = sub_591930()

while (true)
    esi = ebx[esi_9 * 0x19 + 0x6a9]
    eax_35 = var_25a4_2
label_58a787:
    uint32_t edi_6 = esi
label_58a790:
    
    if (eax_35 == 0)
        edi = var_25b8
        
        if (edi == temp1_1)
            memset(&var_2614, 0, 0x48)
            var_25a0 = 0x10
            void* var_c94_3 = nullptr
            uint32_t edi_7 = *sub_5722c0(
                sub_580700(esi, &var_25a0, 1, &var_2614, 0, nullptr, 0, nullptr), 0x3ea, ebx, edi)
            uint32_t esi_10
            
            if (edi_7 != 0)
                esi_10 = zx.d(edi_7.w)
            label_58a85d:
                
                if (esi_10 u>= 0x320)
                    sub_591930()
                
                esi = ebx[esi_10 * 0x19 + 0x6a9]
                goto label_58a878
            
            while (true)
                esi = 0
            label_58a878:
                
                if (edi_7 == 0)
                    edi = var_25b8
                    void* var_18_13
                    void* var_14_18
                    
                    if (var_25b0 == 0)
                        var_14_18 = nullptr
                        var_18_13 = nullptr
                    else
                        var_14_18 = nullptr
                        var_18_13 = 0xffffffff
                    
                    sub_582eb0(&var_1914, var_c94_3, 0x3ea, 0xb, 8, 0, 0, 0x20, var_18_13, 
                        var_14_18)
                    break
                
                uint32_t eax_42 = zx.d(edi_7.w)
                var_25a0 = eax_42
                
                if (eax_42 u>= 0x320)
                    sub_591930()
                    eax_42 = var_25a0
                
                int32_t eax_43 = ebx[eax_42 * 0x19 + 0x69b]
                
                if (eax_43.b s>= 0)
                    if (var_c94_3 s>= 0x320)
                        sub_591930()
                    
                    var_1914[var_c94_3] = edi_7
                    var_c94_3 += 1
                else
                    ebx[eax_42 * 0x19 + 0x69b] = eax_43 & 0xffffff7f
                
                edi_7 = esi
                
                if (esi != 0)
                    esi_10 = zx.d(esi.w)
                    goto label_58a85d
        
        ecx_3 = ebx[0x34e]
        eax_3 = var_25bc + 1
        var_25bc = eax_3
        
        if (eax_3 s< ecx_3)
            break
        
        goto label_58a95c
    
    int32_t var_14_14 = 0x17
    int128_t* var_18_10 = 0x463
    var_25a0 = eax_35
    ecx_21, edx_14 = sub_589e00(&var_25a0, edx_14, ebx, &var_25a0, ecx_21, var_18_10)
    eax_35 = esi
    var_25a4_2 = eax_35
    
    if (edi_6 == 0)
        esi = 0
        edi_6 = 0
        goto label_58a790
    
    esi_9 = zx.d(edi_6.w)
    
    if (esi_9 u>= 0x320)
        edx_14 = sub_591930()
        esi = ebx[esi_9 * 0x19 + 0x6a9]
        eax_35 = var_25a4_2
        goto label_58a787

goto label_58a312
