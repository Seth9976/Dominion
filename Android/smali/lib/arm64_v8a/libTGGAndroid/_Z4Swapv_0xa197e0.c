// 函数: _Z4Swapv
// 地址: 0xa197e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swap()::$_33, std::__ndk1::allocator<Swap()::$_33>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Swap()::$_33, std::__ndk1::allocator<Swap()::$_33>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swap()::$_33, std::__ndk1::allocator<Swap()::$_33>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0xe3
int128_t var_1960
var_1960:0xc.d = 0
int128_t var_1950
var_1950:8.q = 0
int64_t var_1940 = 0
int64_t result = MayChooseCard(&var_ca8, 0xc, &var_1970, 0x14)

if (result.d != 0)
    int32_t x19_1 = result.d
    result = ReturnToBoard(result, 0x3ea, 0x15)
    
    if ((result.d & 1) != 0)
        int32_t x0_4 = CardWhat(zx.q(x19_1))
        CardsSupplyTops(4, 0xffffffff)
        int32_t var_1998_1 = x0_4
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swap()::$_34, std::__ndk1::allocator<Swap()::$_34>, bool (CardID)>::VTable
            * const var_19a0 = &_vtable_for_std::__ndk1::__function::__func<Swap()::$_34, std::__ndk1::allocator<Swap()::$_34>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swap()::$_34, std::__ndk1::allocator<Swap()::$_34>, bool (CardID)>::VTable
            * const* var_1980_1 = &var_19a0
        FilterCards(&var_19a0, &var_1970, nullptr)
        
        if (&var_19a0 == var_1980_1)
            (*var_1980_1)->vFunc_4()
        else if (var_1980_1 != 0)
            (*var_1980_1)->j_operator delete()
        
        int128_t var_19e0
        __builtin_memset(&var_19e0, 0, 0x30)
        var_19e0.d = 0xe2
        int128_t var_19d0
        var_19d0:0xc.d = 0
        int128_t var_19c0
        var_19c0:8.q = 0
        int64_t var_19b0_1 = 0
        return GainOneOf(&var_1970, &var_19e0, 0x3ea, 0)

return result
