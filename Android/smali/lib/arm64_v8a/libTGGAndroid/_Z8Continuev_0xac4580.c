// 函数: _Z8Continuev
// 地址: 0xac4580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MarkUsed()
int32_t var_28 = 4
CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Continue()::$_35, std::__ndk1::allocator<Continue()::$_35>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Continue()::$_35, std::__ndk1::allocator<Continue()::$_35>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_28
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Continue()::$_35, std::__ndk1::allocator<Continue()::$_35>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_cb0
FilterCards(&var_ce0, &var_cb0, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_30

if (var_30 == 0)
    SetPhase(1)
else
    int32_t x8_5 = var_28
    int128_t var_d20
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0x131
    int128_t var_d10
    var_d10:0xc.d = x8_5
    int128_t var_d00
    var_d00:8.q = 0
    int64_t var_cf0_1 = 0
    int64_t x0_3 = ChooseCard(&var_cb0, 7, &var_d20, 0xc, 0)
    
    if (x0_3.d == 0)
        SetPhase(1)
    else
        int32_t x19_1 = x0_3.d
        
        if ((GainCard(x0_3, 0x476, 0, 0, 4) & 1) == 0)
            SetPhase(1)
        else
            SetPhase(1)
            int64_t x0_6 = CardWhereEx(zx.q(x19_1))
            int64_t x0_8 = CardGainedToWhereEx(zx.q(x19_1))
            
            if (x0_6.d == x0_8.d && (x0_6 u>> 0x20).d == (x0_8 u>> 0x20).d
                    && (LimitPlayableCards(zx.q(x19_1)) & 1) == 0)
                PlayCard(zx.q(x19_1), 0x10)

Action(1, 0)
return Buy(1, 0)
