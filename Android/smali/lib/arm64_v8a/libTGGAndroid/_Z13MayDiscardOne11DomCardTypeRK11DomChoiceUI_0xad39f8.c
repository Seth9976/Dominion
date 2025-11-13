// 函数: _Z13MayDiscardOne11DomCardTypeRK11DomChoiceUI
// 地址: 0xad39f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d00 = arg1
CardsWhereType(0x3ea, 0, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6, std::__ndk1::allocator<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6>, bool (CardID)>::VTable
    * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6, std::__ndk1::allocator<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_19b8 = &var_d00
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6, std::__ndk1::allocator<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6>, bool (CardID)>::VTable
    * const* var_19a0 = &var_19c0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6, std::__ndk1::allocator<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6>, bool (CardID)>::VTable
    * const var_cf0
int64_t* var_cd0 = &var_cf0
var_cf0 = &_vtable_for_std::__ndk1::__function::__func<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6, std::__ndk1::allocator<MayDiscardOne(DomCardType, DomChoiceUI const&)::$_6>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_ce8 = &var_d00
CardID var_1988
int32_t var_d08
int128_t var_60
int32_t x0_1 = FilterCardsInt(&var_cf0, &var_1988, var_d08, nullptr, &var_60)

if (&var_cf0 == var_cd0)
    (*(*var_cd0 + 0x20))()
else if (var_cd0 != 0)
    (*(*var_cd0 + 0x28))()

if (&var_19c0 == var_19a0)
    (*var_19a0)->vFunc_4()
else if (var_19a0 != 0)
    (*var_19a0)->j_operator delete()

int32_t x0_7

if (x0_1 != 0)
    int32_t* x0_4
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_4, v0_1, v1_1, v2_1 = DomGetContext()
    int64_t var_30_1 = *(arg2 + 0x30)
    int128_t var_40_1 = *(arg2 + 0x20)
    int128_t var_50_1 = *(arg2 + 0x10)
    var_60 = *arg2
    var_40_1:8.q = *(x0_4 + 0x40)
    memcpy(&var_cf0, &var_1988, 0xc84)
    DomGame* x0_6 = *(x0_4 + 8)
    int32_t var_cf8 = *x0_4
    int32_t var_cf4_1 = x0_4[7]
    int32_t var_19d0_1 = 0
    int32_t var_19d8_1 = 0
    int32_t var_19e0_1 = 5
    int128_t* var_19e8_1 = &var_60
    int32_t var_19f0_1 = 0x17
    int32_t var_70
    x0_7 = QueueChoiceCards(x0_6, &var_cf8, zx.q(x0_4[6]), 1, &var_cf0, zx.q(var_70), 1, 0)

int32_t x19_1

if (x0_1 == 0 || x0_7 == 0)
    x19_1 = 0
else
    x19_1 = var_cf0.d
    GameAssert((x0_7 == 1 ? 1 : 0).b)
    var_cf0.d = x19_1
    
    if (x19_1 != 0)
        void* x0_9 = DomGetContext()
        int32_t var_19e0_2 = 0
        int64_t var_19e8_2 = 0
        int32_t var_19f0_2 = 0
        DiscardCards(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), &var_cf0, 1, 0x3ea, 0xb, 7, 0)

return zx.q(x19_1)
