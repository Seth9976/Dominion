// 函数: _Z11ClearTaptipv
// 地址: 0x1041bb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gUI2 + 0x5c)

if (x9 == 0)
    return 0

uint64_t x10 = zx.q(x9.w)

if (x10.d u< *(gUI2 + 8))
    int64_t x11_1 = *gUI2
    
    if (*(x11_1 + x10 * 0x19a8 + 0x19a0) == x9)
        void* x9_1 = x11_1 + x10 * 0x19a8
        *(x9_1 + 0x13f1) = 0
        uint32_t x9_2 = zx.d(*(x9_1 + 0x1615))
        *(gUI2 + 0x5c) = 0
        return zx.q(x9_2 != 0 ? 1 : 0)

*(gUI2 + 0x5c) = 0
return 0
