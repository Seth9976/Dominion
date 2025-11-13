// 函数: _Z5Witchv
// 地址: 0xa263fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10) var_40 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
    + 0x10
int64_t (* const var_38)() = GainCurse
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* result = &var_40
OtherPlayers(&var_40)
int64_t x8_2

if (&var_40 == result)
    x8_2 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_2 = *(*result + 0x28)

return x8_2()
