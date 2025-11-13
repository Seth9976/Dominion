// 函数: _Z15GetBuyableCardsR7DomGameRK7CardIDs9PlayerWhoP11BuyableCardRK10CanBuyInfo
// 地址: 0xbcbee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23

if (*(arg2 + 0xc80) s< 1)
    x23 = 0
else
    int64_t i = 0
    x23 = 0
    
    do
        int32_t var_80_1 = *(arg5 + 0xc9c)
        int32_t var_88_1 = *(arg5 + 0xc98)
        int32_t var_90_1 = *(arg5 + 0xe48)
        void* __offset(CanBuyInfo, 0xde0) var_98_1 = arg5 + 0xde0
        int32_t var_a0_1 = *(arg5 + 0xddc)
        void* __offset(CanBuyInfo, 0xd74) var_a8_1 = arg5 + 0xd74
        int32_t var_b0_1 = *(arg5 + 0xd70)
        void* __offset(CanBuyInfo, 0xca0) var_c0_1 = arg5 + 0xca0
        void* __offset(CanBuyInfo, 0xd08) var_b8_1 = arg5 + 0xd08
        int32_t var_c8_1 = *(arg5 + 0xc94)
        int32_t var_d0_1 = *(arg5 + 0xc90)
        void* __offset(CanBuyInfo, 0x10) var_d8_1 = arg5 + 0x10
        char var_e0_1 = *(arg5 + 0xd)
        bool var_64
        
        if ((CanBuy_Fast(arg1, zx.q(arg3), zx.q(*(arg2 + (i << 2))), &var_64, zx.q(*arg5), 
                zx.q(*(arg5 + 4)), zx.q(*(arg5 + 8)), zx.q(*(arg5 + 0xc))) & 1) != 0)
            uint32_t x8_3 = zx.d(var_64)
            void* x9_3 = arg4 + (sx.q(x23) << 3)
            x23 += 1
            *x9_3 = *(arg2 + (i << 2))
            *(x9_3 + 4) = x8_3
        
        i += 1
    while (i s< sx.q(*(arg2 + 0xc80)))

return zx.q(x23)
