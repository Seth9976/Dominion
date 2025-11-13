// 函数: sub_a27bbc
// 地址: 0xa27bbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CurrentWho()
int32_t result = RevealDeckOne(0x3ee, 0x7af05c)

if (result == 0)
    return result

char var_24 = 0
uint64_t x0_1 = zx.q(*(arg1 + 8))
int128_t var_f0
__builtin_memset(&var_f0, 0, 0x30)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda0'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda0'()>, void ()>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda0'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda0'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
char* var_68_1 = &var_24
int64_t var_80_1 = 0x4c
int32_t x8_1

x8_1 = x0_1.d != x0 ? 0x29 : 0x28

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda'()>, void ()>::VTable
    * const var_b0 = &_vtable_for_std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda'()>, void ()>::VTable
    * const* var_90_1 = &var_b0
int128_t var_d0
var_d0:8.q = 0
int64_t var_c0_1 = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Spy()::$_6::operator()() const::'lambda0'(), std::__ndk1::allocator<Spy()::$_6::operator()() const::'lambda0'()>, void ()>::VTable
    * const* var_50_1 = &var_70
int64_t var_40_1 = 0x4d
var_f0.d = x8_1
int128_t var_e0
var_e0:0xc.d = result
var_d0.q = sx.q(x0)
ChooseOnePlayerFaux(x0_1, &var_b0, 2, &var_f0)

if (&var_70 == var_50_1)
    (*var_50_1)->vFunc_4()
else if (var_50_1 != 0)
    (*var_50_1)->j_operator delete()

if (&var_b0 == var_90_1)
    (*var_90_1)->vFunc_4()
else if (var_90_1 != 0)
    (*var_90_1)->j_operator delete()

if (zx.d(var_24) == 0)
    return MoveToTopDeck(zx.q(result), 0x3ee, 0xb)

return DiscardCard(zx.q(result), 0x3ee, 0xb, 7, 0)
