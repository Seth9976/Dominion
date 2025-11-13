// 函数: _Z23CardGalleryZoomPrevCardv
// 地址: 0xb3b4c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0_1 = GetCardsetZoom(*(gDomClient + 0x82e28))

if (x0_1.d == 0)
    char const* const x21_1 = "OOOOOO@OOOOCOOF"
    int32_t x9_2 = *(gCardGallery + 8)
    int64_t x8_3 = 0
    int32_t x22_1 = *(gCardGallery + 0xc) - 1
    *(gCardGallery + 0xc) = x22_1
    int64_t x23_1
    int32_t x11_3
    
    do
        x23_1 = x8_3
        x11_3 = *(&data_7ef624 + x8_3 * 0x1044)
        x8_3 = x23_1 + 1
        x21_1 = &x21_1[0x1044]
    while (x11_3 != x9_2)
    int64_t x19_1 = 0
    int32_t x25_1 = 0
    int32_t x24_1 = 0
    
    while (true)
        int32_t x9_3 =
            *(&data_7ef624 + x23_1 * 0x1044 + muls.dp.d(x19_1.d, 0x104) + (sx.q(x25_1) << 2) + 8)
        int64_t x8_7 = sx.q(x19_1.d)
        
        if (x9_3 == 0)
            x25_1 = 0
            x0_1 = 0
            
            if (*(&data_7ef624 + x23_1 * 0x1044 + x8_7 * 0x104 + 0x10c) == 0)
                break
        
        if (x9_3 == 0)
            x19_1 = x8_7 + 1
        else
            x19_1 = x8_7
        
        int64_t fp_1 = x19_1 * 0x104
        int64_t x26_1 = zx.q(x25_1) << 0x20 s>> 0x1e
        x0_1 = 0
        int64_t x8_12
        
        if ((IsLandscape(zx.q(*(&data_7ef624 + x23_1 * 0x1044 + fp_1 + x26_1 + 8)), 0x18) & 1) != 0)
            x8_12 = 9
        else
            x8_12 = 8
        
        while (true)
            if (*(x21_1 + fp_1 + x26_1 + (x0_1 << 2)) == 0)
                if (x24_1 != x22_1)
                    x25_1 = 0
                    x0_1 = 0
                    x19_1 = zx.q(x19_1.d + 1)
                
                break
            
            x0_1 += 1
            
            if (x8_12 == x0_1)
                x0_1 = zx.q(x8_12.d)
                break
        
        if (x24_1 == x22_1)
            break
        
        x24_1 += 1
        x25_1 += x0_1.d

return CardsetZoom(*(gDomClient + 0x82e28), zx.q(x0_1.d - 1)) __tailcall
