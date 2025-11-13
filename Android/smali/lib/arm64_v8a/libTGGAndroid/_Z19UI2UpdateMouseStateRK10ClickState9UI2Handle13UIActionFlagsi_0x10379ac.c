// 函数: _Z19UI2UpdateMouseStateRK10ClickState9UI2Handle13UIActionFlagsi
// 地址: 0x10379ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3
int32_t x21 = arg2
int32_t x19 = 0
int32_t x8_4

if (arg3 != 1)
    int32_t x8_1 = *(gUI2 + 0x5c)
    
    if (x8_1 == 0)
        goto label_1037a78
    
    if (x21 == 0)
    label_1037a28:
        uint64_t x9_2 = zx.q(x8_1.w)
        int64_t x10_2
        
        if (x9_2.d u< *(gUI2 + 8))
            x10_2 = *gUI2
        
        if (x9_2.d u>= *(gUI2 + 8) || *(x10_2 + x9_2 * 0x19a8 + 0x19a0) != x8_1)
            x19 = 0
        else
            void* x8_2 = x10_2 + x9_2 * 0x19a8
            *(x8_2 + 0x13f1) = 0
            x19 = zx.d(*(x8_2 + 0x1615)) != 0 ? 1 : 0
        
        *(gUI2 + 0x5c) = 0
        goto label_1037a78
    
    int32_t x11_1 = x21
    
    while (true)
        if (x8_1 == x11_1)
            x19 = 0
            x8_4 = *(gUI2 + 0x54)
            
            if (x8_4 != 0)
                goto label_1037a8c
            
            break
        
        void* x11_4 = *(*gUI2 + mulu.dp.d(x11_1 & 0xffff, 0x19a8) + 0x17d0)
        
        if (x11_4 == 0)
            goto label_1037a28
        
        x11_1 = *(x11_4 + 0x19a0)
        
        if (x11_1 == 0)
            goto label_1037a28
    
    goto label_1037aa8

label_1037a78:
x8_4 = *(gUI2 + 0x54)

if (x8_4 == 0)
    goto label_1037aa8

label_1037a8c:
void* x9_4 = *gUI2 + zx.q(x8_4.w) * 0x19a8

if (*(x9_4 + 0x13a4) == 0)
    goto label_1037aa8

if (zx.d(*(arg1 + 8)) == 0)
    *(gUI2 + 0x54) = 0
    *(x9_4 + 0x13a4) = 0
    
    if (x23 s<= 0x7f)
        goto label_1037ab0
else
    x23 |= 8
    x21 = x8_4
label_1037aa8:
    
    if (x23 s<= 0x7f)
    label_1037ab0:
        uint64_t x8_5 = zx.q(x23 - 0x10)
        
        if (x8_5.d u> 0x30 || (1 << x8_5 & 0x1000000010001) == 0)
            goto label_1037b80
        
        goto label_1037b08

int32_t x27_1
int128_t var_90

if (x23 == 0x80 || x23 == 0x200 || x23 == 0x100)
label_1037b08:
    int32_t x9_5 = *(gUI2 + 0x58)
    
    if (x9_5 == 0)
        x27_1 = 0
    else
        int64_t x8_8 = *gUI2
        __builtin_memset(&var_90, 0, 0x28)
        UI2* x19_1 = x8_8 + zx.q(x9_5.w) * 0x19a8
        int64_t x0 = *(x19_1 + 0x15d8)
        
        if (x0 != 0)
            var_90:8.q = x0
            
            if ((x23 & 0x10) != 0)
                goto label_1037b78
            
            goto label_1037b40
        
        var_90:8.q = XString::GetString()
        int32_t x8_9
        
        if ((x23 & 0x10) == 0)
        label_1037b40:
            
            if ((x23 & 0x80) != 0)
                x8_9 = 4
                goto label_1037ddc
            
            if ((x23 & 0x40) != 0)
                x8_9 = 3
                goto label_1037ddc
            
            if ((x23 & 0x20) != 0)
                x8_9 = 5
                goto label_1037ddc
            
            if ((x23 & 0x100) != 0)
                x8_9 = 6
                goto label_1037ddc
            
            if ((x23 & 0x200) != 0)
                x8_9 = 9
                goto label_1037ddc
            
        label_10383c8:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return UI2EditorDraw() __tailcall
        
    label_1037b78:
        x8_9 = 2
    label_1037ddc:
        int64_t var_70_1
        var_70_1.d = x8_9
        var_70_1:4.d = arg4
        x27_1 = 1
        UI2TriggerClick(x19_1, &var_90, true, false)
