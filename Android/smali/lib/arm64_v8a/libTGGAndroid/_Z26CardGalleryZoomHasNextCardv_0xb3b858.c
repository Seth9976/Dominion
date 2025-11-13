// 函数: _Z26CardGalleryZoomHasNextCardv
// 地址: 0xb3b858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = 0
int32_t x21 = *(gCardGallery + 0xc)
char const* const x22 = "OOOOOO@OOOOCOOF"
int64_t x23_1
int32_t i

do
    x23_1 = x9
    i = *(&data_7ef624 + x9 * 0x1044)
    x9 = x23_1 + 1
    x22 = &x22[0x1044]
while (i != *(gCardGallery + 8))
int64_t x20 = 0
int32_t x25 = 0
int32_t x24 = 0
uint64_t fp_1

while (true)
    int32_t x9_2 = *(&data_7ef624 + x23_1 * 0x1044 + muls.dp.d(x20.d, 0x104) + (sx.q(x25) << 2) + 8)
    int64_t x8_3 = sx.q(x20.d)
    
    if (x9_2 == 0)
        x25 = 0
        fp_1 = 0
        
        if (*(&data_7ef624 + x23_1 * 0x1044 + x8_3 * 0x104 + 0x10c) == 0)
            break
    
    if (x9_2 == 0)
        x20 = x8_3 + 1
    else
        x20 = x8_3
    
    int64_t x26_1 = x20 * 0x104
    int64_t x27_1 = zx.q(x25) << 0x20 s>> 0x1e
    fp_1 = 0
    int64_t x8_7
    
    if ((IsLandscape(zx.q(*(&data_7ef624 + x23_1 * 0x1044 + x26_1 + x27_1 + 8)), 0x18) & 1) != 0)
        x8_7 = 9
    else
        x8_7 = 8
    
    while (true)
        if (*(x22 + x26_1 + x27_1 + (fp_1 << 2)) == 0)
            if (x24 != x21)
                x25 = 0
                fp_1 = 0
                x20 = zx.q(x20.d + 1)
            
            break
        
        fp_1 += 1
        
        if (x8_7 == fp_1)
            fp_1 = zx.q(x8_7.d)
            break
    
    if (x24 == x21)
        break
    
    x24 += 1
    x25 += fp_1.d

if (GetCardsetZoom(*(gDomClient + 0x82e28)) s>= fp_1.d - 1)
    int64_t x10_5 = 0
    char const* const x20_1 = "OOOOOO@OOOOCOOF"
    int64_t x21_1
    int32_t i_1
    
    do
        x21_1 = x10_5
        i_1 = *(&data_7ef624 + x10_5 * 0x1044)
        x10_5 = x21_1 + 1
        x20_1 = &x20_1[0x1044]
    while (i_1 != *(gCardGallery + 8))
    int64_t fp_2 = 0
    int32_t x28_1 = 0
    int32_t x22_1 = 0
    int32_t x23_2 = *(gCardGallery + 0xc) + 1
    
    while (true)
        int32_t x9_7 =
            *(&data_7ef624 + x21_1 * 0x1044 + muls.dp.d(fp_2.d, 0x104) + (sx.q(x28_1) << 2) + 8)
        int64_t x8_13 = sx.q(fp_2.d)
        
        if (x9_7 != 0)
            goto label_b3ba48
        
        if (*(&data_7ef624 + x21_1 * 0x1044 + x8_13 * 0x104 + 0x10c) != 0)
            x28_1 = 0
        label_b3ba48:
            
            if (x9_7 == 0)
                fp_2 = x8_13 + 1
            else
                fp_2 = x8_13
            
            int64_t x27_2 = fp_2 * 0x104
            int64_t x24_1 = zx.q(x28_1) << 0x20 s>> 0x1e
            uint64_t x8_10 = 0
            int64_t x9_9
            
            if ((IsLandscape(zx.q(*(&data_7ef624 + x21_1 * 0x1044 + x27_2 + x24_1 + 8)), 0x18) & 1)
                    != 0)
                x9_9 = 9
            else
                x9_9 = 8
            
            while (*(x20_1 + x27_2 + x24_1 + (x8_10 << 2)) != 0)
                x8_10 += 1
                
                if (x9_9 == x8_10)
                    x8_10 = zx.q(x9_9.d)
                    goto label_b3bab0
            
            if (x22_1 != x23_2)
                x8_10 = 0
                x28_1 = 0
                fp_2 = zx.q(fp_2.d + 1)
            label_b3ba10:
                x22_1 += 1
                x28_1 += x8_10.d
                continue
            else
            label_b3bab0:
                
                if (x22_1 != x23_2)
                    goto label_b3ba10
            
            if (x8_10.d != 0)
                break
        
        return 0

return 1
