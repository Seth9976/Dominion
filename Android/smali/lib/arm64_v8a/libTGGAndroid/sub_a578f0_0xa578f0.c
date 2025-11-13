// 函数: sub_a578f0
// 地址: 0xa578f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
int64_t x0 = CardWhereEx(arg1)
int64_t x0_2 = CardGainedToWhereEx(zx.q(x19))

if (x0.d == x0_2.d && (x0 u>> 0x20).d == (x0_2 u>> 0x20).d)
    int32_t x0_5 = CardIsWhere(zx.q(x19), 0x3ea)
    int32_t x0_7
    
    if ((x0_5 & 1) != 0)
        x0_7 = LimitPlayableCards(zx.q(x19))
    
    if ((x0_5 & 1) == 0 || (x0_7 & 1) == 0)
        if ((CardIs(zx.q(x19), 0x80) & 1) == 0)
            return CardIs(zx.q(x19), 0x200) __tailcall
        
        return 1

return 0
