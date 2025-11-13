// 函数: _Z6Changev
// 地址: 0xac2358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MayPayoffDebt(6)
void* x0 = DomGetContext()

if (GetDebt(*(x0 + 8), zx.q(*(x0 + 0x18))) != 0)
    return MoneyPlus(3, 0, false) __tailcall

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Change()::$_1, std::__ndk1::allocator<Change()::$_1>, bool (CardID)>::VTable
    * const* result = TrashOne(7, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t x0_4 = CostOnlyCoin(result)
    CardsSupplyTops(4, 0xffffffff)
    int32_t var_ce8_1 = x0_4
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Change()::$_1, std::__ndk1::allocator<Change()::$_1>, bool (CardID)>::VTable
        * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<Change()::$_1, std::__ndk1::allocator<Change()::$_1>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Change()::$_1, std::__ndk1::allocator<Change()::$_1>, bool (CardID)>::VTable
        * const* result_1 = &var_cf0
    CardIDs var_cb8
    FilterCards(&var_cf0, &var_cb8, nullptr)
    result = result_1
    
    if (&var_cf0 == result)
        result = (*result)->vFunc_4()
    else if (result != 0)
        result = (*result)->j_operator delete()
    
    int32_t var_38
    
    if (var_38 != 0)
        int128_t var_d30
        __builtin_memset(&var_d30, 0, 0x30)
        var_d30.d = 0x127
        int128_t var_d20
        var_d20:0xc.d = x0_4 + 1
        int128_t var_d10
        var_d10:8.q = 0
        int64_t var_d00_1 = 0
        result = ChooseCard(&var_cb8, 7, &var_d30, 0xc, 0)
        
        if (result.d != 0)
            int32_t x20_2 = result.d
            result = GainCard(result, 0x476, 0, 0, 4)
            
            if ((result.d & 1) != 0)
                int32_t x0_8 = CostOnlyCoin(zx.q(x19_1))
                int32_t x0_10 = CostOnlyCoin(zx.q(x20_2))
                int32_t x8_7 = x0_10 - x0_8
                int32_t x0_11
                
                if (x0_10 - x0_8 s< 0)
                    x0_11 = neg.d(x8_7)
                else
                    x0_11 = x8_7
                
                return DebtPlus(x0_11)

return result
