// 函数: _Z24CollectSkipTurnAbilitiesR7DomGame9PlayerWho
// 地址: 0xbd6c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0x400) = 0
uint64_t i_1 = zx.q(*(arg1 + 0x19c0))

if (i_1.d s< 1)
    return 

void* __offset(DomGame, 0x3c254) x10_1 = arg1 + 0x3c254
uint64_t i

do
    if (*x10_1 == 1 && *(x10_1 + 4) == arg2)
        int64_t x12_1 = sx.q(*(entry_x8 + 0x400))
        int32_t x11_4 = *(x10_1 - 0x20) << 0x12
        *(entry_x8 + 0x400) = x12_1.d + 1
        *(entry_x8 + (x12_1 << 2)) = x11_4
    
    i = i_1
    i_1 -= 1
    x10_1 += 0xb8
while (i != 1)
