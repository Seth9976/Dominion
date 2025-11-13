// 函数: _Z12SelectHigherPfif
// 地址: 0xb91f44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

int64_t x9_1
int32_t x10

if (*arg1 <= arg3)
    uint64_t x10_1 = zx.q(arg2)
    int64_t x11_1 = 0
    float v1
    
    do
        x9_1 = x11_1 + 1
        
        if (x10_1 - 1 == x11_1)
            if (arg2 s> 0)
                return zx.q(arg2 - 1)
            
            return 0
        
        v1 = arg1[1 + x11_1]
        x11_1 = x9_1
    while (v1 <= arg3)
    x10 = x9_1 u< x10_1 ? 1 : 0
else
    x9_1 = 0
    x10 = 1

uint64_t result

if (x9_1.d == 0)
    result = 0
else
    result = zx.q(x9_1.d - 1)

int32_t x8

if (arg2 s> 0)
    x8 = arg2 - 1
else
    x8 = 0

if ((x10 & 1) != 0)
    return result

return zx.q(x8)
