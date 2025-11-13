// 函数: _Z11MayTrashOne11DomCardEnum15DomChoiceUIType
// 地址: 0xad36e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cfc = arg1
CardsWhereType(0x3ea, 0, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5, std::__ndk1::allocator<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5>, bool (CardID)>::VTable
    * const var_19b0 = &_vtable_for_std::__ndk1::__function::__func<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5, std::__ndk1::allocator<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_19a8 = &var_cfc
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5, std::__ndk1::allocator<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5>, bool (CardID)>::VTable
    * const* var_1990 = &var_19b0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5, std::__ndk1::allocator<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5>, bool (CardID)>::VTable
    * const var_cf0
int64_t* var_cd0 = &var_cf0
var_cf0 = &_vtable_for_std::__ndk1::__function::__func<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5, std::__ndk1::allocator<MayTrashOne(DomCardEnum, DomChoiceUIType)::$_5>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = &var_cfc
CardID var_1980
int32_t var_d00
int32_t var_68
int32_t x0_1 = FilterCardsInt(&var_cf0, &var_1980, var_d00, nullptr, &var_68)

if (&var_cf0 == var_cd0)
    (*(*var_cd0 + 0x20))()
else if (var_cd0 != 0)
    (*(*var_cd0 + 0x28))()

if (&var_19b0 == var_1990)
    (*var_1990)->vFunc_4()
else if (var_1990 != 0)
    (*var_1990)->j_operator delete()

int64_t var_19c0 = 0
int32_t x0_7

if (x0_1 != 0)
    int32_t* x0_4
    int128_t v0_1
    x0_4, v0_1 = DomGetContext()
    var_68 = arg2
    int128_t var_64_1 = 0.o
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x24)
    int64_t var_44 = *(x0_4 + 0x40)
    memcpy(&var_cf0, &var_1980, 0xc84)
    DomGame* x0_6 = *(x0_4 + 8)
    int32_t var_cf8 = *x0_4
    int32_t var_cf4_1 = x0_4[7]
    int32_t var_19d0_1 = 0
    int32_t var_19d8_1 = 0
    int32_t var_19e0_1 = 7
    int32_t* var_19e8_1 = &var_68
    int32_t var_19f0_1 = 9
    int32_t var_70
    x0_7 = QueueChoiceCards(x0_6, &var_cf8, zx.q(x0_4[6]), 1, &var_cf0, zx.q(var_70), 1, 0)

int32_t x19_1

if (x0_1 == 0 || x0_7 == 0)
    x19_1 = 0
else
    x19_1 = var_cf0.d
    GameAssert((x0_7 == 1 ? 1 : 0).b)
    void* x0_9 = DomGetContext()
    TrashCard(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), zx.q(x19_1), 0x3ea, 0x12, 0)

return zx.q(x19_1)
