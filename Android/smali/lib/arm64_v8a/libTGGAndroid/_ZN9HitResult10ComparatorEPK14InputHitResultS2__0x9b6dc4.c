// 函数: _ZN9HitResult10ComparatorEPK14InputHitResultS2_
// 地址: 0x9b6dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 == *(arg2 + 8))
    if (x8 u> 3)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return UI2HitResult::GetComparator() __tailcall
    
    switch (x8)
        case 0
            return 1
        case 1
            return zx.q(*(arg1 + 0xc) == *(arg2 + 0xc) ? 1 : 0)
        case 2
            int64_t x0_2 = (**(arg1 + 0x10))(arg1 + 0x10)
            
            if (x0_2 == (**(arg2 + 0x10))(arg2 + 0x10))
                jump(x0_2)
        case 3
            return operator==(arg1 + 0x30, arg2 + 0x30) __tailcall

return 0
