// 函数: _Z18PlayerRevealUpdate9UI2Handle
// 地址: 0xb44390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x25
int64_t var_38 = entry_x25
uint64_t entry_x24
uint64_t var_30 = entry_x24
DomGfx* entry_x20
DomGfx* var_10 = entry_x20
int32_t x19 = arg1
int32_t x0_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))

if (x0_1 u<= 5 && (1 << x0_1 & 0x32) != 0)
    UI2SetState(zx.q(x19), &data_1831890, 0xffffffff, 0)

GetClient()
uint64_t x8_2 = zx.q(*(gDomClient + 0x82b48))

if (x8_2.d u<= 4)
    int32_t x20 = 2
    
    switch (x8_2)
        case 0, 3
            x20 = 0
        case 2
            x20 = 1
        case 4
            x20 = *(gDomClient + 0x82b4c)
    
    int64_t result = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))
    int32_t x8_4
    
    if (x20 - 1 u< 2 || result.d == 2)
        result = UI2SetState(zx.q(x19), &data_182f1c0, 0xffffffff, 0)
        x8_4 = *(gDomClient + 0x1f8e4)
        
        if (x8_4 != 0)
        label_b444bc:
            entry_x24 = zx.q(x8_4.w)
            
            if (entry_x24.d u< *(gDomClient + 0x205e8))
                entry_x25 = *(gDomClient + 0x205e0)
                entry_x20 = entry_x25 + entry_x24 * 0x21d8
                
                if (*(entry_x20 + 0x21d0) == x8_4)
                    if ((zx.d(data_182aaf0) & 1) == 0)
                        goto label_b45300
                    
                    goto label_b4450c
    else
        x8_4 = *(gDomClient + 0x1f8e4)
        
        if (x8_4 != 0)
            goto label_b444bc
    *(gDomClient + 0x1f8e4) = 0
    return result

uint64_t x0_74
int64_t* x1_14
int32_t x2_9
int32_t x8_27
int32_t x9_6
void* x10_7
int64_t x11_12
int32_t x11_16
void* x12_2

while (true)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_b45300:
    
    if (__cxa_guard_acquire(&data_182aaf0) != 0)
        XString::XString(0x182aae8)
        __cxa_atexit(XString::~XString, 0x182aae8, &data_1122730)
        __cxa_guard_release(&data_182aaf0)
    
