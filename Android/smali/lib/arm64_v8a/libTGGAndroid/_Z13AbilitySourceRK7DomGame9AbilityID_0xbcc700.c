// 函数: _Z13AbilitySourceRK7DomGame9AbilityID
// 地址: 0xbcc700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg2

switch (x20.d u>> 4 & 3)
    case 0
        void* x0_1 = AbilityGetRegistered(arg1, x20 & 0xffffffff)
        uint64_t result = zx.q(*(x0_1 + 0x28))
        
        if (result.d != 0)
            return result
        
        uint64_t x21 = zx.q(*(x0_1 + 0x1c))
        
        if (x21.d u>= 0x320)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_11 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_12 = *(x8_11 - 0x90)
            *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x8_14 = *(arg1 + x21 * 0x68 + 0x1a70)
        
        if (x8_14 == 0)
            return zx.q(*(x0_1 + 0x24))
        
        return zx.q(x8_14)
    case 1
        if (x20.d u>> 0x17 u>= 0x19)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        return zx.q(*(arg1 + (x20 u>> 0x12 & 0x3fff) * 0x68 + 0x1a70))
    case 2
        return zx.q(x20.d u>> 0x12)
    case 3
        return TokenCardSource(arg1, zx.q(x20.d u>> 0x12)) __tailcall
