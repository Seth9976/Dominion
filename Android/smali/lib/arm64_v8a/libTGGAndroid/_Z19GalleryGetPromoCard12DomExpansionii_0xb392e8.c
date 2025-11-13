// 函数: _Z19GalleryGetPromoCard12DomExpansionii
// 地址: 0xb392e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_18
int32_t i_2 = DomExpGet(0x13, &var_18)

if (i_2 s>= 1)
    int32_t x8_1 = 0
    uint64_t i_1 = zx.q(i_2)
    int32_t* x11_2 = var_18 + 0xc0
    uint64_t i
    
    do
        if ((zx.d(*(x11_2 + 0xe)) & 1) == 0 && *x11_2 != 0x1301)
            if (x8_1 == arg3 + (arg2 << 3))
                return zx.q(*x11_2)
            
            x8_1 += 1
        
        i = i_1
        i_1 -= 1
        x11_2 = &x11_2[0x1e0]
    while (i != 1)

return 0
