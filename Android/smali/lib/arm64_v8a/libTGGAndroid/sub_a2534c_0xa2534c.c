// 函数: sub_a2534c
// 地址: 0xa2534c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardAvailable(0x100) & 1) == 0)
    return RevealDeckOneTemp(1) __tailcall

int32_t x0_1 = NameCardInDeckOne(0x1b)
int64_t result = RevealDeckOneTemp(1)

if (result.d != 0)
    if (x0_1 != 0)
        result = CardIs(result, zx.q(x0_1))
    
    if (x0_1 == 0 || (result.d & 1) == 0)
        return GainCurse() __tailcall

return result
