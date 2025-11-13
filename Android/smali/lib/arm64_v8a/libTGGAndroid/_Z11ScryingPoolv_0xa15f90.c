// 函数: _Z11ScryingPoolv
// 地址: 0xa15f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CurrentWho()
Action(1, 0)
int32_t var_48 = x0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<ScryingPool()::$_0, std::__ndk1::allocator<ScryingPool()::$_0>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<ScryingPool()::$_0, std::__ndk1::allocator<ScryingPool()::$_0>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<ScryingPool()::$_0, std::__ndk1::allocator<ScryingPool()::$_0>, void ()>::VTable
    * const* var_30 = &var_50
AllPlayers(&var_50, 0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

void var_cd8
memset(&var_cd8, 0, 0xc84)
int32_t x0_7

do
    int32_t x0_4 = RevealDeckOne(0x3ee, 0x7ad73c)
    
    if (x0_4 == 0)
        break
    
    operator+=(&var_cd8, zx.q(x0_4))
    x0_7 = CardIs(zx.q(x0_4), 4)
while ((x0_7 & 1) != 0)
return MoveToHand(&var_cd8, 0x3ee)
