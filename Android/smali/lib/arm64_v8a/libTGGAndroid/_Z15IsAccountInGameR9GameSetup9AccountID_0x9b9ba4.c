// 函数: _Z15IsAccountInGameR9GameSetup9AccountID
// 地址: 0x9b9ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x11ac))

if (x8.d s< 1)
    return 0

int64_t x9 = 0
void* __offset(GameSetup, 0x64) x10 = arg1 + 0x64
int32_t x11 = 1

while (*(x10 - 4) != 1 || *x10 != arg2)
    x9 += 1
    x11 = x9 u< x8 ? 1 : 0
    x10 += 0x22c
    
    if (x8 == x9)
        break

return zx.q(x11) & 1
