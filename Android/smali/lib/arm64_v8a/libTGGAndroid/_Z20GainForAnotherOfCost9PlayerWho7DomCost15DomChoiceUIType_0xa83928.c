// 函数: _Z20GainForAnotherOfCost9PlayerWho7DomCost15DomChoiceUIType
// 地址: 0xa83928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t var_28 = arg2
CardsSupplyTops(4, zx.q(x19))
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14, std::__ndk1::allocator<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14, std::__ndk1::allocator<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = &var_28
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14, std::__ndk1::allocator<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14>, bool (CardID)>::VTable
    * const* result_1 = &var_cf0
CardIDs var_cb8
FilterCards(&var_cf0, &var_cb8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14, std::__ndk1::allocator<GainForAnotherOfCost(PlayerWho, DomCost, DomChoiceUIType)::$_14>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_cf0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_38

if (var_38 == 0)
    return result

int32_t x8_5 = var_28
int128_t var_d30
__builtin_memset(&var_d30, 0, 0x38)
var_d30.d = arg3
int128_t var_d20
var_d20:0xc.d = x8_5
int128_t var_d10
var_d10.q = sx.q(x19)
return GainCardOpponent(zx.q(x19), zx.q(ChooseCard(&var_cb8, 0x12, &var_d30, 0xd, 0)))
