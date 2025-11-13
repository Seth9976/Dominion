// 函数: _Z6Minionv
// 地址: 0xa841b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t var_60 = 0x24
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Minion()::$_21, std::__ndk1::allocator<Minion()::$_21>, void ()>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Minion()::$_21, std::__ndk1::allocator<Minion()::$_21>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Minion()::$_21, std::__ndk1::allocator<Minion()::$_21>, void ()>::VTable
    * const* result = &var_90
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10) var_50 = _vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>
    + 0x10
int64_t (* const var_48)() = MinionDiscard
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10)* var_30 = &var_50
int64_t var_20 = 0x25
ChooseOne(&var_90, 2, DOMCHOICEUI_DEFAULT)

if (&var_50 == var_30)
    (*(*var_30 + 0x20))()
else if (var_30 != 0)
    (*(*var_30 + 0x28))()

int64_t (* const x8_5)(void* arg1)

if (&var_90 == result)
    x8_5 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_5 = (*result)->j_operator delete

return x8_5()