label_b4450c:
    UI2SetState(zx.q(x19), &data_182f520, 0xffffffff, 0)
    int64_t x0_7
    int64_t x1_1
    x0_7, x1_1 = CalcRevealLabel(entry_x20)
    uint32_t x22_1 = (x0_7 u>> 0x20).d
    char var_68
    
    if (x0_7.d != 0x15)
        L(*((x0_7 & 0xffffffff) * 0x28 + &data_1836d60), nullptr)
        XString::operator=(0x182aae8)
    else
        int32_t x0_8 = GetCurrentLanguage()
        XString::XString(&var_68)
        
        if (x1_1.d != 0)
            GetCardName(zx.q(x0_8), zx.q(x1_1.d))
            XString::operator=(&var_68)
            XString::~XString()
        
        XString::operator=(0x182aae8)
        XString::~XString()
    
    UI2SetText(zx.q(x19), &data_18318c0, 0x182aae8, 0xffffffff)
    
    if (data_11ad3c0 s>= *(ActiveGame() + 0x11b4))
        data_11ad3c0 = 0xffffffff
    
    if (x22_1 != 0xffffffff)
        int32_t x8_10
        
        if ((x1_1 & 1) == 0)
            int32_t x8_9 = *(gDomClient + 0x38)
            
            x8_10 = x8_9 == 0xffffffff ? 0 : x8_9
        
        if ((x1_1 & 1) != 0 || x8_10 != x22_1)
            UI2SetState(zx.q(x19), &data_18318d8, 0xffffffff, 0)
            data_11ad3c0 = x22_1
    
    int64_t* x26_3 = entry_x25 + entry_x24 * 0x21d8 + 0x60
    void* x28_2 = &x26_3[-1]
    void* fp_2 = x26_3 - 4
    uint64_t x0_17 = zx.q(*fp_2)
    uint64_t x11_2 = zx.q(*(gDomClient + 0x205e8))
    int32_t x4_1
    
    if (x11_2.d == 0)
        x4_1 = 0
    else
        void* x10_3 = *(gDomClient + 0x205e0)
        int64_t x11_3 = x10_3 + x11_2 * 0x21d8
        void* x12_1 = x10_3
    label_b446a0:
        
        if (zx.d(*(x12_1 + 0x21d2)) == 0)
            x12_1 += 0x21d8
            
            if (x12_1 u< x11_3)
                goto label_b446a0
            
            x4_1 = 0
        else if (x12_1 == 0xffffffff)
            x4_1 = 0
        else
            x4_1 = 0
        label_b446d4:
            
            if (*(x12_1 + 0x2c) == 0 && *(x12_1 + 0xa0) == *x28_2 && *(x12_1 + 0xa4) == x0_17.d
                    && *(x12_1 + 0xc8) == *x26_3)
                x4_1 += 1
            
            if (x12_1 == 0)
                x12_1 = x10_3
            else
                x12_1 += 0x21d8
            
            if (x12_1 u< x11_3)
            label_b44714:
                
                if (zx.d(*(x12_1 + 0x21d2)) == 0)
                    x12_1 += 0x21d8
                    
                    if (x12_1 u< x11_3)
                        goto label_b44714
                else if (x12_1 != 0xffffffff)
                    goto label_b446d4
    
    entry_x20 = zx.q(CalcPileState(x0_17, zx.q(*(entry_x25 + entry_x24 * 0x21d8 + 0x30)), 
        zx.q(*(gDomClient + 0x2074c)), zx.q(*(gDomClient + 0x20758)), x4_1))
    
    if (data_11ad3c0 != 0xffffffff)
        int32_t x0_20
        
        if (data_182abd8 == "group_reveal" && data_182a8a0 == x19 && zx.d(data_182a678) != 0)
            x0_20 = UI2Exists(zx.q(data_182a8a8))
        
        int32_t x21_2
        
        if (data_182abd8 != "group_reveal" || data_182a8a0 != x19 || zx.d(data_182a678) == 0
                || (x0_20 & 1) == 0)
            int32_t x0_22 = UI2GetHandle(zx.q(x19), "group_reveal")
            x21_2 = x0_22
            data_182a8a8 = x0_22
            
            if (x0_22 != 0)
                data_182abd8 = "group_reveal"
                data_182a8a0 = x19
                data_182a678 = 1
        else
            x21_2 = data_182a8a8
        
        if ((entry_x20.d & 0xfffffffe) != 2)
            goto label_b44858
        
        int32_t x0_24
        
        if (data_182abe0 == "group_slidepile" && data_182a8b0 == x19 && zx.d(data_182a680) != 0)
            x0_24 = UI2Exists(zx.q(data_182a8b8))
        
        if (data_182abe0 != "group_slidepile" || data_182a8b0 != x19 || zx.d(data_182a680) == 0
                || (x0_24 & 1) == 0)
            int32_t x0_26 = UI2GetHandle(zx.q(x19), "group_slidepile")
            data_182a8b8 = x0_26
            
            if (x0_26 != 0)
                x21_2 = x0_26
                data_182abe0 = "group_slidepile"
                data_182a8b0 = x19
                data_182a680 = 1
            label_b448ac:
                DeclarePlayerColor(zx.q(x21_2), zx.q(data_11ad3c0))
                int32_t var_70
                PlayerGetNameAvatar(ActiveGame() + 8, 
                    GameGetPlayer_2a(ActiveGame() + 8, zx.q(data_11ad3c0)), &var_70)
                UI2SetState(zx.q(x21_2), GameAvatarGet(zx.q(var_70)), 0xffffffff, 0)
                UI2SetText(zx.q(x21_2), &data_18318f0, &var_68, 0xffffffff)
                XString::~XString()
        else
            x21_2 = data_182a8b8
        label_b44858:
            
            if (x21_2 != 0)
                goto label_b448ac
    
    int32_t x10_4 = *(entry_x25 + entry_x24 * 0x21d8 + 0x70)
    int32_t x21_4
    
    if (x10_4 == 0)
    label_b4499c:
        x21_4 = 0
        
        if ((entry_x20.d & 0xfffffffb) == 3)
            UI2SetState(zx.q(x19), &data_18317a0, 0xffffffff, 0)
    else
        uint64_t x8_22 = zx.q(x10_4.w)
        
        if (x8_22.d u>= *(gDomClient + 0x205e8))
            goto label_b4499c
        
        int64_t x9_5 = *(gDomClient + 0x205e0)
        
        if (*(x9_5 + x8_22 * 0x21d8 + 0x21d0) != x10_4)
            goto label_b4499c
        
    label_b44964:
        int32_t x11_7 = *(x9_5 + x8_22 * 0x21d8 + 0x2c)
        int32_t x21_3
        
        if (x11_7 == 3)
            x21_3 = *(x9_5 + x8_22 * 0x21d8 + 0x30)
            
            if (x21_3 != 0x70d && x21_3 != 0x718)
                int32_t x11_9 = *(x9_5 + x8_22 * 0x21d8 + 0x70)
                x8_22 = zx.q(x11_9.w)
                
                if (x11_9 != 0)
                    goto label_b44964
        else if (x11_7 == 5)
            x21_3 = *(x9_5 + x8_22 * 0x21d8 + 0x204)
        else if (x11_7 == 1)
            x21_3 = *(x9_5 + x8_22 * 0x21d8 + 0x170)
        else if (x11_7 != 0)
            continue
        else
            x21_3 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_5 + x8_22 * 0x21d8 + 0x98)))
        
        uint64_t x1_13
        
        if (*(GetClient() + 0x5068) == 0)
            x1_13 = 0x18
        else
            x1_13 = zx.q(*(ActiveGame() + 0x30))
        
        x21_4 = IsLandscape(zx.q(x21_3), x1_13)
        
        if ((entry_x20.d & 0xfffffffb) == 3)
            UI2SetState(zx.q(x19), &data_18317a0, 0xffffffff, 0)
    
    uint64_t x8_25 = zx.q(entry_x20.d - 2)
    int64_t* x1_12
    
    if (x8_25.d u<= 9)
        switch (x8_25)
            case 0, 1
                UI2SetState(zx.q(x19), &data_18317b8, 0xffffffff, 0)
                int32_t x0_39 = PileIsStacked(zx.q(*x28_2), zx.q(*fp_2), 
                    *(entry_x25 + entry_x24 * 0x21d8 + 0x6c))
                x8_27 = *x28_2
                x9_6 = *fp_2
                
                if ((x0_39 & 1) != 0)
                    uint64_t x11_11 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x11_11.d == 0)
                        goto label_b452cc
                    
                    x10_7 = *(gDomClient + 0x205e0)
                    x11_12 = x10_7 + x11_11 * 0x21d8
                    x12_2 = x10_7
                label_b44a50:
                    
                    if (zx.d(*(x12_2 + 0x21d2)) != 0)
                        if (x12_2 == 0xffffffff)
                            goto label_b452cc
                        
                        x2_9 = 1
                        break
                    
                    x12_2 += 0x21d8
                    
                    if (x12_2 u< x11_12)
                        goto label_b44a50
                    
                    goto label_b452cc
                
                uint64_t x13_2 = zx.q(*(gDomClient + 0x205e8))
                
                if (x13_2.d == 0)
                    goto label_b452cc
                
                void* x10_10 = *(gDomClient + 0x205e0)
                int64_t x13_3 = x10_10 + x13_2 * 0x21d8
                void* x14_2 = x10_10
            label_b44c38:
                
                if (zx.d(*(x14_2 + 0x21d2)) == 0)
                    x14_2 += 0x21d8
                    
                    if (x14_2 u< x13_3)
                        goto label_b44c38
                    
                    goto label_b452cc
                
                if (x14_2 == 0xffffffff)
                    goto label_b452cc
                
                x11_16 = 0
            label_b45190:
                
                if (*(x14_2 + 0x2c) == 0 && *(x14_2 + 0xa0) == x8_27 && *(x14_2 + 0xa4) == x9_6
                        && *(x14_2 + 0xc8) == *x26_3)
                    x11_16 += 1
                
                if (x14_2 == 0)
                    x14_2 = x10_10
                else
                    x14_2 += 0x21d8
                
                if (x14_2 u>= x13_3)
                    goto label_b451ec
                
            label_b451d0:
                
                if (zx.d(*(x14_2 + 0x21d2)) != 0)
                    if (x14_2 != 0xffffffff)
                        goto label_b45190
                    
                    goto label_b451ec
                
                x14_2 += 0x21d8
                
                if (x14_2 u< x13_3)
                    goto label_b451d0
                
                goto label_b451ec
            case 2, 5
                goto label_b44b34
            case 3, 9
                UI2SetState(zx.q(x19), &data_1831830, 0xffffffff, 0)
                
                if (entry_x20.d - 5 u< 3)
                    goto label_b44b34
                
                if (entry_x20.d - 0xa u< 2)
                    goto label_b44aa8
                
                if (entry_x20.d == 8)
                    goto label_b44f1c
                
                continue
            case 4
                UI2SetState(zx.q(x19), &data_18318a8, 0xffffffff, 0)
                UI2SetState(zx.q(x19), &data_1831830, 0xffffffff, 0)
            label_b44b34:
                uint64_t x12_5 = zx.q(*(gDomClient + 0x205e8))
                
                if (x12_5.d == 0)
                    UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                else
                    void* x9_9 = *(gDomClient + 0x205e0)
                    int64_t x13_1 = x9_9 + x12_5 * 0x21d8
                    void* x12_6 = x9_9
                label_b44b60:
                    
                    if (zx.d(*(x12_6 + 0x21d2)) == 0)
                        x12_6 += 0x21d8
                        
                        if (x12_6 u< x13_1)
                            goto label_b44b60
                        
                        UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                    else if (x12_6 == 0xffffffff)
                        UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                    else
                    label_b44b90:
                        
                        if (*(x12_6 + 0x2c) != 3 || *(x12_6 + 0x58) != *x28_2
                                || *(x12_6 + 0x5c) != *fp_2 || *(x12_6 + 0x60) != *x26_3)
                            if (x12_6 == 0)
                                x12_6 = x9_9
                            else
                                x12_6 += 0x21d8
                            
                            if (x12_6 u>= x13_1)
                                UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                            else
                            label_b44bd4:
                                
                                if (zx.d(*(x12_6 + 0x21d2)) == 0)
                                    x12_6 += 0x21d8
                                    
                                    if (x12_6 u< x13_1)
                                        goto label_b44bd4
                                else if (x12_6 != 0xffffffff)
                                    goto label_b44b90
                                
                                UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                        else if (x12_6 == 0)
                            UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                        else
                            int32_t x20_6 = *(x12_6 + 0x88)
                            int32_t x2_10
                            
                            x2_10 = x20_6 s> 1 ? x20_6 : 1
                            
                            UI2SetInt(zx.q(x19), &data_182f4c0, x2_10, 0xffffffff)
                            
                            if ((x21_4 & 1) == 0)
                                if (x20_6 s> 3)
                                    x1_12 = &data_18317e8
                                    goto label_b44ef8
                            else if (x20_6 s> 1)
                                x1_12 = &data_18317e8
                                goto label_b44ef8
                
                x1_12 = &data_18317d0
                goto label_b44ef8
            case 6
            label_b44f1c:
                UI2SetState(zx.q(x19), &data_1831800, 0xffffffff, 0)
                uint64_t x12_8 = zx.q(*(gDomClient + 0x205e8))
                int32_t x20_4
                
                if (x12_8.d == 0)
                    x20_4 = 1
                    UI2SetInt(zx.q(x19), &data_182f4d8, 1, 0xffffffff)
                    goto label_b450dc
                
                void* x8_35 = *(gDomClient + 0x205e0)
                int32_t x9_10 = *x28_2
                int64_t x10_11 = *x26_3
                void* x11_15 = x8_35
                int64_t x12_9 = x8_35 + x12_8 * 0x21d8
                void* x14_4 = x8_35
            label_b44f58:
                int32_t x13_5
                
                if (zx.d(*(x14_4 + 0x21d2)) == 0)
                    x14_4 += 0x21d8
                    
                    if (x14_4 u< x12_9)
                        goto label_b44f58
                    
                    x13_5 = 0
                else if (x14_4 == 0xffffffff)
                    x13_5 = 0
                else
                    x13_5 = 0
                label_b44fac:
                    
                    if (*(x14_4 + 0x2c) == 0 && *(x14_4 + 0xa0) == x9_10 && *(x14_4 + 0xa4) == 0x3ef
                            && *(x14_4 + 0xc8) == x10_11)
                        x13_5 += 1
                    
                    if (x14_4 == 0)
                        x14_4 = x8_35
                    else
                        x14_4 += 0x21d8
                    
                    if (x14_4 u< x12_9)
                    label_b44fec:
                        
                        if (zx.d(*(x14_4 + 0x21d2)) == 0)
                            x14_4 += 0x21d8
                            
                            if (x14_4 u< x12_9)
                                goto label_b44fec
                        else if (x14_4 != 0xffffffff)
                            goto label_b44fac
                
            label_b4501c:
                int32_t x20_5
                
                if (zx.d(*(x11_15 + 0x21d2)) == 0)
                    x11_15 += 0x21d8
                    
                    if (x11_15 u< x12_9)
                        goto label_b4501c
                    
                    x20_5 = 0
                else if (x11_15 == 0xffffffff)
                    x20_5 = 0
                else
                    x20_5 = 0
                label_b45050:
                    
                    if (*(x11_15 + 0x2c) == 0 && *(x11_15 + 0xa0) == x9_10
                            && *(x11_15 + 0xa4) == 0x3f0 && *(x11_15 + 0xc8) == x10_11)
                        x20_5 += 1
                    
                    if (x11_15 == 0)
                        x11_15 = x8_35
                    else
                        x11_15 += 0x21d8
                    
                    if (x11_15 u< x12_9)
                    label_b45090:
                        
                        if (zx.d(*(x11_15 + 0x21d2)) == 0)
                            x11_15 += 0x21d8
                            
                            if (x11_15 u< x12_9)
                                goto label_b45090
                        else if (x11_15 != 0xffffffff)
                            goto label_b45050
                
                int32_t x2_8
                
                x2_8 = x13_5 s> 1 ? x13_5 : 1
                
                UI2SetInt(zx.q(x19), &data_182f4d8, x2_8, 0xffffffff)
                
                x20_4 = x20_5 s> 1 ? x20_5 : 1
                
            label_b450dc:
                x1_14 = &data_182f4f0
                x0_74 = zx.q(x19)
                x2_9 = x20_4
                goto label_b452e0
            case 7
                continue
            case 8
            label_b44aa8:
                UI2SetState(zx.q(x19), &data_1831818, 0xffffffff, 0)
                uint64_t x12_3 = zx.q(*(gDomClient + 0x205e8))
                int32_t x20_3
                
                if (x12_3.d == 0)
                    x20_3 = 1
                    UI2SetInt(zx.q(x19), &data_182f4d8, 1, 0xffffffff)
                    UI2SetInt(zx.q(x19), &data_182f4c0, 1, 0xffffffff)
                    goto label_b44ee4
                
                void* x8_31 = *(gDomClient + 0x205e0)
                int32_t x9_7 = *x28_2
                int64_t x10_8 = *x26_3
                void* x11_13 = x8_31
                int64_t x12_4 = x8_31 + x12_3 * 0x21d8
                void* x14_1 = x8_31
            label_b44ae4:
                int32_t x13_4
                
                if (zx.d(*(x14_1 + 0x21d2)) == 0)
                    x14_1 += 0x21d8
                    
                    if (x14_1 u< x12_4)
                        goto label_b44ae4
                    
                    x13_4 = 0
                else if (x14_1 == 0xffffffff)
                    x13_4 = 0
                else
                    x13_4 = 0
                label_b44cdc:
                    
                    if (*(x14_1 + 0x2c) == 0 && *(x14_1 + 0xa0) == x9_7 && *(x14_1 + 0xa4) == 0x3ef
                            && *(x14_1 + 0xc8) == x10_8)
                        x13_4 += 1
                    
                    if (x14_1 == 0)
                        x14_1 = x8_31
                    else
                        x14_1 += 0x21d8
                    
                    if (x14_1 u< x12_4)
                    label_b44d1c:
                        
                        if (zx.d(*(x14_1 + 0x21d2)) == 0)
                            x14_1 += 0x21d8
                            
                            if (x14_1 u< x12_4)
                                goto label_b44d1c
                        else if (x14_1 != 0xffffffff)
                            goto label_b44cdc
                
                void* x14_3 = x11_13
            label_b44d50:
                int32_t x21_5
                
                if (zx.d(*(x14_3 + 0x21d2)) == 0)
                    x14_3 += 0x21d8
                    
                    if (x14_3 u< x12_4)
                        goto label_b44d50
                    
                    x21_5 = 0
                else if (x14_3 == 0xffffffff)
                    x21_5 = 0
                else
                    x21_5 = 0
                label_b44d84:
                    
                    if (*(x14_3 + 0x2c) == 0 && *(x14_3 + 0xa0) == x9_7 && *(x14_3 + 0xa4) == 0x3ee
                            && *(x14_3 + 0xc8) == x10_8)
                        x21_5 += 1
                    
                    if (x14_3 == 0)
                        x14_3 = x8_31
                    else
                        x14_3 += 0x21d8
                    
                    if (x14_3 u< x12_4)
                    label_b44dc4:
                        
                        if (zx.d(*(x14_3 + 0x21d2)) == 0)
                            x14_3 += 0x21d8
                            
                            if (x14_3 u< x12_4)
                                goto label_b44dc4
                        else if (x14_3 != 0xffffffff)
                            goto label_b44d84
                
            label_b44df4:
                int32_t x22_3
                
                if (zx.d(*(x11_13 + 0x21d2)) == 0)
                    x11_13 += 0x21d8
                    
                    if (x11_13 u< x12_4)
                        goto label_b44df4
                    
                    x22_3 = 0
                else if (x11_13 == 0xffffffff)
                    x22_3 = 0
                else
                    x22_3 = 0
                label_b44e28:
                    
                    if (*(x11_13 + 0x2c) == 0 && *(x11_13 + 0xa0) == x9_7
                            && *(x11_13 + 0xa4) == 0x3f0 && *(x11_13 + 0xc8) == x10_8)
                        x22_3 += 1
                    
                    if (x11_13 == 0)
                        x11_13 = x8_31
                    else
                        x11_13 += 0x21d8
                    
                    if (x11_13 u< x12_4)
                    label_b44e68:
                        
                        if (zx.d(*(x11_13 + 0x21d2)) == 0)
                            x11_13 += 0x21d8
                            
                            if (x11_13 u< x12_4)
                                goto label_b44e68
                        else if (x11_13 != 0xffffffff)
                            goto label_b44e28
                
                int32_t x2_5
                
                x2_5 = x13_4 s> 1 ? x13_4 : 1
                
                UI2SetInt(zx.q(x19), &data_182f4d8, x2_5, 0xffffffff)
                int32_t x2_6
                
                x2_6 = x21_5 s> 1 ? x21_5 : 1
                
                UI2SetInt(zx.q(x19), &data_182f4c0, x2_6, 0xffffffff)
                
                x20_3 = x22_3 s> 1 ? x22_3 : 1
                
            label_b44ee4:
                UI2SetInt(zx.q(x19), &data_182f4f0, x20_3, 0xffffffff)
                x1_12 = &data_182f508
            label_b44ef8:
                return UI2SetState(zx.q(x19), x1_12, 0xffffffff, 0)

