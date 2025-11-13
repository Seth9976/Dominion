// 函数: _Z8WarChestv
// 地址: 0xab522c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14 = CurrentWho()
int32_t var_18 = 0
int64_t x0_1 = PlayerLeft()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<WarChest()::$_27, std::__ndk1::allocator<WarChest()::$_27>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<WarChest()::$_27, std::__ndk1::allocator<WarChest()::$_27>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_18
int32_t* var_40 = &var_14
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<WarChest()::$_27, std::__ndk1::allocator<WarChest()::$_27>, void ()>::VTable
    * const* var_30 = &var_50
OtherPlayer(x0_1, &var_50)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

int32_t x1_1 = var_18
AddOngoing(0x1e, x1_1, 1, false, 1, 0xf, zx.q(x1_1), 0)
CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<WarChest()::$_28, std::__ndk1::allocator<WarChest()::$_28>, bool (CardID)>::VTable
    * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<WarChest()::$_28, std::__ndk1::allocator<WarChest()::$_28>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<WarChest()::$_28, std::__ndk1::allocator<WarChest()::$_28>, bool (CardID)>::VTable
    * const* result_1 = &var_d10
CardIDs var_cd8
FilterCards(&var_d10, &var_cd8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<WarChest()::$_28, std::__ndk1::allocator<WarChest()::$_28>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_d10 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_58

if (var_58 != 0)
    int128_t var_d50
    __builtin_memset(&var_d50, 0, 0x30)
    var_d50.d = 9
    int128_t var_d40
    var_d40:0xc.d = 5
    int128_t var_d30
    var_d30:8.q = 0
    int64_t var_d20_1 = 0
    result = ChooseCard(&var_cd8, 7, &var_d50, 0xc, 0)
    
    if (result.d != 0)
        return GainCard(result, 0x476, 0, 0, 4)

return result
