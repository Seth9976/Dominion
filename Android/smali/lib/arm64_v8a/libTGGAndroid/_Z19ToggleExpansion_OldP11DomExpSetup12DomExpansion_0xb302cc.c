// 函数: _Z19ToggleExpansion_OldP11DomExpSetup12DomExpansion
// 地址: 0xb302cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int32_t x20 = arg2
bool (* var_48)(DomExpSetup const&, DomExpSetup&)
int32_t x21

if (x8 == 0)
    x21 = 0
label_b30614:
    uint64_t x22_2 = zx.q(x21)
    x21 += 1
    *(arg1 + (x22_2 << 4)) = x20
    int32_t x0_8
    
    if (x20 != 0x13)
        x0_8 = DefaultEditionFlag(GameLatestVersion(4, true), zx.q(x20))
    else
        int32_t x0_4 = DomExpGet(0x13, &var_48)
        int32_t x20_1
        
        if (x0_4 s< 1)
            x20_1 = 0
        else
            int64_t i = 0
            x20_1 = 0
            int64_t x25_1 = 0xc0
            
            do
                int32_t x8_21 = 1 << i.d
                i += 1
                int32_t x8_22
                
                if ((ProfileHasEntitlementForCard(zx.q(*(var_48 + x25_1))) & 1) != 0)
                    x8_22 = x8_21
                else
                    x8_22 = 0
                
                x20_1 |= x8_22
                x25_1 += 0x780
            while (zx.q(x0_4) != i)
        
        x0_8 = PromoCardsToFlags(x20_1)
    
    *(arg1 + (x22_2 << 4) + 4) = x0_8
