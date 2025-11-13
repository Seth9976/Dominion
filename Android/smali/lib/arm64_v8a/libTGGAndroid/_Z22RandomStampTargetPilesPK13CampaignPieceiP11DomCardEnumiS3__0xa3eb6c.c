// 函数: _Z22RandomStampTargetPilesPK13CampaignPieceiP11DomCardEnumiS3_
// 地址: 0xa3eb6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(arg4)
int64_t x27 = *(gCampaignSetup + 0x19a0)
int32_t x23 = *(gCampaignSetup + 0x19ac)
int64_t x28 = sx.q(*(gCampaignSetup + 0x19a8))
CampaignPiece const* x21 = arg1
int32_t var_88 = x23
int32_t x20_2

if (x23 == 0)
    int32_t x23_1 = *(x27 + (x28 << 0xb) + 0xc)
    int32_t x8_40
    int32_t x8_58
    int32_t x25_10
    uint64_t x26_1
    
    if (arg5 != 0)
        if (x23_1 == 0)
        label_a3f088:
            x25_10 = 0
            x26_1 = 0
        label_a3f434:
            x8_40 = x26_1.d s< x25.d ? 1 : 0
            
            if (x26_1.d s< x25.d)
                uint64_t x23_2 = zx.q(x26_1.d)
                int64_t x28_1 = sx.q(x25.d)
                
                do
                    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110, std::__ndk1::allocator<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110>, bool (DomCardEnum)>::VTable
                        * const var_c0 = &_vtable_for_std::__ndk1::__function::__func<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110, std::__ndk1::allocator<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
                    uint64_t var_b8_1 = zx.q(arg2)
                    CampaignPiece const* var_b0_1 = x21
                    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110, std::__ndk1::allocator<RandomStampTargetPiles(CampaignPiece const*, int32_t, DomCardEnum*, int32_t, DomCardEnum*)::$_110>, bool (DomCardEnum)>::VTable
                        * const* var_a0_1 = &var_c0
                    int32_t x0_44
                    char* x1_23
                    x0_44, x1_23 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
                    
                    if (&var_c0 == var_a0_1)
                        x1_23 = (*var_a0_1)->vFunc_4(var_a0_1)
                    else if (var_a0_1 != 0)
                        x1_23 = (*var_a0_1)->j_operator delete(var_a0_1)
                    
                    CampaignKingdomAdd(zx.q(x0_44), x1_23, 0, 0)
                    x26_1 = x23_2 + 1
                    x8_40 = x26_1 s< x28_1 ? 1 : 0
                    (&var_88)[x23_2] = x0_44
                    
                    if (x25_10 u> 8)
                        break
                    
                    x25_10 += 1
                    x23_2 = x26_1
                while (x26_1 s< x28_1)
            
            goto label_a3f500
        
        int32_t x25_1
        
        if (*arg5 != x23_1)
            if (arg2 s< 1)
            label_a3efe4:
                x26_1 = 1
                var_88 = x23_1
            else
                uint64_t x19_2 = zx.q(arg2)
                CampaignPiece const* x20_12 = x21
                
                while (true)
                    if ((CanDoCardStamp(zx.q(*x20_12), zx.q(x23_1)) & 1) == 0)
                        x26_1 = 0
                        break
                    
                    uint64_t temp2_1 = x19_2
                    x19_2 -= 1
                    x20_12 += 4
                    
                    if (temp2_1 == 1)
                        goto label_a3efe4
            
            x25_1 = *(x27 + (x28 << 0xb) + 0x10)
            
            if (x25_1 != 0)
                goto label_a3ec28
            
            goto label_a3f30c
        
        x26_1 = 0
        x25_1 = *(x27 + (x28 << 0xb) + 0x10)
        
        if (x25_1 == 0)
        label_a3f30c:
            x25_10 = 1
            goto label_a3f434
        
    label_a3ec28:
        
        if (*arg5 != x25_1)
            if (arg2 s>= 1)
                uint64_t i_11 = zx.q(arg2)
                CampaignPiece const* x20_3 = x21
                uint64_t i
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_3), zx.q(x25_1)) & 1) == 0)
                        goto label_a3ec74
                    
                    i = i_11
                    i_11 -= 1
                    x20_3 += 4
                while (i != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_1
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ec74:
        int32_t x25_2 = *(x27 + (x28 << 0xb) + 0x14)
        
        if (x25_2 == 0)
            x25_10 = 2
            goto label_a3f434
        
        if (*arg5 != x25_2)
            if (arg2 s>= 1)
                uint64_t i_12 = zx.q(arg2)
                CampaignPiece const* x20_4 = x21
                uint64_t i_1
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_4), zx.q(x25_2)) & 1) == 0)
                        goto label_a3ecd0
                    
                    i_1 = i_12
                    i_12 -= 1
                    x20_4 += 4
                while (i_1 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_2
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ecd0:
        int32_t x25_3 = *(x27 + (x28 << 0xb) + 0x18)
        
        if (x25_3 == 0)
            x25_10 = 3
            goto label_a3f434
        
        if (*arg5 != x25_3)
            if (arg2 s>= 1)
                uint64_t i_13 = zx.q(arg2)
                CampaignPiece const* x20_5 = x21
                uint64_t i_2
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_5), zx.q(x25_3)) & 1) == 0)
                        goto label_a3ed2c
                    
                    i_2 = i_13
                    i_13 -= 1
                    x20_5 += 4
                while (i_2 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_3
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ed2c:
        int32_t x25_4 = *(x27 + (x28 << 0xb) + 0x1c)
        
        if (x25_4 == 0)
            x25_10 = 4
            goto label_a3f434
        
        if (*arg5 != x25_4)
            if (arg2 s>= 1)
                uint64_t i_14 = zx.q(arg2)
                CampaignPiece const* x20_6 = x21
                uint64_t i_3
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_6), zx.q(x25_4)) & 1) == 0)
                        goto label_a3ed88
                    
                    i_3 = i_14
                    i_14 -= 1
                    x20_6 += 4
                while (i_3 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_4
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ed88:
        int32_t x25_5 = *(x27 + (x28 << 0xb) + 0x20)
        
        if (x25_5 == 0)
            x25_10 = 5
            goto label_a3f434
        
        if (*arg5 != x25_5)
            if (arg2 s>= 1)
                uint64_t i_15 = zx.q(arg2)
                CampaignPiece const* x20_7 = x21
                uint64_t i_4
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_7), zx.q(x25_5)) & 1) == 0)
                        goto label_a3ede4
                    
                    i_4 = i_15
                    i_15 -= 1
                    x20_7 += 4
                while (i_4 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_5
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ede4:
        int32_t x25_6 = *(x27 + (x28 << 0xb) + 0x24)
        
        if (x25_6 == 0)
            x25_10 = 6
            goto label_a3f434
        
        if (*arg5 != x25_6)
            if (arg2 s>= 1)
                uint64_t i_16 = zx.q(arg2)
                CampaignPiece const* x20_8 = x21
                uint64_t i_5
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_8), zx.q(x25_6)) & 1) == 0)
                        goto label_a3ee40
                    
                    i_5 = i_16
                    i_16 -= 1
                    x20_8 += 4
                while (i_5 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_6
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ee40:
        int32_t x25_7 = *(x27 + (x28 << 0xb) + 0x28)
        
        if (x25_7 == 0)
            x25_10 = 7
            goto label_a3f434
        
        if (*arg5 != x25_7)
            if (arg2 s>= 1)
                uint64_t i_17 = zx.q(arg2)
                CampaignPiece const* x20_9 = x21
                uint64_t i_6
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_9), zx.q(x25_7)) & 1) == 0)
                        goto label_a3ee9c
                    
                    i_6 = i_17
                    i_17 -= 1
                    x20_9 += 4
                while (i_6 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_7
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3ee9c:
        int32_t x25_8 = *(x27 + (x28 << 0xb) + 0x2c)
        
        if (x25_8 == 0)
            x25_10 = 8
            goto label_a3f434
        
        if (*arg5 != x25_8)
            if (arg2 s>= 1)
                uint64_t i_18 = zx.q(arg2)
                CampaignPiece const* x20_10 = x21
                uint64_t i_7
                
                do
                    if ((CanDoCardStamp(zx.q(*x20_10), zx.q(x25_8)) & 1) == 0)
                        goto label_a3eef8
                    
                    i_7 = i_18
                    i_18 -= 1
                    x20_10 += 4
                while (i_7 != 1)
            
            (&var_88)[zx.q(x26_1.d)] = x25_8
            x26_1 = zx.q(x26_1.d + 1)
        
    label_a3eef8:
        int32_t x25_9 = *(x27 + (x28 << 0xb) + 0x30)
        
        if (x25_9 == 0)
        label_a3f3d0:
            x25_10 = 9
            goto label_a3f434
        
        if (*arg5 != x25_9)
            if (arg2 s< 1)
            label_a3ef34:
                x8_58 = x26_1.d + 1
                (&var_88)[zx.q(x26_1.d)] = x25_9
            label_a3f2dc:
                x26_1 = zx.q(x8_58)
            else
                uint64_t x19_1 = zx.q(arg2)
                
                while ((CanDoCardStamp(zx.q(*x21), zx.q(x25_9)) & 1) != 0)
                    uint64_t temp17_1 = x19_1
                    x19_1 -= 1
                    x21 += 4
                    
                    if (temp17_1 == 1)
                        goto label_a3ef34
        
        goto label_a3f2e4
    
    if (arg2 s<= 0)
        if (x23_1 == 0)
            goto label_a3f088
        
        var_88 = x23_1
        void* x8_30 = x27 + (x28 << 0xb)
        int32_t x9_1 = *(x8_30 + 0x10)
        
        if (x9_1 == 0)
            x25_10 = 1
            x26_1 = 1
            goto label_a3f434
        
        int32_t var_84_1 = x9_1
        int32_t x8_31 = *(x8_30 + 0x14)
        
        if (x8_31 == 0)
            x25_10 = 2
            x26_1 = 2
            goto label_a3f434
        
        int32_t var_80_1 = x8_31
        void* x8_32 = x27 + (x28 << 0xb)
        int32_t x9_2 = *(x8_32 + 0x18)
        
        if (x9_2 == 0)
            x25_10 = 3
            x26_1 = 3
            goto label_a3f434
        
        int32_t var_7c_1 = x9_2
        int32_t x8_33 = *(x8_32 + 0x1c)
        
        if (x8_33 == 0)
            x25_10 = 4
            x26_1 = 4
            goto label_a3f434
        
        int32_t var_78_1 = x8_33
        void* x8_34 = x27 + (x28 << 0xb)
        int32_t x9_3 = *(x8_34 + 0x20)
        
        if (x9_3 == 0)
            x25_10 = 5
            x26_1 = 5
            goto label_a3f434
        
        int32_t var_74_1 = x9_3
        int32_t x8_35 = *(x8_34 + 0x24)
        
        if (x8_35 == 0)
            x25_10 = 6
            x26_1 = 6
            goto label_a3f434
        
        int32_t var_70_1 = x8_35
        void* x8_36 = x27 + (x28 << 0xb)
        int32_t x9_4 = *(x8_36 + 0x28)
        
        if (x9_4 == 0)
            x25_10 = 7
            x26_1 = 7
            goto label_a3f434
        
        int32_t var_6c_1 = x9_4
        int32_t x8_37 = *(x8_36 + 0x2c)
        
        if (x8_37 == 0)
            x25_10 = 8
            x26_1 = 8
            goto label_a3f434
        
        int32_t var_68_1 = x8_37
        int32_t x8_39 = *(x27 + (x28 << 0xb) + 0x30)
        
        if (x8_39 == 0)
            x25_10 = 9
            x26_1 = 9
            goto label_a3f434
        
        int32_t var_64_1 = x8_39
        x8_40 = x25.d s> 0xa ? 1 : 0
        x26_1 = 0xa
    label_a3f500:
        
        if (x8_40 != 0)
            x20_2 = x26_1.d
        else
            x20_2 = x25.d
        
        ShuffleIntsN(gCampaignSetup, &var_88, x26_1.d, x20_2)
        memcpy(arg3, &var_88, zx.q(x20_2) << 0x20 s>> 0x1e)
    else
        if (x23_1 == 0)
            goto label_a3f088
        
        uint64_t i_20 = zx.q(arg2)
        uint64_t i_19 = i_20
        CampaignPiece const* x20_11 = x21
        int32_t x24_2
        uint64_t i_8
        
        do
            if ((CanDoCardStamp(zx.q(*x20_11), zx.q(x23_1)) & 1) == 0)
                x26_1 = 0
                x24_2 = *(x27 + (x28 << 0xb) + 0x10)
                
                if (x24_2 == 0)
                    goto label_a3efb0
                
                goto label_a3f0ac
            
            i_8 = i_19
            i_19 -= 1
            x20_11 += 4
        while (i_8 != 1)
        var_88 = x23_1
        x26_1 = 1
        x24_2 = *(x27 + (x28 << 0xb) + 0x10)
        
        if (x24_2 == 0)
        label_a3efb0:
            x25_10 = 1
            goto label_a3f434
        
    label_a3f0ac:
        CampaignPiece const* x19_3 = x21
        uint64_t i_21 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_3), zx.q(x24_2)) & 1) != 0)
            uint64_t i_30 = i_21
            i_21 -= 1
            x19_3 += 4
            
            if (i_30 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_2
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_3 = *(x27 + (x28 << 0xb) + 0x14)
        
        if (x24_3 == 0)
            x25_10 = 2
            goto label_a3f434
        
        CampaignPiece const* x19_4 = x21
        uint64_t i_22 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_4), zx.q(x24_3)) & 1) != 0)
            uint64_t i_31 = i_22
            i_22 -= 1
            x19_4 += 4
            
            if (i_31 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_3
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_4 = *(x27 + (x28 << 0xb) + 0x18)
        
        if (x24_4 == 0)
            x25_10 = 3
            goto label_a3f434
        
        CampaignPiece const* x19_5 = x21
        uint64_t i_23 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_5), zx.q(x24_4)) & 1) != 0)
            uint64_t i_32 = i_23
            i_23 -= 1
            x19_5 += 4
            
            if (i_32 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_4
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_5 = *(x27 + (x28 << 0xb) + 0x1c)
        
        if (x24_5 == 0)
            x25_10 = 4
            goto label_a3f434
        
        CampaignPiece const* x19_6 = x21
        uint64_t i_24 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_6), zx.q(x24_5)) & 1) != 0)
            uint64_t i_33 = i_24
            i_24 -= 1
            x19_6 += 4
            
            if (i_33 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_5
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_6 = *(x27 + (x28 << 0xb) + 0x20)
        
        if (x24_6 == 0)
            x25_10 = 5
            goto label_a3f434
        
        CampaignPiece const* x19_7 = x21
        uint64_t i_25 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_7), zx.q(x24_6)) & 1) != 0)
            uint64_t i_34 = i_25
            i_25 -= 1
            x19_7 += 4
            
            if (i_34 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_6
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_7 = *(x27 + (x28 << 0xb) + 0x24)
        
        if (x24_7 == 0)
            x25_10 = 6
            goto label_a3f434
        
        CampaignPiece const* x19_8 = x21
        uint64_t i_26 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_8), zx.q(x24_7)) & 1) != 0)
            uint64_t i_35 = i_26
            i_26 -= 1
            x19_8 += 4
            
            if (i_35 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_7
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_8 = *(x27 + (x28 << 0xb) + 0x28)
        
        if (x24_8 == 0)
            x25_10 = 7
            goto label_a3f434
        
        CampaignPiece const* x19_9 = x21
        uint64_t i_27 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_9), zx.q(x24_8)) & 1) != 0)
            uint64_t i_36 = i_27
            i_27 -= 1
            x19_9 += 4
            
            if (i_36 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_8
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_9 = *(x27 + (x28 << 0xb) + 0x2c)
        
        if (x24_9 == 0)
            x25_10 = 8
            goto label_a3f434
        
        CampaignPiece const* x19_10 = x21
        uint64_t i_28 = i_20
        
        while ((CanDoCardStamp(zx.q(*x19_10), zx.q(x24_9)) & 1) != 0)
            uint64_t i_37 = i_28
            i_28 -= 1
            x19_10 += 4
            
            if (i_37 == 1)
                (&var_88)[zx.q(x26_1.d)] = x24_9
                x26_1 = zx.q(x26_1.d + 1)
                break
        
        int32_t x24_10 = *(x27 + (x28 << 0xb) + 0x30)
        
        if (x24_10 == 0)
            goto label_a3f3d0
        
        while ((CanDoCardStamp(zx.q(*x21), zx.q(x24_10)) & 1) != 0)
            uint64_t i_29 = i_20
            i_20 -= 1
            x21 += 4
            
            if (i_29 == 1)
                x8_58 = x26_1.d + 1
                (&var_88)[zx.q(x26_1.d)] = x24_10
                goto label_a3f2dc
        
    label_a3f2e4:
        
        if (x26_1.d != 0)
            x8_40 = x26_1.d s< x25.d ? 1 : 0
            goto label_a3f500
        
        x20_2 = 0
else
    if (arg2 s>= 1)
        uint64_t i_10 = zx.q(arg2)
        CampaignPiece const* x20_1 = x21
        uint64_t i_9
        
        do
            uint64_t x0 = zx.q(*x20_1)
            x20_1 += 4
            CanDoCardStamp(x0, zx.q(x23))
            i_9 = i_10
            i_10 -= 1
        while (i_9 != 1)
    
    *arg3 = x23
    
    if (x25.d != 1)
        x20_2 = RandomStampTargetPiles(x21, arg2, arg3 + 4, x25.d - 1, &var_88) + 1
    else
        x20_2 = 1

return zx.q(x20_2)
