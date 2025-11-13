// 函数: _Z28Swindler_Achievement_OnTrashPK6CardIDi
// 地址: 0xa851a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 0

int32_t var_18 = Cost(zx.q(*arg1))
CardsSupplyTops(4, zx.q(CurrentWho()))
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28, std::__ndk1::allocator<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28, std::__ndk1::allocator<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_18
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28, std::__ndk1::allocator<Swindler_Achievement_OnTrash(CardID const*, int32_t)::$_28>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28
return zx.q(var_28 == 0 ? 1 : 0)
