// 函数: _Z21GetNumRequiredPlayersRK9GameSetupi
// 地址: 0x9b8ee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

uint64_t result = 0
uint64_t i_1 = zx.q(arg2)
void* __offset(GameSetup, 0x64) x8_2 = arg1 + 0x64
uint64_t i

do
    int32_t x10_1 = *(x8_2 - 4)
    
    if (x10_1 != 0 && (x10_1 != 2 || *x8_2 != 1))
        result = zx.q(result.d + 1)
    
    i = i_1
    i_1 -= 1
    x8_2 += 0x22c
while (i != 1)
return result
