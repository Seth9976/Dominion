// 函数: _Z12NewGameIndexv
// 地址: 0x9ad9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = GetActiveProfile() + 0x4330
int32_t x11 = x8[1]
int32_t x9 = x8[2]
int32_t x10 = *x8
int32_t x9_1

x9_1 = x9 s> 1 ? x9 : 1

int32_t x12

x12 = x11 s> x10 ? x10 : x11

if (x9_1 s<= neg.d(x12))
    if (x11 s<= x10)
        x9_1 = neg.d(x11)
    else
        x9_1 = neg.d(x10)

x8[2] = x9_1 + 1
return zx.q(neg.d(x9_1))
