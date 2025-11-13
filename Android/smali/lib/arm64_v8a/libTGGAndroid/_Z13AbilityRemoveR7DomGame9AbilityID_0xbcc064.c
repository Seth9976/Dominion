// 函数: _Z13AbilityRemoveR7DomGame9AbilityID
// 地址: 0xbcc064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = AbilityGetRegistered(arg1, zx.q(arg2))
*(result + 0x58) = 0
int64_t x8_1 = sx.q(*(arg1 + 0x19c0)) - 1
*(arg1 + 0x19c0) = x8_1.d
v0 = *(arg1 + x8_1 * 0xb8 + 0x3c238)
v2 = *(arg1 + x8_1 * 0xb8 + 0x3c208)
v3 = *(arg1 + x8_1 * 0xb8 + 0x3c218)
result[2] = *(arg1 + x8_1 * 0xb8 + 0x3c228)
result[3] = v0
*result = v2
result[1] = v3
v0 = *(arg1 + x8_1 * 0xb8 + 0x3c278)
v2 = *(arg1 + x8_1 * 0xb8 + 0x3c248)
v3 = *(arg1 + x8_1 * 0xb8 + 0x3c258)
result[6] = *(arg1 + x8_1 * 0xb8 + 0x3c268)
result[7] = v0
result[4] = v2
result[5] = v3
v0 = *(arg1 + x8_1 * 0xb8 + 0x3c2a8)
v1 = *(arg1 + x8_1 * 0xb8 + 0x3c288)
result[0xb].q = *(arg1 + x8_1 * 0xb8 + 0x3c2b8)
result[9] = *(arg1 + x8_1 * 0xb8 + 0x3c298)
result[0xa] = v0
result[8] = v1
return result
