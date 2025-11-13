// 函数: _Z21CardGalleryZoomedCardv
// 地址: 0xb3bae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetCardsetZoom(*(gDomClient + 0x82e28))

if (x0_1 == 0xffffffff)
    return 0

int64_t x9_1 = 0
int32_t x21_1 = *(gCardGallery + 0xc)
char const* const x22_1 = "OOOOOO@OOOOCOOF"
int64_t x23_1
int32_t i

do
    x23_1 = x9_1
    i = *(&data_7ef624 + x9_1 * 0x1044)
    x9_1 = x23_1 + 1
    x22_1 = &x22_1[0x1044]
while (i != *(gCardGallery + 8))
int64_t x19_1 = 0
int32_t x24_1 = 0
int32_t x25_1 = 0
uint64_t x8_4
void* x11_2

while (true)
    int32_t x10_1 =
        *(&data_7ef624 + x23_1 * 0x1044 + muls.dp.d(x19_1.d, 0x104) + (sx.q(x24_1) << 2) + 8)
    int64_t x9_3 = sx.q(x19_1.d)
    
    if (x10_1 == 0)
        x11_2 = &data_7ef624 + x23_1 * 0x1044 + x9_3 * 0x104
        x24_1 = 0
        x8_4 = 0
        
        if (*(x11_2 + 0x10c) == 0)
            break
    
    if (x10_1 == 0)
        x19_1 = x9_3 + 1
    else
        x19_1 = x9_3
    
    int64_t fp_1 = x19_1 * 0x104
    int64_t x27_1 = zx.q(x24_1) << 0x20 s>> 0x1e
    x8_4 = 0
    int64_t x9_5
    
    if ((IsLandscape(zx.q(*(&data_7ef624 + x23_1 * 0x1044 + fp_1 + x27_1 + 8)), 0x18) & 1) != 0)
        x9_5 = 9
    else
        x9_5 = 8
    
    while (true)
        if (*(x22_1 + fp_1 + x27_1 + (x8_4 << 2)) == 0)
            if (x25_1 != x21_1)
                x24_1 = 0
                x8_4 = 0
                x19_1 = zx.q(x19_1.d + 1)
            
            break
        
        x8_4 += 1
        
        if (x9_5 == x8_4)
            x8_4 = zx.q(x9_5.d)
            break
    
    if (x25_1 == x21_1)
        x11_2 = &data_7ef624 + x23_1 * 0x1044 + muls.dp.d(x19_1.d, 0x104) + (sx.q(x24_1) << 2) + 8
        break
    
    x25_1 += 1
    x24_1 += x8_4.d

if (x0_1 s>= x8_4.d)
    pthread_kill(pthread_self(), 6)
    return CardGalleryClick(XNoReturn()) __tailcall

return zx.q(*(x11_2 + (sx.q(x0_1) << 2)))
