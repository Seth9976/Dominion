// 函数: _Z18GrandCastle_OnGainv
// 地址: 0xa6d2c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealHandTemp()
int32_t x0 = CountWhereType(0x3ea, 8)
int32_t var_14 = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GrandCastle_OnGain()::$_20, std::__ndk1::allocator<GrandCastle_OnGain()::$_20>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<GrandCastle_OnGain()::$_20, std::__ndk1::allocator<GrandCastle_OnGain()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_14
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GrandCastle_OnGain()::$_20, std::__ndk1::allocator<GrandCastle_OnGain()::$_20>, void ()>::VTable
    * const* var_30 = &var_50
AllPlayers(&var_50, 0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

int32_t x0_3 = var_14 + x0

if (x0_3 s>= 1)
    NotifyResult(1)
    x0_3 = var_14 + x0

return VPChit(x0_3, 0)
