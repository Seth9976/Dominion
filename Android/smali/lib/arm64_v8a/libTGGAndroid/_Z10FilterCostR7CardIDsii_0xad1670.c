// 函数: _Z10FilterCostR7CardIDsii
// 地址: 0xad1670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(arg2) | zx.q(arg3) << 0x20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterCost(CardIDs&, int32_t, int32_t)::$_3, std::__ndk1::allocator<FilterCost(CardIDs&, int32_t, int32_t)::$_3>, bool (CardID)>::VTable
    * const var_80
int64_t* result = &var_80
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterCost(CardIDs&, int32_t, int32_t)::$_3, std::__ndk1::allocator<FilterCost(CardIDs&, int32_t, int32_t)::$_3>, bool (CardID)>::VTable
    * const var_50
int64_t* var_30 = &var_50
var_80 = &_vtable_for_std::__ndk1::__function::__func<FilterCost(CardIDs&, int32_t, int32_t)::$_3, std::__ndk1::allocator<FilterCost(CardIDs&, int32_t, int32_t)::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
uint64_t var_78 = x8_1
var_50 = &_vtable_for_std::__ndk1::__function::__func<FilterCost(CardIDs&, int32_t, int32_t)::$_3, std::__ndk1::allocator<FilterCost(CardIDs&, int32_t, int32_t)::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
uint64_t var_48 = x8_1
int32_t var_14
*(arg1 + 0xc80) = FilterCardsInt(&var_50, arg1, *(arg1 + 0xc80), nullptr, &var_14)

if (&var_50 == var_30)
    (*(*var_30 + 0x20))()
else if (var_30 != 0)
    (*(*var_30 + 0x28))()

int64_t x8_6

if (&var_80 == result)
    x8_6 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_6 = *(*result + 0x28)

return x8_6()
