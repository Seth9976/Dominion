// 函数: _Z6Creditv
// 地址: 0xac430c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Credit()::$_34, std::__ndk1::allocator<Credit()::$_34>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Credit()::$_34, std::__ndk1::allocator<Credit()::$_34>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Credit()::$_34, std::__ndk1::allocator<Credit()::$_34>, bool (CardID)>::VTable
    * const* result_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Credit()::$_34, std::__ndk1::allocator<Credit()::$_34>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_ce0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_28

if (var_28 != 0)
    int128_t var_d20
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0x12c
    int128_t var_d10
    var_d10:0xc.d = 8
    int128_t var_d00
    var_d00:8.q = 0
    int64_t var_cf0_1 = 0
    result = ChooseCard(&var_ca8, 7, &var_d20, 0xc, 0)
    
    if (result.d != 0)
        int32_t x19_1 = result.d
        result = GainCard(result, 0x476, 0, 0, 4)
        
        if ((result.d & 1) != 0)
            return DebtPlus(CostOnlyCoin(zx.q(x19_1)))

return result
