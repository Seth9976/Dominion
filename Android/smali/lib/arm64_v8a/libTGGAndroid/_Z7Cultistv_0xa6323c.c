// 函数: _Z7Cultistv
// 地址: 0xa6323c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Cultist()::$_21, std::__ndk1::allocator<Cultist()::$_21>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Cultist()::$_21, std::__ndk1::allocator<Cultist()::$_21>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Cultist()::$_21, std::__ndk1::allocator<Cultist()::$_21>, void ()>::VTable
    * const* var_30 = &var_50
OtherPlayers(&var_50)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

GetPlayableFromHand(0x919)
int128_t var_d10
__builtin_memset(&var_d10, 0, 0x30)
var_d10.d = 0x76
int128_t var_d00
var_d00:0xc.d = 0
int128_t var_cf0
var_cf0:8.q = 0
int64_t var_ce0 = 0
void var_cd8
int64_t result = MayChooseCard(&var_cd8, 1, &var_d10, 0xb)

if (result.d == 0)
    return result

return PlayCard(result, 0)
