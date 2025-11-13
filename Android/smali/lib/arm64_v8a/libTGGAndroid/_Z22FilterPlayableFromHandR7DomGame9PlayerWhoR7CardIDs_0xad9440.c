// 函数: _Z22FilterPlayableFromHandR7DomGame9PlayerWhoR7CardIDs
// 地址: 0xad9440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2.d

if ((HasOngoing(arg1, arg2, 0x19, 0, 0) & 1) != 0
        && *(arg1 + muls.dp.d(x21, 0x5a30) + 0x181d0) s>= 3)
    *(arg3 + 0xc80) = 0

int64_t* result = HasOngoing(arg1, zx.q(x21), 0x18, 0, 0)

if ((result.d & 1) != 0)
    int32_t var_1940[0x240]
    void var_cc0
    int32_t var_34 = CountCardTypesWhere(arg1, zx.q(x21), 0x3e9, &var_cc0, &var_1940)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<FilterPlayableFromHand(DomGame&, PlayerWho, CardIDs&)::$_24, std::__ndk1::allocator<FilterPlayableFromHand(DomGame&, PlayerWho, CardIDs&)::$_24>, bool (CardID)>::VTable
        ** result_2 = operator new(0x28)
    result_2[3] = &var_34
    result_2[4] = &var_1940
    *result_2 = &_vtable_for_std::__ndk1::__function::__func<FilterPlayableFromHand(DomGame&, PlayerWho, CardIDs&)::$_24, std::__ndk1::allocator<FilterPlayableFromHand(DomGame&, PlayerWho, CardIDs&)::$_24>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    result_2[1] = arg1
    result_2[2] = &var_cc0
    int64_t* result_1 = result_2
    void var_1970
    int32_t var_38
    *(arg3 + 0xc80) = FilterCardsInt(&var_1970, arg3, *(arg3 + 0xc80), nullptr, &var_38)
    result = result_1
    
    if (&var_1970 == result)
        return (*(*result + 0x20))()
    
    if (result != 0)
        return (*(*result + 0x28))()

return result
