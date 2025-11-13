// 函数: _Z15ChooseCardsSameRK7CardIDs14ActiveSetStyle15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xae1958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d18
__builtin_memset(&var_d18, 0, 0x18)
int64_t result
int32_t var_19a0
int32_t* entry_x8
int32_t x24_1

if (*(arg1 + 0xc80) == 0)
    memset(&var_19a0, 0, 0xc7c)
    x24_1 = 0
label_ae1aa0:
    *entry_x8 = x24_1
    result = memcpy(&entry_x8[1], &var_19a0, 0xc7c)
    entry_x8[0x320] = 0
else
    int32_t x21_1 = arg4
    int32_t x22_1 = arg3
    int32_t x20_1 = arg2
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    v0_1 = var_d18.o
    int32_t var_2628 = x22_1
    int128_t var_2624_1 = v0_1
    int64_t var_2614
    __builtin_memset(&var_2614, 0, 0x24)
    int64_t var_2604 = *(x0 + 0x40)
    int32_t var_ce0
    memcpy(&var_ce0, arg1, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    var_19a0 = *x0
    int32_t var_199c_1 = x0[7]
    int32_t var_2680_1 = 0
    int32_t var_2688_1 = 0
    int32_t var_2690_1 = x21_1
    int32_t* var_2698_1 = &var_2628
    int32_t var_26a0_1 = x20_1
    int32_t var_60
    int32_t x0_3 = QueueChoiceCards(x0_2, &var_19a0, zx.q(x0[6]), 1, &var_ce0, zx.q(var_60), 1, 0)
    x24_1 = var_ce0
    memcpy(&var_19a0, &var_ce0 | 4, 0xc7c)
    
    if (x0_3 == 0)
        goto label_ae1aa0
    
    if (x0_3 s< 2)
        int32_t x0_10 = CardWhat(*(DomGetContext() + 8), zx.q(x24_1))
        memcpy(&var_2628, arg1, 0xc84)
        int32_t var_2658_1 = x0_10
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37, std::__ndk1::allocator<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37>, bool (CardID)>::VTable
            * const var_2660 = &_vtable_for_std::__ndk1::__function::__func<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37, std::__ndk1::allocator<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37, std::__ndk1::allocator<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37>, bool (CardID)>::VTable
            * const* var_2640_1 = &var_2660
        int32_t* var_cc0_1 = &var_ce0
        var_ce0.q = &_vtable_for_std::__ndk1::__function::__func<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37, std::__ndk1::allocator<ChooseCardsSame(CardIDs const&, ActiveSetStyle, DomChoiceUIType, DomChoiceAIHint)::$_37>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        int32_t var_cd8_1 = x0_10
        int32_t var_19a8
        int32_t x0_13 = FilterCardsInt(&var_ce0, &var_2628, var_19a8, nullptr, &var_d18)
        
        if (&var_ce0 == var_cc0_1)
            (*(*var_cc0_1 + 0x20))()
        else if (var_cc0_1 != 0)
            (*(*var_cc0_1 + 0x28))()
        
        if (&var_2660 == var_2640_1)
            (*var_2640_1)->vFunc_4()
        else if (var_2640_1 != 0)
            (*var_2640_1)->j_operator delete()
        
        int64_t var_2670_1 = 0
        
        if (x0_13 == 0)
            return memset(entry_x8, 0, 0xc84)
        
        int32_t* x0_16
        int128_t v0_2
        x0_16, v0_2 = DomGetContext()
        var_d18.d = x22_1
        var_d18:4.o = 0.o
        int64_t var_d08
        __builtin_memset(&var_d08:4, 0, 0x24)
        int64_t var_cf4 = *(x0_16 + 0x40)
        memcpy(&var_ce0, &var_2628, 0xc84)
        DomGame* x0_18 = *(x0_16 + 8)
        int32_t var_d20 = *x0_16
        int32_t var_d1c_1 = x0_16[7]
        int32_t var_2680_2 = 0
        int32_t var_2690_2 = x21_1
        int32_t var_2688_2 = 1
        int64_t* var_2698_2 = &var_d18
        int32_t var_26a0_2 = x20_1
        int32_t var_60_1 = QueueChoiceCards(x0_18, &var_d20, zx.q(x0_16[6]), 1, &var_ce0, 
            zx.q(var_60), zx.q(x0_13), 0)
        return memcpy(entry_x8, &var_ce0, 0xc84)
    
    *entry_x8 = x24_1
    result = memcpy(&entry_x8[1], &var_19a0, 0xc7c)
    entry_x8[0x320] = x0_3
return result
