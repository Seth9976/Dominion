// 函数: _Z10Tournamentv
// 地址: 0xa5c1e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int32_t var_14 = CurrentWho()
int32_t var_18 = 2
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tournament()::$_2, std::__ndk1::allocator<Tournament()::$_2>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Tournament()::$_2, std::__ndk1::allocator<Tournament()::$_2>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_14
int32_t* var_40 = &var_18
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tournament()::$_2, std::__ndk1::allocator<Tournament()::$_2>, void ()>::VTable
    * const* result_1 = &var_50
AllPlayers(&var_50, 0)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tournament()::$_2, std::__ndk1::allocator<Tournament()::$_2>, void ()>::VTable
    * const* result = result_1

if (&var_50 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t x8_4 = var_18

if ((x8_4 & 1) != 0)
    CardsWhere(GetBoardPile(0x70d, false))
    int32_t x0_3 = GetPileTop(0x102)
    uint64_t x1_1 = zx.q(x0_3)
    int32_t var_58
    int128_t var_d10
    CardIDs var_cd8
    
    if (x0_3 == 0 || var_58 == 0)
        if (x1_1.d != 0)
            operator+=(&var_cd8, x1_1)
        
        __builtin_memset(&var_d10, 0, 0x30)
        var_d10.d = 0x51
        int128_t var_d00_1
        var_d00_1:0xc.d = 0
        int128_t var_cf0_1
        var_cf0_1:8.q = 0
        int64_t var_ce0_2 = 0
        result = MayChooseCard(&var_cd8, 7, &var_d10, 0xc)
        
        if (result.d != 0)
            NotifyResult(1)
            result = GainCard(zx.q(result.d), 0x3eb, 0, 0, 6)
    else
        operator+=(&var_cd8, x1_1)
        __builtin_memset(&var_d10, 0, 0x30)
        var_d10.d = 0x51
        int128_t var_d00
        var_d00:0xc.d = 0
        int128_t var_cf0
        var_cf0:8.q = 0
        int64_t var_ce0_1 = 0
        result = ChooseCard(&var_cd8, 7, &var_d10, 0xc, 0)
        
        if (result.d != 0)
            NotifyResult(1)
            result = GainCard(zx.q(result.d), 0x3eb, 0, 0, 6)
    
    if ((var_18 & 2) == 0)
        return result
else if ((x8_4 & 2) == 0)
    return result

Card(1, 0, 0, nullptr)
return MoneyPlus(1, 0, false)
