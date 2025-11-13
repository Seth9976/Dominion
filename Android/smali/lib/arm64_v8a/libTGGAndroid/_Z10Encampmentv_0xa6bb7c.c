// 函数: _Z10Encampmentv
// 地址: 0xa6bb7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
Action(2, 0)
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Encampment()::$_3, std::__ndk1::allocator<Encampment()::$_3>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Encampment()::$_3, std::__ndk1::allocator<Encampment()::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Encampment()::$_3, std::__ndk1::allocator<Encampment()::$_3>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t x0_3 = MayRevealOneTemp(&var_ca8, 0x3ea, 0x90)
int64_t x0_4 = ThisCard(false, nullptr)

if (x0_3 != 0)
    return NotifyResult(1)

int64_t result = MoveCardTo(x0_4, 0x3e9, 0x457, 0, 0, 0xb, 0)

if ((result.d & 1) == 0)
    return result

FromSingle(zx.q(x0_4.d))
void var_1968
return StartOfCleanup(sub_a77a74, nullptr, &var_1968, 1)
