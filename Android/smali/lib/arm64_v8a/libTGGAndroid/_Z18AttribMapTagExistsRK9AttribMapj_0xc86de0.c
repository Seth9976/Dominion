// 函数: _Z18AttribMapTagExistsRK9AttribMapj
// 地址: 0xc86de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)

if (x9.d s< 1)
    return 0

int32_t* x8 = *(arg1 + 8)

while (*x8 != arg2)
    uint64_t temp0_1 = x9
    x9 -= 1
    x8 = &x8[4]
    
    if (temp0_1 == 1)
        x8 = nullptr
        break

return zx.q(x8 != 0 ? 1 : 0)
