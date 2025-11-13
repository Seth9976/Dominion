// 函数: _Z11ChariotRacev
// 地址: 0xa6bff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)

if ((IsChameleoned(ThisCard(false, nullptr)) & 1) != 0)
    Card(1, 0, 0, nullptr)
    return NotifyResult(0) __tailcall

int32_t x0_3 = RevealDeckOneTemp(0)
Card(1, 0, 0, nullptr)
int32_t var_14 = 0
int64_t x0_4 = PlayerLeft()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<ChariotRace()::$_5, std::__ndk1::allocator<ChariotRace()::$_5>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<ChariotRace()::$_5, std::__ndk1::allocator<ChariotRace()::$_5>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_14
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<ChariotRace()::$_5, std::__ndk1::allocator<ChariotRace()::$_5>, void ()>::VTable
    * const* var_30 = &var_50
OtherPlayer(x0_4, &var_50)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

if (x0_3 != 0)
    uint64_t x0_6 = zx.q(var_14)
    
    if (x0_6.d != 0 && (CostGreater(zx.q(x0_3), zx.q(Cost(x0_6))) & 1) != 0)
        NotifyResult(1)
        MoneyPlus(1, 0, false)
        return VPChit(1, 0)

return NotifyResult(0)
