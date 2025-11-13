// 函数: _Z10HasAbilityR7DomGameRK10AbilityIDs11DomCardEnum
// 地址: 0xbd9168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 0

int32_t x19 = arg3
int64_t i = 0
int32_t x0_1

do
    x0_1 = AbilitySource(arg1, zx.q(*(arg2 + (i << 2))))
    
    if (x0_1 == x19)
        break
    
    i += 1
while (i s< sx.q(*(arg2 + 0x400)))

return zx.q(x0_1 == x19 ? 1 : 0)
