// 函数: _Z7YldCopyR8DomYieldRKS_
// 地址: 0xc01da4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg2 + 0x30)
int128_t v3 = *arg2
int128_t v2 = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = v0
*arg1 = v3
*(arg1 + 0x10) = v2
int128_t v1 = *(arg2 + 0x50)
v0 = *(arg2 + 0x60)
v2 = *(arg2 + 0x40)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x50) = v1
*(arg1 + 0x60) = v0
*(arg1 + 0x40) = v2
int32_t x8_1 = *(arg2 + 0x74)
*(arg1 + 0x74) = x8_1

if (x8_1 s>= 1)
    memcpy(arg1 + 0x78, arg2 + 0x78, sx.q(*(arg2 + 0x74)) << 2)

*(arg1 + 0xd18) = *(arg2 + 0xd18)
int64_t result = memcpy(arg1 + 0xcf8, arg2 + 0xcf8, sx.q(*(arg2 + 0xd18)) << 2)

if (*(arg2 + 4) != 3)
    return result

return memcpy(arg1 + 0xd08, arg2 + 0xd08, sx.q(*(arg2 + 0x74)) << 2) __tailcall
