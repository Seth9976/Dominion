// 函数: _Z7Bargainv
// 地址: 0xa8bf64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Bargain()::$_27, std::__ndk1::allocator<Bargain()::$_27>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Bargain()::$_27, std::__ndk1::allocator<Bargain()::$_27>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Bargain()::$_27, std::__ndk1::allocator<Bargain()::$_27>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xd1
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
GainOneOf(&var_ca8, &var_d20, 0x476, 0)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Bargain()::$_28, std::__ndk1::allocator<Bargain()::$_28>, void ()>::VTable
    * const var_d50 = &_vtable_for_std::__ndk1::__function::__func<Bargain()::$_28, std::__ndk1::allocator<Bargain()::$_28>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Bargain()::$_28, std::__ndk1::allocator<Bargain()::$_28>, void ()>::VTable
    * const* result = &var_d50
OtherPlayers(&var_d50)
int64_t (* const x8_5)(void* arg1)

if (&var_d50 == result)
    x8_5 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_5 = (*result)->j_operator delete

return x8_5()
