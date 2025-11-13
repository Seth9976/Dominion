// 函数: sub_a27e8c
// 地址: 0xa27e8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7af05c)
CardIDs* x20_1 = *(arg1 + 8) + muls.dp.d(CurrentWho(), 0xc84)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Thief()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Thief()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<Thief()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Thief()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Thief()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Thief()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
CardIDs var_cb8
FilterCards(&var_cf0, &var_cb8, x20_1)

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

int64_t result = PauseUI(true)
int32_t var_38

if (var_38 == 0)
    return result

int32_t x0_3 = CurrentWho()
uint64_t x2_1 = zx.q(**(arg1 + 0x10))
int128_t var_d30
__builtin_memset(&var_d30, 0, 0x30)
int128_t var_d20
var_d20:0xc.d = x0_3
var_d30.d = 0x2a
int128_t var_d10
var_d10:8.q = 0
int64_t var_d00_1 = 0
int64_t x0_5 = ChooseCardPlayer(&var_cb8, 9, x2_1, &var_d30, 8, 0)
int32_t x21_1 = x0_5.d
TrashDisplay(x0_5, 0x3ee, 0)
operator+=(*(arg1 + 0x18), zx.q(x21_1))
operator-=(&var_cb8, zx.q(x21_1))
return operator+=(x20_1, &var_cb8)
