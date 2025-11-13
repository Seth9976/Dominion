// 函数: _Z23CardGalleryZoomNextCardv
// 地址: 0xb3b650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetCardsetZoom(*(gDomClient + 0x82e28))
int64_t x9 = 0
int32_t x23 = *(gCardGallery + 0xc)
char const* const x24 = "OOOOOO@OOOOCOOF"
int64_t x25_1
int32_t i

do
    x25_1 = x9
    i = *(&data_7ef624 + x9 * 0x1044)
    x9 = x25_1 + 1
    x24 = &x24[0x1044]
while (i != *(gCardGallery + 8))
int64_t x19 = 0
int32_t x27 = 0
int32_t x26 = 0
uint64_t x8_5

while (true)
    int32_t x10_1 =
        *(&data_7ef624 + x25_1 * 0x1044 + muls.dp.d(x19.d, 0x104) + (sx.q(x27) << 2) + 8)
    int64_t x9_2 = sx.q(x19.d)
    
    if (x10_1 == 0)
        x27 = 0
        x8_5 = 0
        
        if (*(&data_7ef624 + x25_1 * 0x1044 + x9_2 * 0x104 + 0x10c) == 0)
            break
    
    if (x10_1 == 0)
        x19 = x9_2 + 1
    else
        x19 = x9_2
    
    int64_t x21_1 = x19 * 0x104
    int64_t fp_1 = zx.q(x27) << 0x20 s>> 0x1e
    x8_5 = 0
    int64_t x9_4
    
    if ((IsLandscape(zx.q(*(&data_7ef624 + x25_1 * 0x1044 + x21_1 + fp_1 + 8)), 0x18) & 1) != 0)
        x9_4 = 9
    else
        x9_4 = 8
    
    while (true)
        if (*(x24 + x21_1 + fp_1 + (x8_5 << 2)) == 0)
            if (x26 != x23)
                x27 = 0
                x8_5 = 0
                x19 = zx.q(x19.d + 1)
            
            break
        
        x8_5 += 1
        
        if (x9_4 == x8_5)
            x8_5 = zx.q(x9_4.d)
            break
    
    if (x26 == x23)
        break
    
    x26 += 1
    x27 += x8_5.d

Cardset* x0_4
uint64_t x1

if (x0_1 s>= x8_5.d - 1)
    x1 = 0
    x0_4 = *(gDomClient + 0x82e28)
    *(gCardGallery + 0xc) += 1
else
    x1 = zx.q(x0_1 + 1)
    x0_4 = *(gDomClient + 0x82e28)

return CardsetZoom(x0_4, x1) __tailcall