label_b45110:

if (*(x12_2 + 0x2c) != 3 || *(x12_2 + 0x58) != x8_27 || *(x12_2 + 0x5c) != x9_6
        || *(x12_2 + 0x60) != 0)
    if (x12_2 == 0)
        x12_2 = x10_7
    else
        x12_2 += 0x21d8
    
    if (x12_2 u>= x11_12)
    label_b452cc:
        x2_9 = 1
    label_b452d4:
        x1_14 = &data_182f4c0
        x0_74 = zx.q(x19)
    label_b452e0:
        return UI2SetInt(x0_74, x1_14, x2_9, 0xffffffff)
    
label_b45150:
    
    if (zx.d(*(x12_2 + 0x21d2)) == 0)
        if (x12_2 + 0x21d8 u>= x11_12)
            goto label_b452cc
    else if (x12_2 == 0xffffffff)
        goto label_b452d4
else
    if (x12_2 == 0)
        goto label_b452cc
    
    int32_t x9_11 = *(x12_2 + 0x70)
    
    if (x9_11 == 0)
        goto label_b452cc
    
    x11_16 = 0
label_b452b0:
    void* x9_13 = x10_7 + mulu.dp.d(x9_11 & 0xffff, 0x21d8)
    
    if (*(x9_13 + 0xc0) != 0)
        x11_16 += 1
    
    if (*(x9_13 + 0x213c) == 0)
    label_b451ec:
        
        if (x11_16 s> 1)
            x2_9 = x11_16
            goto label_b452d4
        
        x2_9 = 1
        goto label_b452d4
