// 函数: _Z18IsPodIconWhereSameRK12PodIconWhereS1_
// 地址: 0xba88ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == *arg2)
    if (x8 u> 3)
        pthread_kill(pthread_self(), 6)
        DomGfx* x0_6
        int64_t x1
        int32_t x2
        int64_t x3
        int32_t x4
        x0_6, x1, x2, x3, x4 = XNoReturn()
        return DomGfxCreate_Hint(x0_6, x1, x2, x3, x4) __tailcall
    
    switch (x8)
        case 1, 2
            return zx.q(*(arg1 + 4) == *(arg2 + 4) ? 1 : 0)
        case 3
            uint64_t x0_1 = zx.q(*(arg1 + 4))
            
            if (x0_1.d == *(arg2 + 4))
                if ((IsBoardPile(x0_1) & 1) != 0)
                    return 1
                
                return zx.q(*(arg1 + 8) == *(arg2 + 8) ? 1 : 0)

return 0
