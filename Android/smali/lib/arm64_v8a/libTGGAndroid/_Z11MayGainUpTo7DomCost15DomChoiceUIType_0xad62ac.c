// 函数: _Z11MayGainUpTo7DomCost15DomChoiceUIType
// 地址: 0xad62ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_d00 = arg1
void* x0 = DomGetContext()
CardID var_1988
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_1988, 4)
int32_t var_d08 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainUpTo(DomCost, DomChoiceUIType)::$_15, std::__ndk1::allocator<MayGainUpTo(DomCost, DomChoiceUIType)::$_15>, bool (CardID)>::VTable
    * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<MayGainUpTo(DomCost, DomChoiceUIType)::$_15, std::__ndk1::allocator<MayGainUpTo(DomCost, DomChoiceUIType)::$_15>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_19b8 = &var_d00
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainUpTo(DomCost, DomChoiceUIType)::$_15, std::__ndk1::allocator<MayGainUpTo(DomCost, DomChoiceUIType)::$_15>, bool (CardID)>::VTable
    * const* var_19a0 = &var_19c0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainUpTo(DomCost, DomChoiceUIType)::$_15, std::__ndk1::allocator<MayGainUpTo(DomCost, DomChoiceUIType)::$_15>, bool (CardID)>::VTable
    * const var_cf0
int64_t* var_cd0 = &var_cf0
var_cf0 = &_vtable_for_std::__ndk1::__function::__func<MayGainUpTo(DomCost, DomChoiceUIType)::$_15, std::__ndk1::allocator<MayGainUpTo(DomCost, DomChoiceUIType)::$_15>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = &var_d00
int32_t var_68
int32_t x0_4 = FilterCardsInt(&var_cf0, &var_1988, x0_2, nullptr, &var_68)

if (&var_cf0 == var_cd0)
    (*(*var_cd0 + 0x20))()
else if (var_cd0 != 0)
    (*(*var_cd0 + 0x28))()

if (&var_19c0 == var_19a0)
    (*var_19a0)->vFunc_4()
else if (var_19a0 != 0)
    (*var_19a0)->j_operator delete()

if (x0_4 == 0)
    return 0

int32_t x21_1 = var_d00
int32_t* x0_7 = DomGetContext()
var_68 = arg2
int64_t var_64
__builtin_memset(&var_64, 0, 0x18)
int32_t var_4c_1 = x21_1
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t var_40_1 = *(x0_7 + 0x40)
memcpy(&var_cf0, &var_1988, 0xc84)
DomGame* x0_9 = *(x0_7 + 8)
int32_t var_cf8 = *x0_7
int32_t var_cf4_1 = x0_7[7]
int32_t var_19d0_1 = 0
int32_t var_19d8_1 = 0
int32_t var_19e0_1 = 0xc
int32_t* var_19e8_1 = &var_68
int32_t var_19f0_1 = 7
int32_t var_70

if (QueueChoiceCards(x0_9, &var_cf8, zx.q(x0_7[6]), 1, &var_cf0, zx.q(var_70), 1, 0) != 0)
    int32_t x19_1 = var_cf0.d
    
    if (x19_1 != 0)
        void* x0_12 = DomGetContext()
        int32_t var_19f0_2 = 4
        
        if ((GainCard(*(x0_12 + 8), zx.q(*(x0_12 + 0x18)), zx.q(x19_1), 0x476, 0, 0x476, 0, 0) & 1)
                != 0)
            return zx.q(x19_1)

return 0
