// 函数: _Z8Displacev
// 地址: 0xa8af68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = ExileOneFromHand()

if (result.d == 0)
    return result

int32_t x0 = CardWhat(result)
CardsSupplyTops(4, 0xffffffff)
int32_t x0_2 = Cost(zx.q(result.d))
int32_t var_cb0 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Displace()::$_11, std::__ndk1::allocator<Displace()::$_11>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Displace()::$_11, std::__ndk1::allocator<Displace()::$_11>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
uint64_t var_cd8_1 = zx.q(x0) | zx.q(x0_2) << 0x20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Displace()::$_11, std::__ndk1::allocator<Displace()::$_11>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int32_t x0_6 = operator+(&var_cb0, 2)
int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
int128_t var_d10
var_d10:0xc.d = x0_6
var_d20.d = 0xc6
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
return GainOneOf(&var_ca8, &var_d20, 0x476, 0)
