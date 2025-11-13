// 函数: _Z13GainCardTrait11DomCardEnum15DomChoiceUIType8DomWhere
// 地址: 0xaa3d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0_2 = LandscapeRefPiles(*(DomGetContext() + 8) + 0xd54, zx.q(arg1))
int64_t x21

if (*x0_2 == 0)
    x21 = 0
else if (x0_2[1] == 0)
    x21 = 1
else if (x0_2[2] == 0)
    x21 = 2
else if (x0_2[3] == 0)
    x21 = 3
else if (x0_2[4] == 0)
    x21 = 4
else if (x0_2[5] == 0)
    x21 = 5
else if (x0_2[6] == 0)
    x21 = 6
else if (x0_2[7] == 0)
    x21 = 7
else if (x0_2[8] == 0)
    x21 = 8
else if (x0_2[9] == 0)
    x21 = 9
else if (x0_2[0xa] == 0)
    x21 = 0xa
else if (x0_2[0xb] == 0)
    x21 = 0xb
else if (x0_2[0xc] == 0)
    x21 = 0xc
else if (x0_2[0xd] != 0)
    x21 = 0xe
else
    x21 = 0xd

CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71, std::__ndk1::allocator<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71, std::__ndk1::allocator<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = x0_2
int64_t var_ce0 = x21
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71, std::__ndk1::allocator<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71>, bool (CardID)>::VTable
    * const* result_1 = &var_cf0
CardIDs var_cb8
FilterCards(&var_cf0, &var_cb8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71, std::__ndk1::allocator<GainCardTrait(DomCardEnum, DomChoiceUIType, DomWhere)::$_71>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_cf0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_38

if (var_38 == 0)
    return result

int128_t var_d30
__builtin_memset(&var_d30, 0, 0x38)
var_d30.d = arg2
return GainOneOf(&var_cb8, &var_d30, 0x476, 0)
