// 函数: _Z8ThisCardbP6CardID
// 地址: 0xad1c04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0

if (x8 != 6)
    if (x8 == 3)
        uint64_t x1 = zx.q(x0[7])
        int32_t x8_1 = x1.d u>> 4 & 3
        
        if (x8_1 == 3)
            return 0
        
        if (x8_1 == 2)
            return FindCardAnywhere(*(x0 + 8), x1 u>> 0x12 & 0x3fff) __tailcall
        
        if (x8_1 == 0)
            return zx.q(*(AbilityGetRegistered(*(x0 + 8), x1) + 0x1c))
        
        GameAssert(true)
        return zx.q(x0[7] u>> 0x12)
    
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        int32_t x0_10
        int64_t x1_3
        x0_10, x1_3 = XNoReturn()
        return MoneyTreasure(x0_10, x1_3) __tailcall

return zx.q(x0[7])
