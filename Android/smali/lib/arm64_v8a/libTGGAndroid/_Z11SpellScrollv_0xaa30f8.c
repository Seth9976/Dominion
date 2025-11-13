// 函数: _Z11SpellScrollv
// 地址: 0xaa30f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashThis(0x3e9)

if ((result.d & 1) != 0)
    result = GainCheaper(zx.q(Cost(ThisCard(false, nullptr))), 0x476, 0)
    
    if (result.d != 0)
        int32_t x19_1 = result.d
        int32_t x0_3 = CardIs(result, 4)
        
        if ((x0_3 & 1) == 0)
            result = CardIs(zx.q(x19_1), 2)
        
        if ((x0_3 & 1) != 0 || (result.d & 1) != 0)
            result = CardIsWhereGained(zx.q(x19_1))
            
            if ((result.d & 1) != 0)
                int32_t x0_7 = CardGainedToWhere(zx.q(x19_1))
                MoveCardTo(zx.q(x19_1), zx.q(x0_7), 0x3ee, 0, 0, 0xb, 0)
                result = MayPlay(zx.q(x19_1), 0xdf)
                
                if ((result.d & 1) == 0)
                    return MoveCardTo(zx.q(x19_1), 0x3ee, zx.q(x0_7), 0, 0, 0xb, 0) __tailcall

return result
