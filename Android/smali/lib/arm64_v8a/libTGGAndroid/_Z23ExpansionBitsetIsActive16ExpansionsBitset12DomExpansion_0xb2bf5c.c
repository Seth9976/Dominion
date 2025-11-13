// 函数: _Z23ExpansionBitsetIsActive16ExpansionsBitset12DomExpansion
// 地址: 0xb2bf5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg2
int32_t var_b0[0x28]
int32_t x0 = DomExpansionsFromBitset(arg1, &var_b0)

if (x0 s< 1)
    return 0

if (var_b0[0] == i)
    return 1

uint64_t x8_1 = zx.q(x0)
int64_t x11 = 1
int64_t x10_1

do
    x10_1 = x11
    
    if (x8_1 == x11)
        break
    
    x11 = x10_1 + 1
while (var_b0[x10_1] != i)

return zx.q(x10_1 u< x8_1 ? 1 : 0)
