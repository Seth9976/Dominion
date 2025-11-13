// 函数: _Z19EitherNowOrNextTurnPFvvE12AbilityIndex
// 地址: 0xae3f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void (* var_18)() = arg1
int64_t* result = nullptr
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10) var_a0

if (arg1 != 0)
    result = &var_a0
    var_a0 = _vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>
        + 0x10
    void (* var_98_1)() = arg1

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40, std::__ndk1::allocator<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40>, void ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40, std::__ndk1::allocator<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void (** var_58)() = &var_18
uint64_t var_50 = zx.q(arg2)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40, std::__ndk1::allocator<EitherNowOrNextTurn(void (*)(), AbilityIndex)::$_40>, void ()>::VTable
    * const* var_40 = &var_60
int64_t var_70 = 0x82
int64_t var_30 = 0x83
ExecChoose(0xffffffff, &var_a0, 2, 1, 1, DOMCHOICEUI_DEFAULT, 0x200)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

int64_t x8_6

if (&var_a0 == result)
    x8_6 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_6 = *(*result + 0x28)

return x8_6()
