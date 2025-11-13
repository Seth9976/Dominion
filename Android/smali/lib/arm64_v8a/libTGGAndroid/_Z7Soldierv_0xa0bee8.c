// 函数: _Z7Soldierv
// 地址: 0xa0bee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(2, 0, false)
CardsWhereType(0x3e9, 0x20)
int32_t var_cd8 = ThisCard(false, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Soldier()::$_21, std::__ndk1::allocator<Soldier()::$_21>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Soldier()::$_21, std::__ndk1::allocator<Soldier()::$_21>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Soldier()::$_21, std::__ndk1::allocator<Soldier()::$_21>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28
MoneyPlus(var_28, 0, false)

if (var_28 s>= 1)
    NotifyResult(1)

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Soldier()::$_22, std::__ndk1::allocator<Soldier()::$_22>, void ()>::VTable
    * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<Soldier()::$_22, std::__ndk1::allocator<Soldier()::$_22>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Soldier()::$_22, std::__ndk1::allocator<Soldier()::$_22>, void ()>::VTable
    * const* result = &var_d10
OtherPlayers(&var_d10)
int64_t (* const x8_6)(void* arg1)

if (&var_d10 == result)
    x8_6 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_6 = (*result)->j_operator delete

return x8_6()
