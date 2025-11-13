// 函数: _Z12MayRevealOne11DomCardEnum15DomChoiceUIType
// 地址: 0xad7714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cf4 = arg1
CardsWhereType(0x3ea, 0, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21, std::__ndk1::allocator<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21>, bool (CardID)>::VTable
    * const var_19b0 = &_vtable_for_std::__ndk1::__function::__func<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21, std::__ndk1::allocator<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_19a8 = &var_cf4
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21, std::__ndk1::allocator<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21>, bool (CardID)>::VTable
    * const* var_1990 = &var_19b0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21, std::__ndk1::allocator<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21>, bool (CardID)>::VTable
    * const var_cf0
int64_t* var_cd0 = &var_cf0
var_cf0 = &_vtable_for_std::__ndk1::__function::__func<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21, std::__ndk1::allocator<MayRevealOne(DomCardEnum, DomChoiceUIType)::$_21>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = &var_cf4
int32_t var_2638
CardID var_1978
int32_t var_cf8
int32_t x0_1 = FilterCardsInt(&var_cf0, &var_1978, var_cf8, nullptr, &var_2638)

if (&var_cf0 == var_cd0)
    (*(*var_cd0 + 0x20))()
else if (var_cd0 != 0)
    (*(*var_cd0 + 0x28))()

if (&var_19b0 == var_1990)
    (*var_1990)->vFunc_4()
else if (var_1990 != 0)
    (*var_1990)->j_operator delete()

int64_t var_2648 = 0

if (x0_1 != 0)
    int32_t* x0_4
    int128_t v0_1
    x0_4, v0_1 = DomGetContext()
    int32_t var_68 = arg2
    int128_t var_64_1 = 0.o
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x24)
    int64_t var_44 = *(x0_4 + 0x40)
    memcpy(&var_cf0, &var_1978, 0xc84)
    uint64_t x2_1 = zx.q(x0_4[6])
    int32_t x8_9 = x0_4[7]
    DomGame* x0_6 = *(x0_4 + 8)
    var_2638 = *x0_4
    int32_t var_2634_1 = x8_9
    int32_t var_2660_1 = 0
    int32_t var_2668_1 = 0
    int32_t var_2670_1 = 0x11
    int32_t* var_2678_1 = &var_68
    int32_t var_2680_1 = 0x20
    int32_t var_70
    int32_t var_70_1 = QueueChoiceCards(x0_6, &var_2638, x2_1, 1, &var_cf0, zx.q(var_70), 1, 0)
    memcpy(&var_2638, &var_cf0, 0xc84)
    int32_t var_19b8
    
    if (var_19b8 != 0)
        void* x0_9 = DomGetContext()
        Reveal(*(x0_9 + 8), &var_2638, 0x3ea, *(x0_9 + 0x40), zx.q(*(x0_9 + 0x48)), 0x3ee, 
            0x7ebd44, 0)
        
        if (var_19b8 != 0)
            return zx.q(var_2638)

return 0
