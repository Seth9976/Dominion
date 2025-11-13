// 函数: _Z17AbilitySourceItemRK7DomGame9AbilityID
// 地址: 0xbcce50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg2

switch (x20.d u>> 4 & 3)
    case 0
        void* x0_1 = AbilityGetRegistered(arg1, x20 & 0xffffffff)
        uint32_t x8_1 = *(x0_1 + 0x28)
        
        if (x8_1 != 0)
            return 2 | zx.q(x8_1) << 0x20
        
        uint64_t x20_1 = zx.q(*(x0_1 + 0x1c))
        
        if (x20_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        return 2 | zx.q(*(arg1 + x20_1 * 0x68 + 0x1a70)) << 0x20
    case 1
        if (x20.d u>> 0x17 u>= 0x19)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        return 2 | zx.q(*(arg1 + (x20 u>> 0x12 & 0x3fff) * 0x68 + 0x1a70)) << 0x20
    case 2
        return 2 | zx.q(x20.d u>> 0x12) << 0x20
    case 3
        return 1 | zx.q(*(arg1 + ((x20 u>> 0x12 & 0x3fff) << 5) + 0x15f68)) << 0x20
