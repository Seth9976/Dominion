// 函数: _Z15CountCardTokens6CardID
// 地址: 0xb49e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x13 = zx.q(*(gDomClient + 0x205e8))
void* i_1
void* i

if (x13.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_1 + x13 * 0x21d8)
            goto label_b49f00

int32_t x8_1

if (x13.d == 0 || i == 0xffffffff)
label_b49f00:
    x8_1 = 0
else
    x8_1 = 0
    int64_t x13_1 = i_1 + x13 * 0x21d8
    
    do
        if (*(i + 0x2c) == 4 && *(i + 0x1bc) == 0x474 && *(i + 0x1c0) == arg1)
            x8_1 += 1
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x13_1)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x13_1)
                return zx.q(x8_1)
    while (i != 0xffffffff)

return zx.q(x8_1)
