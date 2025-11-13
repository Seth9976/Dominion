// 函数: _Z7Locustsv
// 地址: 0xa97ac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashDeckOne()
int32_t var_14 = result.d

if (result.d == 0)
    return result

int32_t x19_1 = result.d
PauseUI(false)

if ((CardIs(zx.q(x19_1), 0x104) & 1) == 0 && (CardIs(zx.q(x19_1), 0x101) & 1) == 0)
    CardsSupplyTops(4, 0xffffffff)
    int64_t var_cb0 = CardTypeGet(zx.q(x19_1))
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Locusts()::$_32, std::__ndk1::allocator<Locusts()::$_32>, bool (CardID)>::VTable
        * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Locusts()::$_32, std::__ndk1::allocator<Locusts()::$_32>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int64_t* var_cd8 = &var_cb0
    int32_t* var_cd0 = &var_14
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Locusts()::$_32, std::__ndk1::allocator<Locusts()::$_32>, bool (CardID)>::VTable
        * const* var_cc0 = &var_ce0
    CardIDs var_ca8
    FilterCards(&var_ce0, &var_ca8, nullptr)
    
    if (&var_ce0 == var_cc0)
        (*var_cc0)->vFunc_4()
    else if (var_cc0 != 0)
        (*var_cc0)->j_operator delete()
    
    int32_t x0_9 = Cost(zx.q(var_14))
    int128_t var_d00
    var_d00.q = CardTypeGet(zx.q(var_14))
    int128_t var_d20
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0xb1
    int128_t var_d10
    var_d10:0xc.d = x0_9
    var_d00:8.q = 0
    int64_t var_cf0 = 0
    return GainOneOf(&var_ca8, &var_d20, 0x476, 0)

return GainCurse()