else
    int32_t x9_1 = *(arg1 + 0x10)
    int32_t x22_1
    
    x22_1 = x8 != x20 ? -1 : 0
    
    if (x9_1 == 0)
        x21 = 1
    label_b30574:
        
        if (x22_1 == 0xffffffff)
            goto label_b30614
        
        goto label_b3057c
    
    int32_t x8_1 = *(arg1 + 0x20)
    
    if (x9_1 == x20)
        x22_1 = 1
    
    x21 = 2
    
    if (x8_1 == 0)
        goto label_b30574
    
    int32_t x9_2 = *(arg1 + 0x30)
    
    if (x8_1 == x20)
        x22_1 = 2
    
    x21 = 3
    
    if (x9_2 == 0)
        goto label_b30574
    
    int32_t x8_2 = *(arg1 + 0x40)
    
    if (x9_2 == x20)
        x22_1 = 3
    
    x21 = 4
    
    if (x8_2 == 0)
        goto label_b30574
    
    int32_t x9_3 = *(arg1 + 0x50)
    
    if (x8_2 == x20)
        x22_1 = 4
    
    x21 = 5
    
    if (x9_3 == 0)
        goto label_b30574
    
    int32_t x8_3 = *(arg1 + 0x60)
    
    if (x9_3 == x20)
        x22_1 = 5
    
    x21 = 6
    
    if (x8_3 == 0)
        goto label_b30574
    
    int32_t x9_4 = *(arg1 + 0x70)
    
    if (x8_3 == x20)
        x22_1 = 6
    
    x21 = 7
    
    if (x9_4 == 0)
        goto label_b30574
    
    int32_t x8_4 = *(arg1 + 0x80)
    
    if (x9_4 == x20)
        x22_1 = 7
    
    x21 = 8
    
    if (x8_4 == 0)
        goto label_b30574
    
    int32_t x9_5 = *(arg1 + 0x90)
    
    if (x8_4 == x20)
        x22_1 = 8
    
    x21 = 9
    
    if (x9_5 == 0)
        goto label_b30574
    
    int32_t x8_5 = *(arg1 + 0xa0)
    
    if (x9_5 == x20)
        x22_1 = 9
    
    x21 = 0xa
    
    if (x8_5 == 0)
        goto label_b30574
    
    int32_t x9_6 = *(arg1 + 0xb0)
    
    if (x8_5 == x20)
        x22_1 = 0xa
    
    x21 = 0xb
    
    if (x9_6 == 0)
        goto label_b30574
    
    int32_t x8_6 = *(arg1 + 0xc0)
    
    if (x9_6 == x20)
        x22_1 = 0xb
    
    x21 = 0xc
    
    if (x8_6 == 0)
        goto label_b30574
    
    int32_t x9_7 = *(arg1 + 0xd0)
    
    if (x8_6 == x20)
        x22_1 = 0xc
    
    x21 = 0xd
    
    if (x9_7 == 0)
        goto label_b30574
    
    int32_t x8_7 = *(arg1 + 0xe0)
    
    if (x9_7 == x20)
        x22_1 = 0xd
    
    x21 = 0xe
    
    if (x8_7 == 0)
        goto label_b30574
    
    int32_t x9_8 = *(arg1 + 0xf0)
    
    if (x8_7 == x20)
        x22_1 = 0xe
    
    x21 = 0xf
    
    if (x9_8 == 0)
        goto label_b30574
    
    int32_t x8_8 = *(arg1 + 0x100)
    
    if (x9_8 == x20)
        x22_1 = 0xf
    
    x21 = 0x10
    
    if (x8_8 == 0)
        goto label_b30574
    
    int32_t x9_9 = *(arg1 + 0x110)
    
    if (x8_8 == x20)
        x22_1 = 0x10
    
    x21 = 0x11
    
    if (x9_9 == 0)
        goto label_b30574
    
    int32_t x8_9 = *(arg1 + 0x120)
    
    if (x9_9 == x20)
        x22_1 = 0x11
    
    x21 = 0x12
    
    if (x8_9 == 0)
        goto label_b30574
    
    int32_t x9_10 = *(arg1 + 0x130)
    
    if (x8_9 == x20)
        x22_1 = 0x12
    
    x21 = 0x13
    
    if (x9_10 == 0)
        goto label_b30574
    
    int32_t x8_10 = *(arg1 + 0x140)
    
    if (x9_10 == x20)
        x22_1 = 0x13
    
    x21 = 0x14
    
    if (x8_10 == 0)
        goto label_b30574
    
    int32_t x9_11 = *(arg1 + 0x150)
    
    if (x8_10 == x20)
        x22_1 = 0x14
    
    x21 = 0x15
    
    if (x9_11 == 0)
        goto label_b30574
    
    int32_t x8_11 = *(arg1 + 0x160)
    
    if (x9_11 == x20)
        x22_1 = 0x15
    
    x21 = 0x16
    
    if (x8_11 == 0)
        goto label_b30574
    
    int32_t x9_12 = *(arg1 + 0x170)
    
    if (x8_11 == x20)
        x22_1 = 0x16
    
    x21 = 0x17
    
    if (x9_12 == 0)
        goto label_b30574
    
    int32_t x8_12 = *(arg1 + 0x180)
    
    if (x9_12 == x20)
        x22_1 = 0x17
    
    x21 = 0x18
    
    if (x8_12 == 0)
        goto label_b30574
    
    int32_t x9_13 = *(arg1 + 0x190)
    
    if (x8_12 == x20)
        x22_1 = 0x18
    
    x21 = 0x19
    
    if (x9_13 == 0)
        goto label_b30574
    
    int32_t x8_13 = *(arg1 + 0x1a0)
    
    if (x9_13 == x20)
        x22_1 = 0x19
    
    x21 = 0x1a
    
    if (x8_13 == 0)
        goto label_b30574
    
    int32_t x9_14 = *(arg1 + 0x1b0)
    
    if (x8_13 == x20)
        x22_1 = 0x1a
    
    x21 = 0x1b
    
    if (x9_14 == 0)
        goto label_b30574
    
    int32_t x8_14 = *(arg1 + 0x1c0)
    
    if (x9_14 == x20)
        x22_1 = 0x1b
    
    x21 = 0x1c
    
    if (x8_14 == 0)
        goto label_b30574
    
    int32_t x9_15 = *(arg1 + 0x1d0)
    
    if (x8_14 == x20)
        x22_1 = 0x1c
    
    x21 = 0x1d
    
    if (x9_15 == 0)
        goto label_b30574
    
    int32_t x8_15 = *(arg1 + 0x1e0)
    
    if (x9_15 == x20)
        x22_1 = 0x1d
    
    x21 = 0x1e
    
    if (x8_15 == 0)
        goto label_b30574
    
    int32_t x9_16 = *(arg1 + 0x1f0)
    
    if (x8_15 == x20)
        x22_1 = 0x1e
    
    if (x9_16 == 0)
        x21 = 0x1f
        
        if (x22_1 == 0xffffffff)
            goto label_b30614
    else
        x21 = 0x20
        
        if (x9_16 != x20)
            goto label_b30574
        
        x22_1 = 0x1f
    
label_b3057c:
    
    if (x20 == 0x13)
    label_b305d8:
        x21 -= 1
        int64_t x8_18 = zx.q(x21) << 0x20 s>> 0x1c
        *(arg1 + (zx.q(x22_1) << 4)) = *(arg1 + x8_18)
        *(arg1 + x8_18) = 0
    else
        int32_t x0_1
        int128_t v0
        x0_1, v0 = DefaultEditionFlag(GameLatestVersion(4, true), zx.q(x20))
        
        if (x0_1 == 0)
            goto label_b305d8
        
        int32_t x0_3
        
        if (x0_1 == 1)
            x0_3, v0 = ProfileHasEntitlementForFirstEdition(zx.q(x20))
        
        if (x0_1 == 1 && (x0_3 & 1) == 0)
            goto label_b305d8
        
        uint64_t x9_17 = zx.q(*(arg1 + (zx.q(x22_1) << 4) + 4))
        
        if (x9_17.d u<= 3)
            switch (x9_17)
                case 0, 3
                    goto label_b305d8
                case 1
                    *(arg1 + (zx.q(x22_1) << 4) + 4) = 2
                case 2
                    *(arg1 + (zx.q(x22_1) << 4) + 4) = 0

var_48 = SortExpansion
return std::__ndk1::__sort<bool (*&)(DomExpSetup const&, DomExpSetup&), DomExpSetup*>(arg1, 
    arg1 + (sx.q(x21) << 4), &var_48)
