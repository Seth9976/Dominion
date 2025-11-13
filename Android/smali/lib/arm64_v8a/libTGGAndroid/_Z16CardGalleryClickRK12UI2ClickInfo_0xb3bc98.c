// 函数: _Z16CardGalleryClickRK12UI2ClickInfo
// 地址: 0xb3bc98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_6c
int32_t x0_1 = CardsetIsZoomed(*(gDomClient + 0x82e28), &var_6c)
int32_t* var_68
XString::XString(&var_68)

if ((operator==(*(arg1 + 8), &var_68) & 1) == 0)
    int32_t x19_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x19_1 == 2 && ((x0_1 ^ 1) & 1) != 0)
        goto label_b3bd34
else
    XString::~XString()
label_b3bd34:
    int64_t x0_5
    
    if (*gCardGallery == 0)
        GameDlgManagerDismiss(7, false)
        x0_5 = 0x10
    else
        x0_5 = 4
    
    GameDlgManagerShow(x0_5, 5)

char* x21_1 = *(arg1 + 8)
XString::XString(&var_68)

if ((operator==(x21_1, &var_68) & 1) == 0)
    int32_t x19_2 = x0_1 & (*(arg1 + 0x20) == 2 ? 1 : 0)
    XString::~XString()
    
    if ((x19_2 & 1) == 0)
        int64_t x9_1 = 0
        char const* const x21_2 = "OOOOOO@OOOOCOOF"
        int64_t x27_1
        int32_t i
        
        do
            x27_1 = x9_1
            i = *(&data_7ef624 + x9_1 * 0x1044)
            x9_1 = x27_1 + 1
            x21_2 = &x21_2[0x1044]
        while (i != *(gCardGallery + 8))
        int64_t x24_1 = 0
        int32_t x28_1 = 0
        int32_t fp_1 = 0
        int32_t x25_1 = *(gCardGallery + 0xc) + 1
        int64_t var_80
        uint64_t x26_1
        
        while (true)
            int32_t x9_3 = *(
                &data_7ef624 + x27_1 * 0x1044 + muls.dp.d(x24_1.d, 0x104) + (sx.q(x28_1) << 2) + 8)
            int64_t x8_8 = sx.q(x24_1.d)
            
            if (x9_3 == 0)
                x28_1 = 0
                x26_1 = 0
                
                if (*(&data_7ef624 + x27_1 * 0x1044 + x8_8 * 0x104 + 0x10c) == 0)
                    break
            
            if (x9_3 == 0)
                x24_1 = x8_8 + 1
            else
                x24_1 = x8_8
            
            int64_t x19_3 = x24_1 * 0x104
            int64_t x23_1 = zx.q(x28_1) << 0x20 s>> 0x1e
            x26_1 = 0
            int64_t x8_12
            
            if ((IsLandscape(zx.q(*(&data_7ef624 + x27_1 * 0x1044 + x19_3 + x23_1 + 8)), 0x18) & 1)
                    != 0)
                x8_12 = 9
            else
                x8_12 = 8
            
            while (true)
                if (*(x21_2 + x19_3 + x23_1 + (x26_1 << 2)) == 0)
                    if (fp_1 != x25_1)
                        x28_1 = 0
                        x26_1 = 0
                        x24_1 = zx.q(x24_1.d + 1)
                    
                    break
                
                x26_1 += 1
                
                if (x8_12 == x26_1)
                    x26_1 = zx.q(x8_12.d)
                    break
            
            if (fp_1 == x25_1)
                var_80 = &data_7ef624 + x27_1 * 0x1044 + muls.dp.d(x24_1.d, 0x104)
                    + (sx.q(x28_1) << 2) + 8
                break
            
            fp_1 += 1
            x28_1 += x26_1.d
        
        UI2ClickInfo const& x24_3 = arg1
        char* x21_3 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_15 = operator==(x21_3, &var_68)
        XString::~XString()
        int32_t x20_3
        
        if ((x0_15 & 1) == 0)
            x20_3 = x0_1
        else
            int64_t x9_7 = 0
            int32_t x21_5 = *(gCardGallery + 0xc)
            char const* const x27_2 = "OOOOOO@OOOOCOOF"
            int64_t x28_2
            int32_t i_1
            
            do
                x28_2 = x9_7
                i_1 = *(&data_7ef624 + x9_7 * 0x1044)
                x9_7 = x28_2 + 1
                x27_2 = &x27_2[0x1044]
            while (i_1 != *(gCardGallery + 8))
            int64_t x24_2 = 0
            int32_t fp_2 = 0
            int32_t x25_2 = 0
            uint64_t x23_2
            
            while (true)
                int32_t x9_9 = *(&data_7ef624 + x28_2 * 0x1044 + muls.dp.d(x24_2.d, 0x104)
                    + (sx.q(fp_2) << 2) + 8)
                int64_t x8_20 = sx.q(x24_2.d)
                
                if (x9_9 == 0)
                    fp_2 = 0
                    
                    if (*(&data_7ef624 + x28_2 * 0x1044 + x8_20 * 0x104 + 0x10c) == 0)
                        x23_2 = 0
                        break
                
                if (x9_9 == 0)
                    x24_2 = x8_20 + 1
                else
                    x24_2 = x8_20
                
                int64_t x22_1 = x24_2 * 0x104
                int64_t x19_4 = zx.q(fp_2) << 0x20 s>> 0x1e
                x23_2 = 0
                int64_t x8_24
                
                if ((IsLandscape(zx.q(*(&data_7ef624 + x28_2 * 0x1044 + x22_1 + x19_4 + 8)), 0x18)
                        & 1) != 0)
                    x8_24 = 9
                else
                    x8_24 = 8
                
                while (true)
                    if (*(x27_2 + x22_1 + x19_4 + (x23_2 << 2)) == 0)
                        if (x25_2 != x21_5)
                            fp_2 = 0
                            x23_2 = 0
                            x24_2 = zx.q(x24_2.d + 1)
                        
                        break
                    
                    x23_2 += 1
                    
                    if (x8_24 == x23_2)
                        x23_2 = zx.q(x8_24.d)
                        break
                
                if (x25_2 == x21_5)
                    var_80 = &data_7ef624 + x28_2 * 0x1044 + muls.dp.d(x24_2.d, 0x104)
                        + (sx.q(fp_2) << 2) + 8
                    break
                
                x25_2 += 1
                fp_2 += x23_2.d
            
            x24_3 = arg1
            x20_3 = x0_1
            int32_t x0_19 = GetCardsetZoom(*(gDomClient + 0x82e28))
            uint64_t x0_20 = 0
            
            if (x0_19 != 0xffffffff && x0_19 s< x23_2.d)
                x0_20 = zx.q(*(var_80 + (sx.q(x0_19) << 2)))
            
            TryCardToDLC(x0_20, &var_68)
            StoreItemDlgOpen(var_68, 0x7e6, 0)
        
        char* x21_6 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_24 = operator==(x21_6, &var_68)
        XString::~XString()
        
        if ((x0_24 & 1) != 0)
            *(gCardGallery + 0x10) ^= 1
        
        char* x21_8 = *(x24_3 + 8)
        XString::XString(&var_68)
        
        if ((operator==(x21_8, &var_68) & 1) != 0)
        label_b3c15c:
            XString::~XString()
            *(gCardGallery + 0x10) = 0
            CardGalleryZoomPrevCard()
        else if (*(x24_3 + 0x20) != 4 || (x20_3 & 1) == 0)
            XString::~XString()
        else
            if (*(gCardGallery + 0xc) != 0)
                goto label_b3c15c
            
            int32_t x0_29 = GetCardsetZoom(*(gDomClient + 0x82e28))
            XString::~XString()
            
            if (x0_29 != 0)
                *(gCardGallery + 0x10) = 0
                CardGalleryZoomPrevCard()
        
        char* x21_10 = *(x24_3 + 8)
        XString::XString(&var_68)
        
        if ((operator==(x21_10, &var_68) & 1) != 0)
            XString::~XString()
            *(gCardGallery + 0x10) = 0
            CardGalleryZoomNextCard()
        else if (*(x24_3 + 0x20) != 4 || (x20_3 & 1) == 0)
            XString::~XString()
        else
            int32_t x0_33 = CardGalleryZoomHasNextCard()
            XString::~XString()
            
            if ((x0_33 & 1) != 0)
                *(gCardGallery + 0x10) = 0
                CardGalleryZoomNextCard()
        
        if (x26_1.d == 0)
        label_b3c290:
            
            if (*(gCardGallery + 0xc) != 0)
            label_b3c294:
                char* x21_13 = *(x24_3 + 8)
                XString::XString(&var_68)
                
                if ((operator==(x21_13, &var_68) & 1) == 0)
                    int32_t x19_6 = *(x24_3 + 0x20)
                    XString::~XString()
                    
                    if (x19_6 == 3 && ((x20_3 ^ 1) & 1) != 0)
                        goto label_b3c2e0
                else
                    XString::~XString()
                label_b3c2e0:
                    int32_t x8_40 = *(gCardGallery + 0xc)
                    *(gCardGallery + 0x14) = 0
                    *(gCardGallery + 0x10) = 0
                    *(gCardGallery + 0xc) = x8_40 - 1
        else
            char* x21_12 = *(x24_3 + 8)
            XString::XString(&var_68)
            
            if ((operator==(x21_12, &var_68) & 1) == 0)
                int32_t x19_5 = *(x24_3 + 0x20)
                XString::~XString()
                
                if (x19_5 != 4 || ((x20_3 ^ 1) & 1) == 0)
                    goto label_b3c290
                
                goto label_b3c270
            
            XString::~XString()
        label_b3c270:
            int32_t x8_36 = *(gCardGallery + 0xc)
            *(gCardGallery + 0x14) = 0
            *(gCardGallery + 0x10) = 0
            *(gCardGallery + 0xc) = x8_36 + 1
            
            if (x8_36 != 0xffffffff)
                goto label_b3c294
        
        char* x20_4 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_42 = operator==(x20_4, &var_68)
        XString::~XString()
        
        if ((x0_42 & 1) != 0)
            int32_t x20_6 = *(gCardGallery + 0xc)
            int64_t x9_14 = 0
            char const* const x21_14 = "OOOOOO@OOOOCOOF"
            int64_t x26_2
            int32_t i_2
            
            do
                x26_2 = x9_14
                i_2 = *(&data_7ef624 + x9_14 * 0x1044)
                x9_14 = x26_2 + 1
                x21_14 = &x21_14[0x1044]
            while (i_2 != *(gCardGallery + 8))
            int64_t x24_4 = 0
            int32_t x23_3 = 0
            int32_t x25_3 = 0
            uint64_t fp_3
            
            while (true)
                int32_t x9_16 = *(&data_7ef624 + x26_2 * 0x1044 + muls.dp.d(x24_4.d, 0x104)
                    + (sx.q(x23_3) << 2) + 8)
                int64_t x8_45 = sx.q(x24_4.d)
                
                if (x9_16 == 0)
                    x23_3 = 0
                    
                    if (*(&data_7ef624 + x26_2 * 0x1044 + x8_45 * 0x104 + 0x10c) == 0)
                        fp_3 = 0
                        break
                
                if (x9_16 == 0)
                    x24_4 = x8_45 + 1
                else
                    x24_4 = x8_45
                
                int64_t x28_3 = x24_4 * 0x104
                int64_t x22_2 = zx.q(x23_3) << 0x20 s>> 0x1e
                fp_3 = 0
                int64_t x8_49
                
                if ((IsLandscape(zx.q(*(&data_7ef624 + x26_2 * 0x1044 + x28_3 + x22_2 + 8)), 0x18)
                        & 1) != 0)
                    x8_49 = 9
                else
                    x8_49 = 8
                
                while (true)
                    if (*(x21_14 + x28_3 + x22_2 + (fp_3 << 2)) == 0)
                        if (x25_3 != x20_6)
                            x23_3 = 0
                            fp_3 = 0
                            x24_4 = zx.q(x24_4.d + 1)
                        
                        break
                    
                    fp_3 += 1
                    
                    if (x8_49 == fp_3)
                        fp_3 = zx.q(x8_49.d)
                        break
                
                if (x25_3 == x20_6)
                    var_80 = &data_7ef624 + x26_2 * 0x1044 + muls.dp.d(x24_4.d, 0x104)
                        + (sx.q(x23_3) << 2) + 8
                    break
                
                x25_3 += 1
                x23_3 += fp_3.d
            
            x24_3 = arg1
            int32_t x0_46 = GetCardsetZoom(*(gDomClient + 0x82e28))
            int32_t i_3 = 0
            
            if (x0_46 != 0xffffffff && x0_46 s< fp_3.d)
                i_3 = *(var_80 + (sx.q(x0_46) << 2))
            
            GameProfile* x0_47 = GetActiveProfile()
            void* x0_48 = GetActiveProfile()
            uint64_t x8_55 = zx.q(*(x0_48 + 0x6f48))
            int32_t x19_7
            
            if (x8_55.d s< 1)
                x19_7 = 0
            else if (*(x0_48 + 0x6458) != i_3)
                int64_t x12_1 = 0
                int64_t x11_1
                
                do
                    x11_1 = x12_1
                    
                    if (x8_55 - 1 == x12_1)
                        break
                    
                    x12_1 = x11_1 + 1
                while (*(x0_48 + 0x645c + (x11_1 << 2)) != i_3)
                
                x19_7 = x11_1 + 1 u< x8_55 ? 1 : 0
            else
                x19_7 = 1
            
            void* x0_49 = GetActiveProfile()
            uint64_t x8_56 = zx.q(*(x0_49 + 0x6454))
            int32_t x22_3
            
            if (x8_56.d s< 1)
                x22_3 = 0
                
                if (x19_7 == 1)
                    goto label_b3c550
                
            label_b3c5d8:
                ToggleBan(x0_47, x0_47 + 0x6458, zx.q(i_3), 0, 0)
            else
                if (*(x0_49 + 0x5964) != i_3)
                    int64_t x12_3 = 0
                    int64_t x11_2
                    
                    do
                        x11_2 = x12_3
                        
                        if (x8_56 - 1 == x12_3)
                            break
                        
                        x12_3 = x11_2 + 1
                    while (*(x0_49 + 0x5968 + (x11_2 << 2)) != i_3)
                    
                    x22_3 = x11_2 + 1 u< x8_56 ? 1 : 0
                    
                    if ((x19_7 | x22_3) == 1)
                        goto label_b3c550
                    
                    goto label_b3c5d8
                
                x22_3 = 1
            label_b3c550:
                
                if (x19_7 != 0)
                    ToggleBan(x0_47, x0_47 + 0x6458, zx.q(i_3), 0, 0)
                
                if (x22_3 != 0)
                    ToggleBan(x0_47, x0_47 + 0x5964, zx.q(i_3), 5, 5)
        
        char* x20_7 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_54 = operator==(x20_7, &var_68)
        XString::~XString()
        
        if ((x0_54 & 1) != 0)
            int32_t x20_9 = *(gCardGallery + 0xc)
            int64_t x9_28 = 0
            char const* const x21_16 = "OOOOOO@OOOOCOOF"
            int64_t x26_3
            int32_t i_4
            
            do
                x26_3 = x9_28
                i_4 = *(&data_7ef624 + x9_28 * 0x1044)
                x9_28 = x26_3 + 1
                x21_16 = &x21_16[0x1044]
            while (i_4 != *(gCardGallery + 8))
            int64_t x24_5 = 0
            int32_t x23_4 = 0
            int32_t x25_4 = 0
            uint64_t fp_4
            
            while (true)
                int32_t x9_30 = *(&data_7ef624 + x26_3 * 0x1044 + muls.dp.d(x24_5.d, 0x104)
                    + (sx.q(x23_4) << 2) + 8)
                int64_t x8_62 = sx.q(x24_5.d)
                
                if (x9_30 == 0)
                    x23_4 = 0
                    
                    if (*(&data_7ef624 + x26_3 * 0x1044 + x8_62 * 0x104 + 0x10c) == 0)
                        fp_4 = 0
                        break
                
                if (x9_30 == 0)
                    x24_5 = x8_62 + 1
                else
                    x24_5 = x8_62
                
                int64_t x28_4 = x24_5 * 0x104
                int64_t x22_4 = zx.q(x23_4) << 0x20 s>> 0x1e
                fp_4 = 0
                int64_t x8_66
                
                if ((IsLandscape(zx.q(*(&data_7ef624 + x26_3 * 0x1044 + x28_4 + x22_4 + 8)), 0x18)
                        & 1) != 0)
                    x8_66 = 9
                else
                    x8_66 = 8
                
                while (true)
                    if (*(x21_16 + x28_4 + x22_4 + (fp_4 << 2)) == 0)
                        if (x25_4 != x20_9)
                            x23_4 = 0
                            fp_4 = 0
                            x24_5 = zx.q(x24_5.d + 1)
                        
                        break
                    
                    fp_4 += 1
                    
                    if (x8_66 == fp_4)
                        fp_4 = zx.q(x8_66.d)
                        break
                
                if (x25_4 == x20_9)
                    var_80 = &data_7ef624 + x26_3 * 0x1044 + muls.dp.d(x24_5.d, 0x104)
                        + (sx.q(x23_4) << 2) + 8
                    break
                
                x25_4 += 1
                x23_4 += fp_4.d
            
            x24_3 = arg1
            int32_t x0_58 = GetCardsetZoom(*(gDomClient + 0x82e28))
            int32_t x20_10 = 0
            
            if (x0_58 != 0xffffffff && x0_58 s< fp_4.d)
                x20_10 = *(var_80 + (sx.q(x0_58) << 2))
            
            GameProfile* x0_59 = GetActiveProfile()
            ToggleBan(x0_59, x0_59 + 0x5964, zx.q(x20_10), 5, 5)
        
        char* x20_11 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_62 = operator==(x20_11, &var_68)
        XString::~XString()
        
        if ((x0_62 & 1) != 0)
            int32_t x20_13 = *(gCardGallery + 0xc)
            int64_t x9_34 = 0
            char const* const x21_17 = "OOOOOO@OOOOCOOF"
            int64_t x26_4
            int32_t i_5
            
            do
                x26_4 = x9_34
                i_5 = *(&data_7ef624 + x9_34 * 0x1044)
                x9_34 = x26_4 + 1
                x21_17 = &x21_17[0x1044]
            while (i_5 != *(gCardGallery + 8))
            int64_t x24_6 = 0
            int32_t x23_5 = 0
            int32_t x25_5 = 0
            uint64_t fp_5
            
            while (true)
                int32_t x9_36 = *(&data_7ef624 + x26_4 * 0x1044 + muls.dp.d(x24_6.d, 0x104)
                    + (sx.q(x23_5) << 2) + 8)
                int64_t x8_75 = sx.q(x24_6.d)
                
                if (x9_36 == 0)
                    x23_5 = 0
                    
                    if (*(&data_7ef624 + x26_4 * 0x1044 + x8_75 * 0x104 + 0x10c) == 0)
                        fp_5 = 0
                        break
                
                if (x9_36 == 0)
                    x24_6 = x8_75 + 1
                else
                    x24_6 = x8_75
                
                int64_t x28_5 = x24_6 * 0x104
                int64_t x22_5 = zx.q(x23_5) << 0x20 s>> 0x1e
                fp_5 = 0
                int64_t x8_79
                
                if ((IsLandscape(zx.q(*(&data_7ef624 + x26_4 * 0x1044 + x28_5 + x22_5 + 8)), 0x18)
                        & 1) != 0)
                    x8_79 = 9
                else
                    x8_79 = 8
                
                while (true)
                    if (*(x21_17 + x28_5 + x22_5 + (fp_5 << 2)) == 0)
                        if (x25_5 != x20_13)
                            x23_5 = 0
                            fp_5 = 0
                            x24_6 = zx.q(x24_6.d + 1)
                        
                        break
                    
                    fp_5 += 1
                    
                    if (x8_79 == fp_5)
                        fp_5 = zx.q(x8_79.d)
                        break
                
                if (x25_5 == x20_13)
                    var_80 = &data_7ef624 + x26_4 * 0x1044 + muls.dp.d(x24_6.d, 0x104)
                        + (sx.q(x23_5) << 2) + 8
                    break
                
                x25_5 += 1
                x23_5 += fp_5.d
            
            x24_3 = arg1
            int32_t x0_66 = GetCardsetZoom(*(gDomClient + 0x82e28))
            int32_t x20_14 = 0
            
            if (x0_66 != 0xffffffff && x0_66 s< fp_5.d)
                x20_14 = *(var_80 + (sx.q(x0_66) << 2))
            
            GameProfile* x0_67 = GetActiveProfile()
            ToggleBan(x0_67, x0_67 + 0x6458, zx.q(x20_14), 0, 0)
        
        char* x20_15 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_70 = operator==(x20_15, &var_68)
        XString::~XString()
        
        if ((x0_70 & 1) != 0)
            DomGetExpansions(&var_68)
            int32_t x8_87 = var_68[sx.q(*(x24_3 + 0x10)) * 0xa]
            *(gCardGallery + 0x10) = 0
            *(gCardGallery + 0x14) = 0
            *(gCardGallery + 8) = x8_87
            *(gCardGallery + 0xc) = 0
        
        char* x20_17 = *(x24_3 + 8)
        XString::XString(&var_68)
        int32_t x0_74 = operator==(x20_17, &var_68)
        XString::~XString()
        
        if ((x0_74 & 1) != 0)
            int32_t x19_8 = *DomExpDefGetByIndex(*(x24_3 + 0x10))
            GameDlgManagerDismiss(7, false)
            
            if (x19_8 != 0x13)
                StoreItemDlgOpen(StoreItemIndexToDlc(0, *(x24_3 + 0x10), 0), 0x7e6, 0)
            else
                GameDialogOpenStore(2, 0x7e6, 0)
        
        int32_t var_70
        int32_t x0_79 = CardsetIsZoomedAny(&var_68, &var_70)
        int32_t x8_88 = *(x24_3 + 0x20)
        int32_t x8_90
        
        if (x8_88 == 6)
            int32_t x8_91 = *(gCardGallery + 8)
            
            if (x8_91 != 0x13 && ((x0_79 ^ 1) & 1) != 0)
                x8_90 = x8_91 + 1
            label_b3ca9c:
                *(gCardGallery + 0x14) = 0
                *(gCardGallery + 8) = x8_90
                *(gCardGallery + 0xc) = 0
                *(gCardGallery + 0x10) = 0
        else if (x8_88 == 5)
            int32_t x8_89 = *(gCardGallery + 8)
            
            if (x8_89 != 2 && ((x0_79 ^ 1) & 1) != 0)
                x8_90 = x8_89 - 1
                goto label_b3ca9c
        return 0
else
    XString::~XString()

Cardset* x0_9 = *(gDomClient + 0x82e28)
*(gCardGallery + 0x14) = 0
*(gCardGallery + 0x10) = 0
CardsetZoom(x0_9, 0xffffffff)
return 1
