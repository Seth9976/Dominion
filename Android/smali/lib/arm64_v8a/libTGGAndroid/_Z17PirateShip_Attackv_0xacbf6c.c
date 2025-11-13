// 函数: _Z17PirateShip_Attackv
// 地址: 0xacbf6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14 = CurrentWho()
char var_18 = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<PirateShip_Attack()::$_11, std::__ndk1::allocator<PirateShip_Attack()::$_11>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<PirateShip_Attack()::$_11, std::__ndk1::allocator<PirateShip_Attack()::$_11>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_14
char* var_40 = &var_18
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<PirateShip_Attack()::$_11, std::__ndk1::allocator<PirateShip_Attack()::$_11>, void ()>::VTable
    * const* result_1 = &var_50
OtherPlayers(&var_50)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<PirateShip_Attack()::$_11, std::__ndk1::allocator<PirateShip_Attack()::$_11>, void ()>::VTable
    * const* result = result_1

if (&var_50 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

if (zx.d(var_18) == 0)
    return result

return GainPirateToken()