else
label_1037b80:
    int32_t x8_11
    
    if (x21 != 0)
        x8_11 = x21 & 0xffff
    
    UI2* i_1
    void* fp_1
    
    if (x21 == 0 || x8_11 u>= *(gUI2 + 8))
        i_1 = nullptr
        fp_1 = 0x139c
        
        if ((x23 & 0xe) != 0 && zx.d(*(arg1 + 0x329)) != 0)
        label_1037bf4:
            uint64_t x0_3 = zx.q(*(gUI2 + 0x50))
            
            if (x21 != x0_3.d && (i_1 == 0 || zx.d(*(fp_1 + 0x24f)) == 0))
                if (x0_3.d != 0)
                    int64_t x25_1 = x0_3 & 0xffff
                    
                    if (x25_1.d u< *(gUI2 + 8))
                        int64_t x26_1 = *gUI2
                        
                        if (*(x26_1 + x25_1 * 0x19a8 + 0x19a0) == x0_3.d)
                            AndroidDisplayKeyboard(false)
                            InputClearKeyboardButtons()
                            void* x8_17 = x26_1 + x25_1 * 0x19a8
                            *(x8_17 + 0x17f0) = *(x8_17 + 0x17e8)
                            *(x8_17 + 0x1859) = 0
                            x0_3 = zx.q(*(gUI2 + 0x50))
                
                UI2ClearFocus(x0_3, false, true)
    else
        UI2* i_2 = *gUI2 + mulu.dp.d(x8_11, 0x19a8)
        
        if (*(i_2 + 0x19a0) == x21)
            i_1 = i_2
        else
            i_1 = nullptr
        
        fp_1 = i_1 + 0x139c
        
        if ((x23 & 0xe) != 0 && zx.d(*(arg1 + 0x329)) != 0)
            goto label_1037bf4
    
    x27_1 = 0
    
    if (x21 != 0 && i_1 != 0)
        int32_t x12_1 = x23 & 6
        UI2* i = i_1
        int32_t x8_19
        
        do
            if (zx.d(*(i + 0x198c)) != 0)
                goto label_1037cc4
            
            i = *(i + 0x17d0)
            
            if (i == 0)
                goto label_1037cc4
            
            x8_19 = *(i + 0x1528)
        while (x8_19 - 1 u> 2)
        
        float v0
        float v1
        
        if (zx.d(*(arg1 + 0x329)) == 0)
            int32_t x9_19 = *(i + 0x13a4)
            
            if (zx.d(*(arg1 + 8)) == 0)
                *(i + 0x13a4) = 0
                
                if (x9_19 != 2)
                    goto label_1037cc4
                
                x27_1 = 1
            else
                if (x9_19 == 0)
                    goto label_1037cc4
                
                v1 = *(arg1 + 0x314) - *(i + 0x139c)
                v0 = *(arg1 + 0x318) - *(i + 0x13a0)
                
                if (x9_19 != 2)
                    if (x9_19 != 1 || v1 * v1 + v0 * v0 <= fconvert.s(30f))
                        goto label_1037cc4
                    
                    *(i + 0x13a4) = 2
                
                *(i + 0x139c) = *(arg1 + 0x314)
                
                if (x8_19 == 3)
                    *(i + 0x13ac) = *(i + 0x13ac) - v0
                else if (x8_19 == 2)
                    *(i + 0x13a8) = *(i + 0x13a8) - v1
                else
                    if (x8_19 != 1)
                        goto label_10383c8
                    
                    *(i + 0x13ac) = v0 + *(i + 0x13ac)
                
                UI2ClampScrollDelta(i, nullptr)
                x27_1 = 1
                
                do
                    *(i + 0x1378) = 2
                    i = *(i + 0x17d0)
                while (i != 0)
        else
            *(i + 0x13a4) = 1
            *(i + 0x139c) = *(arg1 + 0x314)
        label_1037cc4:
            int32_t x9_12 = *(i_1 + 0x167c)
            
            if (x9_12 != 3 || zx.d(*(fp_1 + 0x218)) == 0)
            label_1037cf8:
                int32_t x8_24 = *(i_1 + 0x1528)
                
                if (x8_24 - 1 u<= 2)
                    if (zx.d(*(arg1 + 0x329)) != 0)
                        if (*(gUI2 + 0x54) != x21)
                            *(gUI2 + 0x54) = x21
                        
                        *(i_1 + 0x13a4) = 2
                        int64_t x9_15 = *(arg1 + 0x314)
                        *fp_1 = x9_15
                        v0 = float.s(x9_15.d)
                        v1 = float.s((x9_15 u>> 0x20).d)
                        goto label_1037d44
                    
                    if (zx.d(*(arg1 + 8)) == 0)
                        *(i_1 + 0x13a4) = 0
                        x27_1 = x19
                    else if (*(i_1 + 0x13a4) != 2)
                        x27_1 = x19
                    else
                        v0 = *(i_1 + 0x139c)
                        v1 = *(i_1 + 0x13a0)
                    label_1037d44:
                        float v2 = *(arg1 + 0x314)
                        v1 = *(arg1 + 0x318) - v1
                        *fp_1 = *(arg1 + 0x314)
                        
                        if (x8_24 == 3)
                            *(i_1 + 0x13ac) = *(i_1 + 0x13ac) - v1
                        else if (x8_24 == 2)
                            *(i_1 + 0x13a8) = *(i_1 + 0x13a8) - (v2 - v0)
                        else
                            if (x8_24 != 1)
                                goto label_10383c8
                            
                            *(i_1 + 0x13ac) = v1 + *(i_1 + 0x13ac)
                        
                        UI2ClampScrollDelta(i_1, nullptr)
                        
                        do
                            *(i_1 + 0x1378) = 2
                            i_1 = *(i_1 + 0x17d0)
                        while (i_1 != 0)
                        
                        x27_1 = x19
                else if (x9_12 == 5 || (*(i_1 + 0x15f8) != 0 && *(i_1 + 0x160c) != 2))
                    int32_t x10_11 = *(i_1 + 0x15ec)
                    
                    if (zx.d(*(gUI2 + 0x70)) == 0)
                        if (x10_11 u> 6)
                            goto label_10383c8
                        
                        int32_t x10_14 = 1 << x10_11
                        
                        if ((x10_14 & 0x3a) == 0)
                            if ((x10_14 & 0x44) != 0 || x9_12 == 5)
                                goto label_1037ff8
                            
                            if (x9_12 == 3)
                                if (zx.d(*(fp_1 + 0x218)) != 0 || (x12_1 != 0
                                        && *(i_1 + 0x15f8) != 0 && *(i_1 + 0x160c) != 2))
                                    goto label_1037ff8
                                
                                x27_1 = 0
                            else
                                if ((x9_12 == 2 && x8_24 != 0) || (x12_1 != 0
                                        && *(i_1 + 0x15f8) != 0 && *(i_1 + 0x160c) != 2))
                                    goto label_1037ff8
                                
                                x27_1 = 0
                        else
                            if (x12_1 != 0 && *(i_1 + 0x15f8) != 0 && *(i_1 + 0x160c) != 2)
                                goto label_1037ff8
                            
                            x27_1 = 0
                    else
                        x27_1 = 0
                        
                        if (x10_11 u>= 5)
                            if (x10_11 == 5)
                            label_1037ff8:
                                
                                if ((x23 & 1) != 0)
                                    int32_t var_94_1 = x12_1
                                    UI2StateDecl* x1_4
                                    
                                    if ((**(arg1 + 0x214))(arg1 + 0x214)
                                            == InputHitResultNone::Comparator || zx.d(*(gUI2 + 0x70)) != 0)
                                        char* x26_3 = *(i_1 + 0x15e0)
                                        
                                        if (x26_3 == 0)
                                        label_1038158:
                                            x1_4 = UIS_MOUSE_OVER
                                        label_103815c:
                                            UI2SetState(i_1, x1_4, 0xfffffc18, 0, fconvert.s(1f))
                                            x12_1 = var_94_1
                                        else
                                            void* x8_40 = *(i_1 + 0x17d0)
                                            
                                            if (x8_40 == 0)
                                                goto label_1038158
                                            
                                            void* __offset(UI2, 0x17d0) x27_3 = i_1 + 0x17d0
                                            UI2* i_3 = i_1
                                            int32_t x0_21
                                            
                                            while (true)
                                                x0_21 = UI2SelectByName(zx.q(*(x8_40 + 0x19a0)), 
                                                    x26_3, *(i_3 + 0x1658))
                                                
                                                if (x0_21 != 0)
                                                    break
                                                
                                                i_3 = *x27_3
                                                x8_40 = *(i_3 + 0x17d0)
                                                x27_3 = i_3 + 0x17d0
                                                
                                                if (x8_40 == 0)
                                                    goto label_1038158
                                            
                                            int64_t x8_41 = *gUI2
                                            
                                            if (x8_41 == 0)
                                                goto label_1038158
                                            
                                            UI2SetState(x8_41 + mulu.dp.d(x0_21 & 0xffff, 0x19a8), 
                                                UIS_MOUSE_OVER, 0xfffffc18, 0, fconvert.s(1f))
                                            x12_1 = var_94_1
                                    else
                                        int64_t x0_15 = (**(arg1 + 0x114))(arg1 + 0x114)
                                        x12_1 = var_94_1
                                        
                                        if (x0_15 == (**(arg1 + 0x214))(arg1 + 0x214))
                                            x12_1 = var_94_1
                                            
                                            if ((x0_15(arg1 + 0x114, arg1 + 0x214) & 1) != 0)
                                                if (zx.d(*(arg1 + 8)) == 0)
                                                    x1_4 = UIS_MOUSE_CLICKED
                                                else
                                                    x1_4 = UIS_MOUSE_DOWN
                                                
                                                goto label_103815c
                                
                                if (zx.d(*(gUI2 + 0x70)) != 0)
                                    x27_1 = 1
                                else if (x12_1 == 0 && ((x23 & 8) == 0 || *(i_1 + 0x13a4) == 0))
                                    x27_1 = x19
                                else
                                    __builtin_memset(&var_90, 0, 0x18)
                                    int64_t x0_24 = *(i_1 + 0x15d8)
                                    
                                    if (x0_24 == 0)
                                        x0_24 = XString::GetString()
                                    
                                    var_90:8.q = x0_24
                                    var_90.d = *(i_1 + 0x19a0)
                                    int128_t var_80
                                    var_80.d = *(i_1 + 0x1740)
                                    int64_t var_70
                                    var_70.d = 0
                                    var_70:4.d = arg4
                                    var_80:8.q = *(arg1 + 0x314)
                                    
                                    if ((x23 & 4) == 0)
                                    label_10381f8:
                                        
                                        if (*(i_1 + 0x13a4) == 2)
                                            UI2SetState(i_1, UIS_MOUSE_DOWN, 0xfffffc18, 0, 
                                                fconvert.s(1f))
                                            
                                            if (zx.d(*(arg1 + 8)) == 0)
                                                var_80:4.d = 5
                                            else
                                                var_80:4.d = 6
                                            
                                            goto label_1038338
                                        
                                        if (zx.d(*(arg1 + 0x329)) != 0
                                                && zx.d(*(fp_1 + 0x24c)) != 0)
                                            UI2SetState(i_1, UIS_MOUSE_CLICKED, 0xfffffc18, 0, 
                                                fconvert.s(1f))
                                            
                                            if (*(gUI2 + 0x50) != x21)
                                                UI2SetFocus(zx.q(x21), arg1 + 0x314, false)
                                            
                                            var_80:4.d = 0
                                            goto label_1038338
                                        
                                        if (zx.d(*(arg1 + 0x32a)) != 0 && (
                                                zx.d(*(fp_1 + 0x24e)) != 0 ||
                                                (*(i_1 + 0x15f8) != 0 && *(i_1 + 0x160c) u<= 1)))
                                            if (*(gUI2 + 0x50) != x21)
                                                UI2SetFocus(zx.q(x21), arg1 + 0x314, false)
                                            
                                            var_80:4.d = 2
                                            var_70.d = 1
                                        label_1038338:
                                            UI2TriggerClick(i_1, &var_90, false, x19.b)
                                            x27_1 = 1
                                        else if ((zx.d(*(arg1 + 0x32b)) != 0
                                                || zx.d(*(arg1 + 0x32c)) != 0)
                                                && zx.d(*(fp_1 + 0x24c)) == 0)
                                            UI2SetState(i_1, UIS_MOUSE_CLICKED, 0xfffffc18, 0, 
                                                fconvert.s(1f))
                                            
                                            if (zx.d(*(arg1 + 0x32d)) != 0)
                                                var_80:4.d = 4
                                            else if (zx.d(*(arg1 + 0x32c)) != 0)
                                                var_80:4.d = 3
                                            
                                            if (*(gUI2 + 0x50) != x21 && zx.d(*(fp_1 + 0x24f)) == 0)
                                                UI2SetFocus(zx.q(x21), arg1 + 0x314, false)
                                            
                                            UI2TriggerClick(i_1, &var_90, true, false)
                                            x27_1 = 1
                                        else
                                            if (x23 == 4)
                                                goto label_1038338
                                            
                                            x27_1 = x19
                                    else
                                        var_70.d = 1
                                        
                                        if (x23 == 0xffffffff)
                                            goto label_10381f8
                                        
                                        if (*(i_1 + 0x15f8) == 0)
                                            if (zx.d(*(fp_1 + 0x24d)) != 0)
                                                goto label_10381f8
                                            
                                            x27_1 = 0
                                        else
                                            if (*(i_1 + 0x160c) != 2 || zx.d(*(fp_1 + 0x24d)) != 0)
                                                goto label_10381f8
                                            
                                            x27_1 = 0
                            else if (x10_11 != 6)
                                goto label_10383c8
                else
                    x27_1 = x19
            else
                int32_t x8_22 = *(i_1 + 0x15ec)
                
                if (x8_22 u> 6)
                    goto label_10383c8
                
                if ((1 << x8_22 & 0x3a) != 0)
                    goto label_1037cf8
                
                __builtin_memset(&var_90, 0, 0x28)
                int64_t x0_5 = *(i_1 + 0x15d8)
                
                if (x0_5 == 0)
                    x0_5 = XString::GetString()
                
                var_90:8.q = x0_5
                var_90.d = *(i_1 + 0x19a0)
                int128_t var_80_1
                var_80_1.d = *(i_1 + 0x1740)
                
                if (x12_1 != 0 && zx.d(*(arg1 + 0x329)) != 0)
                    if (*(gUI2 + 0x50) != x21)
                        UI2SetFocus(zx.q(x21), arg1 + 0x314, false)
                    
                    UI2TriggerClick(i_1, &var_90, true, false)
                    x27_1 = x19
                else if (zx.d(*(arg1 + 8)) == 0)
                    x27_1 = x19
                else
                    UITextBox::Update(i_1.b - 0x20, 1)
                    x27_1 = x19
return zx.q(x27_1)
