// 函数: _Z3MayNSt6__ndk18functionIFvvEEE13DomOKTypeEnumRK11DomChoiceUI
// 地址: 0xadd3d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x20)
ChoiceDef var_a0
ChoiceDef* result

if (x0 == 0)
    result = nullptr
else if (arg1 == x0)
    result = &var_a0
    (*(*x0 + 0x18))(x0, &var_a0)
else
    result = (*(*x0 + 0x10))()

int32_t var_70 = arg2
int32_t var_6c = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34, std::__ndk1::allocator<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34>, void ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34, std::__ndk1::allocator<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34, std::__ndk1::allocator<May(std::__ndk1::function<void ()>, DomOKTypeEnum, DomChoiceUI const&)::$_34>, void ()>::VTable
    * const* var_40 = &var_60
int64_t var_30 = 2
ExecChoose(0xffffffff, &var_a0, 2, 1, 1, arg3, 0x280)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

int64_t x8_9

if (&var_a0 == result)
    x8_9 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_9 = *(*result + 0x28)

return x8_9()
