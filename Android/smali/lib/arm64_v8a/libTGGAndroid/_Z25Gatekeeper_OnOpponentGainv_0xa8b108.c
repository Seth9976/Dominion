// 函数: _Z25Gatekeeper_OnOpponentGainv
// 地址: 0xa8b108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int64_t x0_1 = CardOwner(x0)
int32_t var_38 = x0.d
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Gatekeeper_OnOpponentGain()::$_12, std::__ndk1::allocator<Gatekeeper_OnOpponentGain()::$_12>, void ()>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<Gatekeeper_OnOpponentGain()::$_12, std::__ndk1::allocator<Gatekeeper_OnOpponentGain()::$_12>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Gatekeeper_OnOpponentGain()::$_12, std::__ndk1::allocator<Gatekeeper_OnOpponentGain()::$_12>, void ()>::VTable
    * const* result = &var_40
OtherPlayer(x0_1, &var_40)
int64_t (* const x8_2)(void* arg1)

if (&var_40 == result)
    x8_2 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_2 = (*result)->j_operator delete

return x8_2()
