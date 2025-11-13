// 函数: _Z15ToggleExpansionR11GameProfileP11DomExpSetup12DomExpansionRK21DomLandscapeModifiers
// 地址: 0xb2fe90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x21 = arg3
bool (* var_58)(DomExpSetup const&, DomExpSetup&)
int32_t x22

if (x8 == 0)
    x22 = 0
label_b301bc:
    uint64_t x22_1 = zx.q(x22)
    *(arg2 + (x22_1 << 4)) = x21
    int32_t x0_5
    
    if (x21 != 0x13)
        int64_t x0_4 = GetActiveProfile()
        
        if (*(x0_4 + (zx.q(x21) << 2) + 0x7760) == 0)
            x0_5 = DefaultEditionFlag(GameLatestVersion(4, true), zx.q(x21))
        else
            x0_5 = *(x0_4 + (zx.q(x21) << 2) + 0x7800)
    else
        int32_t x0_1 = DomExpGet(0x13, &var_58)
        int32_t x21_1
        
        if (x0_1 s< 1)
            x21_1 = 0
        else
            int64_t i = 0
            x21_1 = 0
            int64_t x26_1 = 0xc0
            
            do
                int32_t x8_8 = 1 << i.d
                i += 1
                int32_t x8_9
                
                if ((ProfileHasEntitlementForCard(zx.q(*(var_58 + x26_1))) & 1) != 0)
                    x8_9 = x8_8
                else
                    x8_9 = 0
                
                x21_1 |= x8_9
                x26_1 += 0x780
            while (zx.q(x0_1) != i)
        
        x0_5 = PromoCardsToFlags(x21_1)
    
    void* x8_14 = arg2 + (x22_1 << 4)
    *(x8_14 + 4) = x0_5
    *(x8_14 + 8) = 0xa00000000
    x22 += 1
