// 函数: sub_a7e290
// 地址: 0xa7e290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CurrentWho()
int64_t result = RevealDeck(2, 0x3ee, 0x7e48d0)
int32_t var_28

if (var_28 == 0)
    return result

char var_cac = 0
uint64_t x0_1 = zx.q(*(arg1 + 8))
int128_t var_d70
__builtin_memset(&var_d70, 0, 0x30)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda0'()>, void ()>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda0'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
char* var_ce8_1 = &var_cac
int64_t var_d00_1 = 0x4c
int32_t x8_1

x8_1 = x0_1.d != x0 ? 0x5d : 0x5c

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda'()>, void ()>::VTable
    * const var_d30 = &_vtable_for_std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda'()>, void ()>::VTable
    * const* var_d10_1 = &var_d30
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Oracle()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Oracle()::$_4::operator()() const::'lambda0'()>, void ()>::VTable
    * const* var_cd0_1 = &var_cf0
int64_t var_cc0_1 = 0x4d
var_d70.d = x8_1
int128_t var_d60
var_d60:0xc.d = x0
int128_t var_d50
__builtin_memset(&var_d50, 0, 0x18)
ChooseOnePlayerFaux(x0_1, &var_d30, 2, &var_d70)

if (&var_cf0 == var_cd0_1)
    (*var_cd0_1)->vFunc_4()
else if (var_cd0_1 != 0)
    (*var_cd0_1)->j_operator delete()

if (&var_d30 == var_d10_1)
    (*var_d10_1)->vFunc_4()
else if (var_d10_1 != 0)
    (*var_d10_1)->j_operator delete()

void var_ca8

if (zx.d(var_cac) == 0)
    return ReturnToDeckAnyOrder(&var_ca8, 0x3ee, 0x18)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
