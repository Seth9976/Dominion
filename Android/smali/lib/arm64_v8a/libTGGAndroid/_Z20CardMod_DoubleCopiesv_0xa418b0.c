// 函数: _Z20CardMod_DoubleCopiesv
// 地址: 0xa418b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_8 = *(gCampaignSetup + 0x19ac)

if (i_8 == 0)
    int64_t x22_1 = *(gCampaignSetup + 0x19a0)
    int64_t x23_1 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x19 = *(x22_1 + (x23_1 << 0xb) + 0xc)
    int32_t var_5c[0xa]
    int32_t x19_1
    int32_t x20_10
    
    if (x19 == 0)
    label_a41aa4:
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        uint64_t (* var_88_1)(int64_t arg1) = sub_a58a9c
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const* var_70_1 = &var_90
        int32_t x0_22
        char* x1_2
        x0_22, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
        
        if (&var_90 == var_70_1)
            x1_2 = (*var_70_1)->vFunc_4(var_70_1)
        else if (var_70_1 != 0)
            x1_2 = (*var_70_1)->j_operator delete(var_70_1)
        
        CampaignKingdomAdd(zx.q(x0_22), x1_2, 4, 0)
        var_5c[0] = x0_22
        x19_1 = 1
        x20_10 = 1
    else
        int32_t x20_1
        
        if ((IsLandscape(zx.q(x19)) & 1) != 0)
            x19_1 = 0
            x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
            
            if (x20_1 != 0)
                goto label_a4191c
            
            goto label_a41a78
        
        var_5c[0] = x19
        x19_1 = 1
        x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
        
        if (x20_1 == 0)
        label_a41a78:
            
            if (x19_1 s<= 0)
                goto label_a41aa4
            
            x20_10 = 1
        else
        label_a4191c:
            
            if ((IsLandscape(zx.q(x20_1)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_1
                x19_1 += 1
            
            int32_t x20_2 = *(x22_1 + (x23_1 << 0xb) + 0x14)
            
            if (x20_2 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_2)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_2
                x19_1 += 1
            
            int32_t x20_3 = *(x22_1 + (x23_1 << 0xb) + 0x18)
            
            if (x20_3 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_3)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_3
                x19_1 += 1
            
            int32_t x20_4 = *(x22_1 + (x23_1 << 0xb) + 0x1c)
            
            if (x20_4 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_4)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_4
                x19_1 += 1
            
            int32_t x20_5 = *(x22_1 + (x23_1 << 0xb) + 0x20)
            
            if (x20_5 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_5)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_5
                x19_1 += 1
            
            int32_t x20_6 = *(x22_1 + (x23_1 << 0xb) + 0x24)
            
            if (x20_6 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_6)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_6
                x19_1 += 1
            
            int32_t x20_7 = *(x22_1 + (x23_1 << 0xb) + 0x28)
            
            if (x20_7 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_7)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_7
                x19_1 += 1
            
            int32_t x20_8 = *(x22_1 + (x23_1 << 0xb) + 0x2c)
            
            if (x20_8 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_8)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_8
                x19_1 += 1
            
            int32_t x20_9 = *(x22_1 + (x23_1 << 0xb) + 0x30)
            
            if (x20_9 == 0)
                goto label_a41a78
            
            if ((IsLandscape(zx.q(x20_9)) & 1) == 0)
                var_5c[zx.q(x19_1)] = x20_9
                x19_1 += 1
                x20_10 = 1
            else
                x20_10 = x19_1 s> 0 ? 1 : 0
                
                if (x19_1 s< 1)
                    x19_1 = 0
    
    ShuffleIntsN(gCampaignSetup, &var_5c, x19_1, x20_10)
    int32_t i_10
    memcpy(&i_10, &var_5c, zx.q(x20_10 << 2))
    i_8 = i_10

int32_t* i_11 = *(*(gCampaignData + 0x50)
    + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(i_8) | zx.q(i_8 s>> 4))) << 3))
int64_t x0_28

