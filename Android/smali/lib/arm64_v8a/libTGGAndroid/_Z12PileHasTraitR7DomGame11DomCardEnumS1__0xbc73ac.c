// 函数: _Z12PileHasTraitR7DomGame11DomCardEnumS1_
// 地址: 0xbc73ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg3
int32_t var_20[0x4]
int32_t x0_1 = LandscapeFromRefPile(arg1 + 0xd54, arg2, &var_20)

if (x0_1 s< 1)
    return 0

if (var_20[0] == i)
    return 1

uint64_t x8_1 = zx.q(x0_1)
int64_t x11 = 1
int64_t x10_1

do
    x10_1 = x11
    
    if (x8_1 == x11)
        break
    
    x11 = x10_1 + 1
while (var_20[x10_1] != i)

return zx.q(x10_1 u< x8_1 ? 1 : 0)
