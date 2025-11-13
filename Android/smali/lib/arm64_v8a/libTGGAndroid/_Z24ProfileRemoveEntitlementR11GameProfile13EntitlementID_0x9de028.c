// 函数: _Z24ProfileRemoveEntitlementR11GameProfile13EntitlementID
// 地址: 0x9de028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x5748))
*(arg1 + 0x78a0) = 0

if (i_2.d s< 1)
    return 

void* __offset(GameProfile, 0x4368) x8_1 = arg1 + 0x4368
uint64_t i_1 = i_2
uint64_t i

do
    if (*(x8_1 - 0x20) == arg2)
        *(arg1 + 0x5748) = i_2.d - 1
        int128_t v0 = *(arg1 + (sx.q(i_2.d) - 1) * 0x28 + 0x4358)
        *(x8_1 - 0x20) = *(arg1 + (sx.q(i_2.d) - 1) * 0x28 + 0x4348)
        *(x8_1 - 0x10) = v0
        XString::operator=(x8_1)
        return 
    
    i = i_1
    i_1 -= 1
    x8_1 += 0x28
while (i != 1)
