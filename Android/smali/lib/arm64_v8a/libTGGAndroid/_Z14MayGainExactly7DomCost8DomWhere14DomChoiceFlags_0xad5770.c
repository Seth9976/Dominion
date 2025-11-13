// 函数: _Z14MayGainExactly7DomCost8DomWhere14DomChoiceFlags
// 地址: 0xad5770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_d10 = arg1
void* x0 = DomGetContext()
CardID var_1998
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_1998, 4)
int32_t var_d18 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9, std::__ndk1::allocator<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9>, bool (CardID)>::VTable
    * const var_19d0 = &_vtable_for_std::__ndk1::__function::__func<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9, std::__ndk1::allocator<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_19c8 = &var_d10
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9, std::__ndk1::allocator<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9>, bool (CardID)>::VTable
    * const* var_19b0 = &var_19d0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9, std::__ndk1::allocator<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9>, bool (CardID)>::VTable
    * const var_d00
int64_t* var_ce0 = &var_d00
var_d00 = &_vtable_for_std::__ndk1::__function::__func<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9, std::__ndk1::allocator<MayGainExactly(DomCost, DomWhere, DomChoiceFlags)::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cf8 = &var_d10
int128_t var_70
int32_t x0_4
CardID* x1_2
x0_4, x1_2 = FilterCardsInt(&var_d00, &var_1998, x0_2, nullptr, &var_70)

if (&var_d00 == var_ce0)
    x1_2 = (*(*var_ce0 + 0x20))()
else if (var_ce0 != 0)
    x1_2 = (*(*var_ce0 + 0x28))()

if (&var_19d0 == var_19b0)
    x1_2 = (*var_19b0)->vFunc_4()
else if (var_19b0 != 0)
    x1_2 = (*var_19b0)->j_operator delete()

int32_t x20_1

if (x0_4 == 0)
    x20_1 = 0
else
    int32_t x0_7 = ThisCard(false, x1_2)
    int32_t x21_1 = var_d10
    void* x0_8 = DomGetContext()
    ChoiceUI_Lookahead(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), 0xb5, true, zx.q(x0_7), *(x0_8 + 0x40), 
        x21_1)
    
    if (x0_4 == 0)
        x20_1 = 0
    else
        int32_t* x0_10
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        x0_10, v0_1, v1_1, v2_1 = DomGetContext()
        int128_t var_1a08
        var_70 = var_1a08
        int128_t var_19f8
        int128_t var_60_1 = var_19f8
        int128_t var_19e8
        int128_t var_50_1 = var_19e8
        int64_t var_19d8
        int64_t var_40_1 = var_19d8
        var_50_1:8.q = *(x0_10 + 0x40)
        memcpy(&var_d00, &var_1998, 0xc84)
        DomGame* x0_12 = *(x0_10 + 8)
        int32_t var_d08 = *x0_10
        int32_t var_d04_1 = x0_10[7]
        int32_t var_1a10_1 = 0
        int32_t var_1a18_1 = arg3
        int32_t var_1a20_1 = 0xc
        int128_t* var_1a28_1 = &var_70
        int32_t var_1a30_1 = 7
        int32_t var_80
        
        if (QueueChoiceCards(x0_12, &var_d08, zx.q(x0_10[6]), 1, &var_d00, zx.q(var_80), 1, 0) == 0)
            x20_1 = 0
        else
            x20_1 = var_d00.d
            void* x0_14 = DomGetContext()
            int32_t var_1a30_2 = 4
            GainCard(*(x0_14 + 8), zx.q(*(x0_14 + 0x18)), zx.q(x20_1), zx.q(arg2), 0, 0x476, 0, 0)

return zx.q(x20_1)
