// 函数: _Z9Scavengerv
// 地址: 0xa62af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(2, 0, false)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Scavenger()::$_8, std::__ndk1::allocator<Scavenger()::$_8>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Scavenger()::$_8, std::__ndk1::allocator<Scavenger()::$_8>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Scavenger()::$_8, std::__ndk1::allocator<Scavenger()::$_8>, void ()>::VTable
    * const* var_30 = &var_50
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x72
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
May(&var_50, 0x3b, &var_ce0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

LookThroughDiscard()
CardsDiscard()
int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x73
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t result = ChooseCard(&var_ce0, 0x10, &var_d20, 0xe, 0)

if (result.d == 0)
    return result

return MoveToTopDeck(result, 0x3ec, 0xb)
