// 函数: _Z21RemoveDeclinedAbilityR7DomGameRK10AbilityIDs
// 地址: 0xbd8c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 

DomGame& x20_1 = arg1
int64_t i = 0

do
    uint64_t x21_1 = zx.q(*(arg2 + (i << 2)))
    
    if ((x21_1 & 0x30) == 0)
        arg1 = AbilityGetRegistered(x20_1, x21_1)
        
        if (*(arg1 + 0x4c) == 2 && (zx.d(*(arg1 + 0x70)) & 0x10) != 0)
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            arg1, v0_1, v1_1, v2_1, v3_1 = AbilityGetRegistered(x20_1, x21_1)
            *(arg1 + 0x58) = 0
            int64_t x8_5 = sx.q(*(x20_1 + 0x19c0)) - 1
            *(x20_1 + 0x19c0) = x8_5.d
            v0_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c238)
            v2_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c208)
            v3_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c218)
            *(arg1 + 0x20) = *(x20_1 + x8_5 * 0xb8 + 0x3c228)
            *(arg1 + 0x30) = v0_1
            *arg1 = v2_1
            *(arg1 + 0x10) = v3_1
            v0_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c278)
            v2_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c248)
            v3_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c258)
            *(arg1 + 0x60) = *(x20_1 + x8_5 * 0xb8 + 0x3c268)
            *(arg1 + 0x70) = v0_1
            *(arg1 + 0x40) = v2_1
            *(arg1 + 0x50) = v3_1
            v2_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c298)
            v0_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c2a8)
            v1_1 = *(x20_1 + x8_5 * 0xb8 + 0x3c288)
            *(arg1 + 0xb0) = *(x20_1 + x8_5 * 0xb8 + 0x3c2b8)
            *(arg1 + 0x90) = v2_1
            *(arg1 + 0xa0) = v0_1
            *(arg1 + 0x80) = v1_1
    
    i += 1
while (i s< sx.q(*(arg2 + 0x400)))