else
    int32_t x10_1 = *(arg2 + 0x10)
    int32_t x8_1
    
    x8_1 = x8 != x21 ? -1 : 0
    
    if (x10_1 == 0)
        x22 = 1
    label_b30140:
        
        if (x8_1 == 0xffffffff)
            goto label_b301bc
    else
        int32_t x9_1 = *(arg2 + 0x20)
        
        if (x10_1 == x21)
            x8_1 = 1
        
        x22 = 2
        
        if (x9_1 == 0)
            goto label_b30140
        
        int32_t x10_2 = *(arg2 + 0x30)
        
        if (x9_1 == x21)
            x8_1 = 2
        
        x22 = 3
        
        if (x10_2 == 0)
            goto label_b30140
        
        int32_t x9_2 = *(arg2 + 0x40)
        
        if (x10_2 == x21)
            x8_1 = 3
        
        x22 = 4
        
        if (x9_2 == 0)
            goto label_b30140
        
        int32_t x10_3 = *(arg2 + 0x50)
        
        if (x9_2 == x21)
            x8_1 = 4
        
        x22 = 5
        
        if (x10_3 == 0)
            goto label_b30140
        
        int32_t x9_3 = *(arg2 + 0x60)
        
        if (x10_3 == x21)
            x8_1 = 5
        
        x22 = 6
        
        if (x9_3 == 0)
            goto label_b30140
        
        int32_t x10_4 = *(arg2 + 0x70)
        
        if (x9_3 == x21)
            x8_1 = 6
        
        x22 = 7
        
        if (x10_4 == 0)
            goto label_b30140
        
        int32_t x9_4 = *(arg2 + 0x80)
        
        if (x10_4 == x21)
            x8_1 = 7
        
        x22 = 8
        
        if (x9_4 == 0)
            goto label_b30140
        
        int32_t x10_5 = *(arg2 + 0x90)
        
        if (x9_4 == x21)
            x8_1 = 8
        
        x22 = 9
        
        if (x10_5 == 0)
            goto label_b30140
        
        int32_t x9_5 = *(arg2 + 0xa0)
        
        if (x10_5 == x21)
            x8_1 = 9
        
        x22 = 0xa
        
        if (x9_5 == 0)
            goto label_b30140
        
        int32_t x10_6 = *(arg2 + 0xb0)
        
        if (x9_5 == x21)
            x8_1 = 0xa
        
        x22 = 0xb
        
        if (x10_6 == 0)
            goto label_b30140
        
        int32_t x9_6 = *(arg2 + 0xc0)
        
        if (x10_6 == x21)
            x8_1 = 0xb
        
        x22 = 0xc
        
        if (x9_6 == 0)
            goto label_b30140
        
        int32_t x10_7 = *(arg2 + 0xd0)
        
        if (x9_6 == x21)
            x8_1 = 0xc
        
        x22 = 0xd
        
        if (x10_7 == 0)
            goto label_b30140
        
        int32_t x9_7 = *(arg2 + 0xe0)
        
        if (x10_7 == x21)
            x8_1 = 0xd
        
        x22 = 0xe
        
        if (x9_7 == 0)
            goto label_b30140
        
        int32_t x10_8 = *(arg2 + 0xf0)
        
        if (x9_7 == x21)
            x8_1 = 0xe
        
        x22 = 0xf
        
        if (x10_8 == 0)
            goto label_b30140
        
        int32_t x9_8 = *(arg2 + 0x100)
        
        if (x10_8 == x21)
            x8_1 = 0xf
        
        x22 = 0x10
        
        if (x9_8 == 0)
            goto label_b30140
        
        int32_t x10_9 = *(arg2 + 0x110)
        
        if (x9_8 == x21)
            x8_1 = 0x10
        
        x22 = 0x11
        
        if (x10_9 == 0)
            goto label_b30140
        
        int32_t x9_9 = *(arg2 + 0x120)
        
        if (x10_9 == x21)
            x8_1 = 0x11
        
        x22 = 0x12
        
        if (x9_9 == 0)
            goto label_b30140
        
        int32_t x10_10 = *(arg2 + 0x130)
        
        if (x9_9 == x21)
            x8_1 = 0x12
        
        x22 = 0x13
        
        if (x10_10 == 0)
            goto label_b30140
        
        int32_t x9_10 = *(arg2 + 0x140)
        
        if (x10_10 == x21)
            x8_1 = 0x13
        
        x22 = 0x14
        
        if (x9_10 == 0)
            goto label_b30140
        
        int32_t x10_11 = *(arg2 + 0x150)
        
        if (x9_10 == x21)
            x8_1 = 0x14
        
        x22 = 0x15
        
        if (x10_11 == 0)
            goto label_b30140
        
        int32_t x9_11 = *(arg2 + 0x160)
        
        if (x10_11 == x21)
            x8_1 = 0x15
        
        x22 = 0x16
        
        if (x9_11 == 0)
            goto label_b30140
        
        int32_t x10_12 = *(arg2 + 0x170)
        
        if (x9_11 == x21)
            x8_1 = 0x16
        
        x22 = 0x17
        
        if (x10_12 == 0)
            goto label_b30140
        
        int32_t x9_12 = *(arg2 + 0x180)
        
        if (x10_12 == x21)
            x8_1 = 0x17
        
        x22 = 0x18
        
        if (x9_12 == 0)
            goto label_b30140
        
        int32_t x10_13 = *(arg2 + 0x190)
        
        if (x9_12 == x21)
            x8_1 = 0x18
        
        x22 = 0x19
        
        if (x10_13 == 0)
            goto label_b30140
        
        int32_t x9_13 = *(arg2 + 0x1a0)
        
        if (x10_13 == x21)
            x8_1 = 0x19
        
        x22 = 0x1a
        
        if (x9_13 == 0)
            goto label_b30140
        
        int32_t x10_14 = *(arg2 + 0x1b0)
        
        if (x9_13 == x21)
            x8_1 = 0x1a
        
        x22 = 0x1b
        
        if (x10_14 == 0)
            goto label_b30140
        
        int32_t x9_14 = *(arg2 + 0x1c0)
        
        if (x10_14 == x21)
            x8_1 = 0x1b
        
        x22 = 0x1c
        
        if (x9_14 == 0)
            goto label_b30140
        
        int32_t x10_15 = *(arg2 + 0x1d0)
        
        if (x9_14 == x21)
            x8_1 = 0x1c
        
        x22 = 0x1d
        
        if (x10_15 == 0)
            goto label_b30140
        
        int32_t x9_15 = *(arg2 + 0x1e0)
        
        if (x10_15 == x21)
            x8_1 = 0x1d
        
        x22 = 0x1e
        
        if (x9_15 == 0)
            goto label_b30140
        
        int32_t x10_16 = *(arg2 + 0x1f0)
        
        if (x9_15 == x21)
            x8_1 = 0x1e
        
        if (x10_16 == 0)
            x22 = 0x1f
            
            if (x8_1 == 0xffffffff)
                goto label_b301bc
        else
            x22 = 0x20
            
            if (x10_16 != x21)
                goto label_b30140
            
            x8_1 = 0x1f
    
    uint64_t x23 = zx.q(x8_1)
    
    if (x21 == 0x13)
        goto label_b30188
    
    void* x24_1 = arg2 + (x23 << 4)
    
    if (*(x24_1 + 0xc) != 0xa)
        *(x24_1 + 0xc) = 0xa
    else
        int64_t x0
        int128_t v0
        x0, v0 = GetActiveProfile()
        int32_t x8_4 = *(x24_1 + 4)
        void* x9_17 = x0 + (zx.q(x21) << 2)
        *(x9_17 + 0x7760) = 1
        *(x9_17 + 0x7800) = x8_4
    label_b30188:
        x22 -= 1
        int64_t x8_5 = zx.q(x22) << 0x20 s>> 0x1c
        *(arg2 + (x23 << 4)) = *(arg2 + x8_5)
        *(arg2 + x8_5) = 0

AddAnyExpansionsRequiredForLandscapes(arg4, arg2)
var_58 = SortExpansion
return std::__ndk1::__sort<bool (*&)(DomExpSetup const&, DomExpSetup&), DomExpSetup*>(arg2, 
    arg2 + (sx.q(x22) << 4), &var_58)