if (i_11 == 0)
label_a41ee4:
    x0_28 = RollStamp(zx.q(i_8))
else
    int32_t* i = i_11
    int32_t* i_1
    
    do
        if (*i == i_8)
            uint64_t x9_7 = zx.q(i[4])
            i_1 = i_11
            
            if (x9_7.d s< 1)
                goto label_a41bc8
            
            int32_t* x11_1 = *(i + 8)
            
            if (*x11_1 == 0x16)
                goto label_a41ed4
            
            int64_t x10_2 = 0
            int32_t j
            
            do
                if (x9_7 - 1 == x10_2)
                    goto label_a41b60
                
                j = x11_1[1 + x10_2]
                x10_2 += 1
            while (j != 0x16)
            i_1 = i_11
            
            if (x10_2 u< x9_7)
                goto label_a41ed4
            
            goto label_a41bc8
        
        i = *(i + 0x18)
    while (i != 0)
    
label_a41b60:
    i_1 = i_11
label_a41bc8:
    
    do
        if (*i_1 == i_8)
            uint64_t x9_9 = zx.q(i_1[4])
            
            if (x9_9.d s< 1)
                goto label_a41c18
            
            int32_t* x11_3 = *(i_1 + 8)
            
            if (*x11_3 == 5)
                goto label_a41ed4
            
            int64_t x10_4 = 0
            int32_t j_1
            
            do
                if (x9_9 - 1 == x10_4)
                    goto label_a41c18
                
                j_1 = x11_3[1 + x10_4]
                x10_4 += 1
            while (j_1 != 5)
            
            if (x10_4 u< x9_9)
                goto label_a41ed4
            
            goto label_a41c18
        
        i_1 = *(i_1 + 0x18)
    while (i_1 != 0)
    
label_a41c18:
    int32_t* i_2 = i_11
    
    do
        if (*i_2 == i_8)
            uint64_t x9_11 = zx.q(i_2[4])
            
            if (x9_11.d s< 1)
                goto label_a41c7c
            
            int32_t* x11_5 = *(i_2 + 8)
            
            if (*x11_5 == 4)
                goto label_a41ed4
            
            int64_t x10_6 = 0
            int32_t j_2
            
            do
                if (x9_11 - 1 == x10_6)
                    goto label_a41c7c
                
                j_2 = x11_5[1 + x10_6]
                x10_6 += 1
            while (j_2 != 4)
            
            if (x10_6 u< x9_11)
                goto label_a41ed4
            
            goto label_a41c7c
        
        i_2 = *(i_2 + 0x18)
    while (i_2 != 0)
    
label_a41c7c:
    int32_t* i_3 = i_11
    
    do
        if (*i_3 == i_8)
            uint64_t x9_13 = zx.q(i_3[4])
            
            if (x9_13.d s< 1)
                goto label_a41ce0
            
            int32_t* x11_7 = *(i_3 + 8)
            
            if (*x11_7 == 0x11)
                goto label_a41ed4
            
            int64_t x10_8 = 0
            int32_t j_3
            
            do
                if (x9_13 - 1 == x10_8)
                    goto label_a41ce0
                
                j_3 = x11_7[1 + x10_8]
                x10_8 += 1
            while (j_3 != 0x11)
            
            if (x10_8 u< x9_13)
                goto label_a41ed4
            
            goto label_a41ce0
        
        i_3 = *(i_3 + 0x18)
    while (i_3 != 0)
    
label_a41ce0:
    int32_t* i_4 = i_11
    
    do
        if (*i_4 == i_8)
            uint64_t x9_15 = zx.q(i_4[4])
            
            if (x9_15.d s< 1)
                goto label_a41d44
            
            int32_t* x11_9 = *(i_4 + 8)
            
            if (*x11_9 == 0x14)
                goto label_a41ed4
            
            int64_t x10_10 = 0
            int32_t j_4
            
            do
                if (x9_15 - 1 == x10_10)
                    goto label_a41d44
                
                j_4 = x11_9[1 + x10_10]
                x10_10 += 1
            while (j_4 != 0x14)
            
            if (x10_10 u< x9_15)
                goto label_a41ed4
            
            goto label_a41d44
        
        i_4 = *(i_4 + 0x18)
    while (i_4 != 0)
    
