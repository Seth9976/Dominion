// 函数: _Z8TrashOne11DomCardType15DomChoiceUIType
// 地址: 0xad3334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_30 = arg1
CardsWhereType(0x3ea, 0, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<TrashOne(DomCardType, DomChoiceUIType)::$_4, std::__ndk1::allocator<TrashOne(DomCardType, DomChoiceUIType)::$_4>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<TrashOne(DomCardType, DomChoiceUIType)::$_4, std::__ndk1::allocator<TrashOne(DomCardType, DomChoiceUIType)::$_4>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_ce8 = &var_30
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<TrashOne(DomCardType, DomChoiceUIType)::$_4, std::__ndk1::allocator<TrashOne(DomCardType, DomChoiceUIType)::$_4>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<TrashOne(DomCardType, DomChoiceUIType)::$_4, std::__ndk1::allocator<TrashOne(DomCardType, DomChoiceUIType)::$_4>, bool (CardID)>::VTable
    * const var_d30
int64_t* var_d10 = &var_d30
var_d30 = &_vtable_for_std::__ndk1::__function::__func<TrashOne(DomCardType, DomChoiceUIType)::$_4, std::__ndk1::allocator<TrashOne(DomCardType, DomChoiceUIType)::$_4>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_d28 = &var_30
CardID var_cb8
int32_t var_38
int32_t var_24
int32_t var_38_1 = FilterCardsInt(&var_d30, &var_cb8, var_38, nullptr, &var_24)

if (&var_d30 == var_d10)
    (*(*var_d10 + 0x20))()
else if (var_d10 != 0)
    (*(*var_d10 + 0x28))()

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

__builtin_memset(&var_d30, 0, 0x38)
var_d30.d = arg2
int32_t x0_5 = ChooseCard(&var_cb8, 9, &var_d30, 7, 0)
void* x0_6 = DomGetContext()
TrashCard(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), zx.q(x0_5), 0x3ea, 0x12, 0)
return zx.q(x0_5)
