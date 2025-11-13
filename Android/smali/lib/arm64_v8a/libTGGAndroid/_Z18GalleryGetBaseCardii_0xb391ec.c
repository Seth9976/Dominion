// 函数: _Z18GalleryGetBaseCardii
// 地址: 0xb391ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2 + (arg1 << 3)
void* var_18
int32_t x0 = DomExpGet(2, &var_18)
void* x8_1
int64_t i
int32_t x20

if (x0 s< 1)
    x20 = 0
else
    x8_1 = var_18
    i = 0
    x20 = 0
    void* x11_1 = x8_1 + 0xc8
    
    do
        if ((zx.d(*(x11_1 + 6)) & 1) == 0 && *(x11_1 - 8) != 0x1301)
            if (x20 == x19)
                return zx.q(*(x8_1 + (i & 0xffffffff) * 0x780 + 0xc0))
            
            x20 += 1
        
        i += 1
        x11_1 += 0x780
    while (zx.q(x0) != i)

int32_t x0_2 = DomExpGet(1, &var_18)

if (x0_2 s<= 0)
    return 0

x8_1 = var_18
i = 0
void* x11_2 = x8_1 + 0xc8

while (true)
    if ((zx.d(*(x11_2 + 6)) & 1) == 0 && *(x11_2 - 8) != 0x1301)
        if (x20 == x19)
            return zx.q(*(x8_1 + (i & 0xffffffff) * 0x780 + 0xc0))
        
        x20 += 1
    
    i += 1
    x11_2 += 0x780
    
    if (zx.q(x0_2) == i)
        return 0