label_a41d44:
    int32_t* i_5 = i_11
    
    do
        if (*i_5 == i_8)
            uint64_t x9_17 = zx.q(i_5[4])
            
            if (x9_17.d s< 1)
                goto label_a41da8
            
            int32_t* x11_11 = *(i_5 + 8)
            
            if (*x11_11 == 0x19)
                goto label_a41ed4
            
            int64_t x10_12 = 0
            int32_t j_5
            
            do
                if (x9_17 - 1 == x10_12)
                    goto label_a41da8
                
                j_5 = x11_11[1 + x10_12]
                x10_12 += 1
            while (j_5 != 0x19)
            
            if (x10_12 u< x9_17)
                goto label_a41ed4
            
            goto label_a41da8
        
        i_5 = *(i_5 + 0x18)
    while (i_5 != 0)
    
label_a41da8:
    int32_t* i_6 = i_11
    
    do
        if (*i_6 == i_8)
            uint64_t x9_19 = zx.q(i_6[4])
            
            if (x9_19.d s< 1)
                goto label_a41e0c
            
            int32_t* x11_13 = *(i_6 + 8)
            
            if (*x11_13 == 0x1e)
                goto label_a41ed4
            
            int64_t x10_14 = 0
            int32_t j_6
            
            do
                if (x9_19 - 1 == x10_14)
                    goto label_a41e0c
                
                j_6 = x11_13[1 + x10_14]
                x10_14 += 1
            while (j_6 != 0x1e)
            
            if (x10_14 u< x9_19)
                goto label_a41ed4
            
            goto label_a41e0c
        
        i_6 = *(i_6 + 0x18)
    while (i_6 != 0)
    
label_a41e0c:
    int32_t* i_7 = i_11
    
    do
        if (*i_7 == i_8)
            uint64_t x9_21 = zx.q(i_7[4])
            
            if (x9_21.d s< 1)
                goto label_a41e78
            
            int32_t* x11_15 = *(i_7 + 8)
            
            if (*x11_15 == 0x30)
                goto label_a41ed4
            
            int64_t x10_16 = 0
            int32_t j_7
            
            do
                if (x9_21 - 1 == x10_16)
                    goto label_a41e78
                
                j_7 = x11_15[1 + x10_16]
                x10_16 += 1
            while (j_7 != 0x30)
            
            if (x10_16 u< x9_21)
                goto label_a41ed4
            
            goto label_a41e78
        
        i_7 = *(i_7 + 0x18)
    while (i_7 != 0)
    
label_a41e78:
    
    while (*i_11 != i_8)
        i_11 = *(i_11 + 0x18)
        
        if (i_11 == 0)
            goto label_a41ee4_2
    
    uint64_t x9_23 = zx.q(i_11[4])
    
    if (x9_23.d s< 1)
    label_a41ee4_1:
        x0_28 = RollStamp(zx.q(i_8))
    else
        int32_t* x10_17 = *(i_11 + 8)
        int64_t x8_23
        
        if (*x10_17 != 0x1c)
            x8_23 = 0
            int32_t i_9
            
            do
                if (x9_23 - 1 == x8_23)
                    goto label_a41ee4_2
                
                i_9 = x10_17[1 + x8_23]
                x8_23 += 1
            while (i_9 != 0x1c)
        
        if (*x10_17 != 0x1c && x8_23 u>= x9_23)
        label_a41ee4_2:
            x0_28 = RollStamp(zx.q(i_8))
        else
        label_a41ed4:
            IsLandscape(zx.q(i_8))
            x0_28 = 0xdb8

return CampaignAddExtra(x0_28, zx.q(i_8), 0xffffffff, 0, 0)
