// 函数: _Z26GainCardNeighborGainedUpToi
// 地址: 0xade248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24 = arg1
int32_t* x0 = DomGetContext()
DomGame* x0_1 = *(x0 + 8)
int32_t x9 = *(x0_1 + 0xd40)
void* x8_4 = x0_1 + muls.dp.d((x0[6] + x9 - 1) s% x9, 0x5a30)
void var_cb0
int64_t result = ToCardTypes(x0_1, &var_cb0, x8_4 + 0x18e98, *(x8_4 + 0x181b4))
int32_t var_28 = result.d

if (result.d != 0)
    CardsSupplyTops(&var_cb0, result.d, 4)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>::VTable
        * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_1960_1 = &var_28
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>::VTable
        * const* var_1950_1 = &var_1970
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>::VTable
        * const var_19e0
    int64_t* var_19c0_1 = &var_19e0
    var_19e0 = &_vtable_for_std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int128_t var_19d8_1 = (&var_cb0).o
    int32_t var_19a8
    int32_t var_1938
    int32_t var_cb8
    int32_t x0_4 = FilterCardsInt(&var_19e0, &var_1938, var_cb8, nullptr, &var_19a8)
    
    if (&var_19e0 == var_19c0_1)
        (*(*var_19c0_1 + 0x20))()
    else if (var_19c0_1 != 0)
        (*(*var_19c0_1 + 0x28))()
    
    if (&var_1970 == var_1950_1)
        (*var_1950_1)->vFunc_4()
    else if (var_1950_1 != 0)
        (*var_1950_1)->j_operator delete()
    
    bool cond:0_1 = var_28 == x0_4
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_36, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_36>, bool (CardID)>::VTable
        * const var_19a0 = &_vtable_for_std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_36, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_36>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_1998_1 = &var_24
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_36, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_36>, bool (CardID)>::VTable
        * const* var_1980_1 = &var_19a0
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>::VTable
        * const* var_19c0_2 = &var_19e0
    var_19e0 = &_vtable_for_std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_36, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_36>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    var_19d8_1.q = &var_24
    int32_t x0_8 = FilterCardsInt(&var_19e0, &var_1938, x0_4, nullptr, &var_19a8)
    
    if (&var_19e0 == var_19c0_2)
        (*var_19c0_2)->vFunc_4()
    else if (var_19c0_2 != 0)
        (*var_19c0_2)->j_operator delete()
    
    if (&var_19a0 == var_1980_1)
        (*var_1980_1)->vFunc_4()
    else if (var_1980_1 != 0)
        (*var_1980_1)->j_operator delete()
    
    uint64_t x2_3 = zx.q(x0[6])
    int32_t x8_20 = x0[7]
    DomGame* x0_11 = *(x0 + 8)
    var_19a8 = *x0
    int32_t var_19a4_1 = x8_20
    __builtin_memset(&var_19e0, 0, 0x20)
    var_19e0.d = 0x3c
    int32_t var_19c4
    __builtin_memset(&var_19c4, 0, 0x1c)
    int32_t var_19f0_1 = 0
    int32_t var_1a00_1 = 0xc
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardNeighborGainedUpTo(int32_t)::$_35, std::__ndk1::allocator<GainCardNeighborGainedUpTo(int32_t)::$_35>, bool (CardID)>::VTable
        * const* var_1a08_1 = &var_19e0
    int32_t var_1a10_1 = 7
    int32_t var_19f8_1 = 0
    result = QueueChoiceCards(x0_11, &var_19a8, x2_3, 1, &var_1938, zx.q(x0_8), 1, 
        zx.q(cond:0_1 ? 1 : 0))
    
    if (result.d != 0)
        int32_t x19_1 = var_1938
        void* x0_12 = DomGetContext()
        int32_t var_1a10_2 = 4
        return GainCard(*(x0_12 + 8), zx.q(*(x0_12 + 0x18)), zx.q(x19_1), 0x476, 0, 0x476, 0, 0)

return result
