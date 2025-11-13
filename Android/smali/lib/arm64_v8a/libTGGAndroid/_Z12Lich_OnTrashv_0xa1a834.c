// 函数: _Z12Lich_OnTrashv
// 地址: 0xa1a834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DiscardCard(ThisCard(false, nullptr), 2, 0xb, 7, 0)
int32_t var_18 = Cost(ThisCard(false, nullptr))
CardsTrash()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lich_OnTrash()::$_53, std::__ndk1::allocator<Lich_OnTrash()::$_53>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Lich_OnTrash()::$_53, std::__ndk1::allocator<Lich_OnTrash()::$_53>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_18
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lich_OnTrash()::$_53, std::__ndk1::allocator<Lich_OnTrash()::$_53>, bool (CardID)>::VTable
    * const* result_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lich_OnTrash()::$_53, std::__ndk1::allocator<Lich_OnTrash()::$_53>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_ce0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_28

if (var_28 != 0)
    int32_t x8_5 = var_18
    int128_t var_d20
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0xec
    int128_t var_d10
    var_d10:0xc.d = x8_5
    int128_t var_d00
    var_d00:8.q = 0
    int64_t var_cf0_1 = 0
    result = ChooseCard(&var_ca8, 7, &var_d20, 0xc, 0)
    
    if (result.d != 0)
        return GainCard(result, 0x476, 0, 0, 4)

return result
