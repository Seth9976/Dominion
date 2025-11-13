// 函数: _Z6PopOneR10GroupStack
// 地址: 0x1054f94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1900))

if (x8.d s< 1)
    return 

int64_t i = x8 + 1
int32_t* x10_2 = arg1 + x8 * 0x64 - 4

do
    int32_t x11_1 = *x10_2
    
    if ((x11_1 & 0x80000000) == 0)
        if (x11_1 != 1)
            *x10_2 = x11_1 - 1
        else
            x8 = zx.q(x8.d - 1)
            *(arg1 + 0x1900) = x8.d
    
    i -= 1
    x10_2 -= 0x64
while (i s> 1)
