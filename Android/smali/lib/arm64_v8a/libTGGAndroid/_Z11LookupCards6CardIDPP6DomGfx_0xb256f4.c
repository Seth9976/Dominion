// 函数: _Z11LookupCards6CardIDPP6DomGfx
// 地址: 0xb256f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1
void* i

if (x9.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_1 + x9 * 0x21d8)
            goto label_b257c4

int32_t x8_1

if (x9.d == 0 || i == 0xffffffff)
label_b257c4:
    x8_1 = 0
else
    x8_1 = 0
    
    do
        if (*(i + 0x2c) == 0 && *(i + 0x98) == arg1)
            arg2[sx.q(x8_1)] = i
            i_1 = *(gDomClient + 0x205e0)
            x9 = zx.q(*(gDomClient + 0x205e8))
            x8_1 += 1
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        void* x16_4 = i_1 + mulu.dp.d(x9.d, 0x21d8)
        
        if (i u>= x16_4)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x16_4)
                return zx.q(x8_1)
    while (i != 0xffffffff)

return zx.q(x8_1)
