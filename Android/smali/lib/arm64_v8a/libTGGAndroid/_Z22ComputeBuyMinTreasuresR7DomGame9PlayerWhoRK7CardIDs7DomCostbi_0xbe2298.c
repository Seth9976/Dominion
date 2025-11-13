// 函数: _Z22ComputeBuyMinTreasuresR7DomGame9PlayerWhoRK7CardIDs7DomCostbi
// 地址: 0xbe2298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x21 = arg4
CardIDs var_61a10
memcpy(&var_61a10, arg3, 0xc84)

if ((arg5.d & 1) != 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6>, bool (CardID)>::VTable
        * const var_61a40 = &_vtable_for_std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    DomGame& var_61a38_1 = arg1
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_6>, bool (CardID)>::VTable
        * const* var_61a20_1 = &var_61a40
    FilterCards(&var_61a40, &var_61a10, nullptr)
    
    if (&var_61a40 == var_61a20_1)
        (*var_61a20_1)->vFunc_4()
    else if (var_61a20_1 != 0)
        (*var_61a20_1)->j_operator delete()

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7>, bool (CardID)>::VTable
    * const var_61a70 = &_vtable_for_std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
DomGame& var_61a68 = arg1
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_7>, bool (CardID)>::VTable
    * const* var_61a50 = &var_61a70
FilterCards(&var_61a70, &var_61a10, nullptr)

if (&var_61a70 == var_61a50)
    (*var_61a50)->vFunc_4()
else if (var_61a50 != 0)
    (*var_61a50)->j_operator delete()

CardIDs* entry_x8
*(entry_x8 + 0xc80) = 0
int32_t var_60d88

if ((x21 u>> 0x10 & 1) s> *(arg1 + muls.dp.d(x19, 0x5a30) + 0x181a0))
    int32_t var_60108_1 = 0
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8>, bool (CardID)>::VTable
        * const var_61aa0 = &_vtable_for_std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    DomGame& var_61a98_1 = arg1
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8, std::__ndk1::allocator<ComputeBuyMinTreasures(DomGame&, PlayerWho, CardIDs const&, DomCost, bool, int32_t)::$_8>, bool (CardID)>::VTable
        * const* var_61a80_1 = &var_61aa0
    FilterCards(&var_61aa0, &var_61a10, &var_60d88)
    
    if (&var_61aa0 == var_61a80_1)
        (*var_61a80_1)->vFunc_4()
    else if (var_61a80_1 != 0)
        (*var_61a80_1)->j_operator delete()
    
    operator+=(entry_x8, zx.q(var_60d88))

int64_t x26 = sx.q(x19)
int32_t x27 = (x21 & 0xff) + (x21 s>> 0x18)
DomGame* x0_8 = XMalloc(0x60d20)
SimulateGame(x0_8, arg1, zx.q(x19))
*(x0_8 + 0x150c) = 6
int32_t var_60d90
int32_t var_64

if (var_60d90 s>= 1)
    int64_t i = 0
    
    do
        uint64_t x20_1 = zx.q(*(&var_61a10 + (i << 2)))
        
        if (x20_1.d u>= 0x320)
            void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_15 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
            *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_16 = *(x8_15 - 0x90)
            *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x20_1 * 0x68 + 0x1a70) == 0x105)
            int32_t x22_1 = *(&var_61a10 + (i << 2))
            
            if (x22_1 == 0)
                goto label_be25b0
            
            int32_t x24_1 = *(x0_8 + x26 * 0x5a30 + 0x18194)
            SimulateGame(&var_60d88, x0_8, zx.q(x19))
            int32_t var_5f87c_1 = 6
            var_64 = x22_1
            PlayTreasures(&var_60d88, zx.q(x19), &var_64, 1, 0)
            
            if (x27 s<= 1)
                if (x27 s>= 1)
                    goto label_be25bc
                
                goto label_be26ac
            
            int32_t x20_3 = (&var_60d88)[x26 * 0x168c + 0x6065] - x24_1
            
            if (x20_3 s< 3)
                goto label_be25b0
            
            operator-=(&var_61a10, zx.q(x22_1))
            operator+=(entry_x8, zx.q(x22_1))
            x27 -= x20_3
            var_60d88 = x22_1
            PlayTreasures(x0_8, zx.q(x19), &var_60d88, 1, 0)
            
            if (x27 s>= 1)
                goto label_be25bc
            
            goto label_be26ac
        
        i += 1
    while (i s< sx.q(var_60d90))

label_be25b0:

if (x27 s>= 1)
label_be25bc:
    
    if (var_60d90 s>= 1)
        int64_t i_1 = 0
        
        do
            int32_t x22_2 = *(&var_61a10 + (i_1 << 2))
            int32_t x20_4 = *(x0_8 + x26 * 0x5a30 + 0x18194)
            SimulateGame(&var_60d88, x0_8, zx.q(x19))
            int32_t var_5f87c_2 = 6
            var_64 = x22_2
            PlayTreasures(&var_60d88, zx.q(x19), &var_64, 1, 0)
            x27 += x20_4 - (&var_60d88)[x26 * 0x168c + 0x6065]
            operator+=(entry_x8, zx.q(x22_2))
            var_60d88 = x22_2
            PlayTreasures(x0_8, zx.q(x19), &var_60d88, 1, 0)
            
            if (x27 s<= 0)
                break
            
            i_1 += 1
        while (i_1 s< sx.q(var_60d90))

label_be26ac:
return XFree(x0_8)
