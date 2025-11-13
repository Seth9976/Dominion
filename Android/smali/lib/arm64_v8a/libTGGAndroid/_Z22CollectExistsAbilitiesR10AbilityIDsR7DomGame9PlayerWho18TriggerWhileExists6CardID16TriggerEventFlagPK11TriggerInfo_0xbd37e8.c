// 函数: _Z22CollectExistsAbilitiesR10AbilityIDsR7DomGame9PlayerWho18TriggerWhileExists6CardID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbd37e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg5
int32_t var_ce0[0x2f8]
int64_t result = CardsExistTypes(arg2, &var_ce0)

if (result.d s>= 1)
    int64_t x28_1 = 0
    uint64_t x8_2 = zx.q(result.d)
    
    do
        int32_t x26_1 = var_ce0[x28_1]
        int32_t var_10e0[0x20]
        result = CardTypeHasExists(arg2, zx.q(x26_1), zx.q(arg4), &var_10e0)
        
        if (result.d s>= 1)
            uint64_t i_1 = zx.q(result.d)
            int32_t (* x27_1)[0x20] = &var_10e0
            uint64_t i
            
            do
                int64_t x26_2 =
                    (zx.q(x21 << 6) & 0x3ffc0) | zx.q(x26_1 << 0x12) | (zx.q(*x27_1) & 0xf) | 0x20
                result = TriggerAbilityTestValid(arg2, zx.q(arg3), x26_2, zx.q(x21), zx.q(arg6), 
                    0xffffffff, arg7)
                
                if ((result.d & 1) != 0)
                    int64_t x8_8 = sx.q(*(arg1 + 0x400))
                    *(arg1 + 0x400) = x8_8.d + 1
                    *(arg1 + (x8_8 << 2)) = x26_2.d
                
                i = i_1
                i_1 -= 1
                x27_1 = &(*x27_1)[1]
            while (i != 1)
        
        x28_1 += 1
    while (x28_1 != x8_2)

return result
